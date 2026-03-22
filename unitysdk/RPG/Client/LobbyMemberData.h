#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_9.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_5.h"
#include "unitysdk/System/Object.h"

class Class_1_35379441886C7D20;
class Class_1_3A7B270FE0BE90AE;
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_LOBBYMEMBERDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9573450)
#define RPG_CLIENT_LOBBYMEMBERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x95731B0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0x9573760)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0x95737C0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x95736B0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x95736D0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISLEADER_OFFSET UNITYSDK_OFFSET(0x9573890)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x95738A0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x95737E0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9573670)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x9573690)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x95737A0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0x9573780)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x9573650)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0x9573770)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0x95737D0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x95736C0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9573680)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x95736A0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x95737B0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0x9573790)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x9573660)
#define RPG_CLIENT_LOBBYMEMBERDATA_SYNCINFO_OFFSET UNITYSDK_OFFSET(0x95733A0)
#define RPG_CLIENT_LOBBYMEMBERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95732F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyMemberData_TypeDefinitionIndex = 52280;

	class LobbyMemberData : public ::System::Object
	{
	public:
		::System::String* _NickName_k__BackingField; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18
		::Class_1_35379441886C7D20* _ExtraInfo_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x28
		::Enum_3_F80BFD5B986D5503_5 _StatusType_k__BackingField; // 0x2C
		::Enum_3_DB663931210BBC27_9 _CharacterType_k__BackingField; // 0x30
		::System::UInt32 _UID_k__BackingField; // 0x34
		::System::UInt32 _HeadIconID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LobbyMemberData* Create(::Class_1_3A7B270FE0BE90AE* memberInfo)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::Class_1_3A7B270FE0BE90AE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_CREATE_OFFSET))(memberInfo);
		}

		static ::RPG::Client::LobbyMemberData* Create_1(::System::String* nickname, ::System::UInt32 headIconID, ::System::UInt32 playerUid, ::System::UInt32 level, ::System::UInt32 birdID)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_CREATE_1_OFFSET))(nickname, headIconID, playerUid, level, birdID);
		}

		::System::Void SyncInfo(::Class_1_3A7B270FE0BE90AE* memberInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SYNCINFO_OFFSET))(this, memberInfo);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_NICKNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_HEADICONID_OFFSET))(this, value);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_9 get_CharacterType()
		{
			return ((::Enum_3_DB663931210BBC27_9(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_CHARACTERTYPE_OFFSET))(this);
		}

		::System::Void set_CharacterType(::Enum_3_DB663931210BBC27_9 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_CHARACTERTYPE_OFFSET))(this, value);
		}

		::Enum_3_F80BFD5B986D5503_5 get_StatusType()
		{
			return ((::Enum_3_F80BFD5B986D5503_5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_STATUSTYPE_OFFSET))(this);
		}

		::System::Void set_StatusType(::Enum_3_F80BFD5B986D5503_5 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_5))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_STATUSTYPE_OFFSET))(this, value);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_PLATFORMINFO_OFFSET))(this, value);
		}

		::Class_1_35379441886C7D20* get_ExtraInfo()
		{
			return ((::Class_1_35379441886C7D20*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Void set_ExtraInfo(::Class_1_35379441886C7D20* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35379441886C7D20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_EXTRAINFO_OFFSET))(this, value);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_ISSELF_OFFSET))(this);
		}

		::System::Boolean get_IsLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_ISLEADER_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_ISREADY_OFFSET))(this);
		}
	};
}
