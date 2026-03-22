#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_608;
class Class_1_A291A0C2D65983FA;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0x9354670)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x9350B40)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETEFFECTTRAITID_OFFSET UNITYSDK_OFFSET(0x934B500)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9354CD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANBEROLL_OFFSET UNITYSDK_OFFSET(0x9354C30)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x9354CF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x9354CE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HASOWNER_OFFSET UNITYSDK_OFFSET(0x934DC30)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0x9354C10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x9354BD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SPECIALDISPLAYPARAM_OFFSET UNITYSDK_OFFSET(0x9354D10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9354BF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_REMOVEEQUIPPED_OFFSET UNITYSDK_OFFSET(0x934A210)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SETEQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x9349840)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9354AB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x9354D00)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x9354B40)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0x9354C20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x9354BE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9354C00)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x93509B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93545E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipItemData_TypeDefinitionIndex = 51625;

	class GridFightEquipItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _AdditionalProperties; // 0x18
		::Class_0_16E4307DCC419505_608* _SpecialDisplayParamProvider; // 0x20
		::RPG::Client::GridFightEquipItemConfig* _EquipItemConfig_k__BackingField; // 0x28
		::System::Boolean _IsTemporary_k__BackingField; // 0x30
		::System::UInt32 _ItemID_k__BackingField; // 0x34
		::System::UInt32 _UniqueID_k__BackingField; // 0x38
		::System::UInt32 _EquippedUniqueID; // 0x3C

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__CTOR_OFFSET))(this, itemID);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateFromServer(::Class_1_A291A0C2D65983FA* equip)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::Class_1_A291A0C2D65983FA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMSERVER_OFFSET))(equip);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateFromBattle(::RPG::GameCore::BattleGridFightEquipData* battleEquipData)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMBATTLE_OFFSET))(battleEquipData);
		}

		::System::Void Sync(::Class_1_A291A0C2D65983FA* equip)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A291A0C2D65983FA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SYNC_OFFSET))(this, equip);
		}

		::System::Void SetEquippedUniqueID(::System::UInt32 equippedUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SETEQUIPPEDUNIQUEID_OFFSET))(this, equippedUniqueID);
		}

		::System::Void RemoveEquipped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_REMOVEEQUIPPED_OFFSET))(this);
		}

		::System::UInt32 GetEffectTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETEFFECTTRAITID_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsTemporary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISTEMPORARY_OFFSET))(this);
		}

		::System::Void set_IsTemporary(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISTEMPORARY_OFFSET))(this, value);
		}

		::System::Boolean get_CanBeRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANBEROLL_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_AdditionalProperties()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ADDITIONALPROPERTIES_OFFSET))(this);
		}

		::System::Void set_AdditionalProperties(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ADDITIONALPROPERTIES_OFFSET))(this, value);
		}

		::System::Boolean get_HasOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HASOWNER_OFFSET))(this);
		}

		::System::UInt32 get_EquippedUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPPEDUNIQUEID_OFFSET))(this);
		}

		::System::Void set_EquippedUniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPPEDUNIQUEID_OFFSET))(this, value);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipItemConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPITEMCONFIG_OFFSET))(this);
		}

		::System::Void set_EquipItemConfig(::RPG::Client::GridFightEquipItemConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPITEMCONFIG_OFFSET))(this, value);
		}

		::System::UInt32 get_SpecialDisplayParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SPECIALDISPLAYPARAM_OFFSET))(this);
		}
	};
}
