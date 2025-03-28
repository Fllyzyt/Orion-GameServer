#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Concert

#include "Basic.hpp"

#include "Concert_structs.hpp"
#include "ConcertTransport_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Concert.ConcertServerConfig
// 0x0100 (0x0128 - 0x0028)
class UConcertServerConfig final  : public UObject
{
public:
	bool                                          bAutoArchiveOnReboot;                              // 0x0028(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoArchiveOnShutdown;                            // 0x0029(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCleanWorkingDir;                                  // 0x002A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5298[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumSessionsToKeep;                                 // 0x002C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ServerName;                                        // 0x0030(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultSessionName;                                // 0x0040(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class FString>                           AuthorizedClientKeys;                              // 0x0050(0x0050)(Config, NativeAccessSpecifierPublic)
	class FString                                 DefaultSessionToRestore;                           // 0x00A0(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSessionSettings                DefaultSessionSettings;                            // 0x00B0(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FConcertServerSettings                 ServerSettings;                                    // 0x00D8(0x0008)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FConcertEndpointSettings               EndpointSettings;                                  // 0x00E0(0x000C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_5299[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 WorkingDir;                                        // 0x00F0(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ArchiveDir;                                        // 0x0100(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SessionRepositoryRootDir;                          // 0x0110(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMountDefaultSessionRepository;                    // 0x0120(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_529A[0x7];                                     // 0x0121(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConcertServerConfig">();
	}
	static class UConcertServerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConcertServerConfig>();
	}
};
static_assert(alignof(UConcertServerConfig) == 0x000008, "Wrong alinment on UConcertServerConfig");
static_assert(sizeof(UConcertServerConfig) == 0x000128, "Wrong size on UConcertServerConfig");
static_assert(offsetof(UConcertServerConfig, bAutoArchiveOnReboot) == 0x000028, "Member 'UConcertServerConfig::bAutoArchiveOnReboot' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, bAutoArchiveOnShutdown) == 0x000029, "Member 'UConcertServerConfig::bAutoArchiveOnShutdown' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, bCleanWorkingDir) == 0x00002A, "Member 'UConcertServerConfig::bCleanWorkingDir' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, NumSessionsToKeep) == 0x00002C, "Member 'UConcertServerConfig::NumSessionsToKeep' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, ServerName) == 0x000030, "Member 'UConcertServerConfig::ServerName' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, DefaultSessionName) == 0x000040, "Member 'UConcertServerConfig::DefaultSessionName' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, AuthorizedClientKeys) == 0x000050, "Member 'UConcertServerConfig::AuthorizedClientKeys' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, DefaultSessionToRestore) == 0x0000A0, "Member 'UConcertServerConfig::DefaultSessionToRestore' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, DefaultSessionSettings) == 0x0000B0, "Member 'UConcertServerConfig::DefaultSessionSettings' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, ServerSettings) == 0x0000D8, "Member 'UConcertServerConfig::ServerSettings' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, EndpointSettings) == 0x0000E0, "Member 'UConcertServerConfig::EndpointSettings' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, WorkingDir) == 0x0000F0, "Member 'UConcertServerConfig::WorkingDir' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, ArchiveDir) == 0x000100, "Member 'UConcertServerConfig::ArchiveDir' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, SessionRepositoryRootDir) == 0x000110, "Member 'UConcertServerConfig::SessionRepositoryRootDir' has a wrong offset!");
static_assert(offsetof(UConcertServerConfig, bMountDefaultSessionRepository) == 0x000120, "Member 'UConcertServerConfig::bMountDefaultSessionRepository' has a wrong offset!");

// Class Concert.ConcertClientConfig
// 0x00D8 (0x0100 - 0x0028)
class UConcertClientConfig final  : public UObject
{
public:
	bool                                          bIsHeadless;                                       // 0x0028(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInstallEditorToolbarButton;                       // 0x0029(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoConnect;                                      // 0x002A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRetryAutoConnectOnError;                          // 0x002B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_529B[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DefaultServerURL;                                  // 0x0030(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultSessionName;                                // 0x0040(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultSessionToRestore;                           // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultSaveSessionAs;                              // 0x0060(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertClientSettings                 ClientSettings;                                    // 0x0070(0x0080)(Edit, Config, NativeAccessSpecifierPublic)
	struct FConcertSourceControlSettings          SourceControlSettings;                             // 0x00F0(0x0001)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_529C[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FConcertEndpointSettings               EndpointSettings;                                  // 0x00F4(0x000C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConcertClientConfig">();
	}
	static class UConcertClientConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConcertClientConfig>();
	}
};
static_assert(alignof(UConcertClientConfig) == 0x000008, "Wrong alinment on UConcertClientConfig");
static_assert(sizeof(UConcertClientConfig) == 0x000100, "Wrong size on UConcertClientConfig");
static_assert(offsetof(UConcertClientConfig, bIsHeadless) == 0x000028, "Member 'UConcertClientConfig::bIsHeadless' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, bInstallEditorToolbarButton) == 0x000029, "Member 'UConcertClientConfig::bInstallEditorToolbarButton' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, bAutoConnect) == 0x00002A, "Member 'UConcertClientConfig::bAutoConnect' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, bRetryAutoConnectOnError) == 0x00002B, "Member 'UConcertClientConfig::bRetryAutoConnectOnError' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, DefaultServerURL) == 0x000030, "Member 'UConcertClientConfig::DefaultServerURL' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, DefaultSessionName) == 0x000040, "Member 'UConcertClientConfig::DefaultSessionName' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, DefaultSessionToRestore) == 0x000050, "Member 'UConcertClientConfig::DefaultSessionToRestore' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, DefaultSaveSessionAs) == 0x000060, "Member 'UConcertClientConfig::DefaultSaveSessionAs' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, ClientSettings) == 0x000070, "Member 'UConcertClientConfig::ClientSettings' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, SourceControlSettings) == 0x0000F0, "Member 'UConcertClientConfig::SourceControlSettings' has a wrong offset!");
static_assert(offsetof(UConcertClientConfig, EndpointSettings) == 0x0000F4, "Member 'UConcertClientConfig::EndpointSettings' has a wrong offset!");

}

