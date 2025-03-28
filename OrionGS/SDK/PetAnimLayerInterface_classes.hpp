#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PetAnimLayerInterface

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass PetAnimLayerInterface.PetAnimLayerInterface_C
// 0x0000 (0x0028 - 0x0028)
class IPetAnimLayerInterface_C final  : public IAnimLayerInterface
{
public:
	void PetFullOverrideLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_PetFullOverrideLayer);
	void PetSkeletalControlLayer(const struct FPoseLink& Pose, float LookAtOverrideInput, const struct FVector& LookAtTargetLocationInput, float LegIKAlphaOverride, float HandIKAlphaOverride, struct FPoseLink* Param_PetSkeletalControlLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PetAnimLayerInterface_C">();
	}
	static class IPetAnimLayerInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPetAnimLayerInterface_C>();
	}
};
static_assert(alignof(IPetAnimLayerInterface_C) == 0x000008, "Wrong alinment on IPetAnimLayerInterface_C");
static_assert(sizeof(IPetAnimLayerInterface_C) == 0x000028, "Wrong size on IPetAnimLayerInterface_C");

}

