#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerStaminaData.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_12.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client { class TeamData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERDATA_GETCURRENTHEROGENDER_OFFSET UNITYSDK_OFFSET(0x127347D0)
#define RPG_CLIENT_PLAYERDATA_GETSTORYHEROGENDER_OFFSET UNITYSDK_OFFSET(0x12734860)
#define RPG_CLIENT_PLAYERDATA_GET_ASSISTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x17DE1430)
#define RPG_CLIENT_PLAYERDATA_GET_BASICINFODATA_OFFSET UNITYSDK_OFFSET(0x17DE1870)
#define RPG_CLIENT_PLAYERDATA_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x12733FE0)
#define RPG_CLIENT_PLAYERDATA_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0x17DE18E0)
#define RPG_CLIENT_PLAYERDATA_GET_DISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x17DE1410)
#define RPG_CLIENT_PLAYERDATA_GET_EXPUP_OFFSET UNITYSDK_OFFSET(0x17DE1570)
#define RPG_CLIENT_PLAYERDATA_GET_HASASSIST_OFFSET UNITYSDK_OFFSET(0x17DE1450)
#define RPG_CLIENT_PLAYERDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x12733FD0)
#define RPG_CLIENT_PLAYERDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x127341A0)
#define RPG_CLIENT_PLAYERDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x127342A0)
#define RPG_CLIENT_PLAYERDATA_GET_ISDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x17DE13F0)
#define RPG_CLIENT_PLAYERDATA_GET_ISFEMALE_OFFSET UNITYSDK_OFFSET(0x12734780)
#define RPG_CLIENT_PLAYERDATA_GET_ISMALE_OFFSET UNITYSDK_OFFSET(0x12734810)
#define RPG_CLIENT_PLAYERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17DE1390)
#define RPG_CLIENT_PLAYERDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x17DE12E0)
#define RPG_CLIENT_PLAYERDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x12734000)
#define RPG_CLIENT_PLAYERDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x12734560)
#define RPG_CLIENT_PLAYERDATA_GET_REGISTERCPS_OFFSET UNITYSDK_OFFSET(0x17DE13D0)
#define RPG_CLIENT_PLAYERDATA_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x12734370)
#define RPG_CLIENT_PLAYERDATA_GET_STAMINADATA_OFFSET UNITYSDK_OFFSET(0x17DE18A0)
#define RPG_CLIENT_PLAYERDATA_GET_STAMINA_OFFSET UNITYSDK_OFFSET(0x17DE1790)
#define RPG_CLIENT_PLAYERDATA_GET_TEAMDATA_OFFSET UNITYSDK_OFFSET(0x17DE1860)
#define RPG_CLIENT_PLAYERDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0x17DE12C0)
#define RPG_CLIENT_PLAYERDATA_GET_WEEKCOCOONCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE17D0)
#define RPG_CLIENT_PLAYERDATA_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x17DE13B0)
#define RPG_CLIENT_PLAYERDATA_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x17DE1720)
#define RPG_CLIENT_PLAYERDATA_SETCURRENTHEROGENDER_OFFSET UNITYSDK_OFFSET(0x127348C0)
#define RPG_CLIENT_PLAYERDATA_SETHEROGENDERAUDIO_OFFSET UNITYSDK_OFFSET(0x12734940)
#define RPG_CLIENT_PLAYERDATA_SET_ASSISTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x17DE1440)
#define RPG_CLIENT_PLAYERDATA_SET_BASICINFODATA_OFFSET UNITYSDK_OFFSET(0x17DE1890)
#define RPG_CLIENT_PLAYERDATA_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x12733FF0)
#define RPG_CLIENT_PLAYERDATA_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0x12733F80)
#define RPG_CLIENT_PLAYERDATA_SET_DISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x17DE1420)
#define RPG_CLIENT_PLAYERDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x12734240)
#define RPG_CLIENT_PLAYERDATA_SET_ISDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x17DE1400)
#define RPG_CLIENT_PLAYERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17DE13A0)
#define RPG_CLIENT_PLAYERDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x17DE12F0)
#define RPG_CLIENT_PLAYERDATA_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x12734140)
#define RPG_CLIENT_PLAYERDATA_SET_REGISTERCPS_OFFSET UNITYSDK_OFFSET(0x17DE13E0)
#define RPG_CLIENT_PLAYERDATA_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x12734450)
#define RPG_CLIENT_PLAYERDATA_SET_STAMINADATA_OFFSET UNITYSDK_OFFSET(0x17DE18C0)
#define RPG_CLIENT_PLAYERDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0x17DE12D0)
#define RPG_CLIENT_PLAYERDATA_SET_WEEKCOCOONCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE1810)
#define RPG_CLIENT_PLAYERDATA_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x17DE13C0)
#define RPG_CLIENT_PLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12734B00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerData_TypeDefinitionIndex = 61432;

	class PlayerData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 HERO_AVATAR_ID_BASE = 0x1F41; // 0x0
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* UnGottenLevelRewards; // 0x18
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x20
		::System::String* _RegisterCPS_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _AssistAvatarIDs_k__BackingField; // 0x30
		::RPG::Client::TeamData* _TeamData_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* GottenLevelRewards; // 0x40
		::System::String* _NickName; // 0x48
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _DisplayAvatarList_k__BackingField; // 0x58
		::System::UInt32 HCoin; // 0x60
		::RPG::GameCore::GenderType _Gender; // 0x64
		::System::UInt32 Exp; // 0x68
		::Struct_2_884CDB9D0FDFAF0D_12 _BasicInfoData; // 0x6C
		::RPG::Client::PlayerStaminaData _StaminaData; // 0x78
		::System::UInt32 SCoin; // 0x90
		::System::UInt32 _Birthday_k__BackingField; // 0x94
		::System::UInt32 _Level_k__BackingField; // 0x98
		::System::UInt32 MCoin; // 0x9C
		::System::UInt32 _UserID_k__BackingField; // 0xA0
		::System::UInt32 _WorldLevel_k__BackingField; // 0xA4
		::System::Boolean _IsDisplayAvatarList_k__BackingField; // 0xA8
		::System::Boolean IsGenderSelected; // 0xA9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_USERID_OFFSET))(this, value);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_NICKNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_WorldLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_WORLDLEVEL_OFFSET))(this, value);
		}

		::System::String* get_RegisterCPS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_REGISTERCPS_OFFSET))(this);
		}

		::System::Void set_RegisterCPS(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_REGISTERCPS_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplayAvatarList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISDISPLAYAVATARLIST_OFFSET))(this);
		}

		::System::Void set_IsDisplayAvatarList(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_ISDISPLAYAVATARLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DisplayAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_DISPLAYAVATARLIST_OFFSET))(this);
		}

		::System::Void set_DisplayAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_DISPLAYAVATARLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AssistAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ASSISTAVATARIDS_OFFSET))(this);
		}

		::System::Void set_AssistAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_ASSISTAVATARIDS_OFFSET))(this, value);
		}

		::System::Boolean get_HasAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HASASSIST_OFFSET))(this);
		}

		::System::UInt32 get_ExpUp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_EXPUP_OFFSET))(this);
		}

		::System::UInt32 get_Stamina()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_STAMINA_OFFSET))(this);
		}

		::System::UInt32 get_WeekCocoonCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_WEEKCOCOONCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekCocoonCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_WEEKCOCOONCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::TeamData* get_TeamData()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_TEAMDATA_OFFSET))(this);
		}

		::System::Boolean IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_ISLEVELMAX_OFFSET))(this);
		}

		::Struct_2_884CDB9D0FDFAF0D_12 get_BasicInfoData()
		{
			return ((::Struct_2_884CDB9D0FDFAF0D_12(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_BASICINFODATA_OFFSET))(this);
		}

		::System::Void set_BasicInfoData(::Struct_2_884CDB9D0FDFAF0D_12 value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_884CDB9D0FDFAF0D_12))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_BASICINFODATA_OFFSET))(this, value);
		}

		::RPG::Client::PlayerStaminaData get_StaminaData()
		{
			return ((::RPG::Client::PlayerStaminaData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_STAMINADATA_OFFSET))(this);
		}

		::System::Void set_StaminaData(::RPG::Client::PlayerStaminaData value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStaminaData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_STAMINADATA_OFFSET))(this, value);
		}

		::System::UInt32 get_CurDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_CURDAY_OFFSET))(this);
		}

		::System::Void set_CurDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_CURDAY_OFFSET))(this, value);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::UInt32 get_Birthday()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_BIRTHDAY_OFFSET))(this);
		}

		::System::Void set_Birthday(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_BIRTHDAY_OFFSET))(this, value);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_PERSONALCARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_HEADICONID_OFFSET))(this, value);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_SIGNATURE_OFFSET))(this, value);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Boolean get_IsFemale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISFEMALE_OFFSET))(this);
		}

		::System::Boolean get_IsMale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISMALE_OFFSET))(this);
		}

		::RPG::GameCore::GenderType GetCurrentHeroGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GETCURRENTHEROGENDER_OFFSET))(this);
		}

		::RPG::GameCore::GenderType GetStoryHeroGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GETSTORYHEROGENDER_OFFSET))(this);
		}

		::System::Void SetCurrentHeroGender(::RPG::GameCore::GenderType newHeroGender)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SETCURRENTHEROGENDER_OFFSET))(this, newHeroGender);
		}

		::System::Void SetHeroGenderAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SETHEROGENDERAUDIO_OFFSET))(this);
		}
	};
}
