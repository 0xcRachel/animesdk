#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_837;
class Class_1_6AD63169696218E7;
class Class_1_F11CBE4D3C7DF06D_1;
class Class_1_FD33BD99AA9127F3_2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class BattleRogueMagicData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0x172CC1C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x172CC610)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CHECKISMAGICUNITCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0x172CE630)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARALLUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0x172C31F0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0x172CE730)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COMPAREUNITPOWEREQUIPPEDONSCEPTER_OFFSET UNITYSDK_OFFSET(0x172CE140)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COUNTALLUNITITEMS_OFFSET UNITYSDK_OFFSET(0x172CD960)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0x172CCAA0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172BB390)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_FINDASSOCIATEDMAGICSCEPTERS_OFFSET UNITYSDK_OFFSET(0x172CB4E0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLSCEPTERITEMS_OFFSET UNITYSDK_OFFSET(0x172CD6D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNEQUIPPEDUNITITEMS_OFFSET UNITYSDK_OFFSET(0x172CD750)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITITEMS_OFFSET UNITYSDK_OFFSET(0x172CD710)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITSHOWNEWMARKLIST_OFFSET UNITYSDK_OFFSET(0x172CE800)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETATTACHUNITBASICPOWER_OFFSET UNITYSDK_OFFSET(0x172CDCD0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERBASICPOWER_OFFSET UNITYSDK_OFFSET(0x172CA640)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERTOTALPOWER_OFFSET UNITYSDK_OFFSET(0x172CA3E0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x172CB730)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNT_OFFSET UNITYSDK_OFFSET(0x172CB330)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETPASSIVEUNITPERCENT_OFFSET UNITYSDK_OFFSET(0x172CDF40)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERCOUNTBYFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x172CBB80)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERITEM_OFFSET UNITYSDK_OFFSET(0x172CC470)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPEFUNC_OFFSET UNITYSDK_OFFSET(0x172CE440)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPESTYLE_OFFSET UNITYSDK_OFFSET(0x172CE250)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEMLISTBYMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x172CD440)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0x172C9B80)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_ISAUTODRESSINMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x172CBCE0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0x172CE870)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_UNITCOMPOSENEEDNUM_OFFSET UNITYSDK_OFFSET(0x172CB1A0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_HASANYMAGICUNITCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0x172CB000)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISMAGICUNITCANUPGRADEWITHONEMORE_OFFSET UNITYSDK_OFFSET(0x172CB3D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISRECOMPRESERVEMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x172CB930)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITEQUIPPED_OFFSET UNITYSDK_OFFSET(0x172CD900)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0x172CE7A0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_LEVELUPMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0x172CC560)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0x172CC3E0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x172CC850)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0x172CC250)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x172CC6C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SCEPTERHASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0x172CB8B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SETUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0x172CE6C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_ISAUTODRESSINMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x172CBCF0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0x172CE880)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0x172BBB70)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCAUTODRESSINMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x172C7CF0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCRECORD_OFFSET UNITYSDK_OFFSET(0x172BA2E0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_TRYGETBELONGSCEPTERDATAITEMBYUNITUID_OFFSET UNITYSDK_OFFSET(0x172CD5B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__ADDMAGICUNITINBUCKET_OFFSET UNITYSDK_OFFSET(0x172CBF10)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x172CE890)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172BA1F0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__GETALLSCEPTERITEMSASPOWERINTERFACEPOOLLIST_OFFSET UNITYSDK_OFFSET(0x172CD9B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__HASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0x172CB2B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REFRESHALLBUCKETS_OFFSET UNITYSDK_OFFSET(0x172CBD00)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REMOVEMAGICUNITINBUCKET_OFFSET UNITYSDK_OFFSET(0x172CBFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterInfo_TypeDefinitionIndex = 62131;

	class RogueMagicScepterInfo : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__MAX_UNIT_LEVEL()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RogueMagicScepterInfo_TypeDefinitionIndex)->GetStaticField(0x7520);
		}
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ShowNewMarkUnitUIDSet; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _MagicUnitBuckets; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* _ScepterItems; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _UnitItems; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _ComposeConsumeUnits; // 0x30
		::System::Boolean _IsAutoDressInMagicUnit_k__BackingField; // 0x38
		::RPG::GameCore::RogueMagicStyleType _StyleType_k__BackingField; // 0x3C
		::System::UInt32 _UnitComposeNeedNum; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CCTOR_OFFSET))();
		}

		::System::Boolean HasAnyMagicUnitCanCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_HASANYMAGICUNITCANCOMPOSE_OFFSET))(this);
		}

		::System::UInt32 GetMagicUnitCount(::System::UInt32 magicUnitID, ::System::UInt32 magicUnitLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNT_OFFSET))(this, magicUnitID, magicUnitLevel);
		}

		::System::Boolean IsMagicUnitCanUpgradeWithOneMore(::System::UInt32 magicUnitID, ::System::UInt32 magicUnitLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISMAGICUNITCANUPGRADEWITHONEMORE_OFFSET))(this, magicUnitID, magicUnitLevel);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* FindAssociatedMagicScepters(::RPG::Client::RogueMagicUnitDataItem* unit)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_FINDASSOCIATEDMAGICSCEPTERS_OFFSET))(this, unit);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetMagicUnitCountInfo(::System::UInt32 magicUnitID)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNTINFO_OFFSET))(this, magicUnitID);
		}

		::System::Boolean ScepterHasNextLevel(::System::UInt32 scepterId, ::System::UInt32 level, ::System::UInt32 plusLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SCEPTERHASNEXTLEVEL_OFFSET))(this, scepterId, level, plusLevel);
		}

		::System::Boolean IsRecomPreserveMagicUnit(::RPG::Client::RogueMagicUnitDataItem* unit)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISRECOMPRESERVEMAGICUNIT_OFFSET))(this, unit);
		}

		::System::UInt32 GetScepterCountByFuncType(::RPG::GameCore::RogueMagicScepterFuncType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERCOUNTBYFUNCTYPE_OFFSET))(this, type);
		}

		::System::Boolean get_IsAutoDressInMagicUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_ISAUTODRESSINMAGICUNIT_OFFSET))(this);
		}

		::System::Void set_IsAutoDressInMagicUnit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_ISAUTODRESSINMAGICUNIT_OFFSET))(this, value);
		}

		::System::Void _RefreshAllBuckets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REFRESHALLBUCKETS_OFFSET))(this);
		}

		::System::Void _AddMagicUnitInBucket(::System::UInt32 unitID, ::System::UInt32 unitLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__ADDMAGICUNITINBUCKET_OFFSET))(this, unitID, unitLevel);
		}

		::System::Void _RemoveMagicUnitInBucket(::System::UInt32 unitID, ::System::UInt32 unitLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REMOVEMAGICUNITINBUCKET_OFFSET))(this, unitID, unitLevel);
		}

		::System::Boolean _HasNextLevel(::System::UInt32 magicUnitID, ::System::UInt32 magicUnitLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__HASNEXTLEVEL_OFFSET))(this, magicUnitID, magicUnitLevel);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_FD33BD99AA9127F3_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FD33BD99AA9127F3_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCALL_OFFSET))(this, proto);
		}

		::System::Void SyncRecord(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F11CBE4D3C7DF06D_1*>* magicUnitList, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6AD63169696218E7*>* scepterList, ::System::UInt32 styleTypeUint)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F11CBE4D3C7DF06D_1*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6AD63169696218E7*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCRECORD_OFFSET))(this, magicUnitList, scepterList, styleTypeUint);
		}

		::System::Void SyncAutoDressInMagicUnit(::System::Boolean isAutoDressIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCAUTODRESSINMAGICUNIT_OFFSET))(this, isAutoDressIn);
		}

		::System::Void AddMagicSpector(::Class_1_6AD63169696218E7* scepterItemProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6AD63169696218E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICSPECTOR_OFFSET))(this, scepterItemProto);
		}

		::System::Void RemoveMagicSpector(::Class_1_6AD63169696218E7* scepterItemProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6AD63169696218E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICSPECTOR_OFFSET))(this, scepterItemProto);
		}

		::System::Void RefreshMagicSpector(::Class_1_6AD63169696218E7* scepterItemProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6AD63169696218E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICSPECTOR_OFFSET))(this, scepterItemProto);
		}

		::System::Void LevelUpMagicSpector(::Class_1_6AD63169696218E7* scepterItemProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6AD63169696218E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_LEVELUPMAGICSPECTOR_OFFSET))(this, scepterItemProto);
		}

		::System::Void AddMagicUnit(::Class_1_F11CBE4D3C7DF06D_1* unitItemProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICUNIT_OFFSET))(this, unitItemProto);
		}

		::System::Void RemoveMagicUnit(::Class_1_F11CBE4D3C7DF06D_1* unitItemProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICUNIT_OFFSET))(this, unitItemProto);
		}

		::System::Void RefreshMagicUnit(::Class_1_F11CBE4D3C7DF06D_1* unitItemProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICUNIT_OFFSET))(this, unitItemProto);
		}

		static ::RPG::Client::RogueMagicScepterInfo* CreateFromBattle(::RPG::GameCore::BattleRogueMagicData* battleData)
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::RPG::GameCore::BattleRogueMagicData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CREATEFROMBATTLE_OFFSET))(battleData);
		}

		::RPG::Client::RogueMagicScepterDataItem* GetScepterItem(::System::UInt32 scepterID, ::System::UInt32 level)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERITEM_OFFSET))(this, scepterID, level);
		}

		::RPG::Client::RogueMagicUnitDataItem* GetUnitDataItem(::System::UInt32 uid)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEM_OFFSET))(this, uid);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetUnitDataItemListByMagicUnit(::System::UInt32 magicUnitID, ::System::UInt32 level)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEMLISTBYMAGICUNIT_OFFSET))(this, magicUnitID, level);
		}

		::RPG::Client::RogueMagicScepterDataItem* TryGetBelongScepterDataItemByUnitUID(::System::UInt32 unitUID)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_TRYGETBELONGSCEPTERDATAITEMBYUNITUID_OFFSET))(this, unitUID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* GetAllScepterItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLSCEPTERITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetAllUnitItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetAllUnequippedUnitItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNEQUIPPEDUNITITEMS_OFFSET))(this);
		}

		::System::UInt32 CountAllUnitItems()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COUNTALLUNITITEMS_OFFSET))(this);
		}

		::System::Boolean IsUnitEquipped(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITEQUIPPED_OFFSET))(this, uid);
		}

		::System::UInt32 GetMagicScpterTotalPower(::Class_0_16E4307DCC419505_837* scepterData)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_837*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERTOTALPOWER_OFFSET))(this, scepterData);
		}

		::System::UInt32 GetMagicScpterBasicPower(::Class_0_16E4307DCC419505_837* scepterData)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_837*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERBASICPOWER_OFFSET))(this, scepterData);
		}

		::System::UInt32 GetAttachUnitBasicPower(::RPG::Client::RogueMagicUnitDataItem* unitData, ::Class_0_16E4307DCC419505_837* belongScepter)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_837*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETATTACHUNITBASICPOWER_OFFSET))(this, unitData, belongScepter);
		}

		::System::Single GetPassiveUnitPercent(::RPG::Client::RogueMagicUnitDataItem* unitData, ::Class_0_16E4307DCC419505_837* belongScepter)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_837*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETPASSIVEUNITPERCENT_OFFSET))(this, unitData, belongScepter);
		}

		::System::Int32 CompareUnitPowerEquippedOnScepter(::RPG::Client::RogueMagicUnitDataItem* sourceUnitData, ::System::UInt32 targetSlotID, ::RPG::Client::RogueMagicScepterDataItem* belongScepter)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::System::UInt32, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COMPAREUNITPOWEREQUIPPEDONSCEPTER_OFFSET))(this, sourceUnitData, targetSlotID, belongScepter);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetUnequippedRecomMagicUnitsByMountTypeStyle(::RPG::GameCore::RogueMagicMountType mountType, ::RPG::GameCore::RogueMagicStyleType styleType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPESTYLE_OFFSET))(this, mountType, styleType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetUnequippedRecomMagicUnitsByMountTypeFunc(::RPG::GameCore::RogueMagicMountType mountType, ::RPG::GameCore::RogueMagicScepterFuncType funcType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPEFUNC_OFFSET))(this, mountType, funcType);
		}

		::System::Boolean CheckIsMagicUnitCanCompose(::System::UInt32 uid, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CHECKISMAGICUNITCANCOMPOSE_OFFSET))(this, uid, level);
		}

		::System::Void SetUnitShowNewMark(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SETUNITSHOWNEWMARK_OFFSET))(this, uid);
		}

		::System::Void ClearUnitShowNewMark(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARUNITSHOWNEWMARK_OFFSET))(this, uid);
		}

		::System::Void ClearAllUnitShowNewMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARALLUNITSHOWNEWMARK_OFFSET))(this);
		}

		::System::Boolean IsUnitShowNewMark(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITSHOWNEWMARK_OFFSET))(this, uid);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnitShowNewMarkList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITSHOWNEWMARKLIST_OFFSET))(this);
		}

		::RPG::PoolList_1<::Class_0_16E4307DCC419505_837*>* _GetAllScepterItemsAsPowerInterfacePoolList(::Class_0_16E4307DCC419505_837* scepterDataToReplace)
		{
			return ((::RPG::PoolList_1<::Class_0_16E4307DCC419505_837*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_837*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__GETALLSCEPTERITEMSASPOWERINTERFACEPOOLLIST_OFFSET))(this, scepterDataToReplace);
		}

		::System::UInt32 get_UnitComposeNeedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_UNITCOMPOSENEEDNUM_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStyleType get_StyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_STYLETYPE_OFFSET))(this);
		}

		::System::Void set_StyleType(::RPG::GameCore::RogueMagicStyleType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_STYLETYPE_OFFSET))(this, value);
		}
	};
}
