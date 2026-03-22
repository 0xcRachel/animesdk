#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_5276F33F494E6073;
class Class_1_883ED260661378C2;
class Class_1_A9C466B0994F2417;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class EntitySnapshot; }
namespace Proto { class GroupSnapshot; }
namespace Proto { class PerformanceStartSnapshot; }
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class PerformanceBackupConfig; }
namespace RPG::GameCore { class PerformanceStandalonePlayOverrideConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }

#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYCROSSMAP_OFFSET UNITYSDK_OFFSET(0x961CE00)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYOFFLINE_OFFSET UNITYSDK_OFFSET(0x961CF60)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYPERFORMANCESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9619E50)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9619C30)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEDISTRICTPDEF_OFFSET UNITYSDK_OFFSET(0x961EEA0)
#define RPG_CLIENT_MAPDEFFACTORY_CREATENPCDEF_OFFSET UNITYSDK_OFFSET(0x961D6E0)
#define RPG_CLIENT_MAPDEFFACTORY_CREATENPCMONSTERDEF_OFFSET UNITYSDK_OFFSET(0x961DEF0)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_1_OFFSET UNITYSDK_OFFSET(0x961E780)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_OFFSET UNITYSDK_OFFSET(0x961E620)
#define RPG_CLIENT_MAPDEFFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x9619280)
#define RPG_CLIENT_MAPDEFFACTORY__CREATEOVERRIDEGROUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x961CBB0)
#define RPG_CLIENT_MAPDEFFACTORY__GETGROUPSNAPSHOTLISTBYGROUPID_OFFSET UNITYSDK_OFFSET(0x961CAD0)
#define RPG_CLIENT_MAPDEFFACTORY__HANDLEPERFORMANCESNAPSHOTCHEST_OFFSET UNITYSDK_OFFSET(0x961C640)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFBUFFERS_OFFSET UNITYSDK_OFFSET(0x9619730)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_OFFSET UNITYSDK_OFFSET(0x9619570)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x961B180)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0x9619AF0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x961B4B0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x9619D90)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_OFFSET UNITYSDK_OFFSET(0x9619A50)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x961B9B0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFGROUPCUSTOMSAVEDATA_OFFSET UNITYSDK_OFFSET(0x9619900)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFLIGHTENSECTIONLIST_OFFSET UNITYSDK_OFFSET(0x96195C0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFMAZECROSSFLOORCONDITION_OFFSET UNITYSDK_OFFSET(0x9619B80)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_OFFSET UNITYSDK_OFFSET(0x9619440)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x961A910)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPOBJECTS_OFFINE_OFFSET UNITYSDK_OFFSET(0x961D120)
#define RPG_CLIENT_MAPDEFFACTORY__INITOPENEDCHESTS_OFFSET UNITYSDK_OFFSET(0x9619860)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYCUSTOM_OFFSET UNITYSDK_OFFSET(0x961A260)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYTABLE_OFFSET UNITYSDK_OFFSET(0x961A320)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTGROUPBYCUSTOM_OFFSET UNITYSDK_OFFSET(0x961C1C0)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9619FE0)
#define RPG_CLIENT_MAPDEFFACTORY__TRYADDSINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x961BDE0)
#define RPG_CLIENT_MAPDEFFACTORY__TRYGETGROUPSNAPSHOTBYGROUPID_OFFSET UNITYSDK_OFFSET(0x961C960)
#define RPG_CLIENT_MAPDEFFACTORY__TRYREMOVESINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x961C7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDefFactory_TypeDefinitionIndex = 49298;

	class MapDefFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::MapDef* Create(::Class_1_14E02E1F6D70E487_1* mapInfo)
		{
			return ((::RPG::Client::MapDef*(*)(::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATE_OFFSET))(mapInfo);
		}

		static ::RPG::Client::MapDef* CreateByStandalonePerformance(::Class_1_883ED260661378C2* snapshot, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig* overrideConfig)
		{
			return ((::RPG::Client::MapDef*(*)(::Class_1_883ED260661378C2*, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYSTANDALONEPERFORMANCE_OFFSET))(snapshot, overrideConfig);
		}

		static ::RPG::Client::MapDef* CreateByPerformanceSnapshot(::Proto::PerformanceStartSnapshot* snapshot, ::RPG::GameCore::PerformanceBackupConfig* backupConfig)
		{
			return ((::RPG::Client::MapDef*(*)(::Proto::PerformanceStartSnapshot*, ::RPG::GameCore::PerformanceBackupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYPERFORMANCESNAPSHOT_OFFSET))(snapshot, backupConfig);
		}

		static ::System::Void _OverridePerformanceSnapshot(::Class_1_5276F33F494E6073* builder, ::Proto::PerformanceStartSnapshot* snapshot, ::RPG::GameCore::PerformanceBackupConfig* backupConfig)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Proto::PerformanceStartSnapshot*, ::RPG::GameCore::PerformanceBackupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOT_OFFSET))(builder, snapshot, backupConfig);
		}

		static ::System::Void _OverridePerformanceSnapshotByCustom(::Class_1_5276F33F494E6073* builder, ::Proto::PerformanceStartSnapshot* snapshot)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYCUSTOM_OFFSET))(builder, snapshot);
		}

		static ::System::Void _OverridePerformanceSnapshotGroupByCustom(::RPG::Client::MapDef* mapDef, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* groupSnapshots)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTGROUPBYCUSTOM_OFFSET))(mapDef, groupSnapshots);
		}

		static ::System::Void _HandlePerformanceSnapshotChest(::Proto::EntitySnapshot* entitySnapshot, ::RPG::GameCore::RuntimeGroupInfo* runtimeGroupInfo)
		{
			return ((::System::Void(*)(::Proto::EntitySnapshot*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__HANDLEPERFORMANCESNAPSHOTCHEST_OFFSET))(entitySnapshot, runtimeGroupInfo);
		}

		static ::System::Void _OverridePerformanceSnapshotByTable(::Class_1_5276F33F494E6073* builder, ::Proto::PerformanceStartSnapshot* snapshot)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYTABLE_OFFSET))(builder, snapshot);
		}

		static ::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* _GetGroupSnapshotListByGroupID(::RPG::GameCore::RuntimeGroupInfo* runtimeGroupInfo, ::Proto::PerformanceStartSnapshot* snapshot, ::System::UInt32 groupID)
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::RPG::GameCore::RuntimeGroupInfo*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__GETGROUPSNAPSHOTLISTBYGROUPID_OFFSET))(runtimeGroupInfo, snapshot, groupID);
		}

		static ::System::Void _TryAddSingleExtraActiveGroupSnapshot(::RPG::Client::MapDef* mapDef, ::Proto::PerformanceStartSnapshot* snapshot, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__TRYADDSINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET))(mapDef, snapshot, groupID);
		}

		static ::System::Void _TryRemoveSingleExtraActiveGroupSnapshot(::RPG::Client::MapDef* mapDef, ::Proto::PerformanceStartSnapshot* snapshot, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__TRYREMOVESINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET))(mapDef, snapshot, groupID);
		}

		static ::Proto::GroupSnapshot* _TryGetGroupSnapshotByGroupID(::RPG::Client::MapDef* mapDef, ::Proto::PerformanceStartSnapshot* snapshot, ::System::UInt32 groupID)
		{
			return ((::Proto::GroupSnapshot*(*)(::RPG::Client::MapDef*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__TRYGETGROUPSNAPSHOTBYGROUPID_OFFSET))(mapDef, snapshot, groupID);
		}

		static ::Proto::GroupSnapshot* _CreateOverrideGroupSnapshot(::RPG::GameCore::RuntimeGroupInfo* runtimeGroupInfo)
		{
			return ((::Proto::GroupSnapshot*(*)(::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__CREATEOVERRIDEGROUPSNAPSHOT_OFFSET))(runtimeGroupInfo);
		}

		static ::System::Void _InitMapDefServerPart_PerformanceReplay(::Class_1_5276F33F494E6073* builder, ::Proto::PerformanceStartSnapshot* snapshot)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_PERFORMANCEREPLAY_OFFSET))(builder, snapshot);
		}

		static ::System::Void _InitMapDefClientPart_PerformanceReplay(::Class_1_5276F33F494E6073* builder, ::Proto::PerformanceStartSnapshot* snapshot)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_PERFORMANCEREPLAY_OFFSET))(builder, snapshot);
		}

		static ::System::Void _InitMapDefFloorCustomValue_PerformanceReplay(::Class_1_5276F33F494E6073* builder, ::Proto::PerformanceStartSnapshot* snapshot)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_PERFORMANCEREPLAY_OFFSET))(builder, snapshot);
		}

		static ::System::Void _InitMapDefFloorSavedValue_PerformanceReplay(::Class_1_5276F33F494E6073* builder, ::Proto::PerformanceStartSnapshot* snapshot)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_PERFORMANCEREPLAY_OFFSET))(builder, snapshot);
		}

		static ::System::Void _InitMapDefFloorCustomValue_StandalonePerformanceReplay(::Class_1_5276F33F494E6073* builder, ::Class_1_883ED260661378C2* snapshot)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Class_1_883ED260661378C2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET))(builder, snapshot);
		}

		static ::RPG::Client::MapDef* CreateByCrossMap(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 dimensionID, ::System::UInt32 storylineID, ::System::UInt32 contentID)
		{
			return ((::RPG::Client::MapDef*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYCROSSMAP_OFFSET))(planeID, floorID, dimensionID, storylineID, contentID);
		}

		static ::RPG::Client::MapDef* CreateByOffline(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 anchorID, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* entities)
		{
			return ((::RPG::Client::MapDef*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYOFFLINE_OFFSET))(planeID, floorID, groupID, anchorID, entities);
		}

		static ::System::Void _InitMapObjects_Offine(::Class_1_5276F33F494E6073* builder)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPOBJECTS_OFFINE_OFFSET))(builder);
		}

		static ::System::Void _InitMapDefServerPart(::Class_1_5276F33F494E6073* builder, ::Class_1_14E02E1F6D70E487_1* mapInfo)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_OFFSET))(builder, mapInfo);
		}

		static ::System::Void _InitMapDefClientPart(::Class_1_5276F33F494E6073* builder, ::Class_1_14E02E1F6D70E487_1* mapInfo)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_OFFSET))(builder, mapInfo);
		}

		static ::System::Void _InitMapDefLightenSectionList(::Class_1_5276F33F494E6073* builder, ::Class_1_14E02E1F6D70E487_1* mapInfo)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFLIGHTENSECTIONLIST_OFFSET))(builder, mapInfo);
		}

		static ::System::Void _InitMapDefGroupCustomSaveData(::Class_1_5276F33F494E6073* builder, ::Class_1_14E02E1F6D70E487_1* mapInfo)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFGROUPCUSTOMSAVEDATA_OFFSET))(builder, mapInfo);
		}

		static ::System::Void _InitMapDefFloorSavedValue(::Class_1_5276F33F494E6073* builder, ::Class_1_14E02E1F6D70E487_1* mapInfo)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_OFFSET))(builder, mapInfo);
		}

		static ::System::Void _InitMapDefFloorCustomValue(::Class_1_5276F33F494E6073* builder)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_OFFSET))(builder);
		}

		static ::System::Void _InitMapDefBuffers(::Class_1_5276F33F494E6073* builder, ::Class_1_14E02E1F6D70E487_1* mapInfo)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFBUFFERS_OFFSET))(builder, mapInfo);
		}

		static ::System::Void _InitOpenedChests(::Class_1_5276F33F494E6073* builder, ::Class_1_14E02E1F6D70E487_1* mapInfo)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITOPENEDCHESTS_OFFSET))(builder, mapInfo);
		}

		static ::System::Void _InitMapDefMazeCrossFloorCondition(::Class_1_5276F33F494E6073* builder, ::Class_1_14E02E1F6D70E487_1* mapInfo)
		{
			return ((::System::Void(*)(::Class_1_5276F33F494E6073*, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFMAZECROSSFLOORCONDITION_OFFSET))(builder, mapInfo);
		}

		static ::RPG::Client::MapNpcDef* CreateNpcDef(::RPG::Client::MapDef* mapDef, ::Class_1_A9C466B0994F2417* groupDef, ::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::System::String* uniqueName)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::RPG::Client::MapDef*, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATENPCDEF_OFFSET))(mapDef, groupDef, groupInstanceID, instanceID, uniqueName);
		}

		static ::RPG::Client::MapNpcDef* CreateNpcMonsterDef(::RPG::Client::MapDef* mapDef, ::Class_1_A9C466B0994F2417* groupDef, ::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::RPG::Client::MapDef*, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATENPCMONSTERDEF_OFFSET))(mapDef, groupDef, groupInstanceID, instanceID);
		}

		static ::RPG::Client::MapPropDef* CreatePropDef(::RPG::Client::MapDef* mapDef, ::Class_1_A9C466B0994F2417* groupDef, ::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapPropDef*(*)(::RPG::Client::MapDef*, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_OFFSET))(mapDef, groupDef, groupInstanceID, instanceID);
		}

		static ::RPG::Client::MapPropDef* CreatePropDef_1(::Class_1_A9C466B0994F2417* groupDef, ::RPG::GameCore::RuntimeGroupInfo* runtimeGroupInfo, ::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapPropDef*(*)(::Class_1_A9C466B0994F2417*, ::RPG::GameCore::RuntimeGroupInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_1_OFFSET))(groupDef, runtimeGroupInfo, groupInstanceID, instanceID);
		}

		static ::RPG::Client::MapDistrictDef* CreateDistrictpDef(::RPG::Client::MapDef* mapDef, ::Class_1_A9C466B0994F2417* groupDef, ::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapDistrictDef*(*)(::RPG::Client::MapDef*, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEDISTRICTPDEF_OFFSET))(mapDef, groupDef, groupInstanceID, instanceID);
		}
	};
}
