#pragma once
#include <string>
#include "SDK.hpp"
#include <vector>
#include <map>

using namespace SDK;
using namespace std;

static void (*ServerReplicateActors)(UReplicationDriver* ReplicationDriver) = decltype(ServerReplicateActors)(__int64(GetModuleHandleW(0)) + 0x195CA60);
static __int64 (*CantBuild)(UWorld*, UObject*, FVector, FRotator, char, void*, char*) = decltype(CantBuild)(__int64(GetModuleHandleW(0)) + 0x29791F0);
static ABuildingSMActor* (*ReplaceBuildingActor)(ABuildingSMActor* BuildingSMActor, unsigned int a2, UObject* a3, unsigned int a4, int a5, bool bMirrored, AFortPlayerControllerAthena* PC) = decltype(ReplaceBuildingActor)(__int64(GetModuleHandleW(0)) + 0x2612500);
inline UObject* (*StaticLoadObjectOG)(UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, uint32_t LoadFlags, UObject* Sandbox, bool bAllowObjectReconciliation, void*) = decltype(StaticLoadObjectOG)(__int64(GetModuleHandleW(0)) + 0x3AEB950);
static void (*RemoveFromAlivePlayers)(UObject* GameMode, UObject* PlayerController, APlayerState* PlayerState, APawn* FinisherPawn, UFortWeaponItemDefinition* FinishingWeapon, uint8_t DeathCause, char a7) = decltype(RemoveFromAlivePlayers)(InSDKUtils::GetImageBase() + 0x2319280);
static void (*AddToAlivePlayers)(UObject*, UObject*) = decltype(AddToAlivePlayers)(InSDKUtils::GetImageBase() + 0x22E9560);
static void (*OnResurrectionCompleted)(UObject*, int) = decltype(OnResurrectionCompleted)(InSDKUtils::GetImageBase() + 0x327F700);
static UConversationRegistry* (*GetRegistryFromWorld)(UWorld*) = decltype(GetRegistryFromWorld)(InSDKUtils::GetImageBase() + 0xD5A530);
static UConversationNode* (*GetRuntimeNodeFromGuid)(UConversationRegistry* ConversationRegistry, FGuid& NodeGuid) = decltype(GetRuntimeNodeFromGuid)(InSDKUtils::GetImageBase() + 0xD5FE10);
static EConversationRequirementResult(*CheckRequirements)(UConversationTaskNode* Node, FConversationContext& InContext) = decltype(CheckRequirements)(InSDKUtils::GetImageBase() + 0xD5D740);
static void(*BuildDependenciesGraph)(UConversationRegistry*) = decltype(BuildDependenciesGraph)(InSDKUtils::GetImageBase() + 0xD5C410);
static UConversationDatabase*(*GetConversationFromNodeGUID)(UConversationRegistry*, FGuid& NodeGUID) = decltype(GetConversationFromNodeGUID)(InSDKUtils::GetImageBase() + 0xD5F480);
static FDateTime* (*MakeFDateTime)(FDateTime* DateTime, int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second, int32 Millisecond) = decltype(MakeFDateTime)(InSDKUtils::GetImageBase() + 0x385D500);

inline vector<UDataTable*> LootPackages{};
inline vector<UDataTable*> LootTierData{};

inline bool IsLootingEnabled = true;
inline bool EnableSiphon = true;
inline UFortAthenaAISpawnerDataComponentList* GlobalList = nullptr;
inline FName SpectatingName;
inline FName WaitingToStartName;
inline FName LeavingMapName;
inline FName WaitingPostMatchName;
inline std::vector<UAthenaCharacterItemDefinition*> CharacterItemDefs;
inline std::vector<UAthenaBackpackItemDefinition*> BackpackItemDefs;
inline std::vector<UAthenaDanceItemDefinition*> EmoteItemDefs;
inline vector<FVector> PoiLocs{ { -11264, -82176, -1152 },
            { -33024, -77312, -3456 },
            { -80896, -81152, -6148 },
            { -94975, -35328, -384 },
            { -65280, -16384, -2304 },
            { -97024, -27648, -2304 },
            { -80384, -92924, -768 },
            { 18432, 114432, -2688 },
            { -38911, -95999, 4992 },
            { -70144, 79616, 5376 },
            { -89600, 30976, 1536 },
            { -49408, 54272, 2688 },
            { -38912, -17664, -4224 },
            { 28160, 42752, -1152 },
            { 11776, -23296, -768 },
            { -29440, -30720, -2688 },
            { -64512, -45824, -3072 } };

inline bool LateGame = false;

template<typename T>
inline T* StaticLoadObject(std::string name)
{
	auto Name = std::wstring(name.begin(), name.end()).c_str();
	return (T*)StaticLoadObjectOG(T::StaticClass(), nullptr, Name, nullptr, 0, nullptr, false, nullptr);
}

inline EConversationRequirementResult(*CheckRequirementsOG)(UConversationTaskNode* Node, FConversationContext& InContext);/* = decltype(CheckRequirements)(InSDKUtils::GetImageBase() + 0xD5D740);*/

inline EConversationRequirementResult CheckRequirementsHook(UConversationTaskNode* Node, FConversationContext& InContext)//proper
{
    static auto BountyClass = StaticLoadObject<UClass>("/Bounties/HuntingPlayer/Conversations/GrantPlayerBounty.GrantPlayerBounty_C");
    if (!Node || Node->Class == BountyClass)
        return EConversationRequirementResult::Passed;
    return CheckRequirementsOG(Node, InContext);
}

inline float FastAsin(float Value)
{
    // Clamp input to [-1,1].
    bool nonnegative = (Value >= 0.0f);
    float x = UKismetMathLibrary::Abs(Value);
    float omx = 1.0f - x;
    if (omx < 0.0f)
    {
        omx = 0.0f;
    }
    float root = UKismetMathLibrary::Sqrt(omx);
    // 7-degree minimax approximation
    float result = ((((((-0.0012624911f * x + 0.0066700901f) * x - 0.0170881256f) * x + 0.0308918810f) * x - 0.0501743046f) * x + 0.0889789874f) * x - 0.2145988016f) * x + 1.5707963050f;
    result *= root;  // acos(|x|)
    // acos(x) = pi - acos(-x) when x < 0, asin(x) = pi/2 - acos(x)
    return (nonnegative ? 1.5707963050f - result : result - 1.5707963050f);
}

inline FRotator FQuatToRot(FQuat Quat)
{
    const float SingularityTest = Quat.Z * Quat.X - Quat.W * Quat.Y;
    const float YawY = 2.f * (Quat.W * Quat.Z + Quat.X * Quat.Y);
    const float YawX = (1.f - 2.f * (UKismetMathLibrary::Square(Quat.Y) + UKismetMathLibrary::Square(Quat.Z)));
    const float PI = 3.1415926535897932f;

    // reference 
    // http://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
    // http://www.euclideanspace.com/maths/geometry/rotations/conversions/quaternionToEuler/

    // this value was found from experience, the above websites recommend different values
    // but that isn't the case for us, so I went through different testing, and finally found the case 
    // where both of world lives happily. 
    const float SINGULARITY_THRESHOLD = 0.4999995f;
    const float RAD_TO_DEG = (180.f) / PI;
    FRotator RotatorFromQuat;

    if (SingularityTest < -SINGULARITY_THRESHOLD)
    {
        RotatorFromQuat.Pitch = -90.f;
        RotatorFromQuat.Yaw = UKismetMathLibrary::Atan2(YawY, YawX) * RAD_TO_DEG;
        RotatorFromQuat.Roll = UKismetMathLibrary::NormalizeAxis(-RotatorFromQuat.Yaw - (2.f * UKismetMathLibrary::Atan2(Quat.X, Quat.W) * RAD_TO_DEG));
    }
    else if (SingularityTest > SINGULARITY_THRESHOLD)
    {
        RotatorFromQuat.Pitch = 90.f;
        RotatorFromQuat.Yaw = UKismetMathLibrary::Atan2(YawY, YawX) * RAD_TO_DEG;
        RotatorFromQuat.Roll = UKismetMathLibrary::NormalizeAxis(RotatorFromQuat.Yaw - (2.f * UKismetMathLibrary::Atan2(Quat.X, Quat.W) * RAD_TO_DEG));
    }
    else
    {
        RotatorFromQuat.Pitch = FastAsin(2.f * (SingularityTest)) * RAD_TO_DEG;
        RotatorFromQuat.Yaw = UKismetMathLibrary::Atan2(YawY, YawX) * RAD_TO_DEG;
        RotatorFromQuat.Roll = UKismetMathLibrary::Atan2(-2.f * (Quat.W * Quat.X + Quat.Y * Quat.Z), (1.f - 2.f * (UKismetMathLibrary::Square(Quat.X) + UKismetMathLibrary::Square(Quat.Y)))) * RAD_TO_DEG;
    }

    return RotatorFromQuat;
}

inline int GetOffset(UObject* Object, string name)
{
    FProperty* Property = nullptr;

    for (UStruct* Cls = Object->Class; Cls; Cls = Cls->Super)
    {
        FField* ChildProperties = Cls->ChildProperties;
        if (ChildProperties)
        {
            Property = (FProperty*)ChildProperties;
            string PropStr = ChildProperties->Name.ToString();
            while (Property)
            {
                if (PropStr == name)
                    return Property->Offset;

                Property = (FProperty*)Property->Next;
                PropStr = Property ? Property->Name.ToString() : "Invalid Property";
            }
        }
    }
    if (!Property)
        return 0;
    return Property->Offset;
}

namespace Utils
{
	void Log(std::string Str);
	void SwapVFTs(void* Base, uintptr_t Index, void* Detour, void** Original = nullptr);
    AFortPickupAthena* SpawnPickup(FVector, UFortItemDefinition*, EFortPickupSourceTypeFlag, EFortPickupSpawnSource, int Count = 1, int LoadedAmmo = 0); 


    template<typename T>
    inline vector<T*> GetAllObjectsOfClass(UClass* Class = T::StaticClass())
    {
        std::vector<T*> Objects{};

        for (int i = 0; i < UObject::GObjects->Num(); ++i)
        {
            UObject* Object = UObject::GObjects->GetByIndex(i);

            if (!Object)
                continue;

            if (Object->GetFullName().contains("Default"))
                continue;

            if (Object->GetFullName().contains("Test"))
                continue;

            if (Object->IsA(Class) && !Object->IsDefaultObject())
            {
                Objects.push_back((T*)Object);
            }
        }

        return Objects;
    }

	inline void sinCos(float* ScalarSin, float* ScalarCos, float Value)
	{
		float quotient = (0.31830988618f * 0.5f) * Value;
		if (Value >= 0.0f)
		{
			quotient = (float)((int)(quotient + 0.5f));
		}
		else
		{
			quotient = (float)((int)(quotient - 0.5f));
		}
		float y = Value - (2.0f * 3.1415926535897932f) * quotient;

		float sign;
		if (y > 1.57079632679f)
		{
			y = 3.1415926535897932f - y;
			sign = -1.0f;
		}
		else if (y < -1.57079632679f)
		{
			y = -3.1415926535897932f - y;
			sign = -1.0f;
		}
		else
		{
			sign = +1.0f;
		}

		float y2 = y * y;

		*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

		float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
		*ScalarCos = sign * p;
	}

	inline FQuat FRotToQuat(FRotator Rot)
	{
		const float DEG_TO_RAD = 3.1415926535897932f / (180.f);
		const float DIVIDE_BY_2 = DEG_TO_RAD / 2.f;
		float SP, SY, SR;
		float CP, CY, CR;

		sinCos(&SP, &CP, Rot.Pitch * DIVIDE_BY_2);
		sinCos(&SY, &CY, Rot.Yaw * DIVIDE_BY_2);
		sinCos(&SR, &CR, Rot.Roll * DIVIDE_BY_2);

		FQuat RotationQuat;
		RotationQuat.X = CR * SP * SY - SR * CP * CY;
		RotationQuat.Y = -CR * SP * CY - SR * CP * SY;
		RotationQuat.Z = CR * CP * SY - SR * SP * CY;
		RotationQuat.W = CR * CP * CY + SR * SP * SY;

		return RotationQuat;
	}

	template<typename T>
	inline T* SpawnActor(FVector Loc, FRotator Rot = FRotator(), AActor* Owner = nullptr, SDK::UClass* Class = T::StaticClass(), ESpawnActorCollisionHandlingMethod Handle = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn)
	{
		FTransform Transform{};
		Transform.Scale3D = FVector{ 1,1,1 };
		Transform.Translation = Loc;
		Transform.Rotation = FRotToQuat(Rot);
		return (T*)UGameplayStatics::FinishSpawningActor(UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), Class, Transform, Handle, Owner), Transform);
	}

	template<typename T>
	inline T* Cast(UObject* Object)
	{
		if (!Object || !Object->IsA(T::StaticClass()))
			return nullptr;
		return (T*)Object;
	}
}

template <int32 NumElements>
class TInlineAllocator
{
private:
    template <int32 Size, int32 Alignment>
    struct alignas(Alignment) TAlligendBytes
    {
        uint8 Pad[Size];
    };

    template <typename ElementType>
    struct TTypeCompatibleBytes : public TAlligendBytes<sizeof(ElementType), alignof(ElementType)>
    {
    };

public:
    template <typename ElementType>
    class ForElementType
    {
        friend class TBitArray;

    public:
        TTypeCompatibleBytes<ElementType> InlineData[NumElements];

        ElementType* SecondaryData;

    public:

        FORCEINLINE int32 NumInlineBytes() const
        {
            return sizeof(ElementType) * NumElements;
        }
        FORCEINLINE int32 NumInlineBits() const
        {
            return NumInlineBytes() * 8;
        }

        FORCEINLINE ElementType& operator[](int32 Index)
        {
            return *(ElementType*)(&InlineData[Index]);
        }
        FORCEINLINE const ElementType& operator[](int32 Index) const
        {
            return *(ElementType*)(&InlineData[Index]);
        }

        FORCEINLINE void operator=(void* InElements)
        {
            SecondaryData = (ElementType*)InElements;
        }

        FORCEINLINE ElementType& GetInlineElement(int32 Index)
        {
            return *(ElementType*)(&InlineData[Index]);
        }
        FORCEINLINE const ElementType& GetInlineElement(int32 Index) const
        {
            return *(ElementType*)(&InlineData[Index]);
        }
        FORCEINLINE ElementType& GetSecondaryElement(int32 Index)
        {
            return SecondaryData[Index];
        }
        FORCEINLINE const ElementType& GetSecondaryElement(int32 Index) const
        {
            return SecondaryData[Index];
        }
    };
};

class TBitArray
{
private:
    template <typename ArrayType>
    friend class TSparseArray;
    template <typename SetType>
    friend class MTSet;

public:
    TInlineAllocator<4>::ForElementType<uint32> Data;
    int32 NumBits;
    int32 MaxBits;

    struct FRelativeBitReference
    {
    public:
        FORCEINLINE explicit FRelativeBitReference(int32 BitIndex)
            : DWORDIndex(BitIndex >> 5)
            , Mask(1 << (BitIndex & 31))
        {
        }

        int32 DWORDIndex;
        uint32 Mask;
    };

public:
    struct FBitReference
    {
        FORCEINLINE FBitReference(uint32& InData, uint32 InMask)
            : Data(InData)
            , Mask(InMask)
        {
        }
        FORCEINLINE const FBitReference(const uint32& InData, const uint32 InMask)
            : Data(const_cast<uint32&>(InData))
            , Mask(InMask)
        {
        }

        FORCEINLINE void SetBit(const bool Value)
        {
            Value ? Data |= Mask : Data &= ~Mask;
        }

        FORCEINLINE operator bool() const
        {
            return (Data & Mask) != 0;
        }
        FORCEINLINE void operator=(const bool Value)
        {
            this->SetBit(Value);
        }

    private:
        uint32& Data;
        uint32 Mask;
    };

public:
    class FBitIterator : public FRelativeBitReference
    {
    private:
        int32 Index;
        const TBitArray& IteratedArray;

    public:
        FORCEINLINE const FBitIterator(const TBitArray& ToIterate, const int32 StartIndex)
            : IteratedArray(ToIterate)
            , Index(StartIndex)
            , FRelativeBitReference(StartIndex)
        {
        }
        FORCEINLINE const FBitIterator(const TBitArray& ToIterate)
            : IteratedArray(ToIterate)
            , Index(ToIterate.NumBits)
            , FRelativeBitReference(ToIterate.NumBits)
        {
        }

        FORCEINLINE explicit operator bool() const
        {
            return Index < IteratedArray.Num();
        }
        FORCEINLINE FBitIterator& operator++()
        {
            ++Index;
            this->Mask <<= 1;
            if (!this->Mask)
            {
                this->Mask = 1;
                ++this->DWORDIndex;
            }
            return *this;
        }
        FORCEINLINE bool operator*() const
        {
            if (IteratedArray.NumBits < IteratedArray.Data.NumInlineBits())
            {
                return (bool)FBitReference(IteratedArray.Data.GetInlineElement(this->DWORDIndex), this->Mask);
            }
            else
            {
                return (bool)FBitReference(IteratedArray.Data.GetSecondaryElement(this->DWORDIndex), this->Mask);
            }
        }
        FORCEINLINE bool operator==(const FBitIterator& OtherIt) const
        {
            return Index == OtherIt.Index;
        }
        FORCEINLINE bool operator!=(const FBitIterator& OtherIt) const
        {
            return Index < OtherIt.Index;
        }
        FORCEINLINE bool operator < (const int32 Other) const
        {
            return Index < Other;
        }
        FORCEINLINE bool operator > (const int32 Other) const
        {
            return Index < Other;
        }

        FORCEINLINE int32 GetIndex() const
        {
            return Index;
        }
    };

    class FSetBitIterator : public FRelativeBitReference
    {
    private:
        const TBitArray& IteratedArray;

        uint32 UnvisitedBitMask;
        int32  CurrentBitIndex;
        int32  BaseBitIndex;

    public:
        FORCEINLINE FSetBitIterator(const TBitArray& ToIterate, int32 StartIndex)
            : FRelativeBitReference(StartIndex)
            , IteratedArray(const_cast<TBitArray&>(ToIterate))
            , UnvisitedBitMask((~0U) << (StartIndex & (((int32)32) - 1)))
            , CurrentBitIndex(StartIndex)
            , BaseBitIndex(StartIndex & ~(((int32)32) - 1))
        {
            if (StartIndex != IteratedArray.NumBits)
            {
                FindNexMTSetBit();
            }
        }
        FORCEINLINE FSetBitIterator(const TBitArray& ToIterate)
            : FRelativeBitReference(ToIterate.NumBits)
            , IteratedArray(const_cast<TBitArray&>(ToIterate))
            , UnvisitedBitMask(0)
            , CurrentBitIndex(ToIterate.NumBits)
            , BaseBitIndex(ToIterate.NumBits)
        {
        }

        FORCEINLINE FSetBitIterator& operator++()
        {
            UnvisitedBitMask &= ~this->Mask;

            FindNexMTSetBit();

            return *this;
        }
        FORCEINLINE bool operator*() const
        {
            return true;
        }

        FORCEINLINE bool operator==(const FSetBitIterator& Other) const
        {
            return CurrentBitIndex == Other.CurrentBitIndex;
        }
        FORCEINLINE bool operator!=(const FSetBitIterator& Other) const
        {
            return CurrentBitIndex < Other.CurrentBitIndex;
        }

        FORCEINLINE explicit operator bool() const
        {
            return CurrentBitIndex < IteratedArray.NumBits;
        }

        FORCEINLINE int32 GetIndex() const
        {
            return CurrentBitIndex;
        }

    private:

        void FindNexMTSetBit()
        {
            const uint32* ArrayData = (IteratedArray.Data.SecondaryData ? IteratedArray.Data.SecondaryData : (uint32*)&IteratedArray.Data.InlineData);

            const int32 ArrayNum = IteratedArray.NumBits;
            const int32 LastDWORDIndex = (ArrayNum - 1) / 32;

            uint32 RemainingBitMask = ArrayData[this->DWORDIndex] & UnvisitedBitMask;
            while (!RemainingBitMask)
            {
                ++this->DWORDIndex;
                BaseBitIndex += 32;

                if (this->DWORDIndex > LastDWORDIndex)
                {
                    CurrentBitIndex = ArrayNum;
                    return;
                }

                RemainingBitMask = ArrayData[this->DWORDIndex];
                UnvisitedBitMask = ~0;
            }

            const uint32 NewRemainingBitMask = RemainingBitMask & (RemainingBitMask - 1);

            this->Mask = NewRemainingBitMask ^ RemainingBitMask;

            uint32 Wowie;
            unsigned long Log2;
            if (_BitScanReverse(&Log2, this->Mask) != 0)
            {
                Wowie = 31 - Log2;
            }
            else
            {
                Wowie = 32;
            }

            CurrentBitIndex = BaseBitIndex + 32 - 1 - Wowie;

            if (CurrentBitIndex > ArrayNum)
            {
                CurrentBitIndex = ArrayNum;
            }
        }
    };

public:
    FORCEINLINE FBitIterator Iterator(int32 StartIndex)
    {
        return FBitIterator(*this, StartIndex);
    }
    FORCEINLINE FSetBitIterator SetBitIterator(int32 StartIndex)
    {
        return FSetBitIterator(*this, StartIndex);
    }

    FORCEINLINE FBitIterator begin()
    {
        return FBitIterator(*this, 0);
    }
    FORCEINLINE const FBitIterator begin() const
    {
        return FBitIterator(*this, 0);
    }
    FORCEINLINE FBitIterator end()
    {
        return FBitIterator(*this);
    }
    FORCEINLINE const FBitIterator end() const
    {
        return  FBitIterator(*this);
    }

    FORCEINLINE FSetBitIterator SetBitsItBegin()
    {
        return FSetBitIterator(*this, 0);
    }
    FORCEINLINE const FSetBitIterator SetBitsItBegin() const
    {
        return FSetBitIterator(*this, 0);
    }
    FORCEINLINE const FSetBitIterator SetBitsItEnd()
    {
        return FSetBitIterator(*this);
    }
    FORCEINLINE const FSetBitIterator SetBitsItEnd() const
    {
        return FSetBitIterator(*this);
    }

    FORCEINLINE int32 Num() const
    {
        return NumBits;
    }
    FORCEINLINE int32 Max() const
    {
        return MaxBits;
    }
    FORCEINLINE bool IsSet(int32 Index) const
    {
        return *FBitIterator(*this, Index);
    }
    FORCEINLINE void Set(const int32 Index, const bool Value, bool bIsSettingAllZero = false)
    {
        const int32 DWORDIndex = (Index >> ((int32)5));
        const int32 Mask = (1 << (Index & (((int32)32) - 1)));

        if (!bIsSettingAllZero)
            NumBits = Index >= NumBits ? Index < MaxBits ? Index + 1 : NumBits : NumBits;

        FBitReference(Data[DWORDIndex], Mask).SetBit(Value);
    }
    FORCEINLINE void ZeroAll()
    {
        for (int i = 0; i < MaxBits; i++)
        {
            Set(i, false, true);
        }
    }
};

template <typename ElementType>
union TSparseArrayElementOrListLink
{
    TSparseArrayElementOrListLink(ElementType& InElement)
        : ElementData(InElement)
    {
    }
    TSparseArrayElementOrListLink(ElementType&& InElement)
        : ElementData(InElement)
    {
    }

    TSparseArrayElementOrListLink(int32 InPrevFree, int32 InNextFree)
        : PrevFreeIndex(InPrevFree)
        , NextFreeIndex(InNextFree)
    {
    }

    TSparseArrayElementOrListLink<ElementType> operator=(const TSparseArrayElementOrListLink<ElementType>& Other)
    {
        return TSparseArrayElementOrListLink(Other.NextFreeIndex, Other.PrevFreeIndex);
    }

    ElementType ElementData;
    struct
    {
        int32 PrevFreeIndex;
        int32 NextFreeIndex;
    };
};

template <typename ArrayType>
class TSparseArray
{
private:
    template <typename SetType>
    friend class MTSet;

public:
    typedef TSparseArrayElementOrListLink<ArrayType> FSparseArrayElement;

public:
    TArray<FSparseArrayElement> Data;
    TBitArray AllocationFlags;
    int32 FirstFreeIndex;
    int32 NumFreeIndices;

public:
    class FBaseIterator
    {
    private:
        TSparseArray<ArrayType>& IteratedArray;
        TBitArray::FSetBitIterator BitArrayIt;

    public:
        FORCEINLINE FBaseIterator(const TSparseArray<ArrayType>& Array, const TBitArray::FSetBitIterator BitIterator)
            : IteratedArray(const_cast<TSparseArray<ArrayType>&>(Array))
            , BitArrayIt(const_cast<TBitArray::FSetBitIterator&>(BitIterator))
        {
        }

        FORCEINLINE explicit operator bool() const
        {
            return (bool)BitArrayIt;
        }
        FORCEINLINE TSparseArray<ArrayType>::FBaseIterator& operator++()
        {
            ++BitArrayIt;
            return *this;
        }
        FORCEINLINE ArrayType& operator*()
        {
            return IteratedArray[BitArrayIt.GetIndex()].ElementData;
        }
        FORCEINLINE const ArrayType& operator*() const
        {
            return IteratedArray[BitArrayIt.GetIndex()].ElementData;
        }
        FORCEINLINE ArrayType* operator->()
        {
            return &IteratedArray[BitArrayIt.GetIndex()].ElementData;
        }
        FORCEINLINE const ArrayType* operator->() const
        {
            return &IteratedArray[BitArrayIt.GetIndex()].ElementData;
        }
        FORCEINLINE bool operator==(const TSparseArray<ArrayType>::FBaseIterator& Other) const
        {
            return BitArrayIt == Other.BitArrayIt;
        }
        FORCEINLINE bool operator!=(const TSparseArray<ArrayType>::FBaseIterator& Other) const
        {
            return BitArrayIt != Other.BitArrayIt;
        }

        FORCEINLINE int32 GetIndex() const
        {
            return BitArrayIt.GetIndex();
        }
        FORCEINLINE bool IsElementValid() const
        {
            return *BitArrayIt;
        }
    };

public:
    FORCEINLINE TSparseArray<ArrayType>::FBaseIterator begin()
    {
        return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
    }
    FORCEINLINE const TSparseArray<ArrayType>::FBaseIterator begin() const
    {
        return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
    }
    FORCEINLINE TSparseArray<ArrayType>::FBaseIterator end()
    {
        return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
    }
    FORCEINLINE const TSparseArray<ArrayType>::FBaseIterator end() const
    {
        return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
    }

    FORCEINLINE FSparseArrayElement& operator[](uint32 Index)
    {
        return *(FSparseArrayElement*)&Data.At(Index).ElementData;
    }
    FORCEINLINE const FSparseArrayElement& operator[](uint32 Index) const
    {
        return *(const FSparseArrayElement*)&Data.At(Index).ElementData;
    }

    FORCEINLINE int32 Num()
    {
        return Data.Num() - NumFreeIndices;
    }
    FORCEINLINE int32 GetNumFreeIndices() const
    {
        return NumFreeIndices;
    }
    FORCEINLINE int32 GetFirstFreeIndex() const
    {
        return FirstFreeIndex;
    }
    FORCEINLINE const TArray<FSparseArrayElement>& GetData() const
    {
        return Data;
    }
    FORCEINLINE const TBitArray& GetAllocationFlags() const
    {
        return AllocationFlags;
    }
    FORCEINLINE bool IsIndexValid(int32 IndexToCheck) const
    {
        return AllocationFlags.IsSet(IndexToCheck);
    }

    FORCEINLINE bool RemoveAt(const int32 IndexToRemove)
    {
        if (IndexToRemove >= 0 && IndexToRemove < Data.Num() && AllocationFlags.IsSet(IndexToRemove))
        {
            int32 PreviousFreeIndex = -1;
            int32 NextFreeIndex = -1;

            if (NumFreeIndices == 0)
            {
                FirstFreeIndex = IndexToRemove;
                Data[IndexToRemove] = { -1, -1 };
            }
            else
            {
                for (auto It = AllocationFlags.begin(); It != AllocationFlags.end(); ++It)
                {
                    if (!It)
                    {
                        if (It.GetIndex() < IndexToRemove)
                        {
                            Data[IndexToRemove].PrevFreeIndex = It.GetIndex();
                        }
                        else if (It.GetIndex() > IndexToRemove)
                        {
                            Data[IndexToRemove].NextFreeIndex = It.GetIndex();
                            break;
                        }
                    }
                }
            }
            AllocationFlags.Set(IndexToRemove, false);
            NumFreeIndices++;

            return true;
        }
        return false;
    }
    FORCEINLINE int32 Add(ArrayType InElement)
    {
        FSparseArrayElement Element(InElement);

        int32 NextFree;
        int32 OutIndex;
        if (FirstFreeIndex >= 1)
        {
            NextFree = Data[FirstFreeIndex].NextFreeIndex;
            Data[FirstFreeIndex] = Element;
            --NumFreeIndices;

            AllocationFlags.Set(FirstFreeIndex, true);

            if (NumFreeIndices >= 1)
            {
                OutIndex = NextFree;
                FirstFreeIndex = NextFree;
                Data[NextFree].PrevFreeIndex = -1;

                return OutIndex;
            }
        }
        else
        {
            Data.Add(Element);
            AllocationFlags.Set(Data.Num() - 1, true);

            return Data.Num() - 1;
        }
    }
};

template <typename ElementType>
class MTSetElement
{
public:
    ElementType Value;
    mutable int32 HashNextId;
    mutable int32 HashIndex;

    MTSetElement(ElementType InValue, int32 InHashNextId, int32 InHashIndex)
        : Value(InValue)
        , HashNextId(InHashNextId)
        , HashIndex(InHashIndex)
    {
    }

    FORCEINLINE MTSetElement<ElementType>& operator=(const MTSetElement<ElementType>& Other)
    {
        Value = Other.Value;
    }

    FORCEINLINE bool operator==(const MTSetElement& Other) const
    {
        return Value == Other.Value;
    }
    FORCEINLINE bool operator!=(const MTSetElement& Other) const
    {
        return Value != Other.Value;
    }
};

template <typename SetType>
class MTSet
{
private:
    friend TSparseArray;

public:
    typedef MTSetElement<SetType> ElementType;
    typedef TSparseArrayElementOrListLink<ElementType> ArrayElementType;

    TSparseArray<ElementType> Elements;

    mutable TInlineAllocator<1>::ForElementType<int> Hash;
    mutable int32 HashSize;

public:
    class FBaseIterator
    {
    private:
        MTSet<SetType>& IteratedSet;
        TSparseArray<ElementType>::FBaseIterator ElementIt;

    public:
        FORCEINLINE FBaseIterator(const MTSet<SetType>& InSet, TSparseArray<MTSetElement<SetType>>::FBaseIterator InElementIt)
            : IteratedSet(const_cast<MTSet<SetType>&>(InSet))
            , ElementIt(InElementIt)
        {
        }

        FORCEINLINE explicit operator bool() const
        {
            return (bool)ElementIt;
        }
        FORCEINLINE MTSet<SetType>::FBaseIterator& operator++()
        {
            ++ElementIt;
            return *this;
        }
        FORCEINLINE bool operator==(const MTSet<SetType>::FBaseIterator& OtherIt) const
        {
            return ElementIt == OtherIt.ElementIt;
        }
        FORCEINLINE bool operator!=(const MTSet<SetType>::FBaseIterator& OtherIt) const
        {
            return ElementIt != OtherIt.ElementIt;
        }
        FORCEINLINE MTSet<SetType>::FBaseIterator& operator=(MTSet<SetType>::FBaseIterator& OtherIt)
        {
            return ElementIt = OtherIt.ElementIt;
        }
        FORCEINLINE SetType& operator*()
        {
            return (*ElementIt).Value;
        }
        FORCEINLINE const SetType& operator*() const
        {
            return &((*ElementIt).Value);
        }
        FORCEINLINE SetType* operator->()
        {
            return &((*ElementIt).Value);
        }
        FORCEINLINE const SetType* operator->() const
        {
            return &(*ElementIt).Value;
        }
        FORCEINLINE const int32 GetIndex() const
        {
            return ElementIt.GetIndex();
        }
        FORCEINLINE ElementType& GeMTSetElement()
        {
            return *ElementIt;
        }
        FORCEINLINE const ElementType& GeMTSetElement() const
        {
            return *ElementIt;
        }
        FORCEINLINE bool IsElementValid() const
        {
            return ElementIt.IsElementValid();
        }
    };

public:
    FORCEINLINE MTSet<SetType>::FBaseIterator begin()
    {
        return MTSet<SetType>::FBaseIterator(*this, Elements.begin());
    }
    FORCEINLINE const MTSet<SetType>::FBaseIterator begin() const
    {
        return MTSet<SetType>::FBaseIterator(*this, Elements.begin());
    }
    FORCEINLINE MTSet<SetType>::FBaseIterator end()
    {
        return MTSet<SetType>::FBaseIterator(*this, Elements.end());
    }
    FORCEINLINE const MTSet<SetType>::FBaseIterator end() const
    {
        return MTSet<SetType>::FBaseIterator(*this, Elements.end());
    }

    FORCEINLINE SetType& operator[](int Index)
    {
        return Elements[Index].ElementData.Value;
    }

    FORCEINLINE int32 Num()
    {
        return Elements.Num();
    }
    FORCEINLINE bool IsValid() const
    {
        return Elements.Data.Data != nullptr && Elements.AllocationFlags.MaxBits > 0;
    }
    FORCEINLINE TSparseArray<ElementType>& GetElements()
    {
        return Elements;
    }
    FORCEINLINE const TSparseArray<ElementType>& GetElements() const
    {
        return Elements;
    }
    FORCEINLINE const TBitArray& GetAllocationFlags() const
    {
        return Elements.GetAllocationFlags();
    }
    FORCEINLINE bool IsIndexValid(int32 IndexToCheck) const
    {
        return Elements.IsIndexValid(IndexToCheck);
    }
    FORCEINLINE const bool Contains(const SetType& ElementToLookFor) const
    {
        if (Num() <= 0)
            return false;

        for (SetType Element : *this)
        {
            if (Element == ElementToLookFor)
                return true;
        }
        return false;
    }
    FORCEINLINE const int32 Find(const SetType& ElementToLookFor) const
    {
        for (auto It = this->begin(); It != this->end(); ++It)
        {
            if (*It == ElementToLookFor)
            {
                return It.GetIndex();
            }
        }
        return -1;
    }
    FORCEINLINE bool Remove(const SetType& ElementToRemove)
    {
        return Elements.RemoveAt(Find(ElementToRemove));
    }
    FORCEINLINE int32 AddSingle(SetType InElement, int32 InHashIndex = 0, int32 InHashNextId = 0)
    {
        if (!this->IsValid())
        {
            this->Initialize();
            return 0;
        }

        return Elements.Add({ InElement, InHashIndex, InHashNextId });
    }
    FORCEINLINE void Initialize(const int32 NumElementsToInitWith = 5)
    {
        if (this->IsValid())
            return;

        Elements.Data.MaxElements = NumElementsToInitWith;
        Elements.Data.Count = NumElementsToInitWith;
        Elements.Data.Data = (ArrayElementType*)(FMemory_Realloc(0, NumElementsToInitWith * sizeof(ElementType), alignof(ElementType)));
        for (int i = 0; i < NumElementsToInitWith; i++)
        {
            Elements.Data.Data[i].PrevFreeIndex = i - 1;
            Elements.Data.Data[i].NextFreeIndex = i + 1;
        }

        Elements.FirstFreeIndex = 0;
        Elements.NumFreeIndices = NumElementsToInitWith;

        Elements.AllocationFlags.MaxBits = 128;
        Elements.AllocationFlags.NumBits = NumElementsToInitWith;
        Elements.AllocationFlags.ZeroAll();

        Hash = FMemory_Realloc(0, NumElementsToInitWith * sizeof(ElementType), alignof(ElementType));
        HashSize = NumElementsToInitWith * sizeof(ElementType);
    }
    void Reset()
    {
        if (Num() == 0)
            return;
        UnhashElements();
    }
    void UnhashElements()
    {
        ElementType* HashPtr = Hash.GetInlineElement();

        if (Num() < (HashSize / 4))
        {
            for (const ElementType& Element : Elements)
            {
                HashPtr[Element.HashIndex].Index = -1;
            }
        }
        else
        {
            for (int32 I = 0; I < HashSize; ++I)
            {
                HashPtr[I].Index = -1;
            }
        }
    }
};

template <typename KeyType, typename ValueType>
class MTPair
{
private:
    KeyType First;
    ValueType Second;

public:
    MTPair(KeyType Key, ValueType Value)
        : First(Key)
        , Second(Value)
    {
    }

public:
    FORCEINLINE KeyType& Key()
    {
        return First;
    }
    FORCEINLINE const KeyType& Key() const
    {
        return First;
    }
    FORCEINLINE ValueType& Value()
    {
        return Second;
    }
    FORCEINLINE const ValueType& Value() const
    {
        return Second;
    }
};

template <typename KeyType, typename ValueType>
class MTMap
{
public:
    typedef MTPair<KeyType, ValueType> ElementType;

    MTSet<ElementType> Pairs;

public:
    class FBaseIterator
    {
    private:
        MTMap<KeyType, ValueType>& IteratedMap;
        MTSet<ElementType>::FBaseIterator SetIt;

    public:
        FBaseIterator(MTMap<KeyType, ValueType>& InMap, MTSet<ElementType>::FBaseIterator InSet)
            : IteratedMap(InMap)
            , SetIt(InSet)
        {
        }
        FORCEINLINE MTMap<KeyType, ValueType>::FBaseIterator operator++()
        {
            ++SetIt;
            return *this;
        }
        FORCEINLINE MTMap<KeyType, ValueType>::ElementType& operator*()
        {
            return *SetIt;
        }
        FORCEINLINE const MTMap<KeyType, ValueType>::ElementType& operator*() const
        {
            return *SetIt;
        }
        FORCEINLINE bool operator==(const MTMap<KeyType, ValueType>::FBaseIterator& Other) const
        {
            return SetIt == Other.SetIt;
        }
        FORCEINLINE bool operator!=(const MTMap<KeyType, ValueType>::FBaseIterator& Other) const
        {
            return SetIt != Other.SetIt;
        }
        FORCEINLINE bool IsElementValid() const
        {
            return SetIt.IsElementValid();
        }
    };

    FORCEINLINE MTMap<KeyType, ValueType>::FBaseIterator begin()
    {
        return MTMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
    }
    FORCEINLINE const MTMap<KeyType, ValueType>::FBaseIterator begin() const
    {
        return MTMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
    }
    FORCEINLINE MTMap<KeyType, ValueType>::FBaseIterator end()
    {
        return MTMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
    }
    FORCEINLINE const MTMap<KeyType, ValueType>::FBaseIterator end() const
    {
        return MTMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
    }
    FORCEINLINE ValueType& operator[](const KeyType& Key)
    {
        return this->Find(Key);
    }
    FORCEINLINE const ValueType& operator[](const KeyType& Key) const
    {
        return this->Find(Key);
    }
    FORCEINLINE int32 Num()
    {
        return Pairs.Num();
    }
    FORCEINLINE bool IsValid() const
    {
        return Pairs.IsValid();
    }
    FORCEINLINE bool IsIndexValid(int32 IndexToCheck) const
    {
        return Pairs.IsIndexValid(IndexToCheck);
    }
    FORCEINLINE void Initialize(const int32 NumElementsToInitWith = 5)
    {
        return Pairs.Initialize(NumElementsToInitWith);
    }
    FORCEINLINE bool Contains(const KeyType& ElementToLookFor) const
    {
        for (auto Element : *this)
        {
            if (Element.Key() == ElementToLookFor)
                return true;
        }
        return false;
    }
    FORCEINLINE int32 AddSingle(KeyType InKey, ValueType InValue)
    {
        return Pairs.AddSingle({ InKey, InValue });
    }
    FORCEINLINE int32 AddSingle(ElementType InElement)
    {
        return Pairs.AddSingle(InElement);
    }
    FORCEINLINE ValueType* Find(KeyType& Key)
    {
        for (auto Pair : *this)
        {
            if (Pair.Key() == Key)
            {
                return &Pair.Value();
            }
        }

        return nullptr;
    }

    FORCEINLINE const ValueType& Find(const KeyType& Key) const
    {
        return const_cast<MTMap*>(this)->Find(Key);
    }
};