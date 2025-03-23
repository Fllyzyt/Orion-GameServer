#include "Utils.h"
#include <iostream>

using namespace std;
using namespace SDK;

void Utils::Log(string msg)
{
	cout << "[Orion 15.50]: " << msg << endl;
}

void Utils::SwapVFTs(void* Base, uintptr_t Index, void* Detour, void** Original)
{
	auto VTable = (*(void***)Base);
	if (!VTable)
		return;

	if (!VTable[Index])
		return;

	if (Original)
		*Original = VTable[Index];

	DWORD dwOld;
	VirtualProtect(&VTable[Index], 8, PAGE_EXECUTE_READWRITE, &dwOld);
	VTable[Index] = Detour;
	DWORD dwTemp;
	VirtualProtect(&VTable[Index], 8, dwOld, &dwTemp);
}

AFortPickupAthena* Utils::SpawnPickup(FVector Loc, UFortItemDefinition* Def, EFortPickupSourceTypeFlag SourceTypeFlag, EFortPickupSpawnSource SpawnSource, int Count, int LoadedAmmo)
{
	FTransform Transform{};
	Transform.Translation = Loc;
	Transform.Scale3D = FVector{ 1,1,1 };
	AFortPickupAthena* Pickup = Cast<AFortPickupAthena>(UGameplayStatics::FinishSpawningActor(UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), AFortPickupAthena::StaticClass(), (FTransform&)Transform, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, nullptr), (FTransform&)Transform));
	if (!Pickup)
		return nullptr;
	Pickup->bRandomRotation = true;
	Pickup->PrimaryPickupItemEntry.ItemDefinition = Def;
	Pickup->PrimaryPickupItemEntry.Count = Count;
	Pickup->PrimaryPickupItemEntry.LoadedAmmo = LoadedAmmo;
	Pickup->OnRep_PrimaryPickupItemEntry();
	Pickup->TossPickup(Loc, nullptr, -1, true, false, SourceTypeFlag, SpawnSource);

	if (SourceTypeFlag == EFortPickupSourceTypeFlag::Container)
	{
		Pickup->bTossedFromContainer = true;
		Pickup->OnRep_TossedFromContainer();
	}
	return Pickup;
}