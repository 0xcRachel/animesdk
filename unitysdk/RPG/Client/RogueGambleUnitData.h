#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGableRarity.h"
#include "unitysdk/RPG/Client/RogueGambleMode.h"
#include "unitysdk/RPG/GameCore/RogueGambleUnitType.h"
#include "unitysdk/System/Object.h"

class Class_1_00F47B9BB144F01D;
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class RogueMiracleData; }
namespace RPG::GameCore { class RogueTournGambleUnitRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0x9DF17C0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9DEFB90)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DF11C0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9DF11E0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x9DF17E0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DF1200)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MAGICUNITDATA_OFFSET UNITYSDK_OFFSET(0x9DF1240)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x9DF1710)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0x9DF1520)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x9DF1220)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x9DF14E0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x9DF1370)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DF1260)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9DF1350)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITICONPATH_OFFSET UNITYSDK_OFFSET(0x9DF1500)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0x9DF17D0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DF11D0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9DF11F0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x9DF17F0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DF1210)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MAGICUNITDATA_OFFSET UNITYSDK_OFFSET(0x9DF1250)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x9DF1230)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF02C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleUnitData_TypeDefinitionIndex = 53428;

	class RogueGambleUnitData : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicUnitDataItem* _MagicUnitData_k__BackingField; // 0x10
		::RPG::Client::RogueMiracleData* _MiracleData; // 0x18
		::RPG::GameCore::RogueTournGambleUnitRow* _Row; // 0x20
		::System::Boolean _IsValid_k__BackingField; // 0x28
		::System::Boolean _IsMagicUnit_k__BackingField; // 0x29
		::System::UInt32 _MiracleID_k__BackingField; // 0x2C
		::System::UInt32 _Index_k__BackingField; // 0x30
		::RPG::Client::RogueGambleMode _GambleMode_k__BackingField; // 0x34
		::System::UInt32 _ID_k__BackingField; // 0x38

		::System::Void _ctor(::Class_1_00F47B9BB144F01D* protoUnitInfo, ::System::UInt32 index, ::RPG::Client::RogueGambleMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_00F47B9BB144F01D*, ::System::UInt32, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA__CTOR_OFFSET))(this, protoUnitInfo, index, mode);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_INDEX_OFFSET))(this, value);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISVALID_OFFSET))(this, value);
		}

		::System::UInt32 get_MiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEID_OFFSET))(this);
		}

		::System::Void set_MiracleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MIRACLEID_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicUnitDataItem* get_MagicUnitData()
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MAGICUNITDATA_OFFSET))(this);
		}

		::System::Void set_MagicUnitData(::RPG::Client::RogueMagicUnitDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MAGICUNITDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournGambleUnitRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournGambleUnitRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueGambleUnitType get_Type()
		{
			return ((::RPG::GameCore::RogueGambleUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::RogueGableRarity get_Rarity()
		{
			return ((::RPG::Client::RogueGableRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_RARITY_OFFSET))(this);
		}

		::System::UInt32 get_Param()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PARAM_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_UnitIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITICONPATH_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleData* get_MiracleData()
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEDATA_OFFSET))(this);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::RPG::Client::RogueGambleMode get_GambleMode()
		{
			return ((::RPG::Client::RogueGambleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_GAMBLEMODE_OFFSET))(this);
		}

		::System::Void set_GambleMode(::RPG::Client::RogueGambleMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_GAMBLEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMagicUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISMAGICUNIT_OFFSET))(this);
		}

		::System::Void set_IsMagicUnit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISMAGICUNIT_OFFSET))(this, value);
		}
	};
}
