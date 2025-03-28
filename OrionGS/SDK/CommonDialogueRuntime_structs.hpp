#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonDialogueRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Enum CommonDialogueRuntime.EConversationTaskResultType
// NumValues: 0x0009
enum class EConversationTaskResultType : uint8
{
	Invalid                                  = 0,
	AbortConversation                        = 1,
	AdvanceConversation                      = 2,
	AdvanceConversationWithChoice            = 3,
	PauseConversationAndSendClientChoices    = 4,
	ReturnToLastClientChoice                 = 5,
	ReturnToCurrentClientChoice              = 6,
	ReturnToConversationStart                = 7,
	EConversationTaskResultType_MAX          = 8,
};

// Enum CommonDialogueRuntime.EConversationRequirementResult
// NumValues: 0x0004
enum class EConversationRequirementResult : uint8
{
	Passed                                   = 0,
	FailedButVisible                         = 1,
	FailedAndHidden                          = 2,
	EConversationRequirementResult_MAX       = 3,
};

// Enum CommonDialogueRuntime.EConversationChoiceType
// NumValues: 0x0004
enum class EConversationChoiceType : uint8
{
	ServerOnly                               = 0,
	UserChoiceAvailable                      = 1,
	UserChoiceUnavailable                    = 2,
	EConversationChoiceType_MAX              = 3,
};

// ScriptStruct CommonDialogueRuntime.ConversationNodeHandle
// 0x0010 (0x0010 - 0x0000)
struct FConversationNodeHandle final 
{
public:
	struct FGuid                                  NodeGUID;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConversationNodeHandle) == 0x000004, "Wrong alinment on FConversationNodeHandle");
static_assert(sizeof(FConversationNodeHandle) == 0x000010, "Wrong size on FConversationNodeHandle");
static_assert(offsetof(FConversationNodeHandle, NodeGUID) == 0x000000, "Member 'FConversationNodeHandle::NodeGUID' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ConversationContext
// 0x0038 (0x0038 - 0x0000)
struct FConversationContext final 
{
public:
	class UConversationRegistry*                  ConversationRegistry;                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConversationInstance*                  ActiveConversation;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConversationParticipantComponent*      ClientParticipant;                                 // 0x0010(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConversationTaskNode*                  TaskBeingConsidered;                               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FConversationNodeHandle>        ReturnScopeStack;                                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bServer;                                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_CF1[0x7];                                      // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConversationContext) == 0x000008, "Wrong alinment on FConversationContext");
static_assert(sizeof(FConversationContext) == 0x000038, "Wrong size on FConversationContext");
static_assert(offsetof(FConversationContext, ConversationRegistry) == 0x000000, "Member 'FConversationContext::ConversationRegistry' has a wrong offset!");
static_assert(offsetof(FConversationContext, ActiveConversation) == 0x000008, "Member 'FConversationContext::ActiveConversation' has a wrong offset!");
static_assert(offsetof(FConversationContext, ClientParticipant) == 0x000010, "Member 'FConversationContext::ClientParticipant' has a wrong offset!");
static_assert(offsetof(FConversationContext, TaskBeingConsidered) == 0x000018, "Member 'FConversationContext::TaskBeingConsidered' has a wrong offset!");
static_assert(offsetof(FConversationContext, ReturnScopeStack) == 0x000020, "Member 'FConversationContext::ReturnScopeStack' has a wrong offset!");
static_assert(offsetof(FConversationContext, bServer) == 0x000030, "Member 'FConversationContext::bServer' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ConversationNodeParameterPair
// 0x0020 (0x0020 - 0x0000)
struct FConversationNodeParameterPair final 
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConversationNodeParameterPair) == 0x000008, "Wrong alinment on FConversationNodeParameterPair");
static_assert(sizeof(FConversationNodeParameterPair) == 0x000020, "Wrong size on FConversationNodeParameterPair");
static_assert(offsetof(FConversationNodeParameterPair, Name) == 0x000000, "Member 'FConversationNodeParameterPair::Name' has a wrong offset!");
static_assert(offsetof(FConversationNodeParameterPair, Value) == 0x000010, "Member 'FConversationNodeParameterPair::Value' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ConversationChoiceReference
// 0x0020 (0x0020 - 0x0000)
struct FConversationChoiceReference final 
{
public:
	struct FConversationNodeHandle                NodeReference;                                     // 0x0000(0x0010)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConversationNodeParameterPair> NodeParameters;                                    // 0x0010(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConversationChoiceReference) == 0x000008, "Wrong alinment on FConversationChoiceReference");
static_assert(sizeof(FConversationChoiceReference) == 0x000020, "Wrong size on FConversationChoiceReference");
static_assert(offsetof(FConversationChoiceReference, NodeReference) == 0x000000, "Member 'FConversationChoiceReference::NodeReference' has a wrong offset!");
static_assert(offsetof(FConversationChoiceReference, NodeParameters) == 0x000010, "Member 'FConversationChoiceReference::NodeParameters' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.AdvanceConversationRequest
// 0x0030 (0x0030 - 0x0000)
struct FAdvanceConversationRequest final 
{
public:
	struct FConversationChoiceReference           Choice;                                            // 0x0000(0x0020)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FConversationNodeParameterPair> UserParameters;                                    // 0x0020(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAdvanceConversationRequest) == 0x000008, "Wrong alinment on FAdvanceConversationRequest");
static_assert(sizeof(FAdvanceConversationRequest) == 0x000030, "Wrong size on FAdvanceConversationRequest");
static_assert(offsetof(FAdvanceConversationRequest, Choice) == 0x000000, "Member 'FAdvanceConversationRequest::Choice' has a wrong offset!");
static_assert(offsetof(FAdvanceConversationRequest, UserParameters) == 0x000020, "Member 'FAdvanceConversationRequest::UserParameters' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ClientConversationMessage
// 0x0038 (0x0038 - 0x0000)
struct FClientConversationMessage final 
{
public:
	struct FGameplayTag                           SpeakerID;                                         // 0x0000(0x0008)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ParticipantDisplayName;                            // 0x0008(0x0018)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   Text;                                              // 0x0020(0x0018)(BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClientConversationMessage) == 0x000008, "Wrong alinment on FClientConversationMessage");
static_assert(sizeof(FClientConversationMessage) == 0x000038, "Wrong size on FClientConversationMessage");
static_assert(offsetof(FClientConversationMessage, SpeakerID) == 0x000000, "Member 'FClientConversationMessage::SpeakerID' has a wrong offset!");
static_assert(offsetof(FClientConversationMessage, ParticipantDisplayName) == 0x000008, "Member 'FClientConversationMessage::ParticipantDisplayName' has a wrong offset!");
static_assert(offsetof(FClientConversationMessage, Text) == 0x000020, "Member 'FClientConversationMessage::Text' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ConversationTaskResult
// 0x0070 (0x0070 - 0x0000)
struct FConversationTaskResult final 
{
public:
	EConversationTaskResultType                   Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_CF2[0x7];                                      // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAdvanceConversationRequest            AdvanceToChoice;                                   // 0x0008(0x0030)(NativeAccessSpecifierPrivate)
	struct FClientConversationMessage             Message;                                           // 0x0038(0x0038)(NativeAccessSpecifierPrivate)
};
static_assert(alignof(FConversationTaskResult) == 0x000008, "Wrong alinment on FConversationTaskResult");
static_assert(sizeof(FConversationTaskResult) == 0x000070, "Wrong size on FConversationTaskResult");
static_assert(offsetof(FConversationTaskResult, Type) == 0x000000, "Member 'FConversationTaskResult::Type' has a wrong offset!");
static_assert(offsetof(FConversationTaskResult, AdvanceToChoice) == 0x000008, "Member 'FConversationTaskResult::AdvanceToChoice' has a wrong offset!");
static_assert(offsetof(FConversationTaskResult, Message) == 0x000038, "Member 'FConversationTaskResult::Message' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.CommonDialogueBankParticipant
// 0x0030 (0x0030 - 0x0000)
struct FCommonDialogueBankParticipant final 
{
public:
	class FText                                   FallbackName;                                      // 0x0000(0x0018)(NativeAccessSpecifierPublic)
	struct FGameplayTag                           ParticipantName;                                   // 0x0018(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           NodeTint;                                          // 0x0020(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCommonDialogueBankParticipant) == 0x000008, "Wrong alinment on FCommonDialogueBankParticipant");
static_assert(sizeof(FCommonDialogueBankParticipant) == 0x000030, "Wrong size on FCommonDialogueBankParticipant");
static_assert(offsetof(FCommonDialogueBankParticipant, FallbackName) == 0x000000, "Member 'FCommonDialogueBankParticipant::FallbackName' has a wrong offset!");
static_assert(offsetof(FCommonDialogueBankParticipant, ParticipantName) == 0x000018, "Member 'FCommonDialogueBankParticipant::ParticipantName' has a wrong offset!");
static_assert(offsetof(FCommonDialogueBankParticipant, NodeTint) == 0x000020, "Member 'FCommonDialogueBankParticipant::NodeTint' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ConversationEntryList
// 0x0018 (0x0018 - 0x0000)
struct FConversationEntryList final 
{
public:
	struct FGameplayTag                           EntryTag;                                          // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                          DestinationList;                                   // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConversationEntryList) == 0x000008, "Wrong alinment on FConversationEntryList");
static_assert(sizeof(FConversationEntryList) == 0x000018, "Wrong size on FConversationEntryList");
static_assert(offsetof(FConversationEntryList, EntryTag) == 0x000000, "Member 'FConversationEntryList::EntryTag' has a wrong offset!");
static_assert(offsetof(FConversationEntryList, DestinationList) == 0x000008, "Member 'FConversationEntryList::DestinationList' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.NetSerializeScriptStructCache_ConvVersion
// 0x0060 (0x0060 - 0x0000)
struct FNetSerializeScriptStructCache_ConvVersion final 
{
public:
	TMap<class UScriptStruct*, int32>             ScriptStructsToIndex;                              // 0x0000(0x0050)(NativeAccessSpecifierPublic)
	TArray<class UScriptStruct*>                  IndexToScriptStructs;                              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNetSerializeScriptStructCache_ConvVersion) == 0x000008, "Wrong alinment on FNetSerializeScriptStructCache_ConvVersion");
static_assert(sizeof(FNetSerializeScriptStructCache_ConvVersion) == 0x000060, "Wrong size on FNetSerializeScriptStructCache_ConvVersion");
static_assert(offsetof(FNetSerializeScriptStructCache_ConvVersion, ScriptStructsToIndex) == 0x000000, "Member 'FNetSerializeScriptStructCache_ConvVersion::ScriptStructsToIndex' has a wrong offset!");
static_assert(offsetof(FNetSerializeScriptStructCache_ConvVersion, IndexToScriptStructs) == 0x000050, "Member 'FNetSerializeScriptStructCache_ConvVersion::IndexToScriptStructs' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ClientConversationOptionEntry
// 0x0070 (0x0070 - 0x0000)
struct FClientConversationOptionEntry final 
{
public:
	class FText                                   ChoiceText;                                        // 0x0000(0x0018)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ChoiceTags;                                        // 0x0018(0x0020)(BlueprintVisible, NativeAccessSpecifierPublic)
	EConversationChoiceType                       ChoiceType;                                        // 0x0038(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CF3[0x7];                                      // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FConversationChoiceReference           ChoiceReference;                                   // 0x0040(0x0020)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FConversationNodeParameterPair> ExtraData;                                         // 0x0060(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClientConversationOptionEntry) == 0x000008, "Wrong alinment on FClientConversationOptionEntry");
static_assert(sizeof(FClientConversationOptionEntry) == 0x000070, "Wrong size on FClientConversationOptionEntry");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceText) == 0x000000, "Member 'FClientConversationOptionEntry::ChoiceText' has a wrong offset!");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceTags) == 0x000018, "Member 'FClientConversationOptionEntry::ChoiceTags' has a wrong offset!");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceType) == 0x000038, "Member 'FClientConversationOptionEntry::ChoiceType' has a wrong offset!");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceReference) == 0x000040, "Member 'FClientConversationOptionEntry::ChoiceReference' has a wrong offset!");
static_assert(offsetof(FClientConversationOptionEntry, ExtraData) == 0x000060, "Member 'FClientConversationOptionEntry::ExtraData' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ConversationParticipantEntry
// 0x0010 (0x0010 - 0x0000)
struct FConversationParticipantEntry final 
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ParticipantID;                                     // 0x0008(0x0008)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConversationParticipantEntry) == 0x000008, "Wrong alinment on FConversationParticipantEntry");
static_assert(sizeof(FConversationParticipantEntry) == 0x000010, "Wrong size on FConversationParticipantEntry");
static_assert(offsetof(FConversationParticipantEntry, Actor) == 0x000000, "Member 'FConversationParticipantEntry::Actor' has a wrong offset!");
static_assert(offsetof(FConversationParticipantEntry, ParticipantID) == 0x000008, "Member 'FConversationParticipantEntry::ParticipantID' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ConversationParticipants
// 0x0010 (0x0010 - 0x0000)
struct FConversationParticipants final 
{
public:
	TArray<struct FConversationParticipantEntry>  List;                                              // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConversationParticipants) == 0x000008, "Wrong alinment on FConversationParticipants");
static_assert(sizeof(FConversationParticipants) == 0x000010, "Wrong size on FConversationParticipants");
static_assert(offsetof(FConversationParticipants, List) == 0x000000, "Member 'FConversationParticipants::List' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ClientConversationMessagePayload
// 0x0068 (0x0068 - 0x0000)
struct FClientConversationMessagePayload final 
{
public:
	struct FClientConversationMessage             Message;                                           // 0x0000(0x0038)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConversationParticipants              Participants;                                      // 0x0038(0x0010)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConversationNodeHandle                CurrentNode;                                       // 0x0048(0x0010)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClientConversationOptionEntry> Options;                                           // 0x0058(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClientConversationMessagePayload) == 0x000008, "Wrong alinment on FClientConversationMessagePayload");
static_assert(sizeof(FClientConversationMessagePayload) == 0x000068, "Wrong size on FClientConversationMessagePayload");
static_assert(offsetof(FClientConversationMessagePayload, Message) == 0x000000, "Member 'FClientConversationMessagePayload::Message' has a wrong offset!");
static_assert(offsetof(FClientConversationMessagePayload, Participants) == 0x000038, "Member 'FClientConversationMessagePayload::Participants' has a wrong offset!");
static_assert(offsetof(FClientConversationMessagePayload, CurrentNode) == 0x000048, "Member 'FClientConversationMessagePayload::CurrentNode' has a wrong offset!");
static_assert(offsetof(FClientConversationMessagePayload, Options) == 0x000058, "Member 'FClientConversationMessagePayload::Options' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ConversationBranchPoint
// 0x0080 (0x0080 - 0x0000)
struct FConversationBranchPoint final 
{
public:
	TArray<struct FConversationNodeHandle>        ReturnScopeStack;                                  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClientConversationOptionEntry         ClientChoice;                                      // 0x0010(0x0070)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FConversationBranchPoint) == 0x000008, "Wrong alinment on FConversationBranchPoint");
static_assert(sizeof(FConversationBranchPoint) == 0x000080, "Wrong size on FConversationBranchPoint");
static_assert(offsetof(FConversationBranchPoint, ReturnScopeStack) == 0x000000, "Member 'FConversationBranchPoint::ReturnScopeStack' has a wrong offset!");
static_assert(offsetof(FConversationBranchPoint, ClientChoice) == 0x000010, "Member 'FConversationBranchPoint::ClientChoice' has a wrong offset!");

// ScriptStruct CommonDialogueRuntime.ConversationChoiceDataHandle
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FConversationChoiceDataHandle final 
{
public:
	uint8                                         Pad_CF4[0x20];                                     // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConversationChoiceDataHandle) == 0x000008, "Wrong alinment on FConversationChoiceDataHandle");
static_assert(sizeof(FConversationChoiceDataHandle) == 0x000020, "Wrong size on FConversationChoiceDataHandle");

// ScriptStruct CommonDialogueRuntime.ConversationChoiceData
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FConversationChoiceData final 
{
public:
	uint8                                         Pad_CF5[0x8];                                      // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConversationChoiceData) == 0x000008, "Wrong alinment on FConversationChoiceData");
static_assert(sizeof(FConversationChoiceData) == 0x000008, "Wrong size on FConversationChoiceData");

}

