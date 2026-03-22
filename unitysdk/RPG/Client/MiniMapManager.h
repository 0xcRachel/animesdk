#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapManager_EMinimapIconListState.h"
#include "unitysdk/Struct_2_143B7A497B890286.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_488;
class Class_1_0A24888DF04C995E_2;
namespace RPG::Client { class Map; }
namespace RPG::Client { class MiniMapLayer; }
namespace RPG::Client { class MiniMapZone; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client { class UnlockSectionInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MINIMAPMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97087B0)
#define RPG_CLIENT_MINIMAPMANAGER_GETMINIMAPICONS_OFFSET UNITYSDK_OFFSET(0x970C1F0)
#define RPG_CLIENT_MINIMAPMANAGER_GETPLAYERTRACK_OFFSET UNITYSDK_OFFSET(0x970CA30)
#define RPG_CLIENT_MINIMAPMANAGER_GET_IGNOREENLIGHTSECTION_OFFSET UNITYSDK_OFFSET(0x9713670)
#define RPG_CLIENT_MINIMAPMANAGER_GET_LIMITAREADATA_OFFSET UNITYSDK_OFFSET(0x9713650)
#define RPG_CLIENT_MINIMAPMANAGER_ISICONHIDDEN_OFFSET UNITYSDK_OFFSET(0x970BBC0)
#define RPG_CLIENT_MINIMAPMANAGER_QUERYZONE_OFFSET UNITYSDK_OFFSET(0x970BFC0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORDAILYPROP_OFFSET UNITYSDK_OFFSET(0x970B8F0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORPROP_OFFSET UNITYSDK_OFFSET(0x970B730)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERICON_OFFSET UNITYSDK_OFFSET(0x970ADE0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERLIMITAREA_OFFSET UNITYSDK_OFFSET(0x970BC60)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTEROUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0x970B060)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERSWITCHHANDHANDICON_OFFSET UNITYSDK_OFFSET(0x970B4F0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERTRAVELSHIPDOCKICON_OFFSET UNITYSDK_OFFSET(0x970B610)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERZONE_OFFSET UNITYSDK_OFFSET(0x9709C70)
#define RPG_CLIENT_MINIMAPMANAGER_SETENTITYICONSHIDE_OFFSET UNITYSDK_OFFSET(0x970BA30)
#define RPG_CLIENT_MINIMAPMANAGER_SET_IGNOREENLIGHTSECTION_OFFSET UNITYSDK_OFFSET(0x9713680)
#define RPG_CLIENT_MINIMAPMANAGER_SET_LIMITAREADATA_OFFSET UNITYSDK_OFFSET(0x9713660)
#define RPG_CLIENT_MINIMAPMANAGER_SHITPLAYERTRACK_OFFSET UNITYSDK_OFFSET(0x970CA70)
#define RPG_CLIENT_MINIMAPMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x9708C00)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERALLICON_OFFSET UNITYSDK_OFFSET(0x970B240)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICONFORPROP_OFFSET UNITYSDK_OFFSET(0x970B870)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICON_OFFSET UNITYSDK_OFFSET(0x970B1D0)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERLIMITAREA_OFFSET UNITYSDK_OFFSET(0x970BF70)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERZONE_OFFSET UNITYSDK_OFFSET(0x970A8C0)
#define RPG_CLIENT_MINIMAPMANAGER__ADDICONINSECTIONS_OFFSET UNITYSDK_OFFSET(0x970EF60)
#define RPG_CLIENT_MINIMAPMANAGER__ARRANGEZONETOLAYER_OFFSET UNITYSDK_OFFSET(0x970CE80)
#define RPG_CLIENT_MINIMAPMANAGER__ASSISTWAYPOINTREFRESHED_OFFSET UNITYSDK_OFFSET(0x9710E10)
#define RPG_CLIENT_MINIMAPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9708320)
#define RPG_CLIENT_MINIMAPMANAGER__DOCHESTMAPPINGINFOREFRESH_OFFSET UNITYSDK_OFFSET(0x9710410)
#define RPG_CLIENT_MINIMAPMANAGER__DOTRACKINGINFOREFRESH_OFFSET UNITYSDK_OFFSET(0x97103B0)
#define RPG_CLIENT_MINIMAPMANAGER__GETZONEINLAYER_OFFSET UNITYSDK_OFFSET(0x970C0E0)
#define RPG_CLIENT_MINIMAPMANAGER__INTERNALADDICON_OFFSET UNITYSDK_OFFSET(0x970AFE0)
#define RPG_CLIENT_MINIMAPMANAGER__INTERNALREMOVETARGETALLICONS_OFFSET UNITYSDK_OFFSET(0x970B290)
#define RPG_CLIENT_MINIMAPMANAGER__MISSIONREFRESHED_OFFSET UNITYSDK_OFFSET(0x9710B10)
#define RPG_CLIENT_MINIMAPMANAGER__ONADDTEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0x9710310)
#define RPG_CLIENT_MINIMAPMANAGER__ONFINDCHESTINFOREFRESH_OFFSET UNITYSDK_OFFSET(0x970FF20)
#define RPG_CLIENT_MINIMAPMANAGER__ONFLOORSAVEDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x970D8A0)
#define RPG_CLIENT_MINIMAPMANAGER__ONREMOVETEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0x9710360)
#define RPG_CLIENT_MINIMAPMANAGER__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0x970FF70)
#define RPG_CLIENT_MINIMAPMANAGER__ONTRACKINGINFOREFRESHED_OFFSET UNITYSDK_OFFSET(0x970FEC0)
#define RPG_CLIENT_MINIMAPMANAGER__REGISTERFSVTOSECTIONS_OFFSET UNITYSDK_OFFSET(0x970A230)
#define RPG_CLIENT_MINIMAPMANAGER__REGISTERZONEINTERNAL_OFFSET UNITYSDK_OFFSET(0x970A6F0)
#define RPG_CLIENT_MINIMAPMANAGER__REMOVEICONINSECTIONS_OFFSET UNITYSDK_OFFSET(0x970FBB0)
#define RPG_CLIENT_MINIMAPMANAGER__REMOVEINVALIDICONS_OFFSET UNITYSDK_OFFSET(0x970C880)
#define RPG_CLIENT_MINIMAPMANAGER__TICKFINDCHESTINFO_OFFSET UNITYSDK_OFFSET(0x9709C10)
#define RPG_CLIENT_MINIMAPMANAGER__TICKPLAYERZONE_OFFSET UNITYSDK_OFFSET(0x9709350)
#define RPG_CLIENT_MINIMAPMANAGER__TICKREFRESHTRACKINGINFO_OFFSET UNITYSDK_OFFSET(0x9709B80)
#define RPG_CLIENT_MINIMAPMANAGER__TRACKINGICONREFRESHED_OFFSET UNITYSDK_OFFSET(0x97112B0)
#define RPG_CLIENT_MINIMAPMANAGER__TRYREFRESHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9711B70)
#define RPG_CLIENT_MINIMAPMANAGER__UNREGISTERFSVTOSECTIONS_OFFSET UNITYSDK_OFFSET(0x970AB80)
#define RPG_CLIENT_MINIMAPMANAGER__WRITEZONE_OFFSET UNITYSDK_OFFSET(0x970A070)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager_TypeDefinitionIndex = 48048;

	class MiniMapManager : public ::System::Object
	{
	public:
		::RPG::Client::MiniMapLayer* PlayerLayer; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_488*>* _MissionIcons; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _PlayerTrack; // 0x20
		::RPG::GameCore::GameEntity* _PlayerStub; // 0x28
		::RPG::Client::UnlockSectionInfo* _Info; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _LocateSectionIdxs; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MiniMapZone*>* _DiscreteMapZones; // 0x40
		::Class_1_0A24888DF04C995E_2* _LimitAreaData_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _HideWhiteList; // 0x50
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_488*>* _FindChestIcons; // 0x58
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_488*>* _MiniMapIcons; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::MiniMapLayer*>* _MapLayers; // 0x68
		::System::Collections::Generic::HashSet_1<::System::String*>* _FSVToSectionKeys; // 0x70
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_488*>* _FilteredMiniMapIcons; // 0x78
		::RPG::Client::MiniMapZone* PlayerZone; // 0x80
		::RPG::Client::MiniMapManager_EMinimapIconListState _IconListState; // 0x88
		::System::Boolean _TrackingInfoStateDirty; // 0x8C
		::System::Boolean _IgnoreEnlightSection_k__BackingField; // 0x8D
		::System::Boolean _FindChestInfoStateDirty; // 0x8E
		::System::Boolean _InHide; // 0x8F
		::System::Int32 _MissionIconNum; // 0x90
		::System::Int32 _CurrentMapShowLayer; // 0x94
		::System::Int32 _AllocID; // 0x98
		::System::Single _Time; // 0x9C
		::Struct_2_143B7A497B890286 _LocateSectionNearBounds; // 0xA0
		::System::UInt32 _LightScreenIconID; // 0xB0
		::System::Single _LastFootprintTime; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Int32 RegisterZone(::RPG::GameCore::LevelNavmapConfig* navMapConfig, ::System::Collections::Generic::HashSet_1<::System::UInt32>* initVisibleSectionIDs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERZONE_OFFSET))(this, navMapConfig, initVisibleSectionIDs);
		}

		::System::Void UnregisterZone(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERZONE_OFFSET))(this, id);
		}

		::System::Void RegisterIcon(::RPG::GameCore::GameEntity* target, ::System::UInt32 iconID, ::System::Int32 subMapID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERICON_OFFSET))(this, target, iconID, subMapID);
		}

		::System::Void RegisterOutControlTeamLeaderIcon(::RPG::GameCore::GameEntity* target, ::System::UInt32 iconID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTEROUTCONTROLTEAMLEADERICON_OFFSET))(this, target, iconID);
		}

		::System::Void UnRegisterIcon(::RPG::GameCore::GameEntity* target, ::System::UInt32 iconID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICON_OFFSET))(this, target, iconID);
		}

		::System::Void UnRegisterAllIcon(::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERALLICON_OFFSET))(this, target);
		}

		::System::Void RegisterSwitchHandHandIcon(::RPG::GameCore::PropComponent* prop, ::System::Boolean isStatic)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERSWITCHHANDHANDICON_OFFSET))(this, prop, isStatic);
		}

		::System::Void RegisterTravelShipDockIcon(::RPG::GameCore::PropComponent* prop, ::System::Boolean isStatic)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERTRAVELSHIPDOCKICON_OFFSET))(this, prop, isStatic);
		}

		::System::Void RegisterIconForProp(::RPG::GameCore::PropComponent* prop, ::System::Boolean isStatic)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORPROP_OFFSET))(this, prop, isStatic);
		}

		::System::Void UnRegisterIconForProp(::RPG::GameCore::PropComponent* prop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICONFORPROP_OFFSET))(this, prop);
		}

		::System::Void RegisterIconForDailyProp(::RPG::GameCore::PropComponent* prop, ::System::Boolean isStatic)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORDAILYPROP_OFFSET))(this, prop, isStatic);
		}

		::System::Void SetEntityIconsHide(::System::Boolean inHide, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* whiteList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SETENTITYICONSHIDE_OFFSET))(this, inHide, whiteList);
		}

		::System::Boolean IsIconHidden(::Class_0_16E4307DCC419505_488* icon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_488*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_ISICONHIDDEN_OFFSET))(this, icon);
		}

		::System::Void RegisterLimitArea(::UnityEngine::Vector3 normalCenter, ::System::Single normalRadius, ::UnityEngine::Vector3 edgeCenter, ::System::Single edgeRadius, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERLIMITAREA_OFFSET))(this, normalCenter, normalRadius, edgeCenter, edgeRadius, entity);
		}

		::System::Void UnRegisterLimitArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERLIMITAREA_OFFSET))(this);
		}

		::RPG::Client::MiniMapZone* QueryZone(::UnityEngine::Vector3 position, ::RPG::Client::MiniMapZone*& resultZone, ::RPG::Client::MiniMapLayer*& resultLayer)
		{
			return ((::RPG::Client::MiniMapZone*(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::MiniMapZone*&, ::RPG::Client::MiniMapLayer*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_QUERYZONE_OFFSET))(this, position, resultZone, resultLayer);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_488*>* GetMiniMapIcons()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_488*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GETMINIMAPICONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetPlayerTrack()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GETPLAYERTRACK_OFFSET))(this);
		}

		::System::Void ShitPlayerTrack(::UnityEngine::Vector3 playerShitPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SHITPLAYERTRACK_OFFSET))(this, playerShitPos);
		}

		::System::Void _ArrangeZoneToLayer(::RPG::Client::MiniMapZone* zone)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ARRANGEZONETOLAYER_OFFSET))(this, zone);
		}

		::RPG::Client::MiniMapZone* _GetZoneInLayer(::RPG::Client::MiniMapLayer* pLayer, ::UnityEngine::Vector3 position)
		{
			return ((::RPG::Client::MiniMapZone*(*)(::PVOID, ::RPG::Client::MiniMapLayer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__GETZONEINLAYER_OFFSET))(this, pLayer, position);
		}

		::System::Int32 _RegisterZoneInternal(::RPG::Client::MiniMapZone* pNewZone)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REGISTERZONEINTERNAL_OFFSET))(this, pNewZone);
		}

		::System::Void _WriteZone(::RPG::GameCore::LevelNavmapConfig* navMapConfig, ::RPG::Client::MiniMapZone* zone, ::System::Collections::Generic::HashSet_1<::System::UInt32>* initVisibleSectionIDs, ::System::Boolean bUpdateSections)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::RPG::Client::MiniMapZone*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__WRITEZONE_OFFSET))(this, navMapConfig, zone, initVisibleSectionIDs, bUpdateSections);
		}

		::System::Void _RegisterFSVToSections(::RPG::GameCore::LevelNavmapConfig* navMapConfig, ::System::Collections::Generic::HashSet_1<::System::UInt32>* initVisibleSectionIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REGISTERFSVTOSECTIONS_OFFSET))(this, navMapConfig, initVisibleSectionIDs);
		}

		::System::Void _UnRegisterFSVToSections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__UNREGISTERFSVTOSECTIONS_OFFSET))(this);
		}

		::System::Void _OnFloorSavedValueChanged(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONFLOORSAVEDVALUECHANGED_OFFSET))(this, name);
		}

		::System::Void _TickPlayerZone(::RPG::GameCore::GameEntity* pLocalPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TICKPLAYERZONE_OFFSET))(this, pLocalPlayer);
		}

		::System::Void _InternalAddIcon(::Class_0_16E4307DCC419505_488* icon)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_488*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__INTERNALADDICON_OFFSET))(this, icon);
		}

		::System::Void _InternalRemoveTargetAllIcons(::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__INTERNALREMOVETARGETALLICONS_OFFSET))(this, target);
		}

		::System::Void _OnTrackingInfoRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONTRACKINGINFOREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _OnFindChestInfoRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONFINDCHESTINFOREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnTeamLeaderEntityChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONTEAMLEADERENTITYCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnAddTempShowIcon(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONADDTEMPSHOWICON_OFFSET))(this, arg);
		}

		::System::Void _OnRemoveTempShowIcon(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONREMOVETEMPSHOWICON_OFFSET))(this, arg);
		}

		::System::Void _TickRefreshTrackingInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TICKREFRESHTRACKINGINFO_OFFSET))(this);
		}

		::System::Void _TickFindChestInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TICKFINDCHESTINFO_OFFSET))(this);
		}

		::System::Void _DoTrackingInfoRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__DOTRACKINGINFOREFRESH_OFFSET))(this);
		}

		::System::Void _MissionRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__MISSIONREFRESHED_OFFSET))(this);
		}

		::System::Void _TryRefreshSubMission(::RPG::Client::Map* pAdvMap, ::RPG::Client::SubMissionData* subMission)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TRYREFRESHSUBMISSION_OFFSET))(this, pAdvMap, subMission);
		}

		::System::Void _AssistWaypointRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ASSISTWAYPOINTREFRESHED_OFFSET))(this);
		}

		::System::Void _TrackingIconRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TRACKINGICONREFRESHED_OFFSET))(this);
		}

		::System::Void _DoChestMappingInfoRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__DOCHESTMAPPINGINFOREFRESH_OFFSET))(this);
		}

		static ::System::Void _RemoveInvalidIcons(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_488*>* list)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_488*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REMOVEINVALIDICONS_OFFSET))(list);
		}

		::System::Void _AddIconInSections(::Class_0_16E4307DCC419505_488* mapIcon)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_488*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ADDICONINSECTIONS_OFFSET))(this, mapIcon);
		}

		::System::Void _RemoveIconInSections(::System::Int32 iconHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REMOVEICONINSECTIONS_OFFSET))(this, iconHash);
		}

		::Class_1_0A24888DF04C995E_2* get_LimitAreaData()
		{
			return ((::Class_1_0A24888DF04C995E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GET_LIMITAREADATA_OFFSET))(this);
		}

		::System::Void set_LimitAreaData(::Class_1_0A24888DF04C995E_2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SET_LIMITAREADATA_OFFSET))(this, value);
		}

		::System::Boolean get_IgnoreEnlightSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GET_IGNOREENLIGHTSECTION_OFFSET))(this);
		}

		::System::Void set_IgnoreEnlightSection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SET_IGNOREENLIGHTSECTION_OFFSET))(this, value);
		}
	};
}
