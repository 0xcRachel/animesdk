#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_2FB4417C907E2514;
class Class_1_8B4A42FA3EE88E98;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class ScheduleMission; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONAUDIOEMOTION_OFFSET UNITYSDK_OFFSET(0x975E700)
#define RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONSOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0x975E760)
#define RPG_CLIENT_MISSIONSYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x975BE90)
#define RPG_CLIENT_MISSIONSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x975BED0)
#define RPG_CLIENT_MISSIONSYSTEM_GET_HASINIT_OFFSET UNITYSDK_OFFSET(0x975F3F0)
#define RPG_CLIENT_MISSIONSYSTEM_ISSUBMISSIONRUNNING_OFFSET UNITYSDK_OFFSET(0x975CBE0)
#define RPG_CLIENT_MISSIONSYSTEM_REFRESHMISSIONAUDIOSETTING_OFFSET UNITYSDK_OFFSET(0x975B030)
#define RPG_CLIENT_MISSIONSYSTEM_SETMISSIONAUDIOEMOTION_OFFSET UNITYSDK_OFFSET(0x975E7C0)
#define RPG_CLIENT_MISSIONSYSTEM_SETMISSIONSOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0x975EAB0)
#define RPG_CLIENT_MISSIONSYSTEM_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x975CAE0)
#define RPG_CLIENT_MISSIONSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0x975BA90)
#define RPG_CLIENT_MISSIONSYSTEM_TRYINIT_OFFSET UNITYSDK_OFFSET(0x975B720)
#define RPG_CLIENT_MISSIONSYSTEM_TRYUNREGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x975C440)
#define RPG_CLIENT_MISSIONSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x975F400)
#define RPG_CLIENT_MISSIONSYSTEM__CHECKSCHEDULEMISSIONS_OFFSET UNITYSDK_OFFSET(0x975BAF0)
#define RPG_CLIENT_MISSIONSYSTEM__CREATESUBMISSIONINSTANCE_OFFSET UNITYSDK_OFFSET(0x975C780)
#define RPG_CLIENT_MISSIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x975AD30)
#define RPG_CLIENT_MISSIONSYSTEM__INIT_OFFSET UNITYSDK_OFFSET(0x975B810)
#define RPG_CLIENT_MISSIONSYSTEM__ISTRACKINGSUBMISSION_OFFSET UNITYSDK_OFFSET(0x975E840)
#define RPG_CLIENT_MISSIONSYSTEM__NEEDUSESNAPSHOTAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x975E5E0)
#define RPG_CLIENT_MISSIONSYSTEM__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x975EDF0)
#define RPG_CLIENT_MISSIONSYSTEM__ONDELETEMAINMISSION_OFFSET UNITYSDK_OFFSET(0x975DDF0)
#define RPG_CLIENT_MISSIONSYSTEM__ONDELETESUBMISSION_OFFSET UNITYSDK_OFFSET(0x975D860)
#define RPG_CLIENT_MISSIONSYSTEM__ONFINISHMAINMISSION_OFFSET UNITYSDK_OFFSET(0x975DAF0)
#define RPG_CLIENT_MISSIONSYSTEM__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x975D560)
#define RPG_CLIENT_MISSIONSYSTEM__ONGROUPREFRESHEND_OFFSET UNITYSDK_OFFSET(0x975EDA0)
#define RPG_CLIENT_MISSIONSYSTEM__ONMISSIONWAYPOINTCHANGE_OFFSET UNITYSDK_OFFSET(0x975F290)
#define RPG_CLIENT_MISSIONSYSTEM__ONNPCCREATE_OFFSET UNITYSDK_OFFSET(0x975EFB0)
#define RPG_CLIENT_MISSIONSYSTEM__ONNPCDESTROY_OFFSET UNITYSDK_OFFSET(0x975F120)
#define RPG_CLIENT_MISSIONSYSTEM__ONREFRESHSCHEDULEMISSION_OFFSET UNITYSDK_OFFSET(0x975EE90)
#define RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONDELETE_OFFSET UNITYSDK_OFFSET(0x975D920)
#define RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x975D620)
#define RPG_CLIENT_MISSIONSYSTEM__ONSYNCMISSION_OFFSET UNITYSDK_OFFSET(0x975EEE0)
#define RPG_CLIENT_MISSIONSYSTEM__ONTAKENSUBMISSION_OFFSET UNITYSDK_OFFSET(0x975E050)
#define RPG_CLIENT_MISSIONSYSTEM__ONTRACKINGMISSIONCHANGED_OFFSET UNITYSDK_OFFSET(0x975EF40)
#define RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEOVERRIDEMISSIONAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x975D190)
#define RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEREPLAYNEEDCREATESUBMISSIONINSTANCE_OFFSET UNITYSDK_OFFSET(0x975CF20)
#define RPG_CLIENT_MISSIONSYSTEM__REGEVENT_OFFSET UNITYSDK_OFFSET(0x975CC70)
#define RPG_CLIENT_MISSIONSYSTEM__REGISTERALLSUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0x975D240)
#define RPG_CLIENT_MISSIONSYSTEM__REGISTERSINGLESUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0x975E1E0)
#define RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERALLSUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0x975C010)
#define RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0x975E4F0)
#define RPG_CLIENT_MISSIONSYSTEM__SETMISSIONAUDIOEMOTION_OFFSET UNITYSDK_OFFSET(0x975D470)
#define RPG_CLIENT_MISSIONSYSTEM__SETMISSIONSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0x975E650)
#define RPG_CLIENT_MISSIONSYSTEM__SYNCALLSCHEDULEMISSION_OFFSET UNITYSDK_OFFSET(0x975CFC0)
#define RPG_CLIENT_MISSIONSYSTEM__UNREGEVENT_OFFSET UNITYSDK_OFFSET(0x975C190)
#define RPG_CLIENT_MISSIONSYSTEM__UNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0x975EB30)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionSystem_TypeDefinitionIndex = 48282;

	class MissionSystem : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_MISSION_SYSTEM_MISSION_ID()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(MissionSystem_TypeDefinitionIndex)->GetStaticField(0x2650);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2FB4417C907E2514*>* _subMissionWayPointTrackingMap; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleMission*>* _ScheduleMissions; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8B4A42FA3EE88E98*>* _MissionInstanceWithGroupRunning; // 0x20
		::RPG::Client::AdventurePhase* _AdventurePhaseRef; // 0x28
		::RPG::Client::MapDef* _MapDef; // 0x30
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleMission*>* _DeletedScheduleMissions; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _MissionsTargetInCurrentFloor; // 0x48
		::System::Boolean _HasDisposed; // 0x50
		::System::Boolean _HasInited; // 0x51
		::System::Boolean _HasRegistered; // 0x52
		::System::Boolean _DisposeSoon; // 0x53

		::System::Void _ctor(::RPG::Client::AdventurePhase* pOwnerPhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CTOR_OFFSET))(this, pOwnerPhase);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void TryInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_TRYINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void TryUnregisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_TRYUNREGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void _CreateSubMissionInstance(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CREATESUBMISSIONINSTANCE_OFFSET))(this, subMissionData);
		}

		::System::Void StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_STARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Boolean IsSubMissionRunning(::System::UInt32 subMissionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_ISSUBMISSIONRUNNING_OFFSET))(this, subMissionID);
		}

		::System::Void _RegEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REGEVENT_OFFSET))(this);
		}

		::System::Void _UnRegEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__UNREGEVENT_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__INIT_OFFSET))(this);
		}

		::System::Void _PerformanceOverrideMissionAudioState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEOVERRIDEMISSIONAUDIOSTATE_OFFSET))(this);
		}

		::System::Boolean _PerformanceReplayNeedCreateSubMissionInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEREPLAYNEEDCREATESUBMISSIONINSTANCE_OFFSET))(this);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnDeleteSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONDELETESUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnFinishMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONFINISHMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnDeleteMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONDELETEMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnTakenSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONTAKENSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnSubMissionFinish(::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONFINISH_OFFSET))(this, subMissionID);
		}

		::System::Void _OnSubMissionDelete(::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONDELETE_OFFSET))(this, subMissionID);
		}

		::System::Boolean _NeedUseSnapshotAudioState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__NEEDUSESNAPSHOTAUDIOSTATE_OFFSET))(this);
		}

		::System::Void RefreshMissionAudioSetting(::System::Boolean refreshEmotion, ::System::Boolean refreshSoundEffect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_REFRESHMISSIONAUDIOSETTING_OFFSET))(this, refreshEmotion, refreshSoundEffect);
		}

		::System::Void ClearMissionAudioEmotion(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONAUDIOEMOTION_OFFSET))(this, subMissionData);
		}

		::System::Void ClearMissionSoundEffect(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONSOUNDEFFECT_OFFSET))(this, subMissionData);
		}

		::System::Boolean SetMissionAudioEmotion(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_SETMISSIONAUDIOEMOTION_OFFSET))(this, subMissionData);
		}

		::System::Boolean SetMissionSoundEffect(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_SETMISSIONSOUNDEFFECT_OFFSET))(this, subMissionData);
		}

		::System::Boolean _SetMissionAudioEmotion(::System::String* stateName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__SETMISSIONAUDIOEMOTION_OFFSET))(this, stateName);
		}

		::System::Boolean _SetMissionSoundEffectState(::System::String* stateName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__SETMISSIONSOUNDEFFECTSTATE_OFFSET))(this, stateName);
		}

		::System::Boolean _IsTrackingSubmission(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ISTRACKINGSUBMISSION_OFFSET))(this, subMissionData);
		}

		::System::Void _SyncAllScheduleMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__SYNCALLSCHEDULEMISSION_OFFSET))(this);
		}

		::System::Void _CheckScheduleMissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CHECKSCHEDULEMISSIONS_OFFSET))(this);
		}

		::System::Void _RegisterAllSubMissionWayPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REGISTERALLSUBMISSIONWAYPOINT_OFFSET))(this);
		}

		::System::Void _RegisterSingleSubMissionWayPoint(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REGISTERSINGLESUBMISSIONWAYPOINT_OFFSET))(this, subMissionData);
		}

		::System::Void _RemoveAndUnRegisterAllSubMissionWayPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERALLSUBMISSIONWAYPOINT_OFFSET))(this);
		}

		::System::Void _UnRegisterSingleSubMissionWayPoint(::Class_1_2FB4417C907E2514* wayPointInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FB4417C907E2514*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__UNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET))(this, wayPointInstance);
		}

		::System::Void _RemoveAndUnRegisterSingleSubMissionWayPoint(::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET))(this, subMissionID);
		}

		::System::Void _OnGroupRefreshEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONGROUPREFRESHEND_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnRefreshScheduleMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONREFRESHSCHEDULEMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnSyncMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONSYNCMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnTrackingMissionChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONTRACKINGMISSIONCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnNpcCreate(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONNPCCREATE_OFFSET))(this, arg);
		}

		::System::Void _OnNpcDestroy(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONNPCDESTROY_OFFSET))(this, arg);
		}

		::System::Void _OnMissionWayPointChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONMISSIONWAYPOINTCHANGE_OFFSET))(this, arg);
		}

		::System::Boolean get_HasInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_GET_HASINIT_OFFSET))(this);
		}
	};
}
