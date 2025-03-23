#pragma once
#include "SDK.hpp"
#include <intrin.h>
#include <map>
#include "settings.h"
#include "Utils.h"

#ifdef USE_BACKEND
	#include "Sinum/Core/Unreal/String.h"
#endif

using namespace SDK;
using namespace std;

struct FServicePermissionsMcp {
public:
	char unknown[0x10];
	class FString Id;
};

static UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld* World, FName NetDriverName) = decltype(CreateNetDriver)(__int64(GetModuleHandleW(0)) + 0x54B9210);
static bool (*InitListen)(UNetDriver* NetDriver, UWorld* World, FURL InUrl, bool bReuseAddressAndPort, FString Error) = decltype(InitListen)(__int64(GetModuleHandleW(0)) + 0x1383140);
static void (*SetWorld)(UNetDriver* NetDriver, UWorld* World);

struct FCheckpoint
{
	FConversationBranchPoint ClientBranchPoint;
	TArray<FConversationChoiceReference> ScopeStack;
};

struct Properness
{
	bool ConvoStarted;
	FGameplayTag EntryTag;
	FConversationBranchPoint StartingBranchPoint;
	FConversationBranchPoint CurrentBranchPoint;
	TArray<FCheckpoint> ClientBranchPoints;
	TArray<FConversationBranchPoint> CurrentBranchPoints;
	TArray<FConversationChoiceReference> ScopeStack;
	//FRandomStream ConversationRNG;
	TArray<FClientConversationOptionEntry> CurrentUserChoices;
};

inline map<UConversationInstance*, Properness> Bruh{};

struct FConversationBranchPointBuilder/* : public FNoncopyable*/
{
	int32 Num() { return BranchPoints.Num(); }
	TArray<FConversationBranchPoint> BranchPoints;
	inline void AddChoice(FConversationContext& InContext, FClientConversationOptionEntry& InChoice)
	{
		FConversationBranchPoint BranchPoint{};
		BranchPoint.ClientChoice = InChoice;
		if (!UKismetGuidLibrary::IsValid_Guid(BranchPoint.ClientChoice.ChoiceReference.NodeReference.NodeGUID))
		{
			BranchPoint.ClientChoice.ChoiceReference.NodeReference.NodeGUID = InContext.TaskBeingConsidered->Compiled_NodeGUID;
		}
		BranchPoint.ReturnScopeStack = InContext.ReturnScopeStack;

		BranchPoints.Add(BranchPoint);
	}
};

namespace AIs
{
	bool CanConversationContinue(FConversationTaskResult& ConversationTasResult);
	FConversationContext CreateServerContext(UConversationInstance* InActiveConversation, UConversationTaskNode* InTaskBeingConsidered);
	void ServerRemoveParticipant(UConversationInstance* Instance, FGameplayTag ParticipantID, FConversationParticipants& PreservedParticipants);
	void ServerNotifyConversationStarted(UConversationParticipantComponent* Comp, UConversationInstance* Conversation, FGameplayTag AsParticipant);
	void ServerAssignParticipant(UConversationInstance* Instance, FGameplayTag ParticipantID, AActor* ParticipantActor);
	void MakeConversationParticipant(FConversationContext& Context, AActor* ParticipantActor, FGameplayTag ParticipantTag);
	//void ResetConversationProgress(UConversationInstance* Instance);
	void ServerAbortConversation(UConversationInstance* Instance);
	TArray<FGuid> DetermineBranches(UConversationInstance* Instance, TArray<FGuid>& SourceList, EConversationRequirementResult MaximumRequirementResult);
	FConversationChoiceReference& GetCurrentChoiceReference(UConversationInstance* Instance);
	void OnCurrentConversationNodeModified(UConversationInstance* Instance);
	void TryStartingConversation(UConversationInstance* Instance);
	void ServerStartConversation(UConversationInstance* Instance, FGameplayTag EntryPoint);
	UConversationInstance* StartConversation(FGameplayTag ConversationEntryTag, AActor* Instigator, FGameplayTag InstigatorTag, AActor* Target, FGameplayTag TargetTag);
	void ServerNotifyConversationEnded(UConversationParticipantComponent* Comp, UConversationInstance* Conversation, FConversationParticipants& PreservedParticipants);
	void ServerAdvanceConversation(UConversationInstance* Instance, FAdvanceConversationRequest& InChoicePicked);
	void ServerAdvanceConversationHook(UFortPlayerConversationComponent_C* Comp, FAdvanceConversationRequest& InChoicePicked);
	//FConversationBranchPoint* FindBranchPointFromClientChoice(UConversationInstance* Instance, FConversationChoiceReference ChoiceReference);
	UConversationNode* TryToResolveChoiceNode(FClientConversationOptionEntry OptionEntry, FConversationContext Context);
	UConversationNode* TryToResolve(FConversationContext Context, FGuid NodeGUID);
	void ModifyCurrentConversationNode(UConversationInstance* Instance, FConversationBranchPoint& NewBranchPoint);
	void ModifyCurrentConversationNode(UConversationInstance* Instance, FConversationChoiceReference& NewChoice);
	void OnInvalidBranchChoice(UConversationInstance* Instance, FAdvanceConversationRequest& ChoiceReference);
	//void ModifyCurrentConversationNodeChoice(UConversationInstance* Instance, FConversationChoiceReference& NewChoice);
	//void ModifyCurrentConversationNode(UConversationInstance* Instance, FConversationBranchPoint& NewBranchPoint);
	//void ModifyCurrentConversationNode(UConversationInstance* Instance, FConversationChoiceReference& NewChoice);
	void PauseConversationAndSendClientChoices(UConversationInstance* Instance, FConversationContext& Context, FClientConversationMessage& ClientMessage);
	void ReturnToLastClientChoice(UConversationInstance* Instance, FConversationContext& Context);
	void ReturnToCurrentClientChoice(UConversationInstance* Instance, FConversationContext& Context);
	void ReturnToStart(UConversationInstance* Instance, FConversationContext& Context);
	void UpdateNextChoices(UConversationInstance* Instance, FConversationContext& Context);
	//void ServerNotifyExecuteTaskAndSideEffects(UConversationParticipantComponent* Comp, FConversationNodeHandle& Handle);
	FConversationTaskResult ExecuteTaskNodeWithSideEffects(UConversationTaskNode* TaskNode, FConversationContext& InContext);
	void GenerateNextChoices(UConversationTaskNode* TaskNode, FConversationBranchPointBuilder& BranchBuilder, FConversationContext& Context);
	TArray<FGuid> GetOutputLinkGUIDs(UConversationRegistry* Registry, TArray<FGuid> SourceGUIDs);
	TArray<FGuid> GetOutputLinkGUIDs(UConversationRegistry* Registry, FGuid& SourceGUID);
	TArray<FGuid> GetOutputLinkGUIDs(UConversationRegistry* Registry, FGameplayTag EntryPoint);
	TArray<FGuid> GetEntryPointGUIDs(UConversationRegistry* Registry, FGameplayTag EntryPoint);
	void GenerateChoicesForDestinations(FConversationBranchPointBuilder& BranchBuilder, FConversationContext& InContext, TArray<FGuid>& CandidateDestinations);
	void GatherChoices(UConversationTaskNode* Node, FConversationBranchPointBuilder& BranchBuilder, FConversationContext& InContext);
	void GatherStaticChoices(UConversationTaskNode* TaskNode, FConversationBranchPointBuilder& BranchBuilder, FConversationContext& InContext);
	//void GatherDynamicChoices(UConversationTaskNode* TaskNode, FConversationBranchPointBuilder& BranchBuilder, FConversationContext& InContext);
	void SetNextChoices(UConversationInstance* Instance, TArray<FConversationBranchPoint>& InAllChoices);
	//FConversationTaskResult ExecuteTaskNode(UConversationTaskNode* TaskNode, FConversationContext& InContext);
	//UConversationDatabase* GetConversationFromNodeGUID(UConversationRegistry* Registry, FGuid& NodeGUID);
	//UConversationNode* GetRuntimeNodeFromGuid(UConversationRegistry* Registry, FGuid NodeGUID);
}

namespace Bounties
{
	void StartHunt(AFortPlayerControllerAthena* HunterPC, AFortPlayerControllerAthena* TargetPC);
	void OnTargeted(AFortPlayerControllerAthena* HunterPC, AFortPlayerControllerAthena* TargetPC);
}

namespace Misc
{
	inline EConversationRequirementResult (*HasServiceOG)(UFortConversationRequirement_HasService* Requirement, FConversationContext& InContext);
	EConversationRequirementResult HasService(UFortConversationRequirement_HasService* Requirement, FConversationContext& InContext);

	inline EConversationRequirementResult(*HasNoActiveQuestsOG)(UFortConversationRequirement_HasNoActiveQuests* Requirement, FConversationContext& InContext);
	EConversationRequirementResult HasNoActiveQuests(UFortConversationRequirement_HasNoActiveQuests* Requirement, FConversationContext& InContext);

	inline EConversationRequirementResult(*ChildRequirementsOG)(UFortConversationRequirement_ChildRequirements* Requirement, FConversationContext& InContext);
	EConversationRequirementResult ChildRequirements(UFortConversationRequirement_ChildRequirements* Requirement, FConversationContext& InContext);

	inline EConversationRequirementResult(*SlottedQuestNotCompletedThisMatchOG)(UFortConversationRequirement_SlottedQuestNotCompletedThisMatch* Requirement, FConversationContext& InContext);
	EConversationRequirementResult SlottedQuestNotCompletedThisMatch(UFortConversationRequirement_SlottedQuestNotCompletedThisMatch* Requirement, FConversationContext& InContext);

	inline EConversationRequirementResult(*AllSlottedQuestPrerequisitesCompletedOG)(UFortConversationRequirement_AllSlottedQuestPrerequisitesCompleted* Requirement, FConversationContext& InContext);
	EConversationRequirementResult AllSlottedQuestPrerequisitesCompleted(UFortConversationRequirement_AllSlottedQuestPrerequisitesCompleted* Requirement, FConversationContext& InContext);

	void RequestServerAbortConversation(UFortPlayerConversationComponent* Comp);

	inline void (*InventoryBaseOnSpawnedOG)(UFortAthenaAISpawnerDataComponent_InventoryBase* a1, APawn* a2);
	void InventoryBaseOnSpawned(UFortAthenaAISpawnerDataComponent_InventoryBase* a1, APawn* a2);

	float GetMaxTickRate();
	void ServerMove(AFortPhysicsPawn* Pawn, FReplicatedPhysicsPawnState InState);
	inline void (*CommitAbilityOG)(UGameplayAbility* Ability);
	void OnPawnAISpawnedHook(AActor* Controller, AFortPlayerPawnAthena* Pawn);
	inline void (*OnPawnAISpawnedHookOG)(AActor* Controller, AFortPlayerPawnAthena* Pawn);
	void OnPossesedPawnDiedHook(AFortAthenaAIBotController* Controller, AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector& HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector& Momentum);
	inline void (*OnPossesedPawnDiedOG)(AFortAthenaAIBotController* Controller, AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector& HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector& Momentum);
	bool FreeFallingEvalHook(UFortAthenaAIBotEvaluator_FreeFalling* eval, __int64 a2, __int64 a3, char a4);
	

	__int64 __fastcall UserMathErrorFunction(__int64 a1);
	inline __int64 (*UserMathErrorFunctionOG)(__int64 a1);
	void OnKilled(AFortPlayerControllerAthena* DeadPC, AFortPlayerControllerAthena* KillerPC, UFortWeaponItemDefinition* KillerWeapon);
	void RebootingDelegate(ABuildingGameplayActorSpawnMachine* RebootVan);
	void Siphon(AFortPlayerControllerAthena* PC);

	inline void (*ServerOnExitVehicleOG)(AFortPlayerPawnAthena* Pawn, ETryExitVehicleBehavior Behavior);
	void ServerOnExitVehicle(AFortPlayerPawnAthena* Pawn, ETryExitVehicleBehavior Behavior);

	inline void (*OnReloadOG)(AFortWeapon* Weapon, int AmmoUsed);
	void OnReload(AFortWeapon* Weapon, int AmmoUsed);

	inline void (*CollectGarbageInternalOG)(unsigned int a1, unsigned __int8 a2);
	void CollectGarbageInternal(unsigned int a1, unsigned __int8 a2);

	inline __int64 (*RandomCrashOG)(__int64 a1);
	__int64 RandomCrash(__int64 a1);

	namespace Patchs
	{
		inline __int64 RetZero()
		{
			return 0;
		}

		inline __int64 RetOne()
		{
			return 1;
		}
		UClass** GetGameSessionClassHook(__int64 a1, UClass** a2);
		inline const wchar_t* GetCommandLet()
		{
			std::wstring commandLet = L"";
			//-AUTH_TYPE=ORION_DEDICATED -AUTH_LOGIN=DEDICATED@ezfn.dev -AUTH_PASSWORD=525aa1572f8f4310886322b1a0b90402 -AuthClient=525aa1572f8f4310886322b1a0b90402 -AuthSecret=f1424f71200e43739b1b91a9cf2b07f2 -epicapp=Fortnite -epicenv=Prod -EpicPortal -nobe -fromfl=eac -fltoken=3db3ba5dcbd2e16703f3978d -nosound -skippatchcheck
			// Auth
			commandLet += L"-AUTH_TYPE=ORION_DEDICATED -AUTH_LOGIN=DEDICATED@ezfn.dev -AUTH_PASSWORD=525aa1572f8f4310886322b1a0b90402 -AuthClient=525aa1572f8f4310886322b1a0b90402 -AuthSecret=f1424f71200e43739b1b91a9cf2b07f2";
			// Epic shit
			commandLet += L" -epicapp=Fortnite -epicenv=Prod -EpicPortal -epiclocale=en-us";
			// Launcher shit
			commandLet += L" -fltoken=3db3ba5dcbd2e16703f3978d -caldera=eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJhY2NvdW50X2lkIjoiYmU5ZGE1YzJmYmVhNDQwN2IyZjQwZWJhYWQ4NTlhZDQiLCJnZW5lcmF0ZWQiOjE2Mzg3MTcyNzgsImNhbGRlcmFHdWlkIjoiMzgxMGI4NjMtMmE2NS00NDU3LTliNTgtNGRhYjNiNDgyYTg2IiwiYWNQcm92aWRlciI6IkVhc3lBbnRpQ2hlYXQiLCJub3RlcyI6IiIsImZhbGxiYWNrIjpmYWxzZX0.VAWQB67RTxhiWOxx7DBjnzDnXyyEnX7OljJm-j2d88G_WgwQ9wrE6lwMEHZHjBd1ISJdUO1UVUqkfLdU5nofBQ";
			// Anti Cheat
			commandLet += L" -nobe -fromfl=eac";
			// Others
			commandLet += L" -AllowAllPlaylistsInShipping -nosound -skippatchcheck -nosplash -log";

			//Backend
			#ifdef NO_DEDISES
				commandLet += L" -DisableMMS";
			#endif
			return commandLet.c_str();

			//return L"-log -epicapp=Fortnite -epicenv=Prod -epiclocale=en-us -epicportal -skippatchcheck -nobe -fromfl=eac -fltoken=3db3ba5dcbd2e16703f3978d -AllowAllPlaylistsInShipping -caldera=eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJhY2NvdW50X2lkIjoiYmU5ZGE1YzJmYmVhNDQwN2IyZjQwZWJhYWQ4NTlhZDQiLCJnZW5lcmF0ZWQiOjE2Mzg3MTcyNzgsImNhbGRlcmFHdWlkIjoiMzgxMGI4NjMtMmE2NS00NDU3LTliNTgtNGRhYjNiNDgyYTg2IiwiYWNQcm92aWRlciI6IkVhc3lBbnRpQ2hlYXQiLCJub3RlcyI6IiIsImZhbGxiYWNrIjpmYWxzZX0.VAWQB67RTxhiWOxx7DBjnzDnXyyEnX7OljJm-j2d88G_WgwQ9wrE6lwMEHZHjBd1ISJdUO1UVUqkfLdU5nofBQ -AUTH_LOGIN=your@email.com -AUTH_PASSWORD=yourpasswordhere AUTH_TYPE=exchangecode -nosplash -DisableMMS";
		}

		inline void GameSessionRestart(__int64)
		{
			printf("GameSessionRestart called\n");
			cout << __int64(_ReturnAddress()) - InSDKUtils::GetImageBase() << endl;
		}

		#ifdef USE_BACKEND
			static __int64 (*GetClientAuthorization)(__int64 a1, __int64 a2, __int64 a3);
			static __int64 __fastcall GetClientAuthorizationHook(__int64 a1, __int64 a2, __int64 a3) {
				FString* str = new FString(L"basic SDSDSDDSDAMDKMASDLMKAS");
				return __int64(&str);
				// FString_Sinum Authorization = FString_Sinum(L"basic NTI1YWExNTcyZjhmNDMxMDg4NjMyMmIxYTBiOTA0MDI6ZjE0MjRmNzEyMDBlNDM3MzliMWI5MWE5Y2YyYjA3ZjI=");
				// return __int64(Authorization);
			}
		#endif

		static FServicePermissionsMcp* (*MatchMakingServicePerms)(__int64 a1, __int64 a2);
		inline FServicePermissionsMcp* MatchMakingServicePermsHook(__int64 a1, __int64 a2) {
			FServicePermissionsMcp* Perms = new FServicePermissionsMcp();
			#ifdef USE_BACKEND
				Perms->Id = L"525aa1572f8f4310886322b1a0b90402";
			#else
				Perms->Id = L"lawinsclientidlol";
			#endif
			return Perms;
		}

		//UClass** GetGameSessionClassHook(__int64 a1, UClass** a2);

		static void UWorld__Listen(UWorld* World, const FURL& InURL) {
			FName NetDriverName = UKismetStringLibrary::Conv_StringToName(TEXT("GameNetDriver"));
			UNetDriver* NetDriver = CreateNetDriver(UEngine::GetEngine(), World, NetDriverName);

			NetDriver->World = World;
			NetDriver->NetDriverName = NetDriverName;

			FString Error;

			bool bReuseAddressAndPort = false;

			InitListen(NetDriver, World, InURL, bReuseAddressAndPort, Error);
			SetWorld = decltype(SetWorld)((*(void***)NetDriver)[0x72]);
			SetWorld(NetDriver, World);
			World->NetDriver = NetDriver;
			World->LevelCollections[0].NetDriver = NetDriver;
			World->LevelCollections[1].NetDriver = NetDriver;
		}

		static char (*SetGameMode)(UWorld* World, const FURL& InURL);
		static char __fastcall SetGameModeHook(UWorld* World, const FURL& InURL) {
			printf("SetGameModeHook!\n");
			bool result = SetGameMode(World, InURL);
			printf("RESULT: %p\n", result);
			if (result) {
#ifndef NO_DEDISES
				World->AuthorityGameMode->GameSessionClass = AFortGameSessionDedicatedAthena::StaticClass();
#endif

				// World->AuthorityGameMode->DefaultPawnClass = AFortPlayerPawnAthena::StaticClass();

				UWorld__Listen(World, InURL);
			}
			else
			{
				exit(-1);
			}
			return result;
		}
	}

	namespace MCP
	{
		inline __int64(__fastcall* MCP_DispatchRequest)(void* Profile, void* Context, int a3);
		inline __int64 __fastcall MCP_DispatchRequestHook(void* Profile, void* Context, int a3)
		{
			UFortMcpProfile* ProfileMCP = (UFortMcpProfile*)Profile;
			UFortMcpContext* ContextMCP = (UFortMcpContext*)Context;

			return MCP_DispatchRequest(Profile, Context, 3);
		}
	}
}