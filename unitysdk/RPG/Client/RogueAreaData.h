#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/Enum_3_DB663931210BBC27_48.h"
#include "unitysdk/System/Object.h"

class Class_1_EFE234D18718A46A_3;
namespace RPG::GameCore { class RogueAreaConfigRow; }

#define RPG_CLIENT_ROGUEAREADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD79D0)
#define RPG_CLIENT_ROGUEAREADATA_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0x9DD7BC0)
#define RPG_CLIENT_ROGUEAREADATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9DD7D70)
#define RPG_CLIENT_ROGUEAREADATA_GET_AREAPROGRESSID_OFFSET UNITYSDK_OFFSET(0x9DD7E80)
#define RPG_CLIENT_ROGUEAREADATA_GET_CURREACHROOMNUM_OFFSET UNITYSDK_OFFSET(0x9DD7E10)
#define RPG_CLIENT_ROGUEAREADATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9DD7FC0)
#define RPG_CLIENT_ROGUEAREADATA_GET_ISACTIVITY_OFFSET UNITYSDK_OFFSET(0x9DD8100)
#define RPG_CLIENT_ROGUEAREADATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0x9DD7E30)
#define RPG_CLIENT_ROGUEAREADATA_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9DD7DD0)
#define RPG_CLIENT_ROGUEAREADATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x9DD7DF0)
#define RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREAROW_OFFSET UNITYSDK_OFFSET(0x9DD7D00)
#define RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREASTATUS_OFFSET UNITYSDK_OFFSET(0x9DD7D90)
#define RPG_CLIENT_ROGUEAREADATA_GET_ROGUESTATUS_OFFSET UNITYSDK_OFFSET(0x9DD7DB0)
#define RPG_CLIENT_ROGUEAREADATA_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD7AA0)
#define RPG_CLIENT_ROGUEAREADATA_SETTAKENREWARD_OFFSET UNITYSDK_OFFSET(0x9DD7B70)
#define RPG_CLIENT_ROGUEAREADATA_SETUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD7B20)
#define RPG_CLIENT_ROGUEAREADATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x9DD7D80)
#define RPG_CLIENT_ROGUEAREADATA_SET_CURREACHROOMNUM_OFFSET UNITYSDK_OFFSET(0x9DD7E20)
#define RPG_CLIENT_ROGUEAREADATA_SET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9DD7DE0)
#define RPG_CLIENT_ROGUEAREADATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x9DD7E00)
#define RPG_CLIENT_ROGUEAREADATA_SET_ROGUEAREASTATUS_OFFSET UNITYSDK_OFFSET(0x9DD7DA0)
#define RPG_CLIENT_ROGUEAREADATA_SET_ROGUESTATUS_OFFSET UNITYSDK_OFFSET(0x9DD7DC0)
#define RPG_CLIENT_ROGUEAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD7A90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAreaData_TypeDefinitionIndex = 53620;

	class RogueAreaData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAreaConfigRow* _RogueAreaRow; // 0x10
		::System::UInt32 _CurReachRoomNum_k__BackingField; // 0x18
		::System::UInt32 _MapID_k__BackingField; // 0x1C
		::System::Boolean _IsRewardTaken_k__BackingField; // 0x20
		::System::UInt32 _AreaID_k__BackingField; // 0x24
		::Enum_3_DB663931210BBC27_48 _RogueAreaStatus_k__BackingField; // 0x28
		::Enum_3_4608E37A1B3D374A_28 _RogueStatus_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueAreaData* Create(::Class_1_EFE234D18718A46A_3* proto)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::Class_1_EFE234D18718A46A_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_CREATE_OFFSET))(proto);
		}

		::System::Void RefreshStatus(::Class_1_EFE234D18718A46A_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFE234D18718A46A_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_REFRESHSTATUS_OFFSET))(this, proto);
		}

		::System::Void SetUnlockStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SETUNLOCKSTATUS_OFFSET))(this);
		}

		::System::Void SetTakenReward(::System::Boolean isTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SETTAKENREWARD_OFFSET))(this, isTaken);
		}

		::System::UInt32 GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GETMAXSCORE_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_AREAID_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_48 get_RogueAreaStatus()
		{
			return ((::Enum_3_DB663931210BBC27_48(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREASTATUS_OFFSET))(this);
		}

		::System::Void set_RogueAreaStatus(::Enum_3_DB663931210BBC27_48 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_48))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_ROGUEAREASTATUS_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_28 get_RogueStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ROGUESTATUS_OFFSET))(this);
		}

		::System::Void set_RogueStatus(::Enum_3_4608E37A1B3D374A_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_ROGUESTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_ISREWARDTAKEN_OFFSET))(this, value);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_MAPID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurReachRoomNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_CURREACHROOMNUM_OFFSET))(this);
		}

		::System::Void set_CurReachRoomNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_CURREACHROOMNUM_OFFSET))(this, value);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ISDOING_OFFSET))(this);
		}

		::RPG::GameCore::RogueAreaConfigRow* get_RogueAreaRow()
		{
			return ((::RPG::GameCore::RogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREAROW_OFFSET))(this);
		}

		::System::UInt32 get_AreaProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_AREAPROGRESSID_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ISACTIVITY_OFFSET))(this);
		}
	};
}
