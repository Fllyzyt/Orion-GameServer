#pragma once
#include "Utils.h"

using namespace SDK;
using namespace std;

namespace GameMode
{
	inline bool (*ReadyToStartMatchOriginal)(AFortGameModeAthena* GameMode);
	inline void (*HandleNewSafeZonePhaseOG)(AFortGameModeAthena* GameMode, int32 ZoneIndex);
	inline void (*InitializeForWorldOG)(UNavigationSystemV1* NavSystem, UWorld* World, EFNavigationSystemRunMode Mode);
	inline void (*OnAircraftExitedDropZoneOG)(AFortGameModeAthena* GameMode, AFortAthenaAircraft* Aircraft);
	inline void (*OnAircraftEnteredDropZoneOG)(AFortGameModeAthena* GameMode, AFortAthenaAircraft* Aircraft);

	void HandleNewSafeZonePhase(AFortGameModeAthena* GameMode, int32 ZoneIndex);
	bool ReadyToStartMatch(AFortGameModeAthena* GameMode);
	APawn* SpawnDefaultPawnFor(AGameModeBase* GameModeBase, AController* NewPlayer, AActor* StartSpot);
	void InitializeForWorld(UNavigationSystemV1* NavSystem, UWorld* World, EFNavigationSystemRunMode Mode);
	void OnAircraftExitedDropZone(AFortGameModeAthena* GameMode, AFortAthenaAircraft* Aircraft);
	void OnAircraftEnteredDropZone(AFortGameModeAthena* GameMode, AFortAthenaAircraft* Aircraft);
	EFortTeam PickTeam();
}