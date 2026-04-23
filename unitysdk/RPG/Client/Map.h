#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConflictType.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibleReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_344;
class Class_1_0ACF520A830B24C7;
class Class_1_303D5A33D1401D59;
class Class_1_3F095C22F41AA332;
class Class_1_578885A359BC41A3;
class Class_1_5878A2422EE7CDFB;
class Class_1_777F514A924455D9;
class Class_1_902B807FBCF1D9FA;
class Class_1_B48FFE703050178A;
class Class_1_C58549E83E2A95B6;
class Class_2_BA06A5BD139A4E18;
class Class_2_BD898AE9C0E88E25;
class Conflict;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrict; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace RPG::Client { class Map_RefreshEntitiesExtraInfo; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MAP_ADDDISTRICTFORCONFLICT_OFFSET UNITYSDK_OFFSET(0x1231E410)
#define RPG_CLIENT_MAP_ADDNPCSERIESIDENTITY_OFFSET UNITYSDK_OFFSET(0x1231E210)
#define RPG_CLIENT_MAP_ADDPROPFORCONFLICT_OFFSET UNITYSDK_OFFSET(0x1231E310)
#define RPG_CLIENT_MAP_BINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0x158AA1C0)
#define RPG_CLIENT_MAP_CLEAROBJECTSFORENTERBATTLEMEMORYPERFORMANCEOPTIMIZE_OFFSET UNITYSDK_OFFSET(0x12324880)
#define RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_1_OFFSET UNITYSDK_OFFSET(0x158A9040)
#define RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_OFFSET UNITYSDK_OFFSET(0x158A8FD0)
#define RPG_CLIENT_MAP_DISABLECONFLICTREFRESH_OFFSET UNITYSDK_OFFSET(0x1231E9E0)
#define RPG_CLIENT_MAP_DISABLEUPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0x12321D50)
#define RPG_CLIENT_MAP_DISPOSESURFACEMANAGER_OFFSET UNITYSDK_OFFSET(0x158AB050)
#define RPG_CLIENT_MAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158AA620)
#define RPG_CLIENT_MAP_ENABLEUPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0x12321D00)
#define RPG_CLIENT_MAP_ENDOFTICK_OFFSET UNITYSDK_OFFSET(0x158AACE0)
#define RPG_CLIENT_MAP_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x158AA980)
#define RPG_CLIENT_MAP_FILENPCLISTBYGROUP_OFFSET UNITYSDK_OFFSET(0x123261A0)
#define RPG_CLIENT_MAP_FILLNPCLISTBYGROUP_OFFSET UNITYSDK_OFFSET(0x12325FF0)
#define RPG_CLIENT_MAP_GETBATTLEAREADEF_OFFSET UNITYSDK_OFFSET(0x123212C0)
#define RPG_CLIENT_MAP_GETBATTLEBLOCK_OFFSET UNITYSDK_OFFSET(0x12326E10)
#define RPG_CLIENT_MAP_GETCHECKPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x12325310)
#define RPG_CLIENT_MAP_GETDEFAULTBATTLEAREADEF_OFFSET UNITYSDK_OFFSET(0x12321590)
#define RPG_CLIENT_MAP_GETDISTRICTALL_OFFSET UNITYSDK_OFFSET(0x123256D0)
#define RPG_CLIENT_MAP_GETMAPHINTMANAGER_OFFSET UNITYSDK_OFFSET(0x158AB420)
#define RPG_CLIENT_MAP_GETMAPOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0x12324D90)
#define RPG_CLIENT_MAP_GETMAPOBJECTBYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x12325890)
#define RPG_CLIENT_MAP_GETMAPOBJECT_OFFSET UNITYSDK_OFFSET(0x12325CE0)
#define RPG_CLIENT_MAP_GETMAPPATHWAYDATA_OFFSET UNITYSDK_OFFSET(0x12320FE0)
#define RPG_CLIENT_MAP_GETMONSTERNPCEVENTID_OFFSET UNITYSDK_OFFSET(0x12325A10)
#define RPG_CLIENT_MAP_GETNEARESTCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x12325120)
#define RPG_CLIENT_MAP_GETNPCALLBYGROUP_OFFSET UNITYSDK_OFFSET(0x12325D70)
#define RPG_CLIENT_MAP_GETPROPALLBYGROUP_OFFSET UNITYSDK_OFFSET(0x12325450)
#define RPG_CLIENT_MAP_GET_ALLMAPOBJECTSCOUNT_OFFSET UNITYSDK_OFFSET(0x123239C0)
#define RPG_CLIENT_MAP_GET_CACHEDREQUEST_OFFSET UNITYSDK_OFFSET(0x12321B60)
#define RPG_CLIENT_MAP_GET_HASASYNCLOADINGMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0x12321B70)
#define RPG_CLIENT_MAP_GET_HASDISPOSED_OFFSET UNITYSDK_OFFSET(0x158AB3C0)
#define RPG_CLIENT_MAP_GET_HAVESTARTROOM_OFFSET UNITYSDK_OFFSET(0x158AB410)
#define RPG_CLIENT_MAP_GET_ISLOADINGFINISH_OFFSET UNITYSDK_OFFSET(0x158AB4A0)
#define RPG_CLIENT_MAP_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x158AB360)
#define RPG_CLIENT_MAP_GET_MARKDONTDESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0x12326460)
#define RPG_CLIENT_MAP_GET_MINIMAP_OFFSET UNITYSDK_OFFSET(0x158A9700)
#define RPG_CLIENT_MAP_GET_SCENENAME_OFFSET UNITYSDK_OFFSET(0x158AB3D0)
#define RPG_CLIENT_MAP_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x12326450)
#define RPG_CLIENT_MAP_GET_STARTROOMID_OFFSET UNITYSDK_OFFSET(0x158AB3F0)
#define RPG_CLIENT_MAP_GET__MAPDEF_OFFSET UNITYSDK_OFFSET(0x158A9370)
#define RPG_CLIENT_MAP_HIDESTAGE_OFFSET UNITYSDK_OFFSET(0x12326D90)
#define RPG_CLIENT_MAP_IFMAINMISSIONISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x1231DFA0)
#define RPG_CLIENT_MAP_INITLOADEDHOYOGROUPNOTIFY_OFFSET UNITYSDK_OFFSET(0x12320B00)
#define RPG_CLIENT_MAP_ISENTITYOCCUPIED_OFFSET UNITYSDK_OFFSET(0x12310B20)
#define RPG_CLIENT_MAP_ISGROUPOCCUPIED_OFFSET UNITYSDK_OFFSET(0x1231E510)
#define RPG_CLIENT_MAP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x158AAC40)
#define RPG_CLIENT_MAP_LEGACYCONFLICTFIRSTREFRESH_OFFSET UNITYSDK_OFFSET(0x1231E910)
#define RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHMODEL_OFFSET UNITYSDK_OFFSET(0x1231DF40)
#define RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1231E150)
#define RPG_CLIENT_MAP_LOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0x158A90B0)
#define RPG_CLIENT_MAP_LOADFORBATTLEWITHOUTPHASE_OFFSET UNITYSDK_OFFSET(0x158A95D0)
#define RPG_CLIENT_MAP_LOADFORBATTLEWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x158A9590)
#define RPG_CLIENT_MAP_LOADFORBATTLE_OFFSET UNITYSDK_OFFSET(0x158A9510)
#define RPG_CLIENT_MAP_LOADFORPROFILE_OFFSET UNITYSDK_OFFSET(0x158AADA0)
#define RPG_CLIENT_MAP_LOADINITIALDYNAMICBLOCKENVPROFILEDATA_OFFSET UNITYSDK_OFFSET(0x12326590)
#define RPG_CLIENT_MAP_LOADONSTEP2_OFFSET UNITYSDK_OFFSET(0x1231F810)
#define RPG_CLIENT_MAP_LOADSTAGEONSTEP2_OFFSET UNITYSDK_OFFSET(0x1231EA30)
#define RPG_CLIENT_MAP_ONADVENTUREPHASEINITIALIZESUBSYSTEMS_OFFSET UNITYSDK_OFFSET(0x12320F80)
#define RPG_CLIENT_MAP_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x158AB000)
#define RPG_CLIENT_MAP_ONREQUESTFINISH_OFFSET UNITYSDK_OFFSET(0x12322270)
#define RPG_CLIENT_MAP_PREINIT_OFFSET UNITYSDK_OFFSET(0x158AAD50)
#define RPG_CLIENT_MAP_REFRESHEXCLUSIVENPCWITHTRANSFER_OFFSET UNITYSDK_OFFSET(0x1231E1B0)
#define RPG_CLIENT_MAP_REMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0x123269F0)
#define RPG_CLIENT_MAP_REMOVEDISTRICTFORCONFLICT_OFFSET UNITYSDK_OFFSET(0x1231E490)
#define RPG_CLIENT_MAP_REMOVENPCSERIESIDENTITY_OFFSET UNITYSDK_OFFSET(0x1231E290)
#define RPG_CLIENT_MAP_REMOVENPC_OFFSET UNITYSDK_OFFSET(0x12323A10)
#define RPG_CLIENT_MAP_REMOVEPROPFORCONFLICT_OFFSET UNITYSDK_OFFSET(0x1231E390)
#define RPG_CLIENT_MAP_REMOVEPROP_OFFSET UNITYSDK_OFFSET(0x12323AA0)
#define RPG_CLIENT_MAP_SETALLBLOCKVISIBLE_OFFSET UNITYSDK_OFFSET(0x12326BB0)
#define RPG_CLIENT_MAP_SETBLOCKFORCEHLODWITHTAGS_OFFSET UNITYSDK_OFFSET(0x12326C20)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYALIAS_OFFSET UNITYSDK_OFFSET(0x12326B40)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYHOYOTAG_OFFSET UNITYSDK_OFFSET(0x12326AD0)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYTAG_OFFSET UNITYSDK_OFFSET(0x12326A50)
#define RPG_CLIENT_MAP_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x158A9120)
#define RPG_CLIENT_MAP_SETRUNTIMEMANAGERREF_OFFSET UNITYSDK_OFFSET(0x158A9F00)
#define RPG_CLIENT_MAP_SET_MARKDONTDESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0x12326470)
#define RPG_CLIENT_MAP_SET_MINIMAP_OFFSET UNITYSDK_OFFSET(0x158A9710)
#define RPG_CLIENT_MAP_SET_SCENENAME_OFFSET UNITYSDK_OFFSET(0x158AB3E0)
#define RPG_CLIENT_MAP_SET_STARTROOMID_OFFSET UNITYSDK_OFFSET(0x158AB400)
#define RPG_CLIENT_MAP_SET__MAPDEF_OFFSET UNITYSDK_OFFSET(0x158A9EA0)
#define RPG_CLIENT_MAP_SHOWAREAONLY_OFFSET UNITYSDK_OFFSET(0x12326C90)
#define RPG_CLIENT_MAP_SHOWSTAGE_OFFSET UNITYSDK_OFFSET(0x12326D40)
#define RPG_CLIENT_MAP_SHOWUNLOADSTREAMINGWHENENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x123210F0)
#define RPG_CLIENT_MAP_STARTAIRSHIPSTREAMING_OFFSET UNITYSDK_OFFSET(0x158A9960)
#define RPG_CLIENT_MAP_STARTLEVELGRAPHONLOADINGFINALSTEP_OFFSET UNITYSDK_OFFSET(0x12320C50)
#define RPG_CLIENT_MAP_STARTMUNICIPAL_OFFSET UNITYSDK_OFFSET(0x158A9830)
#define RPG_CLIENT_MAP_SWAPSTAGECACHE_OFFSET UNITYSDK_OFFSET(0x12326750)
#define RPG_CLIENT_MAP_SYNCPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x158A91D0)
#define RPG_CLIENT_MAP_TRYGETANCHOR_OFFSET UNITYSDK_OFFSET(0x123216E0)
#define RPG_CLIENT_MAP_TRYGETMAPDISTRICT_OFFSET UNITYSDK_OFFSET(0x12310DC0)
#define RPG_CLIENT_MAP_TRYGETMAPPROPBYFCVKEY_OFFSET UNITYSDK_OFFSET(0x12324FE0)
#define RPG_CLIENT_MAP_TRYGETMAPPROP_OFFSET UNITYSDK_OFFSET(0x12310D00)
#define RPG_CLIENT_MAP_TRYGETNPCBYGROUP_OFFSET UNITYSDK_OFFSET(0x12310A60)
#define RPG_CLIENT_MAP_TRYQUEUESTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0x158A93D0)
#define RPG_CLIENT_MAP_UNBINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0x158AA420)
#define RPG_CLIENT_MAP_UNLOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0x123269A0)
#define RPG_CLIENT_MAP_UNLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x12326CF0)
#define RPG_CLIENT_MAP_UPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0x123220E0)
#define RPG_CLIENT_MAP_UPDATE_OFFSET UNITYSDK_OFFSET(0x158AAA60)
#define RPG_CLIENT_MAP__ANALYSEMAPOBJECTSTYPES_OFFSET UNITYSDK_OFFSET(0x12326350)
#define RPG_CLIENT_MAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x158AB520)
#define RPG_CLIENT_MAP__CLEAROBJECTS_OFFSET UNITYSDK_OFFSET(0x12324540)
#define RPG_CLIENT_MAP__CTOR_OFFSET UNITYSDK_OFFSET(0x158A9A20)
#define RPG_CLIENT_MAP__DESTROYMAPOBJECT_OFFSET UNITYSDK_OFFSET(0x123238B0)
#define RPG_CLIENT_MAP__DISPOSESAMEFADINGMAPOBJECT_OFFSET UNITYSDK_OFFSET(0x12323220)
#define RPG_CLIENT_MAP__DISPOSESTAGE_OFFSET UNITYSDK_OFFSET(0x123267B0)
#define RPG_CLIENT_MAP__DODESTROYMAPOBJECT_OFFSET UNITYSDK_OFFSET(0x12323330)
#define RPG_CLIENT_MAP__IFIXUSEUNIQUEADDFUNC_OFFSET UNITYSDK_OFFSET(0x12323B70)
#define RPG_CLIENT_MAP__INITIALIZEMAPOBJECTSBYMAPDEF_OFFSET UNITYSDK_OFFSET(0x123202F0)
#define RPG_CLIENT_MAP__INITLEGACYCONFLICTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1231DE50)
#define RPG_CLIENT_MAP__INITSURFACEMAMAGER_OFFSET UNITYSDK_OFFSET(0x158A9720)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_OFFSET UNITYSDK_OFFSET(0x12320A70)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_REPEAT_OFFSET UNITYSDK_OFFSET(0x123240D0)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_UNIQUE_OFFSET UNITYSDK_OFFSET(0x12323BC0)
#define RPG_CLIENT_MAP__INTERNAL_REMOVEMAPOBJECT_OFFSET UNITYSDK_OFFSET(0x123234A0)
#define RPG_CLIENT_MAP__ISHOYOGROUPOBJECT_OFFSET UNITYSDK_OFFSET(0x12322A80)
#define RPG_CLIENT_MAP__ISLEGACYOBJECT_OFFSET UNITYSDK_OFFSET(0x123229A0)
#define RPG_CLIENT_MAP__LEAVEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x123224E0)
#define RPG_CLIENT_MAP__LOADALLENTITIESONSTEP2_OFFSET UNITYSDK_OFFSET(0x1231FA40)
#define RPG_CLIENT_MAP__LOADALLLEVELAREACONFIG_OFFSET UNITYSDK_OFFSET(0x1231FC90)
#define RPG_CLIENT_MAP__LOADFORBATTLEWITHOUTPHASE_B__145_0_OFFSET UNITYSDK_OFFSET(0x158AB560)
#define RPG_CLIENT_MAP__LOADSTAGE_OFFSET UNITYSDK_OFFSET(0x1231EB40)
#define RPG_CLIENT_MAP__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x158AB0F0)
#define RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATERESULT_OFFSET UNITYSDK_OFFSET(0x12321A70)
#define RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATE_OFFSET UNITYSDK_OFFSET(0x123219B0)
#define RPG_CLIENT_MAP__ONEXCLUSIVEINFONEEDTOUPDATE_OFFSET UNITYSDK_OFFSET(0x1231E640)
#define RPG_CLIENT_MAP__ONMAPDEFADD_OFFSET UNITYSDK_OFFSET(0x12321DA0)
#define RPG_CLIENT_MAP__ONMAPDEFREMOVE_OFFSET UNITYSDK_OFFSET(0x12321E00)
#define RPG_CLIENT_MAP__ONMAPGROUPDEFLOAD_OFFSET UNITYSDK_OFFSET(0x12321E60)
#define RPG_CLIENT_MAP__ONMAPGROUPDEFUNLOAD_OFFSET UNITYSDK_OFFSET(0x12321ED0)
#define RPG_CLIENT_MAP__ONMAPOBJECTFADINGOUTFINISH_OFFSET UNITYSDK_OFFSET(0x123231B0)
#define RPG_CLIENT_MAP__ONREQUESTFINISHPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x12322410)
#define RPG_CLIENT_MAP__PREINITSTAGE_OFFSET UNITYSDK_OFFSET(0x12326480)
#define RPG_CLIENT_MAP__RECORDINITLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0x12320850)
#define RPG_CLIENT_MAP__REMOVEALLNPCS_OFFSET UNITYSDK_OFFSET(0x12324B30)
#define RPG_CLIENT_MAP__REMOVEALLPROPS_OFFSET UNITYSDK_OFFSET(0x123248D0)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_DEFAULT_OFFSET UNITYSDK_OFFSET(0x123230D0)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_NPC_OFFSET UNITYSDK_OFFSET(0x12322E50)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_PROP_OFFSET UNITYSDK_OFFSET(0x12323000)
#define RPG_CLIENT_MAP__SHOULDMAPNPCDESTROYTRIGGERSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x12322B60)
#define RPG_CLIENT_MAP__STARTENTITYLEVELGRAPHONFINALSTEP_OFFSET UNITYSDK_OFFSET(0x12320D60)
#define RPG_CLIENT_MAP__STARTLOADEDENTITIESLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x12320DE0)
#define RPG_CLIENT_MAP__STARTREQUEST_OFFSET UNITYSDK_OFFSET(0x12322080)
#define RPG_CLIENT_MAP__TICKFRAMEBATCHENTITYREFRESHFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x12323950)
#define RPG_CLIENT_MAP__UNINITLEGACYCONFLICTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1231DEE0)
#define RPG_CLIENT_MAP__UPDATEMAPOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x12321FD0)
#define RPG_CLIENT_MAP__UPDATEMAPOBJECTSSYNC_OFFSET UNITYSDK_OFFSET(0x12321F70)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_TypeDefinitionIndex = 56122;

	class Map : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAirshipStreamingMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F2E0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateLoadingEntityBatchMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F2E8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateMunicipalManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F2F0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__UnloadBattleAreaBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F2F8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateStageMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F300);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateSurfaceManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F308);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_ApplyRegionGroupChangeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F310);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__LoadBattleAreaBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F318);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStageMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F320);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_ApplyVisionRangeGroupChangeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x4F328);
		}
		static ::System::Boolean* StaticGet_IsLoadForBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0xDEC0);
		}
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_344*>* _MapObjectsByGroupInstanceID; // 0x10
		::RPG::Client::MapDef* _MapDefInternal; // 0x18
		::Class_1_B48FFE703050178A* _municipalManager; // 0x20
		::Class_1_902B807FBCF1D9FA* _NpcRecycleBin; // 0x28
		::Class_2_BA06A5BD139A4E18* _PreStage; // 0x30
		::Class_1_0ACF520A830B24C7* _surfaceManager; // 0x38
		::System::String* _SceneName_k__BackingField; // 0x40
		::RPG::Client::Map_MapObjectsUpdateRequest* CurrentCacheRequest; // 0x48
		::Class_2_BA06A5BD139A4E18* _Stage; // 0x50
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>* _AllMapObjects; // 0x58
		::Class_1_578885A359BC41A3* _cityAtmosphereStreaming; // 0x60
		::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* _PreShowRemoveObjectSet; // 0x68
		::RPG::Client::RuntimeGroupManager* _RuntimeGroupManager; // 0x70
		::RPG::Client::Promises::Promise* _LoadBattleFinish; // 0x78
		::System::Collections::Generic::Queue_1<::RPG::Client::Map_MapObjectsUpdateRequest*>* RequestQueue; // 0x80
		::Conflict* _conflict; // 0x88
		::Class_1_5878A2422EE7CDFB* _Minimap_k__BackingField; // 0x90
		::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_344*>* _FinishLoadingNewMapObjects; // 0x98
		::System::Collections::Generic::List_1<::System::UInt32>* _InitLoadedGroups; // 0xA0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>* _FadingOutMapObjects; // 0xA8
		::System::Boolean _CanProcessUpdateReq; // 0xB0
		::System::Boolean _EnableConflictRefresh; // 0xB1
		::System::UInt32 _StartRoomID_k__BackingField; // 0xB4
		::System::Boolean _MarkDontDestroyStage_k__BackingField; // 0xB8
		::System::Boolean _FrameBatchEntityRefreshFinishFlag; // 0xB9
		::System::Boolean _HasDisposed; // 0xBA

		::System::Void _ctor(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CTOR_OFFSET))(this, mapDef);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CCTOR_OFFSET))();
		}

		::System::Void _InitLegacyConflictSystem(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITLEGACYCONFLICTSYSTEM_OFFSET))(this, mapDef);
		}

		::System::Void _UnInitLegacyConflictSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UNINITLEGACYCONFLICTSYSTEM_OFFSET))(this);
		}

		::System::Void LegacyConflictRefreshModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHMODEL_OFFSET))(this);
		}

		::RPG::Client::ConflictType IfMainMissionIsOccupied(::System::UInt32 mainMissionID)
		{
			return ((::RPG::Client::ConflictType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_IFMAINMISSIONISOCCUPIED_OFFSET))(this, mainMissionID);
		}

		::System::Void LegacyConflictRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshExclusiveNPCWithTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REFRESHEXCLUSIVENPCWITHTRANSFER_OFFSET))(this);
		}

		::System::Void AddNpcSeriesIdEntity(::RPG::Client::MapNpc* Npc)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDNPCSERIESIDENTITY_OFFSET))(this, Npc);
		}

		::System::Void RemoveNpcSeriesIdEntity(::RPG::Client::MapNpc* Npc)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVENPCSERIESIDENTITY_OFFSET))(this, Npc);
		}

		::System::Void AddPropForConflict(::RPG::Client::MapProp* prop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDPROPFORCONFLICT_OFFSET))(this, prop);
		}

		::System::Void RemovePropForConflict(::RPG::Client::MapProp* prop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEPROPFORCONFLICT_OFFSET))(this, prop);
		}

		::System::Void AddDistrictForConflict(::RPG::Client::MapDistrict* district)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDDISTRICTFORCONFLICT_OFFSET))(this, district);
		}

		::System::Void RemoveDistrictForConflict(::RPG::Client::MapDistrict* district)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEDISTRICTFORCONFLICT_OFFSET))(this, district);
		}

		::System::Boolean IsGroupOccupied(::System::UInt32 gorupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ISGROUPOCCUPIED_OFFSET))(this, gorupID);
		}

		::System::Boolean IsEntityOccupied(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ISENTITYOCCUPIED_OFFSET))(this, groupID, instanceID);
		}

		::System::Void _OnExclusiveInfoNeedToUpdate(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONEXCLUSIVEINFONEEDTOUPDATE_OFFSET))(this, param);
		}

		::System::Void LegacyConflictFirstRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTFIRSTREFRESH_OFFSET))(this);
		}

		::System::Void DisableConflictRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISABLECONFLICTREFRESH_OFFSET))(this);
		}

		::System::Void LoadStageOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADSTAGEONSTEP2_OFFSET))(this);
		}

		::System::Void LoadOnStep2(::RPG::GameCore::GameWorld* gameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADONSTEP2_OFFSET))(this, gameWorld);
		}

		::System::Void _LoadAllEntitiesOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADALLENTITIESONSTEP2_OFFSET))(this);
		}

		::System::Void _InitializeMapObjectsByMapDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITIALIZEMAPOBJECTSBYMAPDEF_OFFSET))(this);
		}

		::System::Void _RecordInitLoadedGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__RECORDINITLOADEDGROUPS_OFFSET))(this);
		}

		::System::Void InitLoadedHoyoGroupNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_INITLOADEDHOYOGROUPNOTIFY_OFFSET))(this);
		}

		::System::Void StartLevelGraphOnLoadingFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_STARTLEVELGRAPHONLOADINGFINALSTEP_OFFSET))(this);
		}

		::System::Void _StartEntityLevelGraphOnFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTENTITYLEVELGRAPHONFINALSTEP_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseInitializeSubSystems(::RPG::Client::AdventurePhase* phase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONADVENTUREPHASEINITIALIZESUBSYSTEMS_OFFSET))(this, phase);
		}

		::Class_1_C58549E83E2A95B6* GetMapPathwayData(::System::UInt32 gid, ::System::UInt32 pid)
		{
			return ((::Class_1_C58549E83E2A95B6*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPPATHWAYDATA_OFFSET))(this, gid, pid);
		}

		::System::Boolean ShowUnloadStreamingWhenEnterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWUNLOADSTREAMINGWHENENTERBATTLE_OFFSET))(this);
		}

		::Class_1_777F514A924455D9* GetBattleAreaDef(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::Class_1_777F514A924455D9*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETBATTLEAREADEF_OFFSET))(this, groupInstanceID, instanceID);
		}

		::Class_1_777F514A924455D9* GetDefaultBattleAreaDef()
		{
			return ((::Class_1_777F514A924455D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETDEFAULTBATTLEAREADEF_OFFSET))(this);
		}

		::RPG::Client::MapAnchorDef* TryGetAnchor(::System::UInt32 groupID, ::System::UInt32 groupAnchorID)
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETANCHOR_OFFSET))(this, groupID, groupAnchorID);
		}

		::System::Void _LoadAllLevelAreaConfig(::RPG::GameCore::LevelAreaManager* levelAreaManager)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADALLLEVELAREACONFIG_OFFSET))(this, levelAreaManager);
		}

		::System::Void _OnAdvServerTriggerTargetUpdate(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATE_OFFSET))(this, param);
		}

		::System::Void _OnAdvServerTriggerTargetUpdateResult(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATERESULT_OFFSET))(this, param);
		}

		::RPG::Client::Map_MapObjectsUpdateRequest* get_CachedRequest()
		{
			return ((::RPG::Client::Map_MapObjectsUpdateRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_CACHEDREQUEST_OFFSET))(this);
		}

		::System::Boolean get_HasAsyncLoadingMapObjects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HASASYNCLOADINGMAPOBJECTS_OFFSET))(this);
		}

		::System::Void EnableUpdateMapObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENABLEUPDATEMAPOBJECTS_OFFSET))(this);
		}

		::System::Void DisableUpdateMapObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISABLEUPDATEMAPOBJECTS_OFFSET))(this);
		}

		::System::Void _OnMapDefAdd(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPDEFADD_OFFSET))(this, entityDef);
		}

		::System::Void _OnMapDefRemove(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPDEFREMOVE_OFFSET))(this, entityDef);
		}

		::System::Void _OnMapGroupDefLoad(::Class_2_BD898AE9C0E88E25* mapGroupDef, ::System::UInt32 versionStamp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPGROUPDEFLOAD_OFFSET))(this, mapGroupDef, versionStamp);
		}

		::System::Void _OnMapGroupDefUnload(::Class_2_BD898AE9C0E88E25* mapGroupDef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPGROUPDEFUNLOAD_OFFSET))(this, mapGroupDef);
		}

		::System::Void _UpdateMapObjectsSync(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UPDATEMAPOBJECTSSYNC_OFFSET))(this, req);
		}

		::System::Void _UpdateMapObjectAsync(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UPDATEMAPOBJECTASYNC_OFFSET))(this, req);
		}

		::System::Void _StartRequest(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTREQUEST_OFFSET))(this, req);
		}

		::System::Void UpdateMapObjects(::RPG::Client::Map_RefreshEntitiesExtraInfo* extraInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_RefreshEntitiesExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UPDATEMAPOBJECTS_OFFSET))(this, extraInfo);
		}

		::System::Void OnRequestFinish(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONREQUESTFINISH_OFFSET))(this, req);
		}

		::System::Void _OnRequestFinishPostProcess(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONREQUESTFINISHPOSTPROCESS_OFFSET))(this, req);
		}

		::System::Void _LeaveGameWorld(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LEAVEGAMEWORLD_OFFSET))(this, mapObject);
		}

		::System::Boolean _IsLegacyObject(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ISLEGACYOBJECT_OFFSET))(this, entityDef);
		}

		::System::Boolean _IsHoyoGroupObject(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ISHOYOGROUPOBJECT_OFFSET))(this, entityDef);
		}

		::System::Boolean _ShouldMapNpcDestroyTriggerScreenTransfer(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__SHOULDMAPNPCDESTROYTRIGGERSCREENTRANSFER_OFFSET))(this, mapObject);
		}

		::System::Void _RemoveMapObjectEffect_NPC(::RPG::Client::MapNpc* mapNpc)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_NPC_OFFSET))(this, mapNpc);
		}

		::System::Void _RemoveMapObjectEffect_Prop(::RPG::Client::MapProp* mapProp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_PROP_OFFSET))(this, mapProp);
		}

		::System::Void _RemoveMapObjectEffect_Default(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_DEFAULT_OFFSET))(this, mapObject);
		}

		::System::Void _OnMapObjectFadingOutFinish(::Class_0_16E4307DCC419505_344* fadingObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPOBJECTFADINGOUTFINISH_OFFSET))(this, fadingObject);
		}

		::System::Void _DisposeSameFadingMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DISPOSESAMEFADINGMAPOBJECT_OFFSET))(this, mapObject);
		}

		::System::Void _DoDestroyMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DODESTROYMAPOBJECT_OFFSET))(this, mapObject);
		}

		::System::Void _DestroyMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DESTROYMAPOBJECT_OFFSET))(this, mapObject);
		}

		::System::Void _TickFrameBatchEntityRefreshFinishNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__TICKFRAMEBATCHENTITYREFRESHFINISHNOTIFY_OFFSET))(this);
		}

		::System::Int32 get_AllMapObjectsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_ALLMAPOBJECTSCOUNT_OFFSET))(this);
		}

		::System::Void RemoveNpc(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVENPC_OFFSET))(this, groupID, instanceID);
		}

		::System::Void RemoveProp(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::Boolean doDispose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEPROP_OFFSET))(this, groupID, instanceID, doDispose);
		}

		::System::Void _Internal_AddMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_OFFSET))(this, mapObject);
		}

		::System::Boolean _IFixUseUniqueAddFunc(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__IFIXUSEUNIQUEADDFUNC_OFFSET))(this, mapObject);
		}

		::System::Void _Internal_AddMapObject_Repeat(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_REPEAT_OFFSET))(this, mapObject);
		}

		::System::Void _Internal_AddMapObject_Unique(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_UNIQUE_OFFSET))(this, mapObject);
		}

		::System::Void _Internal_RemoveMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_REMOVEMAPOBJECT_OFFSET))(this, mapObject);
		}

		::System::Void _ClearObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CLEAROBJECTS_OFFSET))(this);
		}

		::System::Void ClearObjectsForEnterBattleMemoryPerformanceOptimize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_CLEAROBJECTSFORENTERBATTLEMEMORYPERFORMANCEOPTIMIZE_OFFSET))(this);
		}

		::System::Void _RemoveAllNpcs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEALLNPCS_OFFSET))(this);
		}

		::System::Void _RemoveAllProps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEALLPROPS_OFFSET))(this);
		}

		::System::Void _StartLoadedEntitiesLevelGraph(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>* loadedEntities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTLOADEDENTITIESLEVELGRAPH_OFFSET))(this, loadedEntities);
		}

		::Class_0_16E4307DCC419505_344* GetMapObjectByMapEntityDef(::RPG::Client::MapEntityDef* mapEntityDef)
		{
			return ((::Class_0_16E4307DCC419505_344*(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECTBYMAPENTITYDEF_OFFSET))(this, mapEntityDef);
		}

		::RPG::Client::MapProp* TryGetMapProp(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPPROP_OFFSET))(this, groupID, instanceID);
		}

		::RPG::Client::MapProp* TryGetMapPropByFCVKey(::System::String* fcvKey)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPPROPBYFCVKEY_OFFSET))(this, fcvKey);
		}

		::RPG::Client::MapProp* GetNearestCheckPoint(::UnityEngine::Vector3 position)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETNEARESTCHECKPOINT_OFFSET))(this, position);
		}

		::System::Boolean GetCheckpointPosition(::RPG::Client::MapProp* prop, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapProp*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETCHECKPOINTPOSITION_OFFSET))(this, prop, position, rotation);
		}

		::RPG::Client::MapDistrict* TryGetMapDistrict(::System::UInt32 groupID, ::System::UInt32 districtID)
		{
			return ((::RPG::Client::MapDistrict*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPDISTRICT_OFFSET))(this, groupID, districtID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* GetPropAllByGroup(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapProp*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETPROPALLBYGROUP_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapDistrict*>* GetDistrictAll()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapDistrict*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETDISTRICTALL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_344* GetMapObjectByServerEntityID(::System::UInt32 serverEntityID)
		{
			return ((::Class_0_16E4307DCC419505_344*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECTBYSERVERENTITYID_OFFSET))(this, serverEntityID);
		}

		::RPG::Client::MapNpc* TryGetNpcByGroup(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapNpc*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETNPCBYGROUP_OFFSET))(this, groupID, instanceID);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* GetMonsterNpcEventID()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMONSTERNPCEVENTID_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_344* GetMapObject(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::Class_0_16E4307DCC419505_344*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECT_OFFSET))(this, groupID, instanceID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapNpc*>* GetNpcAllByGroup(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapNpc*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETNPCALLBYGROUP_OFFSET))(this, groupID);
		}

		::System::Void FillNpcListByGroup(::System::UInt32 groupID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* entityList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_FILLNPCLISTBYGROUP_OFFSET))(this, groupID, entityList);
		}

		::System::Void FileNpcListByGroup(::System::UInt32 groupID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* entityList, ::RPG::GameCore::EntityType et)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_FILENPCLISTBYGROUP_OFFSET))(this, groupID, entityList, et);
		}

		::System::Void _AnalyseMapObjectsTypes(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>* entities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ANALYSEMAPOBJECTSTYPES_OFFSET))(this, entities);
		}

		::Class_2_BA06A5BD139A4E18* get_Stage()
		{
			return ((::Class_2_BA06A5BD139A4E18*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_STAGE_OFFSET))(this);
		}

		::System::Boolean get_MarkDontDestroyStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MARKDONTDESTROYSTAGE_OFFSET))(this);
		}

		::System::Void set_MarkDontDestroyStage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_MARKDONTDESTROYSTAGE_OFFSET))(this, value);
		}

		::System::Void _PreInitStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__PREINITSTAGE_OFFSET))(this);
		}

		::System::Void _LoadStage(::System::Action* loadFinishCallback, ::System::Boolean onlyBattle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADSTAGE_OFFSET))(this, loadFinishCallback, onlyBattle);
		}

		::System::Void LoadInitialDynamicBlockEnvProfileData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADINITIALDYNAMICBLOCKENVPROFILEDATA_OFFSET))(this);
		}

		::Class_2_BA06A5BD139A4E18* SwapStageCache(::Class_2_BA06A5BD139A4E18* newStage)
		{
			return ((::Class_2_BA06A5BD139A4E18*(*)(::PVOID, ::Class_2_BA06A5BD139A4E18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SWAPSTAGECACHE_OFFSET))(this, newStage);
		}

		::System::Void _DisposeStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DISPOSESTAGE_OFFSET))(this);
		}

		::System::Void UnloadBattleAreaBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNLOADBATTLEAREABLOCK_OFFSET))(this);
		}

		::System::Void RemoveBlock(::System::Collections::Generic::List_1<::System::String*>* tags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEBLOCK_OFFSET))(this, tags);
		}

		::System::Void SetBlockVisibleByTag(::System::String* tag, ::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYTAG_OFFSET))(this, tag, visible, reason);
		}

		::System::Void SetBlockVisibleByHoyoTag(::System::String* tag, ::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYHOYOTAG_OFFSET))(this, tag, visible, reason);
		}

		::System::Void SetBlockVisibleByAlias(::System::String* alias, ::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYALIAS_OFFSET))(this, alias, visible, reason);
		}

		::System::Void SetAllBlockVisible(::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETALLBLOCKVISIBLE_OFFSET))(this, visible, reason);
		}

		::System::Void SetBlockForceHLODWithTags(::System::Collections::Generic::List_1<::System::String*>* tags, ::System::Boolean isForceHLOD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKFORCEHLODWITHTAGS_OFFSET))(this, tags, isForceHLOD);
		}

		::System::Void ShowAreaOnly(::System::String* area)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWAREAONLY_OFFSET))(this, area);
		}

		::System::Void UnloadStreamingResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNLOADSTREAMINGRESOURCE_OFFSET))(this);
		}

		::System::Void ShowStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWSTAGE_OFFSET))(this);
		}

		::System::Void HideStage(::System::Boolean bIsHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_HIDESTAGE_OFFSET))(this, bIsHide);
		}

		::UnityEngine::GameObject* GetBattleBlock(::System::String* tag)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETBATTLEBLOCK_OFFSET))(this, tag);
		}

		::System::Void CollectBlocksByTag(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* collections, ::System::String* tag_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_OFFSET))(this, collections, tag_name);
		}

		::System::Void CollectBlocksByTag_1(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* collections, ::System::String* tag_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_1_OFFSET))(this, collections, tag_name);
		}

		::System::Void LoadBattleAreaBlock(::System::String* tag, ::System::Action* fCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADBATTLEAREABLOCK_OFFSET))(this, tag, fCallBack);
		}

		::System::Void SetLoadFinishCallback(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETLOADFINISHCALLBACK_OFFSET))(this, action);
		}

		::System::Void SyncPlayerPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SYNCPLAYERPOSITION_OFFSET))(this);
		}

		::System::Void TryQueueStreamingLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYQUEUESTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Void LoadForBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORBATTLE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* LoadForBattleWithPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORBATTLEWITHPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* LoadForBattleWithoutPhase()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORBATTLEWITHOUTPHASE_OFFSET))(this);
		}

		::Class_1_5878A2422EE7CDFB* get_Minimap()
		{
			return ((::Class_1_5878A2422EE7CDFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MINIMAP_OFFSET))(this);
		}

		::System::Void set_Minimap(::Class_1_5878A2422EE7CDFB* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5878A2422EE7CDFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_MINIMAP_OFFSET))(this, value);
		}

		::System::Void _InitSurfaceMamager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITSURFACEMAMAGER_OFFSET))(this);
		}

		::System::Void StartMunicipal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_STARTMUNICIPAL_OFFSET))(this);
		}

		::System::Void StartAirshipStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_STARTAIRSHIPSTREAMING_OFFSET))(this);
		}

		::System::Void SetRuntimeManagerRef(::RPG::Client::RuntimeGroupManager* runtimeGroupManager)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETRUNTIMEMANAGERREF_OFFSET))(this, runtimeGroupManager);
		}

		::System::Void BindMapObjectDynamicUpdateCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_BINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET))(this);
		}

		::System::Void UnbindMapObjectDynamicUpdateCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNBINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISPOSE_OFFSET))(this);
		}

		::System::Void EnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENTERBATTLE_OFFSET))(this);
		}

		::System::Void Update(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void EndOfTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENDOFTICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void PreInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_PREINIT_OFFSET))(this);
		}

		::System::Void LoadForProfile(::RPG::GameCore::GameWorld* gameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORPROFILE_OFFSET))(this, gameWorld);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONENTERMAP_OFFSET))(this);
		}

		::System::Void DisposeSurfaceManager(::System::Boolean sameMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISPOSESURFACEMANAGER_OFFSET))(this, sameMap);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVENTUREPHASEEND_OFFSET))(this, param);
		}

		::RPG::Client::MapDef* get__MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET__MAPDEF_OFFSET))(this);
		}

		::System::Void set__MapDef(::RPG::Client::MapDef* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET__MAPDEF_OFFSET))(this, value);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MAPDEF_OFFSET))(this);
		}

		::System::Boolean get_HasDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HASDISPOSED_OFFSET))(this);
		}

		::System::String* get_SceneName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_SCENENAME_OFFSET))(this);
		}

		::System::Void set_SceneName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_SCENENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_StartRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_STARTROOMID_OFFSET))(this);
		}

		::System::Void set_StartRoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_STARTROOMID_OFFSET))(this, value);
		}

		::System::Boolean get_HaveStartRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HAVESTARTROOM_OFFSET))(this);
		}

		::Class_1_3F095C22F41AA332* GetMapHintManager()
		{
			return ((::Class_1_3F095C22F41AA332*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPHINTMANAGER_OFFSET))(this);
		}

		::System::Boolean get_IsLoadingFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_ISLOADINGFINISH_OFFSET))(this);
		}

		::System::Void _LoadForBattleWithoutPhase_b__145_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADFORBATTLEWITHOUTPHASE_B__145_0_OFFSET))(this);
		}
	};
}
