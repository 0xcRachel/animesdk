#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Map_MapObjectsUpdateRequestState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_227;
class Class_0_16E4307DCC419505_303;
class Class_2_BD898AE9C0E88E25;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class Map; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_OnMapObjectsUpdateRequestFinish; }
namespace RPG::Client { class Map_RefreshEntitiesExtraInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CANCEL_OFFSET UNITYSDK_OFFSET(0x95F77D0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0x95F47B0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTSBYMAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0x95F4A50)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0x95F48E0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTSBYMAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0x95F4BA0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEHOYOGROUPOBJECTS_OFFSET UNITYSDK_OFFSET(0x95FF020)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEOBJECTS_OFFSET UNITYSDK_OFFSET(0x95FBE90)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYHOYOGROUPOBJECTS_OFFSET UNITYSDK_OFFSET(0x95FF140)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYOBJECTS_OFFSET UNITYSDK_OFFSET(0x95FF0B0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_HASASYNCLOADINGMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0x95F4640)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x95FF1D0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISFINISH_OFFSET UNITYSDK_OFFSET(0x95FFB30)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_PROCESS_OFFSET UNITYSDK_OFFSET(0x95F4C70)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ADDMAPOBJECTSTOMAP_OFFSET UNITYSDK_OFFSET(0x95FEEB0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CHECKALLOBJECTALIVE_OFFSET UNITYSDK_OFFSET(0x95FD7A0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0x95FE8C0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECT_OFFSET UNITYSDK_OFFSET(0x95FE6D0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x95F5030)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOADDMAPGROUPDEFTOCONTAINER_OFFSET UNITYSDK_OFFSET(0x95FFB80)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOREMOVEMAPGROUPDEFTOCONTAINER_OFFSET UNITYSDK_OFFSET(0x95FFCC0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESALLCREATEDNOTIFY_OFFSET UNITYSDK_OFFSET(0x95FD180)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESCREATEDNOTIFY_OFFSET UNITYSDK_OFFSET(0x95FD3F0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__INCREASEGROUPOPERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x95FFDD0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONGROUPCHANGESCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x95FC870)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONMAPOBJECTSCREATED_OFFSET UNITYSDK_OFFSET(0x95FCCB0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONREQUESTFINISH_OFFSET UNITYSDK_OFFSET(0x95FD740)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSASYNC_OFFSET UNITYSDK_OFFSET(0x95FE200)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSSYNC_OFFSET UNITYSDK_OFFSET(0x95FCAE0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_CREATEOBJECTS_OFFSET UNITYSDK_OFFSET(0x95FC790)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_DESTROYOBJECTS_OFFSET UNITYSDK_OFFSET(0x95FBF00)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__STARTMAPOBJECTSLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x95FCF10)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__TRYRECOVERFROMNPCRECYCLEBIN_OFFSET UNITYSDK_OFFSET(0x95FCDB0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__WAITFORENTITYLOADED_OFFSET UNITYSDK_OFFSET(0x95FE660)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_MapObjectsUpdateRequest_TypeDefinitionIndex = 48237;

	class Map_MapObjectsUpdateRequest : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_303*>* _DeferDeletingMapObjects; // 0x10
		::RPG::Client::Map_OnMapObjectsUpdateRequestFinish* OnUpdateRequestFinish; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_BD898AE9C0E88E25*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* _MapGroupDefsToBeCreated; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* _MapEntityDefsToBeCreated; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* _MapEntityDefToBeDestroy; // 0x30
		::RPG::Client::Map* _Map; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GroupOperationCount; // 0x40
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* _MapObjectsCreated; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GroupLoadVersionStamp; // 0x50
		::RPG::Client::Map_RefreshEntitiesExtraInfo* ExtraInfo; // 0x58
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_BD898AE9C0E88E25*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* _MapGroupDefsToBeDestroy; // 0x60
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* _MapObjectsCreating; // 0x68
		::RPG::Client::Map_MapObjectsUpdateRequestState _State; // 0x70

		::System::Void _ctor(::RPG::Client::Map* map)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CTOR_OFFSET))(this, map);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_PROCESS_OFFSET))(this);
		}

		::System::Void _Process_DestroyObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_DESTROYOBJECTS_OFFSET))(this);
		}

		::System::Void _OnGroupChangeScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONGROUPCHANGESCREENTRANSFER_OFFSET))(this);
		}

		::System::Void _ProcessCreateObjectsSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSSYNC_OFFSET))(this);
		}

		::System::Void _TryRecoverFromNpcRecycleBin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__TRYRECOVERFROMNPCRECYCLEBIN_OFFSET))(this);
		}

		::System::Void _OnMapObjectsCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONMAPOBJECTSCREATED_OFFSET))(this);
		}

		::System::Boolean _CheckAllObjectAlive(::Class_2_BD898AE9C0E88E25* mapGroupDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CHECKALLOBJECTALIVE_OFFSET))(this, mapGroupDef);
		}

		::System::Void _HoyoGroupEntitiesAllCreatedNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESALLCREATEDNOTIFY_OFFSET))(this);
		}

		::System::Void _HoyoGroupEntitiesCreatedNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESCREATEDNOTIFY_OFFSET))(this);
		}

		::System::Void _StartMapObjectsLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__STARTMAPOBJECTSLEVELGRAPH_OFFSET))(this);
		}

		::System::Void _ProcessCreateObjectsAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSASYNC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_227*>* _WaitForEntityLoaded(::Class_0_16E4307DCC419505_303* mapObject)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_227*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_303*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__WAITFORENTITYLOADED_OFFSET))(this, mapObject);
		}

		::Class_0_16E4307DCC419505_303* _ConvertToMapObject(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::Class_0_16E4307DCC419505_303*(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECT_OFFSET))(this, entityDef);
		}

		::System::Void _ConvertToMapObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECTS_OFFSET))(this);
		}

		::System::Void _AddMapObjectsToMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ADDMAPOBJECTSTOMAP_OFFSET))(this);
		}

		::System::Void _Process_CreateObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_CREATEOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeCreateObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeCreateHoyoGroupObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEHOYOGROUPOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeDestroyObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeDestroyHoyoGroupObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYHOYOGROUPOBJECTS_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISEMPTY_OFFSET))(this);
		}

		::System::Void _OnRequestFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONREQUESTFINISH_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISFINISH_OFFSET))(this);
		}

		::System::Boolean HasAsyncLoadingMapObjects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_HASASYNCLOADINGMAPOBJECTS_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CANCEL_OFFSET))(this);
		}

		::System::Void CreateObjectByMapEntityDef(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTBYMAPENTITYDEF_OFFSET))(this, entityDef);
		}

		::System::Void DestroyObjectByMapEntityDef(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTBYMAPENTITYDEF_OFFSET))(this, entityDef);
		}

		::System::Void _DoAddMapGroupDefToContainer(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_BD898AE9C0E88E25*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* container, ::Class_2_BD898AE9C0E88E25* mapGroupDef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_BD898AE9C0E88E25*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>*, ::Class_2_BD898AE9C0E88E25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOADDMAPGROUPDEFTOCONTAINER_OFFSET))(this, container, mapGroupDef);
		}

		::System::Void _DoRemoveMapGroupDefToContainer(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_BD898AE9C0E88E25*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* container, ::Class_2_BD898AE9C0E88E25* mapGroupDef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_BD898AE9C0E88E25*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>*, ::Class_2_BD898AE9C0E88E25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOREMOVEMAPGROUPDEFTOCONTAINER_OFFSET))(this, container, mapGroupDef);
		}

		::System::Void _IncreaseGroupOperationCount(::Class_2_BD898AE9C0E88E25* mapGroupDef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__INCREASEGROUPOPERATIONCOUNT_OFFSET))(this, mapGroupDef);
		}

		::System::Void CreateObjectsByMapGroupDef(::Class_2_BD898AE9C0E88E25* mapGroupDef, ::System::UInt32 versionStamp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTSBYMAPGROUPDEF_OFFSET))(this, mapGroupDef, versionStamp);
		}

		::System::Void DestroyObjectsByMapGroupDef(::Class_2_BD898AE9C0E88E25* mapGroupDef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTSBYMAPGROUPDEF_OFFSET))(this, mapGroupDef);
		}
	};
}
