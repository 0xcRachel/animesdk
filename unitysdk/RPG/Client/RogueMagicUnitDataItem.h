#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicSpecialType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_EFFE981EB501B7BD_1;
class Class_1_FA4F4A67B1C04320_738;
namespace RPG::GameCore { class BattleRogueMagicData_MagicUnit; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicUnitDisplayRow; }
namespace RPG::GameCore { class RogueMagicUnitRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_OFFSET UNITYSDK_OFFSET(0x9E08930)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0x9E17630)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9E1D4C0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x9E163C0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E16380)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ATTACHRANGETYPES_OFFSET UNITYSDK_OFFSET(0x9E1D830)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BASICPOWERORFACTOR_OFFSET UNITYSDK_OFFSET(0x9E1DA10)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0x9E09E60)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x9E14F00)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x9E09C60)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EFFECTTYPES_OFFSET UNITYSDK_OFFSET(0x9E1D8D0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0x9E0A020)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0x9E0A2E0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x9E1D770)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_LIMITRANGETYPE_OFFSET UNITYSDK_OFFSET(0x9E1D790)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITICON_OFFSET UNITYSDK_OFFSET(0x9E09DA0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITID_OFFSET UNITYSDK_OFFSET(0x9E1D5B0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITLEVEL_OFFSET UNITYSDK_OFFSET(0x9E1D5D0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITNAME_OFFSET UNITYSDK_OFFSET(0x9E09B70)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x9E0A0E0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_SPECIALTYPE_OFFSET UNITYSDK_OFFSET(0x9E1D970)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0x9E0A220)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_UID_OFFSET UNITYSDK_OFFSET(0x9E1D590)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x9E1D660)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0x9E1D6C0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9E1D5F0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0x9E16CE0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SETISLOCK_OFFSET UNITYSDK_OFFSET(0x9E1D540)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x9E1D780)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITID_OFFSET UNITYSDK_OFFSET(0x9E1D5C0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITLEVEL_OFFSET UNITYSDK_OFFSET(0x9E1D5E0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_UID_OFFSET UNITYSDK_OFFSET(0x9E1D5A0)
#define RPG_CLIENT_ROGUEMAGICUNITDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E1D530)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicUnitDataItem_TypeDefinitionIndex = 53591;

	class RogueMagicUnitDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _MagicUnitID_k__BackingField; // 0x10
		::System::UInt32 _UID_k__BackingField; // 0x14
		::System::Boolean _IsLock_k__BackingField; // 0x18
		::System::UInt32 _MagicUnitLevel_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 level, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM__CTOR_OFFSET))(this, id, level, uid);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* Create(::Class_1_EFFE981EB501B7BD_1* proto)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::Class_1_EFFE981EB501B7BD_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_OFFSET))(proto);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* Create_1(::Class_1_FA4F4A67B1C04320_738* proto)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::Class_1_FA4F4A67B1C04320_738*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATE_1_OFFSET))(proto);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* CreateDisplayItem(::System::UInt32 id, ::System::UInt32 level, ::System::UInt32 uid)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEDISPLAYITEM_OFFSET))(id, level, uid);
		}

		static ::RPG::Client::RogueMagicUnitDataItem* CreateFromBattle(::RPG::GameCore::BattleRogueMagicData_MagicUnit* battleUnit, ::System::UInt32 dummyUID)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::RPG::GameCore::BattleRogueMagicData_MagicUnit*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_CREATEFROMBATTLE_OFFSET))(battleUnit, dummyUID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SetIsLock(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SETISLOCK_OFFSET))(this, isLock);
		}

		::System::Void Refresh(::Class_1_EFFE981EB501B7BD_1* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFFE981EB501B7BD_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_REFRESH_OFFSET))(this, instance);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_MagicUnitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITID_OFFSET))(this);
		}

		::System::Void set_MagicUnitID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITID_OFFSET))(this, value);
		}

		::System::UInt32 get_MagicUnitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITLEVEL_OFFSET))(this);
		}

		::System::Void set_MagicUnitLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_MAGICUNITLEVEL_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicUnitCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMagicUnitCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicMountType get_MountType()
		{
			return ((::RPG::GameCore::RogueMagicMountType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MOUNTTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_MagicUnitName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITNAME_OFFSET))(this);
		}

		::System::String* get_MagicUnitIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_MAGICUNITICON_OFFSET))(this);
		}

		::System::String* get_BuffDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFDESC_OFFSET))(this);
		}

		::System::String* get_BuffSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BUFFSIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EXTRAEFFECTS_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void set_IsLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_SET_ISLOCK_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicUnitRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMagicUnitRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicUnitDisplayRow* get__DisplayRow()
		{
			return ((::RPG::GameCore::RogueMagicUnitDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__DISPLAYROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET__MAZEBUFFROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicScepterFuncType get_FuncType()
		{
			return ((::RPG::GameCore::RogueMagicScepterFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_FUNCTYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStyleType get_StyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_STYLETYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicRangeType get_LimitRangeType()
		{
			return ((::RPG::GameCore::RogueMagicRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_LIMITRANGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueMagicRangeType>* get_AttachRangeTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueMagicRangeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_ATTACHRANGETYPES_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* get_EffectTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_EFFECTTYPES_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicSpecialType get_SpecialType()
		{
			return ((::RPG::GameCore::RogueMagicSpecialType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_SPECIALTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BasicPowerOrFactor()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITDATAITEM_GET_BASICPOWERORFACTOR_OFFSET))(this);
		}
	};
}
