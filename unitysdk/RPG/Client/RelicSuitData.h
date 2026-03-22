#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_8064EBA28E797250;
class Class_1_FA4F4A67B1C04320_95;
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSUITDATA_BUILDITEM_OFFSET UNITYSDK_OFFSET(0x9DA7120)
#define RPG_CLIENT_RELICSUITDATA_BUILDPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x9DA7480)
#define RPG_CLIENT_RELICSUITDATA_BUILDUPGRADEDITEMS_OFFSET UNITYSDK_OFFSET(0x9DA7050)
#define RPG_CLIENT_RELICSUITDATA_CREATEDISPLAYRELICSUIT_OFFSET UNITYSDK_OFFSET(0x9DA6910)
#define RPG_CLIENT_RELICSUITDATA_GETPOSITIONRELIC_1_OFFSET UNITYSDK_OFFSET(0x9DA7B70)
#define RPG_CLIENT_RELICSUITDATA_GETPOSITIONRELIC_OFFSET UNITYSDK_OFFSET(0x9DA7A40)
#define RPG_CLIENT_RELICSUITDATA_GETRELICCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0x9DA8400)
#define RPG_CLIENT_RELICSUITDATA_GETRELICSITEMS_OFFSET UNITYSDK_OFFSET(0x9DA7BC0)
#define RPG_CLIENT_RELICSUITDATA_GETVIRTUALDATAREPLACEWITH_OFFSET UNITYSDK_OFFSET(0x9DA7D40)
#define RPG_CLIENT_RELICSUITDATA_GETVIRTUALDATA_OFFSET UNITYSDK_OFFSET(0x9DA8020)
#define RPG_CLIENT_RELICSUITDATA_GET_RELICITEMS_OFFSET UNITYSDK_OFFSET(0x9DA8AF0)
#define RPG_CLIENT_RELICSUITDATA_GET_RELICSETADDPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x9DA8B10)
#define RPG_CLIENT_RELICSUITDATA_GET_RELICSETAFFIXPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x9DA8B20)
#define RPG_CLIENT_RELICSUITDATA_ISCONTAINPOSITION_OFFSET UNITYSDK_OFFSET(0x9DA7350)
#define RPG_CLIENT_RELICSUITDATA_REFRESHRELICITEMS_OFFSET UNITYSDK_OFFSET(0x9DA85E0)
#define RPG_CLIENT_RELICSUITDATA_REFRESHRELICSETADDPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x9DA6BC0)
#define RPG_CLIENT_RELICSUITDATA_SET_RELICITEMS_OFFSET UNITYSDK_OFFSET(0x9DA8B00)
#define RPG_CLIENT_RELICSUITDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9DA6EA0)
#define RPG_CLIENT_RELICSUITDATA__CALCULATERELICSETSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x9DA8820)
#define RPG_CLIENT_RELICSUITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DA6AE0)
#define RPG_CLIENT_RELICSUITDATA__GETCOMBATPOWERCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x9DA8A10)
#define RPG_CLIENT_RELICSUITDATA__TRYADDPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x9DA7870)
#define RPG_CLIENT_RELICSUITDATA__TRYADDRELICPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x9DA8720)
#define RPG_CLIENT_RELICSUITDATA__TRYADDRELICSETSKILLPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x9DA7940)
#define RPG_CLIENT_RELICSUITDATA__UPDATERELICITEMDATA_OFFSET UNITYSDK_OFFSET(0x9DA6F00)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicSuitData_TypeDefinitionIndex = 49720;

	class RelicSuitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _RelicSetAddPropertyValues; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _RelicSetAffixPropertyValues; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _RelicItems_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicSuitData* CreateDisplayRelicSuit(::Il2CppArray<::Class_1_8064EBA28E797250*>* relicInfos)
		{
			return ((::RPG::Client::RelicSuitData*(*)(::Il2CppArray<::Class_1_8064EBA28E797250*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_CREATEDISPLAYRELICSUIT_OFFSET))(relicInfos);
		}

		::System::Void Sync(::Il2CppArray<::Class_1_FA4F4A67B1C04320_95*>* equipRelics)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_FA4F4A67B1C04320_95*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_SYNC_OFFSET))(this, equipRelics);
		}

		::System::Void BuildUpgradedItems(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* relicItemDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_BUILDUPGRADEDITEMS_OFFSET))(this, relicItemDatas);
		}

		::System::Void BuildItem(::RPG::GameCore::SpecialAvatarRelicRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_BUILDITEM_OFFSET))(this, row);
		}

		::System::Void BuildPropertyValues(::RPG::GameCore::SpecialAvatarRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_BUILDPROPERTYVALUES_OFFSET))(this, row);
		}

		::System::Boolean IsContainPosition(::RPG::GameCore::RelicType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_ISCONTAINPOSITION_OFFSET))(this, type);
		}

		::RPG::Client::RelicItemData* GetPositionRelic(::RPG::GameCore::RelicType type)
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_GETPOSITIONRELIC_OFFSET))(this, type);
		}

		::RPG::Client::RelicItemData* GetPositionRelic_1(::System::UInt32 pos)
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_GETPOSITIONRELIC_1_OFFSET))(this, pos);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetRelicsItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_GETRELICSITEMS_OFFSET))(this);
		}

		::RPG::Client::RelicSuitData* GetVirtualDataReplaceWith(::RPG::Client::RelicItemData* relicItem)
		{
			return ((::RPG::Client::RelicSuitData*(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_GETVIRTUALDATAREPLACEWITH_OFFSET))(this, relicItem);
		}

		::RPG::Client::RelicSuitData* GetVirtualData(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* relicItems)
		{
			return ((::RPG::Client::RelicSuitData*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_GETVIRTUALDATA_OFFSET))(this, relicItems);
		}

		::System::Single GetRelicCombatPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_GETRELICCOMBATPOWER_OFFSET))(this);
		}

		::System::Void RefreshRelicItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_REFRESHRELICITEMS_OFFSET))(this);
		}

		::System::Void RefreshRelicSetAddPropertyValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_REFRESHRELICSETADDPROPERTYVALUES_OFFSET))(this);
		}

		::System::Void _UpdateRelicItemData(::Il2CppArray<::Class_1_FA4F4A67B1C04320_95*>* equipRelics)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_FA4F4A67B1C04320_95*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA__UPDATERELICITEMDATA_OFFSET))(this, equipRelics);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _CalculateRelicSetSkillCount()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA__CALCULATERELICSETSKILLCOUNT_OFFSET))(this);
		}

		::System::Void _TryAddRelicPropertyValue(::RPG::Client::RelicItemData* relic)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA__TRYADDRELICPROPERTYVALUE_OFFSET))(this, relic);
		}

		::System::Void _TryAddRelicSetSkillPropertyValue(::System::UInt32 setID, ::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA__TRYADDRELICSETSKILLPROPERTYVALUE_OFFSET))(this, setID, count);
		}

		::System::Void _TryAddPropertyValue(::System::UInt32 key, ::RPG::GameCore::FixPoint value, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* pRecordValueDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA__TRYADDPROPERTYVALUE_OFFSET))(this, key, value, pRecordValueDict);
		}

		::System::Single _GetCombatPowerConstValue(::System::String* str)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA__GETCOMBATPOWERCONSTVALUE_OFFSET))(this, str);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* get_RelicItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_GET_RELICITEMS_OFFSET))(this);
		}

		::System::Void set_RelicItems(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_SET_RELICITEMS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_RelicSetAddPropertyValues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_GET_RELICSETADDPROPERTYVALUES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_RelicSetAffixPropertyValues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA_GET_RELICSETAFFIXPROPERTYVALUES_OFFSET))(this);
		}
	};
}
