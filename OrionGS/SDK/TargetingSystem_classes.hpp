#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TargetingSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "TargetingSystem_structs.hpp"


namespace SDK
{

// Class TargetingSystem.TargetingTask
// 0x0000 (0x0028 - 0x0028)
class UTargetingTask : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetingTask">();
	}
	static class UTargetingTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetingTask>();
	}
};
static_assert(alignof(UTargetingTask) == 0x000008, "Wrong alinment on UTargetingTask");
static_assert(sizeof(UTargetingTask) == 0x000028, "Wrong size on UTargetingTask");

// Class TargetingSystem.TargetingFilterTask_BasicFilterTemplate
// 0x0000 (0x0028 - 0x0028)
class UTargetingFilterTask_BasicFilterTemplate : public UTargetingTask
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetingFilterTask_BasicFilterTemplate">();
	}
	static class UTargetingFilterTask_BasicFilterTemplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetingFilterTask_BasicFilterTemplate>();
	}
};
static_assert(alignof(UTargetingFilterTask_BasicFilterTemplate) == 0x000008, "Wrong alinment on UTargetingFilterTask_BasicFilterTemplate");
static_assert(sizeof(UTargetingFilterTask_BasicFilterTemplate) == 0x000028, "Wrong size on UTargetingFilterTask_BasicFilterTemplate");

// Class TargetingSystem.TargetingFilterTask_ActorClass
// 0x0020 (0x0048 - 0x0028)
class UTargetingFilterTask_ActorClass final  : public UTargetingFilterTask_BasicFilterTemplate
{
public:
	TArray<class UClass*>                         RequiredActorClassFilters;                         // 0x0028(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                         IgnoredActorClassFilters;                          // 0x0038(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetingFilterTask_ActorClass">();
	}
	static class UTargetingFilterTask_ActorClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetingFilterTask_ActorClass>();
	}
};
static_assert(alignof(UTargetingFilterTask_ActorClass) == 0x000008, "Wrong alinment on UTargetingFilterTask_ActorClass");
static_assert(sizeof(UTargetingFilterTask_ActorClass) == 0x000048, "Wrong size on UTargetingFilterTask_ActorClass");
static_assert(offsetof(UTargetingFilterTask_ActorClass, RequiredActorClassFilters) == 0x000028, "Member 'UTargetingFilterTask_ActorClass::RequiredActorClassFilters' has a wrong offset!");
static_assert(offsetof(UTargetingFilterTask_ActorClass, IgnoredActorClassFilters) == 0x000038, "Member 'UTargetingFilterTask_ActorClass::IgnoredActorClassFilters' has a wrong offset!");

// Class TargetingSystem.TargetingFilterTask_SortByDistance
// 0x0008 (0x0030 - 0x0028)
class UTargetingFilterTask_SortByDistance final  : public UTargetingTask
{
public:
	uint8                                         bAscending : 1;                                    // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_4BFA[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetingFilterTask_SortByDistance">();
	}
	static class UTargetingFilterTask_SortByDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetingFilterTask_SortByDistance>();
	}
};
static_assert(alignof(UTargetingFilterTask_SortByDistance) == 0x000008, "Wrong alinment on UTargetingFilterTask_SortByDistance");
static_assert(sizeof(UTargetingFilterTask_SortByDistance) == 0x000030, "Wrong size on UTargetingFilterTask_SortByDistance");

// Class TargetingSystem.TargetingPreset
// 0x0010 (0x0040 - 0x0030)
class UTargetingPreset final  : public UDataAsset
{
public:
	struct FTargetingTaskSet                      TargetingTaskSet;                                  // 0x0030(0x0010)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetingPreset">();
	}
	static class UTargetingPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetingPreset>();
	}
};
static_assert(alignof(UTargetingPreset) == 0x000008, "Wrong alinment on UTargetingPreset");
static_assert(sizeof(UTargetingPreset) == 0x000040, "Wrong size on UTargetingPreset");
static_assert(offsetof(UTargetingPreset, TargetingTaskSet) == 0x000030, "Member 'UTargetingPreset::TargetingTaskSet' has a wrong offset!");

// Class TargetingSystem.TargetingSelectionTask_AOE
// 0x0030 (0x0058 - 0x0028)
class UTargetingSelectionTask_AOE final  : public UTargetingTask
{
public:
	ETargetingAOEShape                            ShapeType;                                         // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ECollisionChannel                             CollisionChannel;                                  // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4BFB[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCollisionProfileName                  CollisionProfileName;                              // 0x002C(0x0008)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         bIgnoreSourceActor : 1;                            // 0x0034(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bIgnoreInstigatorActor : 1;                        // 0x0034(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_4BFC[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HalfExtent;                                        // 0x0038(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         Radius;                                            // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         HalfHeight;                                        // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   ComponentTag;                                      // 0x004C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4BFD[0x4];                                     // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle) const;
	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetingSelectionTask_AOE">();
	}
	static class UTargetingSelectionTask_AOE* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetingSelectionTask_AOE>();
	}
};
static_assert(alignof(UTargetingSelectionTask_AOE) == 0x000008, "Wrong alinment on UTargetingSelectionTask_AOE");
static_assert(sizeof(UTargetingSelectionTask_AOE) == 0x000058, "Wrong size on UTargetingSelectionTask_AOE");
static_assert(offsetof(UTargetingSelectionTask_AOE, ShapeType) == 0x000028, "Member 'UTargetingSelectionTask_AOE::ShapeType' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_AOE, CollisionChannel) == 0x000029, "Member 'UTargetingSelectionTask_AOE::CollisionChannel' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_AOE, CollisionProfileName) == 0x00002C, "Member 'UTargetingSelectionTask_AOE::CollisionProfileName' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_AOE, HalfExtent) == 0x000038, "Member 'UTargetingSelectionTask_AOE::HalfExtent' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_AOE, Radius) == 0x000044, "Member 'UTargetingSelectionTask_AOE::Radius' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_AOE, HalfHeight) == 0x000048, "Member 'UTargetingSelectionTask_AOE::HalfHeight' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_AOE, ComponentTag) == 0x00004C, "Member 'UTargetingSelectionTask_AOE::ComponentTag' has a wrong offset!");

// Class TargetingSystem.TargetingSelectionTask_SourceActor
// 0x0000 (0x0028 - 0x0028)
class UTargetingSelectionTask_SourceActor final  : public UTargetingTask
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetingSelectionTask_SourceActor">();
	}
	static class UTargetingSelectionTask_SourceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetingSelectionTask_SourceActor>();
	}
};
static_assert(alignof(UTargetingSelectionTask_SourceActor) == 0x000008, "Wrong alinment on UTargetingSelectionTask_SourceActor");
static_assert(sizeof(UTargetingSelectionTask_SourceActor) == 0x000028, "Wrong size on UTargetingSelectionTask_SourceActor");

// Class TargetingSystem.TargetingSelectionTask_Trace
// 0x0030 (0x0058 - 0x0028)
class UTargetingSelectionTask_Trace final  : public UTargetingTask
{
public:
	ETargetingTraceType                           TraceType;                                         // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ETraceTypeQuery                               TraceChannel;                                      // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4BFE[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCollisionProfileName                  CollisionProfileName;                              // 0x002C(0x0008)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                         DefaultSweptTraceRadius;                           // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DefaultTraceLength;                                // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                DefaultSourceOffset;                               // 0x003C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                ExplicitTraceDirection;                            // 0x0048(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bComplexTrace : 1;                                 // 0x0054(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bIgnoreSourceActor : 1;                            // 0x0054(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bIgnoreInstigatorActor : 1;                        // 0x0054(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_4BFF[0x3];                                     // 0x0055(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle) const;
	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle) const;
	float GetSweptTraceRadius(struct FTargetingRequestHandle& TargetingHandle) const;
	struct FVector GetTraceDirection(struct FTargetingRequestHandle& TargetingHandle) const;
	float GetTraceLength(struct FTargetingRequestHandle& TargetingHandle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetingSelectionTask_Trace">();
	}
	static class UTargetingSelectionTask_Trace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetingSelectionTask_Trace>();
	}
};
static_assert(alignof(UTargetingSelectionTask_Trace) == 0x000008, "Wrong alinment on UTargetingSelectionTask_Trace");
static_assert(sizeof(UTargetingSelectionTask_Trace) == 0x000058, "Wrong size on UTargetingSelectionTask_Trace");
static_assert(offsetof(UTargetingSelectionTask_Trace, TraceType) == 0x000028, "Member 'UTargetingSelectionTask_Trace::TraceType' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_Trace, TraceChannel) == 0x000029, "Member 'UTargetingSelectionTask_Trace::TraceChannel' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_Trace, CollisionProfileName) == 0x00002C, "Member 'UTargetingSelectionTask_Trace::CollisionProfileName' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultSweptTraceRadius) == 0x000034, "Member 'UTargetingSelectionTask_Trace::DefaultSweptTraceRadius' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultTraceLength) == 0x000038, "Member 'UTargetingSelectionTask_Trace::DefaultTraceLength' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultSourceOffset) == 0x00003C, "Member 'UTargetingSelectionTask_Trace::DefaultSourceOffset' has a wrong offset!");
static_assert(offsetof(UTargetingSelectionTask_Trace, ExplicitTraceDirection) == 0x000048, "Member 'UTargetingSelectionTask_Trace::ExplicitTraceDirection' has a wrong offset!");

// Class TargetingSystem.TargetingSubsystem
// 0x0020 (0x0050 - 0x0030)
class UTargetingSubsystem final  : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_4C00[0x10];                                    // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTargetingRequestHandle>        AsyncTargetingRequests;                            // 0x0040(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static void GetTargetingResultsActors(const struct FTargetingRequestHandle& TargetingHandle, TArray<class AActor*>* Targets);
	static struct FTargetingSourceContext GetTargetingSourceContext(const struct FTargetingRequestHandle& TargetingHandle);

	void StartAsyncTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> CompletionDynamicDelegate);

	void ExecuteTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> CompletionDynamicDelegate) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetingSubsystem">();
	}
	static class UTargetingSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetingSubsystem>();
	}
};
static_assert(alignof(UTargetingSubsystem) == 0x000008, "Wrong alinment on UTargetingSubsystem");
static_assert(sizeof(UTargetingSubsystem) == 0x000050, "Wrong size on UTargetingSubsystem");
static_assert(offsetof(UTargetingSubsystem, AsyncTargetingRequests) == 0x000040, "Member 'UTargetingSubsystem::AsyncTargetingRequests' has a wrong offset!");

}

