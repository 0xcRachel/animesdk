#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/AgentHandle.h"
#include "unitysdk/UnityEngine/AI/AsyncNavMeshAgent_MotionSnapshot.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_CREATEMOTIONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x181AE9F0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x181AEC60)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x181AEAB0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_MAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x181AEB00)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x181AEBB0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x181AED80)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x181AEA60)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x181AEEA0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_RECORDSTATE_OFFSET UNITYSDK_OFFSET(0x181AEFC0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_RESUMESTATE_OFFSET UNITYSDK_OFFSET(0x181AF060)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_RESUME_OFFSET UNITYSDK_OFFSET(0x181AF260)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_AUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x181AEA00)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x181AED10)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_MAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x181AEB50)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x181AEC00)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_OVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x181AEE30)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x181AEF50)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_STOP_1_OFFSET UNITYSDK_OFFSET(0x181AF130)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_STOP_OFFSET UNITYSDK_OFFSET(0x181AF0E0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x181AE9D0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int AsyncNavMeshAgent_TypeDefinitionIndex = 5279;

	class AsyncNavMeshAgent : public ::System::Object
	{
	public:
		::UnityEngine::AI::AgentHandle m_Handle; // 0x10
		::UnityEngine::AI::AsyncNavMeshSimulator* m_Owner; // 0x18
		::UnityEngine::AI::AsyncNavMeshAgent_MotionSnapshot m_MotionSnapshot; // 0x20

		::System::Void _ctor(::UnityEngine::AI::AgentHandle handle, ::UnityEngine::AI::AsyncNavMeshSimulator* owner)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::UnityEngine::AI::AsyncNavMeshSimulator*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT__CTOR_OFFSET))(this, handle, owner);
		}

		::System::Void CreateMotionSnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_CREATEMOTIONSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_autoBraking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_AUTOBRAKING_OFFSET))(this, value);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_RADIUS_OFFSET))(this);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_maxAcceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_MAXACCELERATION_OFFSET))(this);
		}

		::System::Void set_maxAcceleration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_MAXACCELERATION_OFFSET))(this, value);
		}

		::System::Single get_maxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_maxSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_MAXSPEED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_destination()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_DESTINATION_OFFSET))(this);
		}

		::System::Void set_destination(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_DESTINATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_overridePosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_OVERRIDEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_VELOCITY_OFFSET))(this, value);
		}

		::System::Void RecordState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_RECORDSTATE_OFFSET))(this);
		}

		::System::Void ResumeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_RESUMESTATE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_STOP_OFFSET))(this);
		}

		::System::Void Stop_1(::System::Single stopAcceleration, ::UnityEngine::Vector3 stopDestination)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_STOP_1_OFFSET))(this, stopAcceleration, stopDestination);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_RESUME_OFFSET))(this);
		}
	};
}
