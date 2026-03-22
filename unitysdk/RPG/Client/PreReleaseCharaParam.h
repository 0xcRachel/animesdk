#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreCharacterStatus.h"
#include "unitysdk/RPG/Client/PreReleaseCharaParam_ScheduleInfo.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_13;
namespace RPG::Client { class AvatarData; }
namespace System { class String; }

#define RPG_CLIENT_PRERELEASECHARAPARAM_CREATEEXTERNAL_OFFSET UNITYSDK_OFFSET(0x9B30550)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETAVATARID_OFFSET UNITYSDK_OFFSET(0x9B30640)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9B30A30)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETNAME_OFFSET UNITYSDK_OFFSET(0x9B30730)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETPATHNAME_OFFSET UNITYSDK_OFFSET(0x9B308D0)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GETSMALLPATHICONPATH_OFFSET UNITYSDK_OFFSET(0x9B30990)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISADVERTISING_OFFSET UNITYSDK_OFFSET(0x9B30E00)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISCOLLABORATION_OFFSET UNITYSDK_OFFSET(0x9B30E60)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISUPCOMINGREMASTER_OFFSET UNITYSDK_OFFSET(0x9B30CE0)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISUPRELEASING_OFFSET UNITYSDK_OFFSET(0x9B30D60)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B306A0)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9B30A90)
#define RPG_CLIENT_PRERELEASECHARAPARAM_GET__SCHEDULEINFO_OFFSET UNITYSDK_OFFSET(0x9B30530)
#define RPG_CLIENT_PRERELEASECHARAPARAM_SETSCHEDULEINFO_OFFSET UNITYSDK_OFFSET(0x9B30F00)
#define RPG_CLIENT_PRERELEASECHARAPARAM_SET__SCHEDULEINFO_OFFSET UNITYSDK_OFFSET(0x9B30540)
#define RPG_CLIENT_PRERELEASECHARAPARAM_UPDATEPARAMINFO_OFFSET UNITYSDK_OFFSET(0x9B30FD0)
#define RPG_CLIENT_PRERELEASECHARAPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9B30520)

namespace RPG::Client
{
	inline static constexpr unsigned int PreReleaseCharaParam_TypeDefinitionIndex = 52172;

	class PreReleaseCharaParam : public ::System::Object
	{
	public:
		::System::String* AvatarIconPath; // 0x10
		::System::String* AvatarTeamIconPath; // 0x18
		::System::String* AvatarShopIconPath; // 0x20
		::System::String* AvatarMiniIconPath; // 0x28
		::RPG::Client::AvatarData* AvatarDataRef; // 0x30
		::RPG::GameCore::AttackDamageType DamageType; // 0x38
		::System::UInt32 Set4ID; // 0x3C
		::RPG::Client::PreReleaseCharaParam_ScheduleInfo __ScheduleInfo_k__BackingField; // 0x40
		::RPG::GameCore::AvatarBaseType BaseType; // 0x48
		::System::UInt32 SortIndex; // 0x4C
		::System::UInt32 Set2ID; // 0x50
		::System::UInt32 PreAvatarID; // 0x54
		::System::UInt32 Rarity; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::PreReleaseCharaParam_ScheduleInfo get__ScheduleInfo()
		{
			return ((::RPG::Client::PreReleaseCharaParam_ScheduleInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET__SCHEDULEINFO_OFFSET))(this);
		}

		::System::Void set__ScheduleInfo(::RPG::Client::PreReleaseCharaParam_ScheduleInfo value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PreReleaseCharaParam_ScheduleInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_SET__SCHEDULEINFO_OFFSET))(this, value);
		}

		static ::RPG::Client::PreReleaseCharaParam* CreateExternal(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_CREATEEXTERNAL_OFFSET))(avatarID);
		}

		::System::UInt32 GetAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETAVATARID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETNAME_OFFSET))(this);
		}

		::RPG::Client::TextID GetPathName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETPATHNAME_OFFSET))(this);
		}

		::System::String* GetSmallPathIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETSMALLPATHICONPATH_OFFSET))(this);
		}

		::System::String* GetMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GETMINIICONPATH_OFFSET))(this);
		}

		::RPG::Client::PreCharacterStatus get_Status()
		{
			return ((::RPG::Client::PreCharacterStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean get_IsUpcomingRemaster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISUPCOMINGREMASTER_OFFSET))(this);
		}

		::System::Boolean get_IsUpReleasing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISUPRELEASING_OFFSET))(this);
		}

		::System::Boolean get_IsAdvertising()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISADVERTISING_OFFSET))(this);
		}

		::System::Boolean get_IsCollaboration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_GET_ISCOLLABORATION_OFFSET))(this);
		}

		::System::Void SetScheduleInfo(::System::UInt32 activityID, ::System::UInt32 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_SETSCHEDULEINFO_OFFSET))(this, activityID, type);
		}

		::System::Void UpdateParamInfo(::Class_1_21DCD4640D389503_13* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_UPDATEPARAMINFO_OFFSET))(this, rsp);
		}
	};
}
