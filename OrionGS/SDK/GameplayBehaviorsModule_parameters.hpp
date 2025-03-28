#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayBehaviorsModule

#include "Basic.hpp"


namespace SDK::Params
{

// Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
// 0x0008 (0x0008 - 0x0000)
struct GameplayBehavior_K2_AbortBehavior final 
{
public:
	class AActor*                                 Avatar;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayBehavior_K2_AbortBehavior) == 0x000008, "Wrong alinment on GameplayBehavior_K2_AbortBehavior");
static_assert(sizeof(GameplayBehavior_K2_AbortBehavior) == 0x000008, "Wrong size on GameplayBehavior_K2_AbortBehavior");
static_assert(offsetof(GameplayBehavior_K2_AbortBehavior, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_AbortBehavior::Avatar' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
// 0x0008 (0x0008 - 0x0000)
struct GameplayBehavior_K2_EndBehavior final 
{
public:
	class AActor*                                 Avatar;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayBehavior_K2_EndBehavior) == 0x000008, "Wrong alinment on GameplayBehavior_K2_EndBehavior");
static_assert(sizeof(GameplayBehavior_K2_EndBehavior) == 0x000008, "Wrong size on GameplayBehavior_K2_EndBehavior");
static_assert(offsetof(GameplayBehavior_K2_EndBehavior, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_EndBehavior::Avatar' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
// 0x0010 (0x0010 - 0x0000)
struct GameplayBehavior_K2_OnFinished final 
{
public:
	class AActor*                                 Avatar;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWasInterrupted;                                   // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E1C[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayBehavior_K2_OnFinished) == 0x000008, "Wrong alinment on GameplayBehavior_K2_OnFinished");
static_assert(sizeof(GameplayBehavior_K2_OnFinished) == 0x000010, "Wrong size on GameplayBehavior_K2_OnFinished");
static_assert(offsetof(GameplayBehavior_K2_OnFinished, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnFinished::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnFinished, bWasInterrupted) == 0x000008, "Member 'GameplayBehavior_K2_OnFinished::bWasInterrupted' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
// 0x0010 (0x0010 - 0x0000)
struct GameplayBehavior_K2_OnFinishedCharacter final 
{
public:
	class ACharacter*                             Avatar;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWasInterrupted;                                   // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E1D[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayBehavior_K2_OnFinishedCharacter) == 0x000008, "Wrong alinment on GameplayBehavior_K2_OnFinishedCharacter");
static_assert(sizeof(GameplayBehavior_K2_OnFinishedCharacter) == 0x000010, "Wrong size on GameplayBehavior_K2_OnFinishedCharacter");
static_assert(offsetof(GameplayBehavior_K2_OnFinishedCharacter, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnFinishedCharacter::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnFinishedCharacter, bWasInterrupted) == 0x000008, "Member 'GameplayBehavior_K2_OnFinishedCharacter::bWasInterrupted' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
// 0x0010 (0x0010 - 0x0000)
struct GameplayBehavior_K2_OnFinishedPawn final 
{
public:
	class APawn*                                  Avatar;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWasInterrupted;                                   // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E1E[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayBehavior_K2_OnFinishedPawn) == 0x000008, "Wrong alinment on GameplayBehavior_K2_OnFinishedPawn");
static_assert(sizeof(GameplayBehavior_K2_OnFinishedPawn) == 0x000010, "Wrong size on GameplayBehavior_K2_OnFinishedPawn");
static_assert(offsetof(GameplayBehavior_K2_OnFinishedPawn, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnFinishedPawn::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnFinishedPawn, bWasInterrupted) == 0x000008, "Member 'GameplayBehavior_K2_OnFinishedPawn::bWasInterrupted' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
// 0x0010 (0x0010 - 0x0000)
struct GameplayBehavior_K2_OnTriggered final 
{
public:
	class AActor*                                 Avatar;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*                Config;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayBehavior_K2_OnTriggered) == 0x000008, "Wrong alinment on GameplayBehavior_K2_OnTriggered");
static_assert(sizeof(GameplayBehavior_K2_OnTriggered) == 0x000010, "Wrong size on GameplayBehavior_K2_OnTriggered");
static_assert(offsetof(GameplayBehavior_K2_OnTriggered, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnTriggered::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnTriggered, Config) == 0x000008, "Member 'GameplayBehavior_K2_OnTriggered::Config' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
// 0x0010 (0x0010 - 0x0000)
struct GameplayBehavior_K2_OnTriggeredCharacter final 
{
public:
	class ACharacter*                             Avatar;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*                Config;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayBehavior_K2_OnTriggeredCharacter) == 0x000008, "Wrong alinment on GameplayBehavior_K2_OnTriggeredCharacter");
static_assert(sizeof(GameplayBehavior_K2_OnTriggeredCharacter) == 0x000010, "Wrong size on GameplayBehavior_K2_OnTriggeredCharacter");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredCharacter, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnTriggeredCharacter::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredCharacter, Config) == 0x000008, "Member 'GameplayBehavior_K2_OnTriggeredCharacter::Config' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
// 0x0010 (0x0010 - 0x0000)
struct GameplayBehavior_K2_OnTriggeredPawn final 
{
public:
	class APawn*                                  Avatar;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*                Config;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayBehavior_K2_OnTriggeredPawn) == 0x000008, "Wrong alinment on GameplayBehavior_K2_OnTriggeredPawn");
static_assert(sizeof(GameplayBehavior_K2_OnTriggeredPawn) == 0x000010, "Wrong size on GameplayBehavior_K2_OnTriggeredPawn");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredPawn, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnTriggeredPawn::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredPawn, Config) == 0x000008, "Member 'GameplayBehavior_K2_OnTriggeredPawn::Config' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
// 0x0010 (0x0010 - 0x0000)
struct GameplayBehavior_K2_TriggerBehavior final 
{
public:
	class AActor*                                 Avatar;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*                Config;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayBehavior_K2_TriggerBehavior) == 0x000008, "Wrong alinment on GameplayBehavior_K2_TriggerBehavior");
static_assert(sizeof(GameplayBehavior_K2_TriggerBehavior) == 0x000010, "Wrong size on GameplayBehavior_K2_TriggerBehavior");
static_assert(offsetof(GameplayBehavior_K2_TriggerBehavior, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_TriggerBehavior::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_TriggerBehavior, Config) == 0x000008, "Member 'GameplayBehavior_K2_TriggerBehavior::Config' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
// 0x0008 (0x0008 - 0x0000)
struct GameplayBehavior_K2_GetNextActorIndexInSequence final 
{
public:
	int32                                         CurrentIndex;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayBehavior_K2_GetNextActorIndexInSequence) == 0x000004, "Wrong alinment on GameplayBehavior_K2_GetNextActorIndexInSequence");
static_assert(sizeof(GameplayBehavior_K2_GetNextActorIndexInSequence) == 0x000008, "Wrong size on GameplayBehavior_K2_GetNextActorIndexInSequence");
static_assert(offsetof(GameplayBehavior_K2_GetNextActorIndexInSequence, CurrentIndex) == 0x000000, "Member 'GameplayBehavior_K2_GetNextActorIndexInSequence::CurrentIndex' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_GetNextActorIndexInSequence, ReturnValue) == 0x000004, "Member 'GameplayBehavior_K2_GetNextActorIndexInSequence::ReturnValue' has a wrong offset!");

// Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
// 0x0018 (0x0018 - 0x0000)
struct GameplayBehavior_AnimationBased_OnMontageFinished final 
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInterrupted;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E1F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 InAvatar;                                          // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayBehavior_AnimationBased_OnMontageFinished) == 0x000008, "Wrong alinment on GameplayBehavior_AnimationBased_OnMontageFinished");
static_assert(sizeof(GameplayBehavior_AnimationBased_OnMontageFinished) == 0x000018, "Wrong size on GameplayBehavior_AnimationBased_OnMontageFinished");
static_assert(offsetof(GameplayBehavior_AnimationBased_OnMontageFinished, Montage) == 0x000000, "Member 'GameplayBehavior_AnimationBased_OnMontageFinished::Montage' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_AnimationBased_OnMontageFinished, bInterrupted) == 0x000008, "Member 'GameplayBehavior_AnimationBased_OnMontageFinished::bInterrupted' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_AnimationBased_OnMontageFinished, InAvatar) == 0x000010, "Member 'GameplayBehavior_AnimationBased_OnMontageFinished::InAvatar' has a wrong offset!");

}

