#pragma once
#include "Utils.h"

using namespace std;

namespace PlayerController
{
	inline void (*ClientOnPawnDiedOG)(APlayerController* PlayerController, FFortPlayerDeathReport);
	
	void ServerAcknowledgePossession(APlayerController* PlayerController, APawn* Pawn);
	inline void (*GetPlayerViewPointOG)(APlayerController* PlayerController, FVector outLocation, FRotator outRotation);
	inline void (*ServerSetInAircraftOG)(AFortPlayerStateAthena* PlayerState, bool bInAircraft);
	void GetPlayerViewPoint(APlayerController* PlayerController, FVector& outLocation, FRotator& outRotation);
	void ClientOnPawnDied(AFortPlayerControllerAthena* PlayerController, FFortPlayerDeathReport);
	inline void (*ServerReadyToStartMatchOG)(AFortPlayerController* PlayerController);
	inline __int64 (*OnDamageServerOG)(ABuildingSMActor* Actor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AFortPlayerControllerAthena* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
	void ServerReadyToStartMatch(AFortPlayerController* PlayerController);
	void ServerAttemptAircraftJump(UFortControllerComponent_Aircraft* Comp, FRotator ClientRot);
	inline void (*ServerLoadingScreenDroppedOG)(AFortPlayerController* PlayerController);
	void ServerLoadingScreenDropped(AFortPlayerController* PlayerController);
	void ServerPlayEmoteItemHook(AFortPlayerController* PlayerController, UFortItemDefinition* EmoteAsset, float EmoteRandomNumber);
	void ServerExecuteInventoryItem(AFortPlayerController* PC, FGuid Guid);
	void ServerCheat(AFortPlayerControllerAthena* PC, FString msg);
	void ServerCreateBuildingActor(AFortPlayerControllerAthena* PC, FCreateBuildingActorData Data);
	__int64 OnDamageServer(ABuildingSMActor* Actor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AFortPlayerControllerAthena* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
	void ServerEditBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* BuildingActorToEdit, TSubclassOf<ABuildingSMActor> NewBuildingClass, uint8 RotationIterations, bool bMirrored);
	void ServerEndEditingBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* BuildingActorToEdit);
	void ServerBeginEditingBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* BuildingActorToEdit);
	void ServerAttemptInventoryDrop(AFortPlayerControllerAthena* PC, FGuid ItemGuid, int Count, bool bTrash);
	void ServerRepairBuildingActorHook(AFortPlayerController* PC, ABuildingSMActor* Actor);
	void ServerReturnToMainMenu(AFortPlayerControllerAthena* PC);
	void ServerReviveFromDBNO(AFortPlayerPawnAthena* Pawn, AFortPlayerControllerAthena* Instigator);
	void ServerSetInAircraft(AFortPlayerStateAthena* PlayerState, bool bInAircraft);

	namespace Abilities
	{
		inline FGameplayAbilitySpecHandle(*GiveAbilityOG)(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle* OutHandle, FGameplayAbilitySpec NewSpec);
		FGameplayAbilitySpecHandle GiveAbility(UAbilitySystemComponent* AbilitySystemComponent, UClass* AbilityClass, UObject* SourceObject = nullptr, bool RemoveAfterActivation = false);
		FGameplayAbilitySpec* FindAbilityFromSpecHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle& Handle);
		FGameplayAbilitySpec* FindAbilityFromClass(UAbilitySystemComponent* AbilitySystemComponent, UClass* Class);
		inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent* AbilitySystemComp, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData) = decltype(InternalTryActivateAbility)(__int64(GetModuleHandleW(0)) + 0xC42BB0);
		void InternalServerTryActivateAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey& PredictionKey, FGameplayEventData* TriggerEventData);
	}
}