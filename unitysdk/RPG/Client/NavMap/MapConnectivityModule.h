#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_866;
class Class_1_6992FBCA02C33988;
class Class_1_87AA5DF0D42C0A0C;
class Class_1_A9BFC150668414F7;
class Class_2_A444C86962D74D96;
namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace RPG::Client::NavMap { class MapFloorInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9983760)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURNAVAREA_OFFSET UNITYSDK_OFFSET(0x9983AD0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURWEIGHTEDGRAPH_OFFSET UNITYSDK_OFFSET(0x9983AB0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9983A30)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_ROOTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x99836E0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_WAYPOINTREFRESHER_OFFSET UNITYSDK_OFFSET(0x9983A90)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_RETURNGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x99839D0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURNAVAREA_OFFSET UNITYSDK_OFFSET(0x9983AE0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURWEIGHTEDGRAPH_OFFSET UNITYSDK_OFFSET(0x9983AC0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_WAYPOINTREFRESHER_OFFSET UNITYSDK_OFFSET(0x9983AA0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEBYCARTOGRAPHER_OFFSET UNITYSDK_OFFSET(0x9984F90)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEFORFIVEDIM_OFFSET UNITYSDK_OFFSET(0x99853F0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODETOTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x9985480)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x9985520)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x99859D0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETPLAYERTOTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x9986060)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0x9984AB0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9983AF0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CLEARCURGRAPH_OFFSET UNITYSDK_OFFSET(0x9983FD0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9986640)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9985F80)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLENAVSHORTESTPATHEXCEPTION_OFFSET UNITYSDK_OFFSET(0x99865D0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISINSAMESCENE_OFFSET UNITYSDK_OFFSET(0x9986380)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISNEEDCREATENAVGRAPH_OFFSET UNITYSDK_OFFSET(0x99848C0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x9983F40)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9983D00)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONFIVEDIMLEAVEFINISH_OFFSET UNITYSDK_OFFSET(0x9984290)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONMAZEMAPINFOUPDATED_OFFSET UNITYSDK_OFFSET(0x9984030)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__REQUESTCURMAPDATA_OFFSET UNITYSDK_OFFSET(0x9983D50)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__SETUPCURGRAPH_OFFSET UNITYSDK_OFFSET(0x99846B0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYFORCEUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0x9984F10)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_1_OFFSET UNITYSDK_OFFSET(0x9985630)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x9985080)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9985CD0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0x9984C10)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__UPDATECURGRAPH_OFFSET UNITYSDK_OFFSET(0x99841F0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x99866A0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MapConnectivityModule_TypeDefinitionIndex = 59537;

	class MapConnectivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_0_16E4307DCC419505_866* _CurNavArea_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ObjectPool; // 0x18
		::Class_1_6992FBCA02C33988* _WaypointRefresher_k__BackingField; // 0x20
		::UnityEngine::GameObject* _RootGameObject; // 0x28
		::Class_1_A9BFC150668414F7* _CurWeightedGraph_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_RootGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_ROOTGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetGameObject(::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GETGAMEOBJECT_OFFSET))(this, name);
		}

		::System::Void ReturnGameObject(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_RETURNGAMEOBJECT_OFFSET))(this, gameObject);
		}

		static ::RPG::Client::NavMap::MapConnectivityModule* get_Instance()
		{
			return ((::RPG::Client::NavMap::MapConnectivityModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_INSTANCE_OFFSET))();
		}

		::Class_1_6992FBCA02C33988* get_WaypointRefresher()
		{
			return ((::Class_1_6992FBCA02C33988*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_WAYPOINTREFRESHER_OFFSET))(this);
		}

		::System::Void set_WaypointRefresher(::Class_1_6992FBCA02C33988* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6992FBCA02C33988*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_WAYPOINTREFRESHER_OFFSET))(this, value);
		}

		::Class_1_A9BFC150668414F7* get_CurWeightedGraph()
		{
			return ((::Class_1_A9BFC150668414F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURWEIGHTEDGRAPH_OFFSET))(this);
		}

		::System::Void set_CurWeightedGraph(::Class_1_A9BFC150668414F7* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9BFC150668414F7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURWEIGHTEDGRAPH_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_866* get_CurNavArea()
		{
			return ((::Class_0_16E4307DCC419505_866*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURNAVAREA_OFFSET))(this);
		}

		::System::Void set_CurNavArea(::Class_0_16E4307DCC419505_866* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_866*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURNAVAREA_OFFSET))(this, value);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEEND_OFFSET))(this, arg);
		}

		::System::Void _OnMazeMapInfoUpdated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONMAZEMAPINFOUPDATED_OFFSET))(this, arg);
		}

		::System::Void _OnFiveDimLeaveFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONFIVEDIMLEAVEFINISH_OFFSET))(this, arg);
		}

		::System::Void _RequestCurMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__REQUESTCURMAPDATA_OFFSET))(this);
		}

		::System::Void _ClearCurGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CLEARCURGRAPH_OFFSET))(this);
		}

		::System::Void _UpdateCurGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__UPDATECURGRAPH_OFFSET))(this);
		}

		::System::Void _SetupCurGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__SETUPCURGRAPH_OFFSET))(this);
		}

		::System::Boolean _IsNeedCreateNavGraph(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISNEEDCREATENAVGRAPH_OFFSET))(this, mapDef);
		}

		::System::Void TryUpdateCurNavNode(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYUPDATECURNAVNODE_OFFSET))(this, worldPosition);
		}

		::System::Void _TryUpdateCurNavNode(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYUPDATECURNAVNODE_OFFSET))(this, worldPosition);
		}

		::System::Void _TryForceUpdateCurNavNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYFORCEUPDATECURNAVNODE_OFFSET))(this);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNodeByCartographer(::RPG::Client::NavMap::ICartographer* cartographer, ::UnityEngine::Vector3 position)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEBYCARTOGRAPHER_OFFSET))(this, cartographer, position);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNodeForFiveDim(::RPG::Client::NavMap::ICartographer* cartographer, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEFORFIVEDIM_OFFSET))(this, cartographer, groupID, instanceID, entityID);
		}

		::System::Single TryGetNearestMappingInfoNodeToTargetDistance(::RPG::Client::NavMap::ICartographer* cartographer, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODETOTARGETDISTANCE_OFFSET))(this, cartographer, groupID, instanceID, entityID);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNode(::RPG::Client::NavMap::MapFloorInfo* mapFloorInfo, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* nodes, ::UnityEngine::Vector3 position)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::MapFloorInfo*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODE_OFFSET))(this, mapFloorInfo, nodes, position);
		}

		::Class_1_87AA5DF0D42C0A0C* _TryGetNearestMappingInfoNode(::RPG::Client::NavMap::ICartographer* cartographer, ::RPG::Client::NavMap::ITrackPointInfo* trackPointInfo)
		{
			return ((::Class_1_87AA5DF0D42C0A0C*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_OFFSET))(this, cartographer, trackPointInfo);
		}

		::Class_1_87AA5DF0D42C0A0C* _TryGetNearestMappingInfoNode_1(::RPG::Client::NavMap::MapFloorInfo* mapFloorInfo, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* nodes, ::RPG::Client::NavMap::ITrackPointInfo* trackPointInfo)
		{
			return ((::Class_1_87AA5DF0D42C0A0C*(*)(::PVOID, ::RPG::Client::NavMap::MapFloorInfo*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_1_OFFSET))(this, mapFloorInfo, nodes, trackPointInfo);
		}

		::System::Boolean TryGetNextWaypoint(::System::UInt32& targetGroupID, ::System::UInt32& targetInstanceID, ::System::UInt32& targetLittleGameEntityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEXTWAYPOINT_OFFSET))(this, targetGroupID, targetInstanceID, targetLittleGameEntityID);
		}

		::RPG::Client::NavMap::ITrackPointInfo* _TryGetNextWaypoint(::System::UInt32 targetGroupID, ::System::UInt32 targetInstanceID, ::System::UInt32 targetLittleGameEntityID)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEXTWAYPOINT_OFFSET))(this, targetGroupID, targetInstanceID, targetLittleGameEntityID);
		}

		::System::Single TryGetPlayerToTargetDistance(::RPG::Client::NavMap::ICartographer* cartographer, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 littleGameEntityID)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETPLAYERTOTARGETDISTANCE_OFFSET))(this, cartographer, groupID, instanceID, littleGameEntityID);
		}

		::System::Boolean _IsInSameScene(::RPG::Client::NavMap::ICartographer* cartographer)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISINSAMESCENE_OFFSET))(this, cartographer);
		}

		::System::Boolean _HandleException(::System::Exception* ex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLEEXCEPTION_OFFSET))(this, ex);
		}

		::System::Boolean _HandleNavShortestPathException(::Class_2_A444C86962D74D96* pathException)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_A444C86962D74D96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLENAVSHORTESTPATHEXCEPTION_OFFSET))(this, pathException);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
