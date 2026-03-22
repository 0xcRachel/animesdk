#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionWaypointInfo.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/MissionActivePlaneType.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/RPG/GameCore/SubmissionLogicType.h"
#include "unitysdk/RPG/GameCore/SubmissionOptionalTrackMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_35B19D34B208E77E_15;
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionRow; }
namespace System { class String; }

#define RPG_CLIENT_SUBMISSIONDATA_CHECKISFLOORCONNECTED_OFFSET UNITYSDK_OFFSET(0x9FD8F60)
#define RPG_CLIENT_SUBMISSIONDATA_GETORIGINALWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0x9FD8A50)
#define RPG_CLIENT_SUBMISSIONDATA_GETWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0x9FD7C30)
#define RPG_CLIENT_SUBMISSIONDATA_GET_AUDIOEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9FDA030)
#define RPG_CLIENT_SUBMISSIONDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9FDA8F0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FD9E80)
#define RPG_CLIENT_SUBMISSIONDATA_GET_FIXTRANSFERROTATION_OFFSET UNITYSDK_OFFSET(0x9FDABB0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_FROCEMAPHINT_OFFSET UNITYSDK_OFFSET(0x9FD9F80)
#define RPG_CLIENT_SUBMISSIONDATA_GET_HINTMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x9FDA800)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9FD9A10)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISALLFLOORMISSION_OFFSET UNITYSDK_OFFSET(0x9FDA880)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISCONTROLHINTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x9FDA690)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9FD9EA0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISINMISSIONLEVELGRAPHTARGETFLOOR_OFFSET UNITYSDK_OFFSET(0x9FDA3F0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISINTARGETWAYPOINTFLOOR_OFFSET UNITYSDK_OFFSET(0x9FD92F0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISMUTENAV_OFFSET UNITYSDK_OFFSET(0x9FDAB60)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISSHOWINMAP_OFFSET UNITYSDK_OFFSET(0x9FD9ED0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x9FD9FD0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISSTART_OFFSET UNITYSDK_OFFSET(0x9FD9EC0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISTAKENANDNOTSTARTED_OFFSET UNITYSDK_OFFSET(0x9FD9EB0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISTRACKBYMESSAGE_OFFSET UNITYSDK_OFFSET(0x9FDA1D0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISUNKNOW_OFFSET UNITYSDK_OFFSET(0x9FDA020)
#define RPG_CLIENT_SUBMISSIONDATA_GET_LEVELFLOORID_OFFSET UNITYSDK_OFFSET(0x9FD9E00)
#define RPG_CLIENT_SUBMISSIONDATA_GET_LEVELPLANEID_OFFSET UNITYSDK_OFFSET(0x9FD8C10)
#define RPG_CLIENT_SUBMISSIONDATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x9FD9A90)
#define RPG_CLIENT_SUBMISSIONDATA_GET_LOGICTYPE_OFFSET UNITYSDK_OFFSET(0x9FDAAD0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x9FD9A20)
#define RPG_CLIENT_SUBMISSIONDATA_GET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x9FDA290)
#define RPG_CLIENT_SUBMISSIONDATA_GET_OPTIONALTRACKMODE_OFFSET UNITYSDK_OFFSET(0x9FDAAF0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9FD9E50)
#define RPG_CLIENT_SUBMISSIONDATA_GET_SOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0x9FDA100)
#define RPG_CLIENT_SUBMISSIONDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9FD9E60)
#define RPG_CLIENT_SUBMISSIONDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9FDA8A0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FDAA80)
#define RPG_CLIENT_SUBMISSIONDATA_GET_WAYPOINTFLOORID_OFFSET UNITYSDK_OFFSET(0x9FDA640)
#define RPG_CLIENT_SUBMISSIONDATA_GET_WAYPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x9FDA340)
#define RPG_CLIENT_SUBMISSIONDATA_INITCONFIGINFO_OFFSET UNITYSDK_OFFSET(0x9FD95C0)
#define RPG_CLIENT_SUBMISSIONDATA_ISINCURRENTVERSE_OFFSET UNITYSDK_OFFSET(0x9FD7DD0)
#define RPG_CLIENT_SUBMISSIONDATA_SET_AUDIOEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9FDA0F0)
#define RPG_CLIENT_SUBMISSIONDATA_SET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FD9E90)
#define RPG_CLIENT_SUBMISSIONDATA_SET_ISALLFLOORMISSION_OFFSET UNITYSDK_OFFSET(0x9FDA890)
#define RPG_CLIENT_SUBMISSIONDATA_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x9FDAB10)
#define RPG_CLIENT_SUBMISSIONDATA_SET_LOGICTYPE_OFFSET UNITYSDK_OFFSET(0x9FDAAE0)
#define RPG_CLIENT_SUBMISSIONDATA_SET_OPTIONALTRACKMODE_OFFSET UNITYSDK_OFFSET(0x9FDAB00)
#define RPG_CLIENT_SUBMISSIONDATA_SET_SOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0x9FDA1C0)
#define RPG_CLIENT_SUBMISSIONDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9FD9E70)
#define RPG_CLIENT_SUBMISSIONDATA__CALCWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0x9FD7F90)
#define RPG_CLIENT_SUBMISSIONDATA__CHECKDATAINIT_OFFSET UNITYSDK_OFFSET(0x9FD9970)
#define RPG_CLIENT_SUBMISSIONDATA__CHECKISINSAMEWORLD_OFFSET UNITYSDK_OFFSET(0x9FD8C60)
#define RPG_CLIENT_SUBMISSIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9FD97B0)
#define RPG_CLIENT_SUBMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD9450)
#define RPG_CLIENT_SUBMISSIONDATA__GETMISSIONWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0x9FD84B0)
#define RPG_CLIENT_SUBMISSIONDATA__INITSTORYLINEIDS_OFFSET UNITYSDK_OFFSET(0x9FD9910)
#define RPG_CLIENT_SUBMISSIONDATA__ISINROGUEPLANE_OFFSET UNITYSDK_OFFSET(0x9FD8E50)

namespace RPG::Client
{
	inline static constexpr unsigned int SubMissionData_TypeDefinitionIndex = 52678;

	class SubMissionData : public ::System::Object
	{
	public:
		::System::String* _SoundEffectState; // 0x10
		::RPG::GameCore::SubMissionRow* _Row; // 0x18
		::System::String* _AudioEmotionState; // 0x20
		::System::UInt32 _LevelPlaneID; // 0x28
		::RPG::Client::MissionWaypointInfo _NoneMissionWaypointInfo; // 0x2C
		::RPG::GameCore::SubmissionLogicType _LogicType_k__BackingField; // 0x58
		::System::UInt32 _TotalProgress; // 0x5C
		::System::Boolean _IsMuteNav; // 0x60
		::System::Nullable_1<::System::Boolean> _IsControlHintByDistance; // 0x61
		::RPG::GameCore::SubMissionState _Status; // 0x64
		::RPG::GameCore::MissionActivePlaneType _MissionActivePlaneType; // 0x68
		::System::Single _OverrideHintMaxDistance; // 0x6C
		::System::UInt32 _LevelFloorID; // 0x70
		::System::UInt32 _CurrentProgress; // 0x74
		::System::Boolean _IsShow; // 0x78
		::System::Boolean _IsConfigInfoInited; // 0x79
		::System::Boolean _IsAllFloorMission_k__BackingField; // 0x7A
		::System::Boolean _FroceMapHint; // 0x7B
		::System::UInt32 _StoryLineID; // 0x7C
		::System::UInt32 _WayPointFloorID; // 0x80
		::System::UInt32 _ID; // 0x84
		::RPG::Client::ReasonBool_1<::RPG::GameCore::PlaneType> _MissionActivePlane; // 0x88
		::RPG::GameCore::SubmissionOptionalTrackMode _OptionalTrackMode_k__BackingField; // 0x90

		::System::Void _ctor(::Class_1_35B19D34B208E77E_15* missionData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CTOR_OFFSET))(this, missionData);
		}

		::System::Void _ctor_1(::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CTOR_1_OFFSET))(this, subMissionID);
		}

		::RPG::Client::MissionWaypointInfo GetWaypointInfo()
		{
			return ((::RPG::Client::MissionWaypointInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GETWAYPOINTINFO_OFFSET))(this);
		}

		::RPG::Client::MissionWaypointInfo GetOriginalWaypointInfo()
		{
			return ((::RPG::Client::MissionWaypointInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GETORIGINALWAYPOINTINFO_OFFSET))(this);
		}

		::System::Boolean _CalcWaypointInfo(::System::UInt32& groupID, ::System::UInt32& instanceID, ::System::UInt32& littleGameEntityID, ::System::Boolean& isTeleportPoint, ::System::UInt32 overrideTargetFloorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Boolean&, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CALCWAYPOINTINFO_OFFSET))(this, groupID, instanceID, littleGameEntityID, isTeleportPoint, overrideTargetFloorID);
		}

		::System::Boolean _CheckIsInSameWorld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CHECKISINSAMEWORLD_OFFSET))(this);
		}

		::System::Boolean _IsInRoguePlane()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__ISINROGUEPLANE_OFFSET))(this);
		}

		::RPG::Client::MissionWaypointInfo _GetMissionWayPointInfo(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 littleGameEntityID, ::System::Boolean isTeleportPoint)
		{
			return ((::RPG::Client::MissionWaypointInfo(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__GETMISSIONWAYPOINTINFO_OFFSET))(this, groupID, instanceID, littleGameEntityID, isTeleportPoint);
		}

		::System::Boolean CheckIsFloorConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_CHECKISFLOORCONNECTED_OFFSET))(this);
		}

		::System::Void InitConfigInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_INITCONFIGINFO_OFFSET))(this);
		}

		::System::Boolean IsInCurrentVerse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_ISINCURRENTVERSE_OFFSET))(this);
		}

		::System::Void _CheckDataInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CHECKDATAINIT_OFFSET))(this);
		}

		::System::Void _InitStoryLineIDs(::RPG::GameCore::SubMissionInfoConfig* subMissionInfoConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__INITSTORYLINEIDS_OFFSET))(this, subMissionInfoConfig);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::String* get_Location()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_LOCATION_OFFSET))(this);
		}

		::RPG::GameCore::SubMissionRow* get_Row()
		{
			return ((::RPG::GameCore::SubMissionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::SubMissionState get_Status()
		{
			return ((::RPG::GameCore::SubMissionState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::GameCore::SubMissionState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurrentProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_CURRENTPROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsTakenAndNotstarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISTAKENANDNOTSTARTED_OFFSET))(this);
		}

		::System::Boolean get_IsStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISSTART_OFFSET))(this);
		}

		::System::Boolean get_IsShowInMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISSHOWINMAP_OFFSET))(this);
		}

		::System::Boolean get_IsUnknow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISUNKNOW_OFFSET))(this);
		}

		::System::String* get_AudioEmotionState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_AUDIOEMOTIONSTATE_OFFSET))(this);
		}

		::System::Void set_AudioEmotionState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_AUDIOEMOTIONSTATE_OFFSET))(this, value);
		}

		::System::String* get_SoundEffectState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_SOUNDEFFECTSTATE_OFFSET))(this);
		}

		::System::Void set_SoundEffectState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_SOUNDEFFECTSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsTrackByMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISTRACKBYMESSAGE_OFFSET))(this);
		}

		::System::UInt32 get_MessageGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_MESSAGEGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::MissionWayPointType get_WayPointType()
		{
			return ((::RPG::GameCore::MissionWayPointType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_WAYPOINTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsInMissionLevelGraphTargetFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISINMISSIONLEVELGRAPHTARGETFLOOR_OFFSET))(this);
		}

		::System::Boolean get_IsInTargetWaypointFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISINTARGETWAYPOINTFLOOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelPlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_LEVELPLANEID_OFFSET))(this);
		}

		::System::UInt32 get_LevelFloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_LEVELFLOORID_OFFSET))(this);
		}

		::System::UInt32 get_WayPointFloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_WAYPOINTFLOORID_OFFSET))(this);
		}

		::System::Boolean get_FroceMapHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_FROCEMAPHINT_OFFSET))(this);
		}

		::System::Boolean get_IsControlHintByDistance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISCONTROLHINTBYDISTANCE_OFFSET))(this);
		}

		::System::Single get_HintMaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_HINTMAXDISTANCE_OFFSET))(this);
		}

		::System::Boolean get_IsAllFloorMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISALLFLOORMISSION_OFFSET))(this);
		}

		::System::Void set_IsAllFloorMission(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_ISALLFLOORMISSION_OFFSET))(this, value);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::SubmissionLogicType get_LogicType()
		{
			return ((::RPG::GameCore::SubmissionLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_LOGICTYPE_OFFSET))(this);
		}

		::System::Void set_LogicType(::RPG::GameCore::SubmissionLogicType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubmissionLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_LOGICTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::SubmissionOptionalTrackMode get_OptionalTrackMode()
		{
			return ((::RPG::GameCore::SubmissionOptionalTrackMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_OPTIONALTRACKMODE_OFFSET))(this);
		}

		::System::Void set_OptionalTrackMode(::RPG::GameCore::SubmissionOptionalTrackMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubmissionOptionalTrackMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_OPTIONALTRACKMODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_ISSHOW_OFFSET))(this, value);
		}

		::System::Boolean get_IsMuteNav()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISMUTENAV_OFFSET))(this);
		}

		::System::Boolean get_FixTransferRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_FIXTRANSFERROTATION_OFFSET))(this);
		}
	};
}
