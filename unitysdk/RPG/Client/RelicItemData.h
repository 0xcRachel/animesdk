#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7F6A638FBAAEC90B;
class Class_1_D1E0AD3915BCCF29_1;
class Class_1_E14A0A1A8B1F847C_4;
class Class_1_FB243EFAE922024A;
class Class_1_FF220487FAB45279_2;
class Class_1_FF220487FAB45279_3;
namespace RPG::Client { class RelicLevelUpBeforeData; }
namespace RPG::Client { class RelicShowPropertyData; }
namespace RPG::GameCore { class RelicConfigRow; }
namespace RPG::GameCore { class RelicDataInfoRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICITEMDATA_CALCULATEPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1602F1A0)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELICFORREFORGE_OFFSET UNITYSDK_OFFSET(0x13196700)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_1_OFFSET UNITYSDK_OFFSET(0x160272F0)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_2_OFFSET UNITYSDK_OFFSET(0x1602E6C0)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_3_OFFSET UNITYSDK_OFFSET(0x1602E7B0)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_OFFSET UNITYSDK_OFFSET(0x1602E310)
#define RPG_CLIENT_RELICITEMDATA_GETALLPROPERTYDATALIST_OFFSET UNITYSDK_OFFSET(0x1602CC10)
#define RPG_CLIENT_RELICITEMDATA_GETMAINAFFIXPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1602EEF0)
#define RPG_CLIENT_RELICITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1602EF40)
#define RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXIDBYPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1602F750)
#define RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1602F020)
#define RPG_CLIENT_RELICITEMDATA_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0x131964E0)
#define RPG_CLIENT_RELICITEMDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x1602F930)
#define RPG_CLIENT_RELICITEMDATA_GET_ISDISCARD_OFFSET UNITYSDK_OFFSET(0x1602F990)
#define RPG_CLIENT_RELICITEMDATA_GET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x1602F970)
#define RPG_CLIENT_RELICITEMDATA_GET_LEVELUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x13196610)
#define RPG_CLIENT_RELICITEMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1602F950)
#define RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x13196500)
#define RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x13196520)
#define RPG_CLIENT_RELICITEMDATA_GET_PREVIEWSUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0x13196560)
#define RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0x13196650)
#define RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXINDEX_OFFSET UNITYSDK_OFFSET(0x13196670)
#define RPG_CLIENT_RELICITEMDATA_GET_REFORGESUBAFFIXES_OFFSET UNITYSDK_OFFSET(0x13196630)
#define RPG_CLIENT_RELICITEMDATA_GET_RELICINFOROW_OFFSET UNITYSDK_OFFSET(0x1602F880)
#define RPG_CLIENT_RELICITEMDATA_GET_RELICROW_OFFSET UNITYSDK_OFFSET(0x1602F860)
#define RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0x13196540)
#define RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXPROPERTYTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x13196580)
#define RPG_CLIENT_RELICITEMDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1602F910)
#define RPG_CLIENT_RELICITEMDATA_SET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0x131964F0)
#define RPG_CLIENT_RELICITEMDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x1602F940)
#define RPG_CLIENT_RELICITEMDATA_SET_ISDISCARD_OFFSET UNITYSDK_OFFSET(0x1602F9A0)
#define RPG_CLIENT_RELICITEMDATA_SET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x1602F980)
#define RPG_CLIENT_RELICITEMDATA_SET_LEVELUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x13196620)
#define RPG_CLIENT_RELICITEMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1602F960)
#define RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x13196510)
#define RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x13196530)
#define RPG_CLIENT_RELICITEMDATA_SET_PREVIEWSUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0x13196570)
#define RPG_CLIENT_RELICITEMDATA_SET_REFORGEBLOCKSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0x13196660)
#define RPG_CLIENT_RELICITEMDATA_SET_REFORGESUBAFFIXES_OFFSET UNITYSDK_OFFSET(0x13196640)
#define RPG_CLIENT_RELICITEMDATA_SET_RELICROW_OFFSET UNITYSDK_OFFSET(0x1602F870)
#define RPG_CLIENT_RELICITEMDATA_SET_SUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0x13196550)
#define RPG_CLIENT_RELICITEMDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1602F920)
#define RPG_CLIENT_RELICITEMDATA_SHALLOWCOPY_OFFSET UNITYSDK_OFFSET(0x1602EC20)
#define RPG_CLIENT_RELICITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x16027C90)
#define RPG_CLIENT_RELICITEMDATA__CALCULATERELICVALUE_OFFSET UNITYSDK_OFFSET(0x1602F0E0)
#define RPG_CLIENT_RELICITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16027C40)
#define RPG_CLIENT_RELICITEMDATA__GETAVATARPROPERTYTYPEBYRELICAFFIX_OFFSET UNITYSDK_OFFSET(0x13196AE0)
#define RPG_CLIENT_RELICITEMDATA__GETMAINAFFIXIDPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1602EAA0)
#define RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYMAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x1602E400)
#define RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0x1602F6C0)
#define RPG_CLIENT_RELICITEMDATA__GETSUBAFFIXIDPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1602EB00)
#define RPG_CLIENT_RELICITEMDATA__INCREMENTVERSION_OFFSET UNITYSDK_OFFSET(0x1602ED30)
#define RPG_CLIENT_RELICITEMDATA__RECORDDATA_OFFSET UNITYSDK_OFFSET(0x1602F580)
#define RPG_CLIENT_RELICITEMDATA__REFRESHALLPROPERTY_OFFSET UNITYSDK_OFFSET(0x1602E490)
#define RPG_CLIENT_RELICITEMDATA__REFRESHBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x1602ED90)
#define RPG_CLIENT_RELICITEMDATA__REFRESHBELONGAVATARPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1602EE40)
#define RPG_CLIENT_RELICITEMDATA__REFRESHSUBAFFIXPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1602F210)
#define RPG_CLIENT_RELICITEMDATA__SORTREFORGESUBAFFIXES_OFFSET UNITYSDK_OFFSET(0x131968C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicItemData_TypeDefinitionIndex = 61590;

	class RelicItemData : public ::RPG::Client::ItemData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::UInt32>* SubAffixBonusRecord; // 0x40
		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* _ReforgeSubAffixes_k__BackingField; // 0x48
		::RPG::GameCore::RelicDataInfoRow* _RelicDataInfoRow; // 0x50
		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* _SubAffixList_k__BackingField; // 0x58
		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* _PreviewSubAffixList_k__BackingField; // 0x60
		::RPG::GameCore::RelicConfigRow* _RelicRow_k__BackingField; // 0x68
		::RPG::Client::RelicLevelUpBeforeData* _LevelUpBeforeData_k__BackingField; // 0x70
		::RPG::Client::RelicLevelUpBeforeData* _CacheBeforeData; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* _SubAffixProperty; // 0x80
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* _CacheSubPropertyTypeArray; // 0x88
		::System::UInt32 _Level_k__BackingField; // 0x90
		::System::UInt32 _BelongAvatarID_k__BackingField; // 0x94
		::System::UInt32 _MainAffixID_k__BackingField; // 0x98
		::System::UInt32 _ReforgeBlockSubAffixId_k__BackingField; // 0x9C
		::System::Boolean _IsProtected_k__BackingField; // 0xA0
		::System::Boolean _IsDiscard_k__BackingField; // 0xA1
		::System::UInt32 _CurrentExp_k__BackingField; // 0xA4
		::RPG::GameCore::AvatarPropertyType _MainAffixPropertyType_k__BackingField; // 0xA8
		::System::UInt32 _Version_k__BackingField; // 0xAC

		::System::Void _ctor(::System::UInt32 configID, ::System::UInt32 uID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__CTOR_OFFSET))(this, configID, uID);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic(::Class_1_FF220487FAB45279_2* info)
		{
			return ((::RPG::Client::RelicItemData*(*)(::Class_1_FF220487FAB45279_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_OFFSET))(info);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic_1(::Class_1_FF220487FAB45279_3* info, ::System::UInt32 uid)
		{
			return ((::RPG::Client::RelicItemData*(*)(::Class_1_FF220487FAB45279_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_1_OFFSET))(info, uid);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic_2(::Class_1_7F6A638FBAAEC90B* info)
		{
			return ((::RPG::Client::RelicItemData*(*)(::Class_1_7F6A638FBAAEC90B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_2_OFFSET))(info);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic_3(::System::UInt32 relicID, ::System::UInt32 relicLevel, ::RPG::GameCore::AvatarPropertyType mainProperty, ::Class_1_FB243EFAE922024A* subRow)
		{
			return ((::RPG::Client::RelicItemData*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::AvatarPropertyType, ::Class_1_FB243EFAE922024A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_3_OFFSET))(relicID, relicLevel, mainProperty, subRow);
		}

		::RPG::Client::RelicItemData* ShallowCopy()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SHALLOWCOPY_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E14A0A1A8B1F847C_4* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SYNC_OFFSET))(this, item);
		}

		::RPG::GameCore::FixPoint GetMainAffixPropertyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETMAINAFFIXPROPERTYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetSubAffixPropertyValue(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXPROPERTYVALUE_OFFSET))(this, type);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETPROPERTYVALUE_OFFSET))(this, type);
		}

		::RPG::GameCore::FixPoint CalculatePropertyValue(::RPG::GameCore::AvatarPropertyType type, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CALCULATEPROPERTYVALUE_OFFSET))(this, type, level);
		}

		::System::Void _RefreshAllProperty(::RPG::GameCore::AvatarPropertyType mainAffixPropertyType, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* subAffixProperties)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHALLPROPERTY_OFFSET))(this, mainAffixPropertyType, subAffixProperties);
		}

		::System::Void _RefreshSubAffixProperties(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* subAffixProperties)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHSUBAFFIXPROPERTIES_OFFSET))(this, subAffixProperties);
		}

		::System::Void _RefreshBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHBEFOREDATA_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType _GetPropertyTypeByMainAffixID(::System::UInt32 affixID)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYMAINAFFIXID_OFFSET))(this, affixID);
		}

		::RPG::GameCore::AvatarPropertyType _GetPropertyTypeBySubAffixID(::System::UInt32 affixID)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYSUBAFFIXID_OFFSET))(this, affixID);
		}

		::System::UInt32 _GetMainAffixIDPropertyType(::RPG::GameCore::AvatarPropertyType mainProperty)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETMAINAFFIXIDPROPERTYTYPE_OFFSET))(this, mainProperty);
		}

		::System::UInt32 GetSubAffixIdByPropertyType(::RPG::GameCore::AvatarPropertyType property)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXIDBYPROPERTYTYPE_OFFSET))(this, property);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicShowPropertyData*>* GetAllPropertyDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicShowPropertyData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETALLPROPERTYDATALIST_OFFSET))(this);
		}

		::System::UInt32 _GetSubAffixIDPropertyType(::RPG::GameCore::AvatarPropertyType property)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETSUBAFFIXIDPROPERTYTYPE_OFFSET))(this, property);
		}

		::RPG::GameCore::FixPoint _CalculateRelicValue(::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__CALCULATERELICVALUE_OFFSET))(this, level);
		}

		::System::Void _RecordData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__RECORDDATA_OFFSET))(this);
		}

		::System::Void _RefreshBelongAvatarProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHBELONGAVATARPROPERTIES_OFFSET))(this);
		}

		::System::Void _IncrementVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__INCREMENTVERSION_OFFSET))(this);
		}

		::RPG::GameCore::RelicConfigRow* get_RelicRow()
		{
			return ((::RPG::GameCore::RelicConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_RELICROW_OFFSET))(this);
		}

		::System::Void set_RelicRow(::RPG::GameCore::RelicConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_RELICROW_OFFSET))(this, value);
		}

		::RPG::GameCore::RelicDataInfoRow* get_RelicInfoRow()
		{
			return ((::RPG::GameCore::RelicDataInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_RELICINFOROW_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_VERSION_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_CURRENTEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsProtected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_ISPROTECTED_OFFSET))(this);
		}

		::System::Void set_IsProtected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_ISPROTECTED_OFFSET))(this, value);
		}

		::System::Boolean get_IsDiscard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_ISDISCARD_OFFSET))(this);
		}

		::System::Void set_IsDiscard(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_ISDISCARD_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_BELONGAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_BELONGAVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_MainAffixID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXID_OFFSET))(this);
		}

		::System::Void set_MainAffixID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXID_OFFSET))(this, value);
		}

		::RPG::GameCore::AvatarPropertyType get_MainAffixPropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_MainAffixPropertyType(::RPG::GameCore::AvatarPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* get_SubAffixList()
		{
			return ((::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXLIST_OFFSET))(this);
		}

		::System::Void set_SubAffixList(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_SUBAFFIXLIST_OFFSET))(this, value);
		}

		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* get_PreviewSubAffixList()
		{
			return ((::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_PREVIEWSUBAFFIXLIST_OFFSET))(this);
		}

		::System::Void set_PreviewSubAffixList(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_PREVIEWSUBAFFIXLIST_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* get_SubAffixPropertyTypeArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXPROPERTYTYPEARRAY_OFFSET))(this);
		}

		::RPG::Client::RelicLevelUpBeforeData* get_LevelUpBeforeData()
		{
			return ((::RPG::Client::RelicLevelUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_LEVELUPBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_LevelUpBeforeData(::RPG::Client::RelicLevelUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicLevelUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_LEVELUPBEFOREDATA_OFFSET))(this, value);
		}

		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* get_ReforgeSubAffixes()
		{
			return ((::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_REFORGESUBAFFIXES_OFFSET))(this);
		}

		::System::Void set_ReforgeSubAffixes(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_REFORGESUBAFFIXES_OFFSET))(this, value);
		}

		::System::UInt32 get_ReforgeBlockSubAffixId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXID_OFFSET))(this);
		}

		::System::Void set_ReforgeBlockSubAffixId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_REFORGEBLOCKSUBAFFIXID_OFFSET))(this, value);
		}

		::System::Int32 get_ReforgeBlockSubAffixIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXINDEX_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* CreateDisplayRelicForReforge()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELICFORREFORGE_OFFSET))(this);
		}

		::System::Void _SortReforgeSubAffixes(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* reforgeSubAffixes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__SORTREFORGESUBAFFIXES_OFFSET))(this, reforgeSubAffixes);
		}

		::RPG::GameCore::AvatarPropertyType _GetAvatarPropertyTypeByRelicAffix(::Class_1_D1E0AD3915BCCF29_1* affix)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETAVATARPROPERTYTYPEBYRELICAFFIX_OFFSET))(this, affix);
		}
	};
}
