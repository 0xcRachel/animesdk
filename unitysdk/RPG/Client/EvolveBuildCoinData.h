#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_EVOLVEBUILDCOINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x918DE60)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x918E100)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_GEARTYPE_OFFSET UNITYSDK_OFFSET(0x918E000)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x918E030)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x918DF00)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISBROADCASTFORGE_OFFSET UNITYSDK_OFFSET(0x918E1E0)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x918E1B0)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x918E1D0)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_MAZEBUFF_OFFSET UNITYSDK_OFFSET(0x918E1A0)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x918DF20)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x918E010)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_TAGIDS_OFFSET UNITYSDK_OFFSET(0x918E150)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_UNLOCKQUEST_OFFSET UNITYSDK_OFFSET(0x918E1C0)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x918DFA0)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x918DF10)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_SET_SEASON_OFFSET UNITYSDK_OFFSET(0x918E020)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x918DEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildCoinData_TypeDefinitionIndex = 50700;

	class EvolveBuildCoinData : public ::System::Object
	{
	public:
		::System::String* _CustomIconPath; // 0x10
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildCoinData* Create(::System::UInt32 id, ::RPG::GameCore::EvolveBuildSeason season, ::System::String* customIconPath)
		{
			return ((::RPG::Client::EvolveBuildCoinData*(*)(::System::UInt32, ::RPG::GameCore::EvolveBuildSeason, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_CREATE_OFFSET))(id, season, customIconPath);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::EvolveGearType get_GearType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_GEARTYPE_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_SET_SEASON_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_Elements()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ELEMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TagIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_TAGIDS_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_MazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_MAZEBUFF_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::UInt32 get_UnlockQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_UNLOCKQUEST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsBroadcastForge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISBROADCASTFORGE_OFFSET))(this);
		}

		::RPG::GameCore::ItemRow* get__Row()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET__ROW_OFFSET))(this);
		}
	};
}
