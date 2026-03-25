#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x947EBE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x947F0C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x947F540)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x947F520)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x947F500)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_PLAYERPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x947F580)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_PVPSCORE_OFFSET UNITYSDK_OFFSET(0x947F560)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x947F550)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x947F530)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x947F510)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_PLAYERPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x947F590)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_PVPSCORE_OFFSET UNITYSDK_OFFSET(0x947F570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x947F0B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleResultPlayerInfo_TypeDefinitionIndex = 61904;

	class DiceCombatBattleResultPlayerInfo : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _CardInfo_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::RPG::Client::PlayerPlatformInfo* _PlayerPlatformInfo_k__BackingField; // 0x28
		::System::UInt32 _PvpScore_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* Create(::System::Boolean isPlayer)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_CREATE_OFFSET))(isPlayer);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* Create_1(::System::String* name, ::System::String* iconPath, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* cardInfo)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*(*)(::System::String*, ::System::String*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_CREATE_1_OFFSET))(name, iconPath, cardInfo);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_ICONPATH_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_CardInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_CARDINFO_OFFSET))(this);
		}

		::System::Void set_CardInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_CARDINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_PvpScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_PVPSCORE_OFFSET))(this);
		}

		::System::Void set_PvpScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_PVPSCORE_OFFSET))(this, value);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlayerPlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_PLAYERPLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlayerPlatformInfo(::RPG::Client::PlayerPlatformInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_PLAYERPLATFORMINFO_OFFSET))(this, value);
		}
	};
}
