#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_8.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_1B0D7D2CB27F3D72;
class Class_1_455CA3FD2409BEB7_1;
class Class_1_4AF393E7839B85AC;
class Class_1_6CCF78AD1D4E6598;
class Class_1_C086E47345F86771_2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChenLingBattleSoldierConfig; }
namespace RPG::Client { class ChenLingBattleSoldierLevelConfig; }
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::Client::ChenLingBattle { class Enchant; }
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace RPG::Client::ChenLingBattle { class SoldierUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_CREATE_OFFSET UNITYSDK_OFFSET(0x17CB8AB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17CBB190)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLENCHANTS_OFFSET UNITYSDK_OFFSET(0x17CBB340)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBASEADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x17CBB280)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBATTLESCORE_OFFSET UNITYSDK_OFFSET(0x17CB96B0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETDESC_OFFSET UNITYSDK_OFFSET(0x17CBA860)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETMULTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x17CBB2E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROMOTIONSKILLDESC_OFFSET UNITYSDK_OFFSET(0x17CBA8C0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTYADDDATA_OFFSET UNITYSDK_OFFSET(0x17CBB220)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x17CBB060)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETTOTALENCHANTSLEVEL_OFFSET UNITYSDK_OFFSET(0x17CBA6C0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x17CBB010)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDTYPE_OFFSET UNITYSDK_OFFSET(0x17CBAF40)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x17C9D2E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ENCHANTDICT_OFFSET UNITYSDK_OFFSET(0x17CBB3E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_FORMATIONTYPE_OFFSET UNITYSDK_OFFSET(0x17CBAC90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_INITIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x17CBAF90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x17CBAF70)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x17CBA820)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17C9EC50)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x17CBB040)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x17CBAE40)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17CBAEC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x17CBADC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x17CBAD40)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x17CBAF00)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x17CBAD30)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITDICT_OFFSET UNITYSDK_OFFSET(0x17CBAA00)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITS_OFFSET UNITYSDK_OFFSET(0x17CBAD10)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET__SERVEREFFECTPROVIDER_OFFSET UNITYSDK_OFFSET(0x17CBB3D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_INITPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x17CB91E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETENCHANTS_OFFSET UNITYSDK_OFFSET(0x17CB8EA0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x17CA4580)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x17CA4650)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETPROMOTION_OFFSET UNITYSDK_OFFSET(0x17CA4790)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x17CBAF80)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x17CBB050)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_UNITS_OFFSET UNITYSDK_OFFSET(0x17CBAD20)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCENCHANT_OFFSET UNITYSDK_OFFSET(0x17CA48A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYREMOVE_OFFSET UNITYSDK_OFFSET(0x17CB9650)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYUPDATE_OFFSET UNITYSDK_OFFSET(0x17CB95F0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB8D20)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIER__REBUILDUNITFORMATION_OFFSET UNITYSDK_OFFSET(0x17CB9240)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Soldier_TypeDefinitionIndex = 70134;

	class Soldier : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattleSoldierConfig* _Config; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::SoldierUnit*>* _UnitDict; // 0x18
		::Class_1_6CCF78AD1D4E6598* __ServerEffectProvider_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>* _Units_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* _EnchantDict; // 0x30
		::RPG::Client::ChenLingBattleSoldierLevelConfig* _LevelConfig; // 0x38
		::RPG::Client::ChenLingBattle::CardConfig* _CardConfig; // 0x40
		::System::UInt32 _MaxLevel_k__BackingField; // 0x48
		::System::UInt32 _UniqueID_k__BackingField; // 0x4C
		::System::Boolean _IsPromotion_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::ChenLingBattle::CardConfig* cardConfig, ::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER__CTOR_OFFSET))(this, cardConfig, uniqueID);
		}

		static ::RPG::Client::ChenLingBattle::Soldier* Create(::Class_1_1B0D7D2CB27F3D72* entityProto)
		{
			return ((::RPG::Client::ChenLingBattle::Soldier*(*)(::Class_1_1B0D7D2CB27F3D72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_CREATE_OFFSET))(entityProto);
		}

		::System::Void SetLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETLEVEL_OFFSET))(this, level);
		}

		::System::Void SetMaxLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETMAXLEVEL_OFFSET))(this, level);
		}

		::System::Void SetEnchants(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_2*>* enchantList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETENCHANTS_OFFSET))(this, enchantList);
		}

		::System::Void SetPromotion(::System::Boolean isPromotion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SETPROMOTION_OFFSET))(this, isPromotion);
		}

		::System::Void InitPropertyData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4AF393E7839B85AC*>* attrAddList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4AF393E7839B85AC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_INITPROPERTYDATA_OFFSET))(this, attrAddList);
		}

		::System::Void SyncPropertyUpdate(::Class_1_4AF393E7839B85AC* propertyAdd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AF393E7839B85AC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYUPDATE_OFFSET))(this, propertyAdd);
		}

		::System::Void SyncPropertyRemove(::System::Collections::Generic::IList_1<::System::UInt32>* effectUIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCPROPERTYREMOVE_OFFSET))(this, effectUIDList);
		}

		::System::Void SyncEnchant(::Class_1_455CA3FD2409BEB7_1* enchantChange)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455CA3FD2409BEB7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SYNCENCHANT_OFFSET))(this, enchantChange);
		}

		::System::UInt32 GetBattleScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBATTLESCORE_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETDESC_OFFSET))(this);
		}

		::System::String* GetPromotionSkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROMOTIONSKILLDESC_OFFSET))(this);
		}

		::System::Void _RebuildUnitFormation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER__REBUILDUNITFORMATION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::SoldierUnit*>* get_UnitDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::SoldierUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITDICT_OFFSET))(this);
		}

		::System::UInt32 get_FormationType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_FORMATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>* get_Units()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNITS_OFFSET))(this);
		}

		::System::Void set_Units(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_UNITS_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_UNIQUEID_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconOutlinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_SMALLICONOUTLINEPATH_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_TYPENAME_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingCardType get_CardType()
		{
			return ((::RPG::GameCore::ChenLingCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CONFIGID_OFFSET))(this);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Void set_IsPromotion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_ISPROMOTION_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_InitialMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_INITIALMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_CARDID_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_SET_MAXLEVEL_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingBattle::SoldierProperty* GetProperty(::Enum_3_71AA90D596A09AC8_8 type)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierProperty*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTY_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>* GetAllDisplayProperties()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLDISPLAYPROPERTIES_OFFSET))(this);
		}

		::Class_1_4AF393E7839B85AC* GetPropertyAddData(::Enum_3_71AA90D596A09AC8_8 type)
		{
			return ((::Class_1_4AF393E7839B85AC*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETPROPERTYADDDATA_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetBaseAddSequence(::Enum_3_71AA90D596A09AC8_8 type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETBASEADDSEQUENCE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetMultSequence(::Enum_3_71AA90D596A09AC8_8 type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETMULTSEQUENCE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Enchant*>* GetAllEnchants()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Enchant*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETALLENCHANTS_OFFSET))(this);
		}

		::System::UInt32 GetTotalEnchantsLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GETTOTALENCHANTSLEVEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattleSoldierLevelConfig* get_LevelConfig()
		{
			return ((::RPG::Client::ChenLingBattleSoldierLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_LEVELCONFIG_OFFSET))(this);
		}

		::Class_1_6CCF78AD1D4E6598* get__ServerEffectProvider()
		{
			return ((::Class_1_6CCF78AD1D4E6598*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET__SERVEREFFECTPROVIDER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* get_EnchantDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIER_GET_ENCHANTDICT_OFFSET))(this);
		}
	};
}
