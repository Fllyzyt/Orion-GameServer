#pragma once
#include "Utils.h"

namespace XP
{
	namespace Accolades
	{
		void GiveAccolade(AFortPlayerControllerAthena* PC, UFortAccoladeItemDefinition* AccoladeDef, UFortQuestItemDefinition* QuestDef, EXPEventPriorityType Priority = EXPEventPriorityType::XPBarOnly);
	}

	namespace Challanges
	{
		void UpdateChallange(UFortQuestManager* QuestManager, UFortQuestItemDefinition* QuestItem, FName BackendName, int Count);
		void SendComplexCustomStatEvent(UFortQuestManager* ManagerComp, UObject* TargetObject, FGameplayTagContainer& AdditionalSourceTags, FGameplayTagContainer& TargetTags, bool* QuestActive, bool* QuestCompleted, int32 Count);
		void SendStatEvent(UFortQuestManager* ManagerComp, UObject* TargetObject, FGameplayTagContainer& AdditionalSourceTags, FGameplayTagContainer& TargetTags, bool* QuestActive, bool* QuestCompleted, int32 Count, EFortQuestObjectiveStatEvent StatEvent);
		bool SendDistanceUpdate(UGameplayAbility* Ability);
	}
}