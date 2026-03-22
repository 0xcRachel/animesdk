#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_9E78928359AD9962;

#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x9B28740)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9B28780)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x9B28750)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x9B28760)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9B28790)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x9B28770)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9B28610)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B28600)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerRogueTournRecordData_TypeDefinitionIndex = 51063;

	class PlayerRogueTournRecordData : public ::System::Object
	{
	public:
		::System::UInt32 _MaxAreaID_k__BackingField; // 0x10
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9E78928359AD9962* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9E78928359AD9962*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SYNC_OFFSET))(this, info);
		}

		::System::UInt32 get_MaxAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_MAXAREAID_OFFSET))(this);
		}

		::System::Void set_MaxAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_MAXAREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_DIVISIONLEVEL_OFFSET))(this, value);
		}
	};
}
