#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortSoundCueTemplates

#include "Basic.hpp"

#include "SoundCueTemplates_classes.hpp"


namespace SDK
{

// Class FortSoundCueTemplates.FortSoundCueTemplateBase
// 0x0000 (0x0570 - 0x0570)
class UFortSoundCueTemplateBase : public USoundCueTemplate
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortSoundCueTemplateBase">();
	}
	static class UFortSoundCueTemplateBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSoundCueTemplateBase>();
	}
};
static_assert(alignof(UFortSoundCueTemplateBase) == 0x000008, "Wrong alinment on UFortSoundCueTemplateBase");
static_assert(sizeof(UFortSoundCueTemplateBase) == 0x000570, "Wrong size on UFortSoundCueTemplateBase");

// Class FortSoundCueTemplates.EmoteBase
// 0x0000 (0x0570 - 0x0570)
class UEmoteBase : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmoteBase">();
	}
	static class UEmoteBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteBase>();
	}
};
static_assert(alignof(UEmoteBase) == 0x000008, "Wrong alinment on UEmoteBase");
static_assert(sizeof(UEmoteBase) == 0x000570, "Wrong size on UEmoteBase");

// Class FortSoundCueTemplates.EmoteFoley
// 0x0000 (0x0570 - 0x0570)
class UEmoteFoley final  : public UEmoteBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmoteFoley">();
	}
	static class UEmoteFoley* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteFoley>();
	}
};
static_assert(alignof(UEmoteFoley) == 0x000008, "Wrong alinment on UEmoteFoley");
static_assert(sizeof(UEmoteFoley) == 0x000570, "Wrong size on UEmoteFoley");

// Class FortSoundCueTemplates.EmoteMusic
// 0x0000 (0x0570 - 0x0570)
class UEmoteMusic final  : public UEmoteBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmoteMusic">();
	}
	static class UEmoteMusic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteMusic>();
	}
};
static_assert(alignof(UEmoteMusic) == 0x000008, "Wrong alinment on UEmoteMusic");
static_assert(sizeof(UEmoteMusic) == 0x000570, "Wrong size on UEmoteMusic");

// Class FortSoundCueTemplates.EmoteMusic3P
// 0x0000 (0x0570 - 0x0570)
class UEmoteMusic3P final  : public UEmoteBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmoteMusic3P">();
	}
	static class UEmoteMusic3P* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteMusic3P>();
	}
};
static_assert(alignof(UEmoteMusic3P) == 0x000008, "Wrong alinment on UEmoteMusic3P");
static_assert(sizeof(UEmoteMusic3P) == 0x000570, "Wrong size on UEmoteMusic3P");

// Class FortSoundCueTemplates.GliderOpenClose
// 0x0000 (0x0570 - 0x0570)
class UGliderOpenClose : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GliderOpenClose">();
	}
	static class UGliderOpenClose* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderOpenClose>();
	}
};
static_assert(alignof(UGliderOpenClose) == 0x000008, "Wrong alinment on UGliderOpenClose");
static_assert(sizeof(UGliderOpenClose) == 0x000570, "Wrong size on UGliderOpenClose");

// Class FortSoundCueTemplates.GliderOpen
// 0x0000 (0x0570 - 0x0570)
class UGliderOpen final  : public UGliderOpenClose
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GliderOpen">();
	}
	static class UGliderOpen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderOpen>();
	}
};
static_assert(alignof(UGliderOpen) == 0x000008, "Wrong alinment on UGliderOpen");
static_assert(sizeof(UGliderOpen) == 0x000570, "Wrong size on UGliderOpen");

// Class FortSoundCueTemplates.GliderClose
// 0x0000 (0x0570 - 0x0570)
class UGliderClose final  : public UGliderOpenClose
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GliderClose">();
	}
	static class UGliderClose* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderClose>();
	}
};
static_assert(alignof(UGliderClose) == 0x000008, "Wrong alinment on UGliderClose");
static_assert(sizeof(UGliderClose) == 0x000570, "Wrong size on UGliderClose");

// Class FortSoundCueTemplates.GliderThrustLoop
// 0x0000 (0x0570 - 0x0570)
class UGliderThrustLoop final  : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GliderThrustLoop">();
	}
	static class UGliderThrustLoop* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderThrustLoop>();
	}
};
static_assert(alignof(UGliderThrustLoop) == 0x000008, "Wrong alinment on UGliderThrustLoop");
static_assert(sizeof(UGliderThrustLoop) == 0x000570, "Wrong size on UGliderThrustLoop");

// Class FortSoundCueTemplates.GliderThrustStart
// 0x0000 (0x0570 - 0x0570)
class UGliderThrustStart final  : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GliderThrustStart">();
	}
	static class UGliderThrustStart* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderThrustStart>();
	}
};
static_assert(alignof(UGliderThrustStart) == 0x000008, "Wrong alinment on UGliderThrustStart");
static_assert(sizeof(UGliderThrustStart) == 0x000570, "Wrong size on UGliderThrustStart");

// Class FortSoundCueTemplates.PickaxeBase
// 0x0000 (0x0570 - 0x0570)
class UPickaxeBase : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PickaxeBase">();
	}
	static class UPickaxeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxeBase>();
	}
};
static_assert(alignof(UPickaxeBase) == 0x000008, "Wrong alinment on UPickaxeBase");
static_assert(sizeof(UPickaxeBase) == 0x000570, "Wrong size on UPickaxeBase");

// Class FortSoundCueTemplates.PickaxeImpactEnemy
// 0x0000 (0x0570 - 0x0570)
class UPickaxeImpactEnemy final  : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PickaxeImpactEnemy">();
	}
	static class UPickaxeImpactEnemy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxeImpactEnemy>();
	}
};
static_assert(alignof(UPickaxeImpactEnemy) == 0x000008, "Wrong alinment on UPickaxeImpactEnemy");
static_assert(sizeof(UPickaxeImpactEnemy) == 0x000570, "Wrong size on UPickaxeImpactEnemy");

// Class FortSoundCueTemplates.PickaxeReady
// 0x0000 (0x0570 - 0x0570)
class UPickaxeReady final  : public UPickaxeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PickaxeReady">();
	}
	static class UPickaxeReady* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxeReady>();
	}
};
static_assert(alignof(UPickaxeReady) == 0x000008, "Wrong alinment on UPickaxeReady");
static_assert(sizeof(UPickaxeReady) == 0x000570, "Wrong size on UPickaxeReady");

// Class FortSoundCueTemplates.PickaxeSwing
// 0x0000 (0x0570 - 0x0570)
class UPickaxeSwing final  : public UPickaxeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PickaxeSwing">();
	}
	static class UPickaxeSwing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxeSwing>();
	}
};
static_assert(alignof(UPickaxeSwing) == 0x000008, "Wrong alinment on UPickaxeSwing");
static_assert(sizeof(UPickaxeSwing) == 0x000570, "Wrong size on UPickaxeSwing");

}

