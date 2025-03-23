#include <Windows.h>
#include "Utils.h"
#include "Misc.h"
#include "GameMode.h"
#include "NetDriver.h"
#include "PlayerController.h"
#include "Inventory.h"
#include "settings.h"
#include "XP.h"

#include "GameRewritten/InventoryService.hpp"

#include "minhook/MinHook.h"
#include <thread>

#ifdef USE_BACKEND
    #include "Sinum/Core/Core.h"
    #include "Sinum/Sinum.h"
#endif

#pragma comment(lib, "minhook/minhook.lib")

using namespace std;
using namespace SDK;

//#define CLIENTDLL
//#define PELOG

// hello, i do not like coding, here is a small pseudo code
void ServerSendZiplineStateHook(AFortPlayerPawn* Pawn, FZiplinePawnState InZiplineState) {
    if (!InZiplineState.Zipline)
        return;
    //joel fix or gay
    //static int MAX_ZIPLINE_DISTANCE = 50; // Seems way too high, i have to do some tests ingame!

    //// Calculate the distance between the pawn and the InZipline State actor
    //auto PawnLoc = Pawn->K2_GetActorLocation();

    //// Let's just force the cast, what could possibly go wrong? xD
    //AFortAthenaZipline* Zipline = (AFortAthenaZipline*)InZiplineState.Zipline;
    //auto ZiplineStartLoc = Zipline->StartPosition;
    //auto ZiplineEndPosition = Zipline->EndPosition;

    //if (!InZiplineState.bIsZiplining) {
    //    if (
    //        // Start check
    //        ZiplineStartLoc.GetDistanceToInMeters(PawnLoc) > MAX_ZIPLINE_DISTANCE &&
    //        // End check
    //        ZiplineEndPosition.GetDistanceToInMeters(PawnLoc) > MAX_ZIPLINE_DISTANCE
    //    ) {
    //        return; // Not allowed to zipline!
    //    }
    //} else {
    //    // Well, uh in that case calculate how far he has come and uh yea then calculate it back to get that shit? :skull:
    //    // (Easier, just check if he's on a straight line, uh, i should have been more active when we discussed vectors in school :skull:)
    //    
    //    // First check, Z
    //    auto LowestPoint = min(ZiplineEndPosition.Z, ZiplineStartLoc.Z);
    //    auto HighestPoint = max(ZiplineEndPosition.Z, ZiplineStartLoc.Z);

    //    // First check, Z
    //    // Example:
    //        // Player is on Z 40, but Zipline low is on Z 200, 40 - 200 is -160 which is smaller than -50, so its getting triggered
    //        // Player is on Z 500 (skybase?), but Zipline high is on Z 250, 500 - 200 is 300, which is higher than 50, so its getting triggered
    //    if (PawnLoc.Z - LowestPoint < (-MAX_ZIPLINE_DISTANCE) || HighestPoint - PawnLoc.Z > MAX_ZIPLINE_DISTANCE) {
    //        return; // Not allowed to zipline!
    //    }

    //    // X, Y to be done 
    //}

    Pawn->ZiplineState = InZiplineState;
    static void(*OnRep_ZiplineState)(AFortPlayerPawn * Pawn) = decltype(OnRep_ZiplineState)(InSDKUtils::GetImageBase() + 0x2E34170);
    OnRep_ZiplineState(Pawn);
    if (InZiplineState.bJumped)
    {
        //we love EndZiplining
        EEvaluateCurveTableResult res;
        float ZiplineJumpDampening = 0;
        float ZiplineJumpStrength = 0;
        UDataTableFunctionLibrary::EvaluateCurveTableRow(Pawn->ZiplineJumpDampening.CurveTable, Pawn->ZiplineJumpDampening.RowName, 0, &res, &ZiplineJumpDampening, FString());
        UDataTableFunctionLibrary::EvaluateCurveTableRow(Pawn->ZiplineJumpStrength.CurveTable, Pawn->ZiplineJumpStrength.RowName, 0, &res, &ZiplineJumpStrength, FString());
        FVector Velocity = Pawn->CharacterMovement->Velocity;
        FVector LaunchVelocity = FVector{ -750, -750, ZiplineJumpStrength };

        if (ZiplineJumpDampening * Velocity.X >= -750.f)
        {
            LaunchVelocity.X = fminf(ZiplineJumpDampening * Velocity.X, 750);
        }
        if (ZiplineJumpDampening * Velocity.Y >= -750.f)
        {
            LaunchVelocity.Y = fminf(ZiplineJumpDampening * Velocity.Y, 750);
        }

        Pawn->LaunchCharacter(LaunchVelocity, false, false);
    }
}

static void WaitForLogin() {
    Utils::Log("Waiting until we reach the login screen...");

    // Wait until we are at the login screen
    FName Frontend = UKismetStringLibrary::Conv_StringToName(L"Frontend");
    FName MatchState = UKismetStringLibrary::Conv_StringToName(L"InProgress");

    while (true) {
        UWorld* CurrentWorld = ((UWorld*)UWorld::GetWorld());
        if (CurrentWorld) {
            if (CurrentWorld->Name == Frontend) {
                auto GameMode = (AGameMode*)CurrentWorld->AuthorityGameMode;
                if (GameMode->GetMatchState() == MatchState) {
                    break;
                }
            }
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1000 * 1));
}

void uelog(__int64, unsigned int, __int64, __int64, wchar_t* Format, ...)
{
    printf("%ls\n", Format);
}

#ifdef PELOG
void (*ProcessEventOG)(UObject* Object, UFunction* Function, void* Params);
void ProcessEvent(UObject* Object, UFunction* Function, void* Params)
{
    ProcessEventOG(Object, Function, Params);
    string FuncName = Function->GetName();
    
    if (FuncName.contains("UpdateState"))
    {
        printf("\n");
        printf("Object Name: %s, Function Name: %s, Function Exec Offset: %p\n", Object->GetFullName().c_str(), Function->GetFullName().c_str(), __int64(Function->ExecFunction) - InSDKUtils::GetImageBase());
        printf("\n");
    }
}
#endif

__int64 (*TestOG)(UObject* Ability, __int64* a2, char* a3);
__int64 Test(UGameplayAbility* Ability, __int64* a2, char* a3)
{
    if (Ability)
    {
        if (!XP::Challanges::SendDistanceUpdate(Ability))
            return 0;
    }
    return TestOG(Ability, a2, a3);
}

DWORD InitThread(LPVOID)
{
    AllocConsole();
    FILE* Console;
    freopen_s(&Console, "CONOUT$", "w", stdout);
    
    srand(time(0));
    
    Utils::Log("OrionGS is starting now!");
    __int64 BaseAddr = __int64(GetModuleHandleW(0));
    std::cout << std::format("ModuleBase: 0x{:x}", BaseAddr);
    
    // Wait until the Engine is loaded!
    while (UEngine::GetEngine() == 0)
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    UFortEngine* Engine = Utils::Cast<UFortEngine>(UEngine::GetEngine());
    std::cout << std::format("FortEngine Object: 0x{:x}", __int64(UEngine::GetEngine()));
    SpectatingName = UKismetStringLibrary::Conv_StringToName(TEXT("Spectating"));

    cout << "sizeof(TArray<TWeakObjectPtr<AFortPlayerStateAthena>>): " << sizeof(TArray<TWeakObjectPtr<AFortPlayerStateAthena>>) << endl;
    cout << "sizeof(TBitArray): " << sizeof(TBitArray) << endl;
    cout << "sizeof(TSparseArray<TWeakObjectPtr<AFortPlayerStateAthena>>): " << sizeof(TSparseArray<TWeakObjectPtr<AFortPlayerStateAthena>>) << endl;
    cout << "sizeof(TWeakObjectPtr<AFortPlayerStateAthena>): " << sizeof(TWeakObjectPtr<AFortPlayerStateAthena>) << endl;



    WaitForLogin();

    // Todo: Hook for Athena back shit (to detect rapid fire), 
    //  get on damage taken shit, get on death => for server sided checks
    #ifdef USING_EZAntiCheat
        // Yea, I reverse engineered EAC and now emulate it lol

        auto EACServer = new FEasyAntiCheatServer();
        // Set's this instance as the global static instance :)
        EACServer->Set();

        EACServer->StartupModule();

        struct FEasyAntiCheatClient {
            char UNKNOWN[0x20];
            char Lib[0x8];

            uintptr_t* EACClient; // Some internal shit
        };

        static FEasyAntiCheatClient* (__fastcall * FEasyAntiCheatServerConstruct) () = decltype(FEasyAntiCheatServerConstruct)(
            // Currently S7, sry lol
            Memcury::Scanner::FindPattern("48 89 5C 24 20 57 48 83 EC 20 B9 78 00 00 00 E8 FC B3 A1 FD 48 8B D8", false).Get() // stripped on s15???? how????
        );
        auto EasyAntiCheatClient = FEasyAntiCheatServerConstruct();
        EasyAntiCheatClient->EACClient = (uintptr_t*)1; // Makes it tickable

        // FEasyAntiCheatClient::Tick => its a tickable, so it will be called once every frame 
        uintptr_t TickAddress = Memcury::Scanner::FindPattern("40 53 55 57 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 33 ED 48 8B", false).Get(); // Updated signature (15.50)
        printf("TickAddress: %p\n", TickAddress);
        if (!Hooking::MinHook::Hook(
            (PVOID)TickAddress,
            &TickHook,
            nullptr
        )) {
            printf("Failed to hook FEasyAntiCheatClient::Tick!\n");
        }
    #endif
        WaitingPostMatchName = UKismetStringLibrary::Conv_StringToName(TEXT("WaitingPostMatch"));
        WaitingToStartName = UKismetStringLibrary::Conv_StringToName(TEXT("WaitingToStart"));
        LeavingMapName = UKismetStringLibrary::Conv_StringToName(TEXT("LeavingMap"));
    MH_Initialize();

    #ifdef CLIENTDLL
        MH_CreateHook((LPVOID)(BaseAddr + Offsets::ProcessEvent), ProcessEvent, (LPVOID*)&ProcessEventOG);
        MH_EnableHook(0);
        return 0;
    #endif

    #pragma region GameMode
        //MH_CreateHook((LPVOID)(BaseAddr + 0x2310C20), GameMode::PickTeam, nullptr);
        MH_CreateHook((LPVOID)(BaseAddr + 0x559BA00), GameMode::SpawnDefaultPawnFor, nullptr);
        MH_CreateHook((LPVOID)(BaseAddr + 0x559B8D0), GameMode::ReadyToStartMatch, (PVOID*)&GameMode::ReadyToStartMatchOriginal);
        MH_CreateHook((LPVOID)(BaseAddr + 0x232B2B0), GameMode::HandleNewSafeZonePhase, (PVOID*)&GameMode::HandleNewSafeZonePhaseOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x230A3D0), GameMode::OnAircraftExitedDropZone, (PVOID*)&GameMode::OnAircraftExitedDropZoneOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x230A330), GameMode::OnAircraftEnteredDropZone, (PVOID*)&GameMode::OnAircraftEnteredDropZoneOG);
        Utils::SwapVFTs(UAthenaNavSystem::StaticClass()->DefaultObject, 0x55, GameMode::InitializeForWorld, (PVOID*)&GameMode::InitializeForWorldOG);
    #pragma endregion
        
    #pragma region AI
        MH_CreateHook((LPVOID)(BaseAddr + 0x1FE49B0), Misc::OnPawnAISpawnedHook, (PVOID*)&Misc::OnPawnAISpawnedHookOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x2244E00), Misc::InventoryBaseOnSpawned, (PVOID*)&Misc::InventoryBaseOnSpawnedOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0xBA7F00), Misc::UserMathErrorFunction, (PVOID*)&Misc::UserMathErrorFunctionOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x1FE54A0), Misc::OnPossesedPawnDiedHook, (PVOID*)&Misc::OnPossesedPawnDiedOG);
        
        Utils::SwapVFTs(UFortPlayerConversationComponent_C::StaticClass()->DefaultObject, 0x86, AIs::ServerAdvanceConversationHook, nullptr);
    #pragma endregion
        
    #pragma region Misc
        //MH_CreateHook((LPVOID)(BaseAddr + 0x3826360), uelog, nullptr);
        #ifdef PELOG
            MH_CreateHook((LPVOID)(BaseAddr + Offsets::ProcessEvent), ProcessEvent, (LPVOID*)&ProcessEventOG);
        #endif

        MH_CreateHook((LPVOID)(BaseAddr + 0xBE8570), Misc::Patchs::RetOne, nullptr);
        MH_CreateHook((LPVOID)(BaseAddr + 0x4E18E20), Misc::Patchs::RetOne, nullptr);
        MH_CreateHook((LPVOID)(BaseAddr + 0x5520390), Misc::Patchs::RetOne, nullptr);
        MH_CreateHook((LPVOID)(BaseAddr + 0x3A6A970), Misc::Patchs::RetOne, nullptr);
       // MH_CreateHook((LPVOID)(BaseAddr + 0x2C2EE20), Misc::Patchs::RetZero, nullptr); //this is kickplayer, just uncomment NO DEDISES in settings.h
        MH_CreateHook((LPVOID)(BaseAddr + 0x2163DA0), Misc::Patchs::RetZero, nullptr);
        MH_CreateHook((LPVOID)(BaseAddr + 0x2164330), Misc::Patchs::RetZero, nullptr);
        MH_CreateHook((LPVOID)(BaseAddr + 0x3972060), Misc::CollectGarbageInternal, (LPVOID*)&Misc::CollectGarbageInternalOG); // collectgarbageinternal
        MH_CreateHook((LPVOID)(BaseAddr + 0xD5D740), CheckRequirementsHook, (LPVOID*)&CheckRequirementsOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x3ABFE40), Test, (LPVOID*)&TestOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x1F646A0), Misc::RandomCrash, (LPVOID*)&Misc::RandomCrashOG);
        
        MH_CreateHook((LPVOID)(BaseAddr + 0x38483C0), Misc::Patchs::GetCommandLet, nullptr);
        MH_CreateHook((*(void***)UEngine::GetEngine())[0x58], Misc::GetMaxTickRate, nullptr);
        //MH_CreateHook((LPVOID)(BaseAddr + 0x2C38780), Misc::Patchs::GameSessionRestart, nullptr);
        MH_CreateHook((LPVOID)(BaseAddr + 0x552b9b0), Misc::Patchs::SetGameModeHook, (PVOID*)&Misc::Patchs::SetGameMode);
        MH_CreateHook((LPVOID)(BaseAddr + 0x12506F0), Misc::MCP::MCP_DispatchRequestHook, (PVOID*)&Misc::MCP::MCP_DispatchRequest);

        #ifdef NO_DEDISES
            MH_CreateHook((LPVOID)(BaseAddr + 0x2C2EE20), Misc::Patchs::RetZero, nullptr);
            MH_CreateHook((LPVOID)(BaseAddr + 0x2C3F5F0), Misc::Patchs::RetOne, nullptr);
            MH_CreateHook((LPVOID)(BaseAddr + 0x2310C20), GameMode::PickTeam, nullptr);
        #else
            MH_CreateHook((LPVOID)(BaseAddr + 0x291CB90), Misc::Patchs::GetGameSessionClassHook, nullptr);
            MH_CreateHook((LPVOID)(BaseAddr + 0x16EC420), Misc::Patchs::MatchMakingServicePermsHook, (PVOID*)&Misc::Patchs::MatchMakingServicePerms);
            #ifdef USE_BACKEND
                 //MH_CreateHook((LPVOID)(BaseAddr + 0x13ff4e0), Misc::Patchs::GetClientAuthorizationHook, (PVOID*)&Misc::Patchs::GetClientAuthorization);
            #endif
        #endif
    #pragma endregion

    #pragma region PlayerController
        MH_CreateHook((LPVOID)(BaseAddr + 0x326B200), PlayerController::OnDamageServer, (PVOID*)&PlayerController::OnDamageServerOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x2E85010), PlayerController::GetPlayerViewPoint, (PVOID*)&PlayerController::GetPlayerViewPointOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x3616800), PlayerController::ClientOnPawnDied, (PVOID*)&PlayerController::ClientOnPawnDiedOG);
        
        Utils::Log("Swapping Player Controller VTables now!\n");
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x230, PlayerController::ServerRepairBuildingActorHook, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x1CB, PlayerController::ServerCheat, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x26F, PlayerController::ServerReturnToMainMenu, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x236, PlayerController::ServerEditBuildingActor, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x1CD, PlayerController::ServerPlayEmoteItemHook, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x234, PlayerController::ServerCreateBuildingActor, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x211, PlayerController::ServerExecuteInventoryItem, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x221, PlayerController::ServerAttemptInventoryDrop, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x239, PlayerController::ServerEndEditingBuildingActor, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x23B, PlayerController::ServerBeginEditingBuildingActor, nullptr);
        Utils::SwapVFTs(UFortControllerComponent_Aircraft::StaticClass()->DefaultObject, 0x94, PlayerController::ServerAttemptAircraftJump, nullptr);
        Utils::SwapVFTs(UAbilitySystemComponent::StaticClass()->DefaultObject, 0xFE, PlayerController::Abilities::InternalServerTryActivateAbilityHook, nullptr);
        Utils::SwapVFTs(UFortAbilitySystemComponent::StaticClass()->DefaultObject, 0xFE, PlayerController::Abilities::InternalServerTryActivateAbilityHook, nullptr);
        Utils::SwapVFTs(UFortAbilitySystemComponentAthena::StaticClass()->DefaultObject, 0xFE, PlayerController::Abilities::InternalServerTryActivateAbilityHook, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::GetDefaultObj(), 0x111, PlayerController::ServerAcknowledgePossession, nullptr);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x273, PlayerController::ServerReadyToStartMatch, (PVOID*)&PlayerController::ServerReadyToStartMatchOG);
        Utils::SwapVFTs(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x275, PlayerController::ServerLoadingScreenDropped, (PVOID*)&PlayerController::ServerLoadingScreenDroppedOG);
        Utils::SwapVFTs(AFortPlayerStateAthena::StaticClass()->DefaultObject, 0xFD, PlayerController::ServerSetInAircraft, (PVOID*)&PlayerController::ServerSetInAircraftOG);
    #pragma endregion
        
    #pragma region NetDriver
        MH_CreateHook((LPVOID)(BaseAddr + 0x5224DC0), NetDriver::TickFlush, (PVOID*)&NetDriver::TickFlushOriginal);
    #pragma endregion

    #pragma region Inventory
        //MH_CreateHook((LPVOID)(BaseAddr + 0x2E481A0), Inventory::ServerHandlePickup, nullptr);
        MH_CreateHook((LPVOID)(BaseAddr + 0x31EB470), Misc::OnReload, (PVOID*)&Misc::OnReloadOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x25BDDE0), Inventory::SpawnLoot, (PVOID*)&Inventory::SpawnLootOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x2B04B80), Inventory::DestroyPickup, (LPVOID*)&Inventory::DestroyPickupOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x2610D70), Inventory::ABuildingSMActor_PostUpdate, (PVOID*)&Inventory::ABuildingSMActor_PostUpdateOG);
        MH_CreateHook((LPVOID)(BaseAddr + 0x2707580), Inventory::ServerAttemptInteractHook, (LPVOID*)&Inventory::ServerAttemptInteractOG);
    #pragma endregion

    #pragma region Pawn
        Utils::Log("Hooking pawn functions now!\n");
        MH_CreateHook((LPVOID)(BaseAddr + 0x2E48520), Misc::ServerOnExitVehicle, (PVOID*)&Misc::ServerOnExitVehicleOG);

        Utils::Log("Swapping pawn VTables now!\n");
        
        Utils::SwapVFTs(APlayerPawn_Athena_C::StaticClass()->DefaultObject, 0x200, Inventory::ServerHandlePickup, nullptr);
        Utils::SwapVFTs(APlayerPawn_Athena_C::StaticClass()->DefaultObject, 0x11B, Inventory::NetMulticastDamageCues, (LPVOID*)&Inventory::NetMulticastDamageCuesOG);
        Utils::SwapVFTs(APlayerPawn_Athena_C::StaticClass()->DefaultObject, 0x1E8, PlayerController::ServerReviveFromDBNO, nullptr);
        Utils::SwapVFTs(APlayerPawn_Athena_C::StaticClass()->DefaultObject, 0x20D, ServerSendZiplineStateHook, nullptr);
    #pragma endregion

    #pragma region InventoryServiceManager
        MH_CreateHook((LPVOID)(BaseAddr + 0x226d5d0), InventoryService::SetupInventoryServiceComponent, (PVOID*)&InventoryService::SetupInventoryServiceComponentOG);
    #pragma endregion
       
    Utils::SwapVFTs(UFortConversationRequirement_HasService::GetDefaultObj(), 0x51, Misc::HasService, (LPVOID*)&Misc::HasServiceOG);
    Utils::SwapVFTs(UFortConversationRequirement_HasNoActiveQuests::GetDefaultObj(), 0x51, Misc::HasNoActiveQuests, (LPVOID*)&Misc::HasNoActiveQuestsOG);
    Utils::SwapVFTs(UFortConversationRequirement_AllSlottedQuestPrerequisitesCompleted::GetDefaultObj(), 0x51, Misc::AllSlottedQuestPrerequisitesCompleted, (LPVOID*)&Misc::AllSlottedQuestPrerequisitesCompletedOG);
    Utils::SwapVFTs(UFortConversationRequirement_SlottedQuestNotCompletedThisMatch::GetDefaultObj(), 0x51, Misc::SlottedQuestNotCompletedThisMatch, (LPVOID*)&Misc::SlottedQuestNotCompletedThisMatchOG);
    Utils::SwapVFTs(UFortConversationRequirement_ChildRequirements::GetDefaultObj(), 0x51, Misc::ChildRequirements, (LPVOID*)&Misc::ChildRequirementsOG);
    Utils::SwapVFTs(UFortPlayerConversationComponent_C::GetDefaultObj(), 0x8B, Misc::RequestServerAbortConversation, nullptr);
       
    Utils::Log("Enabling GIsServer and disabling GIsClient now!\n");
    *(bool*)(__int64(GetModuleHandleW(0)) + 0x9A10500) = false; // GIsClient
    *(bool*)(__int64(GetModuleHandleW(0)) + 0x9A10501) = true; // GIsServer

    uintptr_t DedicatedSession_UNKNOWN_CONDITION_JUMP = __int64(BaseAddr + 0x2C13584);
    *(uint8_t*)(DedicatedSession_UNKNOWN_CONDITION_JUMP + 1) = 0x85; // inverts the logical conditions so ignore one of the functions that would be called otherwise

    #pragma region Rebooting
        uintptr_t RebootingVarCheck = __int64(BaseAddr + 0x8FA55D0);
        uintptr_t RebootingDelegateAddr = __int64(BaseAddr + 0x25E2092);
        uintptr_t HookAddr = __int64(APlayerController::StaticClass()->GetFunction("PlayerController", "SetVirtualJoystickVisibility")->ExecFunction);
        //cout << "HookAddr " << HookAddr << endl;
        *(DWORD*)(RebootingVarCheck) = 1;
        MH_CreateHook((PVOID)HookAddr, Misc::RebootingDelegate, nullptr);
        int64_t delta = HookAddr - (RebootingDelegateAddr + 7);
       // cout << "HookAddr " << HookAddr << endl;
        //cout << "Delta " << delta << endl;
        auto addr = (int32_t*)(RebootingDelegateAddr + 3);
        DWORD dwProtection;
        VirtualProtect((PVOID)addr, 4, PAGE_EXECUTE_READWRITE, &dwProtection);
        *addr = (int32)delta;
        DWORD dwTemp;
        VirtualProtect((PVOID)addr, 1, dwProtection, &dwTemp);
    #pragma endregion

    Utils::Log("Enabling all Hooks now!\n");
    MH_EnableHook(MH_ALL_HOOKS);
    
    Utils::Log("Opening Apollo_Terrain now!");
    UGameplayStatics::OpenLevel(UWorld::GetWorld(), UKismetStringLibrary::Conv_StringToName(TEXT("Apollo_Terrain")), true, FString());
    
    Utils::Log("Removing Local Player now!");
    Engine->GameInstance->LocalPlayers.Remove(0);
    
    Sleep(-1);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE _, DWORD reason, LPVOID _1) {
    if (reason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, InitThread, 0, 0, 0);

    return TRUE;
}

extern "C" __declspec(dllexport) bool ApiKickPlayer(char* cAccountId, char* cKickReason) {
    // Make sure we are currently in the match!
    if (UWorld::GetWorld()->GetFullName().find("Apollo_Terrain") != std::string::npos) {
        printf("Searching for player now...");

        // Get LocalPlayerControllers, Check Account Id, Kick
        return false;
    }

    return false;
}