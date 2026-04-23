#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshPathStatus.h"
#include "unitysdk/UnityEngine/AI/ObstacleAvoidanceType.h"
#include "unitysdk/UnityEngine/AI/OffMeshLinkData.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Object; }
namespace UnityEngine::AI { class NavMeshPath; }

#define UNITYENGINE_AI_NAVMESHAGENT_ACTIVATECURRENTOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1A704F50)
#define UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A705440)
#define UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A705430)
#define UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATH_OFFSET UNITYSDK_OFFSET(0x1A7053D0)
#define UNITYENGINE_AI_NAVMESHAGENT_COMPLETEOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1A705100)
#define UNITYENGINE_AI_NAVMESHAGENT_COPYPATHTO_OFFSET UNITYSDK_OFFSET(0x1A705320)
#define UNITYENGINE_AI_NAVMESHAGENT_FINDCLOSESTEDGE_OFFSET UNITYSDK_OFFSET(0x1A7053A0)
#define UNITYENGINE_AI_NAVMESHAGENT_GETAREACOST_OFFSET UNITYSDK_OFFSET(0x1A705490)
#define UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A705020)
#define UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A704FC0)
#define UNITYENGINE_AI_NAVMESHAGENT_GETLAYERCOST_OFFSET UNITYSDK_OFFSET(0x1A705470)
#define UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A7050F0)
#define UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A705090)
#define UNITYENGINE_AI_NAVMESHAGENT_GETOWNERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7054B0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A705560)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x1A7054C0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x1A705540)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AREAMASK_OFFSET UNITYSDK_OFFSET(0x1A7054F0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x1A705130)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOREPATH_OFFSET UNITYSDK_OFFSET(0x1A705150)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOTRAVERSEOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1A705110)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AVOIDANCEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A705640)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A704F20)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_CURRENTOFFMESHLINKDATA_OFFSET UNITYSDK_OFFSET(0x1A704F60)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704F00)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A704EB0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704D00)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1A704CB0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_HASPATH_OFFSET UNITYSDK_OFFSET(0x1A705170)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1A705600)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISONNAVMESH_OFFSET UNITYSDK_OFFSET(0x1A705660)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISONOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1A704F40)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISPATHSTALE_OFFSET UNITYSDK_OFFSET(0x1A705190)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x1A705280)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NAVMESHOWNER_OFFSET UNITYSDK_OFFSET(0x1A7054A0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTOFFMESHLINKDATA_OFFSET UNITYSDK_OFFSET(0x1A705030)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704E20)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1A704DD0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_OBSTACLEAVOIDANCETYPE_OFFSET UNITYSDK_OFFSET(0x1A705620)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A705200)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1A7051B0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHPENDING_OFFSET UNITYSDK_OFFSET(0x1A705180)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHSTATUS_OFFSET UNITYSDK_OFFSET(0x1A7051A0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1A7052C0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1A7055E0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_REMAININGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A704F10)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1A705520)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704EA0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_OFFSET UNITYSDK_OFFSET(0x1A704E50)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_STOPPINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A704D30)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A705580)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x1A7055A0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEUPAXIS_OFFSET UNITYSDK_OFFSET(0x1A7055C0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704DA0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1A704D50)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_WALKABLEMASK_OFFSET UNITYSDK_OFFSET(0x1A7054E0)
#define UNITYENGINE_AI_NAVMESHAGENT_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A705240)
#define UNITYENGINE_AI_NAVMESHAGENT_MOVE_OFFSET UNITYSDK_OFFSET(0x1A705230)
#define UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A7053C0)
#define UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1A7053B0)
#define UNITYENGINE_AI_NAVMESHAGENT_RESETPATH_OFFSET UNITYSDK_OFFSET(0x1A7052A0)
#define UNITYENGINE_AI_NAVMESHAGENT_RESUME_OFFSET UNITYSDK_OFFSET(0x1A705270)
#define UNITYENGINE_AI_NAVMESHAGENT_SAMPLEPATHPOSITION_OFFSET UNITYSDK_OFFSET(0x1A705450)
#define UNITYENGINE_AI_NAVMESHAGENT_SETAREACOST_OFFSET UNITYSDK_OFFSET(0x1A705480)
#define UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704CA0)
#define UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1A704C90)
#define UNITYENGINE_AI_NAVMESHAGENT_SETLAYERCOST_OFFSET UNITYSDK_OFFSET(0x1A705460)
#define UNITYENGINE_AI_NAVMESHAGENT_SETPATH_OFFSET UNITYSDK_OFFSET(0x1A7052B0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A705570)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x1A7054D0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_ANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x1A705550)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AREAMASK_OFFSET UNITYSDK_OFFSET(0x1A705510)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x1A705140)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOREPATH_OFFSET UNITYSDK_OFFSET(0x1A705160)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOTRAVERSEOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1A705120)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AVOIDANCEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A705650)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A704F30)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704D20)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1A704D10)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1A705610)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x1A705290)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704E40)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1A704E30)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_OBSTACLEAVOIDANCETYPE_OFFSET UNITYSDK_OFFSET(0x1A705630)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1A705330)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1A7055F0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1A705530)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_STOPPINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A704D40)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A705590)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x1A7055B0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEUPAXIS_OFFSET UNITYSDK_OFFSET(0x1A7055D0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704DC0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1A704DB0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_WALKABLEMASK_OFFSET UNITYSDK_OFFSET(0x1A705500)
#define UNITYENGINE_AI_NAVMESHAGENT_STOP_1_OFFSET UNITYSDK_OFFSET(0x1A705260)
#define UNITYENGINE_AI_NAVMESHAGENT_STOP_OFFSET UNITYSDK_OFFSET(0x1A705250)
#define UNITYENGINE_AI_NAVMESHAGENT_WARP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A705220)
#define UNITYENGINE_AI_NAVMESHAGENT_WARP_OFFSET UNITYSDK_OFFSET(0x1A705210)
#define UNITYENGINE_AI_NAVMESHAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A705670)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshAgent_TypeDefinitionIndex = 5368;

	class NavMeshAgent : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT__CTOR_OFFSET))(this);
		}

		::System::Boolean SetDestination(::UnityEngine::Vector3 target)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_OFFSET))(this, target);
		}

		::UnityEngine::Vector3 get_destination()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_OFFSET))(this);
		}

		::System::Void set_destination(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_OFFSET))(this, value);
		}

		::System::Single get_stoppingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_STOPPINGDISTANCE_OFFSET))(this);
		}

		::System::Void set_stoppingDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_STOPPINGDISTANCE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_nextPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_OFFSET))(this);
		}

		::System::Void set_nextPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_steeringTarget()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_desiredVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_OFFSET))(this);
		}

		::System::Single get_remainingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_REMAININGDISTANCE_OFFSET))(this);
		}

		::System::Single get_baseOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_BASEOFFSET_OFFSET))(this);
		}

		::System::Void set_baseOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_BASEOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_isOnOffMeshLink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISONOFFMESHLINK_OFFSET))(this);
		}

		::System::Void ActivateCurrentOffMeshLink(::System::Boolean activated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_ACTIVATECURRENTOFFMESHLINK_OFFSET))(this, activated);
		}

		::UnityEngine::AI::OffMeshLinkData get_currentOffMeshLinkData()
		{
			return ((::UnityEngine::AI::OffMeshLinkData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_CURRENTOFFMESHLINKDATA_OFFSET))(this);
		}

		::UnityEngine::AI::OffMeshLinkData GetCurrentOffMeshLinkDataInternal()
		{
			return ((::UnityEngine::AI::OffMeshLinkData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_OFFSET))(this);
		}

		::UnityEngine::AI::OffMeshLinkData get_nextOffMeshLinkData()
		{
			return ((::UnityEngine::AI::OffMeshLinkData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTOFFMESHLINKDATA_OFFSET))(this);
		}

		::UnityEngine::AI::OffMeshLinkData GetNextOffMeshLinkDataInternal()
		{
			return ((::UnityEngine::AI::OffMeshLinkData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_OFFSET))(this);
		}

		::System::Void CompleteOffMeshLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_COMPLETEOFFMESHLINK_OFFSET))(this);
		}

		::System::Boolean get_autoTraverseOffMeshLink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOTRAVERSEOFFMESHLINK_OFFSET))(this);
		}

		::System::Void set_autoTraverseOffMeshLink(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOTRAVERSEOFFMESHLINK_OFFSET))(this, value);
		}

		::System::Boolean get_autoBraking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOBRAKING_OFFSET))(this);
		}

		::System::Void set_autoBraking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOBRAKING_OFFSET))(this, value);
		}

		::System::Boolean get_autoRepath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOREPATH_OFFSET))(this);
		}

		::System::Void set_autoRepath(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOREPATH_OFFSET))(this, value);
		}

		::System::Boolean get_hasPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_HASPATH_OFFSET))(this);
		}

		::System::Boolean get_pathPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATHPENDING_OFFSET))(this);
		}

		::System::Boolean get_isPathStale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISPATHSTALE_OFFSET))(this);
		}

		::UnityEngine::AI::NavMeshPathStatus get_pathStatus()
		{
			return ((::UnityEngine::AI::NavMeshPathStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATHSTATUS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_pathEndPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_OFFSET))(this);
		}

		::System::Boolean Warp(::UnityEngine::Vector3 newPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_WARP_OFFSET))(this, newPosition);
		}

		::System::Void Move(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_MOVE_OFFSET))(this, offset);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_STOP_OFFSET))(this);
		}

		::System::Void Stop_1(::System::Boolean stopUpdates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_STOP_1_OFFSET))(this, stopUpdates);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RESUME_OFFSET))(this);
		}

		::System::Boolean get_isStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISSTOPPED_OFFSET))(this);
		}

		::System::Void set_isStopped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_ISSTOPPED_OFFSET))(this, value);
		}

		::System::Void ResetPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RESETPATH_OFFSET))(this);
		}

		::System::Boolean SetPath(::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETPATH_OFFSET))(this, path);
		}

		::UnityEngine::AI::NavMeshPath* get_path()
		{
			return ((::UnityEngine::AI::NavMeshPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::UnityEngine::AI::NavMeshPath* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_PATH_OFFSET))(this, value);
		}

		::System::Void CopyPathTo(::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_COPYPATHTO_OFFSET))(this, path);
		}

		::System::Boolean FindClosestEdge(::UnityEngine::AI::NavMeshHit& hit)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_FINDCLOSESTEDGE_OFFSET))(this, hit);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshHit& hit)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_OFFSET))(this, targetPosition, hit);
		}

		::System::Boolean CalculatePath(::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATH_OFFSET))(this, targetPosition, path);
		}

		::System::Boolean CalculatePathInternal(::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_OFFSET))(this, targetPosition, path);
		}

		::System::Boolean SamplePathPosition(::System::Int32 areaMask, ::System::Single maxDistance, ::UnityEngine::AI::NavMeshHit& hit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SAMPLEPATHPOSITION_OFFSET))(this, areaMask, maxDistance, hit);
		}

		::System::Void SetLayerCost(::System::Int32 layer, ::System::Single cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETLAYERCOST_OFFSET))(this, layer, cost);
		}

		::System::Single GetLayerCost(::System::Int32 layer)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETLAYERCOST_OFFSET))(this, layer);
		}

		::System::Void SetAreaCost(::System::Int32 areaIndex, ::System::Single areaCost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETAREACOST_OFFSET))(this, areaIndex, areaCost);
		}

		::System::Single GetAreaCost(::System::Int32 areaIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETAREACOST_OFFSET))(this, areaIndex);
		}

		::UnityEngine::Object* get_navMeshOwner()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NAVMESHOWNER_OFFSET))(this);
		}

		::System::Int32 get_agentTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AGENTTYPEID_OFFSET))(this);
		}

		::System::Void set_agentTypeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AGENTTYPEID_OFFSET))(this, value);
		}

		::UnityEngine::Object* GetOwnerInternal()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETOWNERINTERNAL_OFFSET))(this);
		}

		::System::Int32 get_walkableMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_WALKABLEMASK_OFFSET))(this);
		}

		::System::Void set_walkableMask(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_WALKABLEMASK_OFFSET))(this, value);
		}

		::System::Int32 get_areaMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AREAMASK_OFFSET))(this);
		}

		::System::Void set_areaMask(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AREAMASK_OFFSET))(this, value);
		}

		::System::Single get_speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_SPEED_OFFSET))(this, value);
		}

		::System::Single get_angularSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ANGULARSPEED_OFFSET))(this);
		}

		::System::Void set_angularSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_ANGULARSPEED_OFFSET))(this, value);
		}

		::System::Single get_acceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_acceleration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_ACCELERATION_OFFSET))(this, value);
		}

		::System::Boolean get_updatePosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEPOSITION_OFFSET))(this);
		}

		::System::Void set_updatePosition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_updateRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEROTATION_OFFSET))(this);
		}

		::System::Void set_updateRotation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEROTATION_OFFSET))(this, value);
		}

		::System::Boolean get_updateUpAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEUPAXIS_OFFSET))(this);
		}

		::System::Void set_updateUpAxis(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEUPAXIS_OFFSET))(this, value);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_HEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::AI::ObstacleAvoidanceType get_obstacleAvoidanceType()
		{
			return ((::UnityEngine::AI::ObstacleAvoidanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_OBSTACLEAVOIDANCETYPE_OFFSET))(this);
		}

		::System::Void set_obstacleAvoidanceType(::UnityEngine::AI::ObstacleAvoidanceType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::ObstacleAvoidanceType))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_OBSTACLEAVOIDANCETYPE_OFFSET))(this, value);
		}

		::System::Int32 get_avoidancePriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AVOIDANCEPRIORITY_OFFSET))(this);
		}

		::System::Void set_avoidancePriority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AVOIDANCEPRIORITY_OFFSET))(this, value);
		}

		::System::Boolean get_isOnNavMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISONNAVMESH_OFFSET))(this);
		}

		::System::Boolean SetDestination_Injected(::UnityEngine::Vector3& target)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_INJECTED_OFFSET))(this, target);
		}

		::System::Void get_destination_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_destination_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_velocity_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_nextPosition_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_nextPosition_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_steeringTarget_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_desiredVelocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetCurrentOffMeshLinkDataInternal_Injected(::UnityEngine::AI::OffMeshLinkData& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::OffMeshLinkData&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetNextOffMeshLinkDataInternal_Injected(::UnityEngine::AI::OffMeshLinkData& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::OffMeshLinkData&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_pathEndPosition_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Boolean Warp_Injected(::UnityEngine::Vector3& newPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_WARP_INJECTED_OFFSET))(this, newPosition);
		}

		::System::Void Move_Injected(::UnityEngine::Vector3& offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_MOVE_INJECTED_OFFSET))(this, offset);
		}

		::System::Boolean Raycast_Injected(::UnityEngine::Vector3& targetPosition, ::UnityEngine::AI::NavMeshHit& hit)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_INJECTED_OFFSET))(this, targetPosition, hit);
		}

		::System::Boolean CalculatePathInternal_Injected(::UnityEngine::Vector3& targetPosition, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_INJECTED_OFFSET))(this, targetPosition, path);
		}
	};
}
