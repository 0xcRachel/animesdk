#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_MOTION_GET_APPARENTSPEED_OFFSET UNITYSDK_OFFSET(0x1A60C050)
#define UNITYENGINE_MOTION_GET_AVERAGEANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x1A60BFE0)
#define UNITYENGINE_MOTION_GET_AVERAGEDURATION_OFFSET UNITYSDK_OFFSET(0x1A60BFD0)
#define UNITYENGINE_MOTION_GET_AVERAGESPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60C040)
#define UNITYENGINE_MOTION_GET_AVERAGESPEED_OFFSET UNITYSDK_OFFSET(0x1A60BFF0)
#define UNITYENGINE_MOTION_GET_ISANIMATORMOTION_OFFSET UNITYSDK_OFFSET(0x1A60C0A0)
#define UNITYENGINE_MOTION_GET_ISHUMANMOTION_OFFSET UNITYSDK_OFFSET(0x1A60C080)
#define UNITYENGINE_MOTION_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1A60C060)
#define UNITYENGINE_MOTION_GET_LEGACY_OFFSET UNITYSDK_OFFSET(0x1A60C070)
#define UNITYENGINE_MOTION_VALIDATEIFRETARGETABLE_OFFSET UNITYSDK_OFFSET(0x1A60C090)
#define UNITYENGINE_MOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A601120)

namespace UnityEngine
{
	inline static constexpr unsigned int Motion_TypeDefinitionIndex = 5057;

	class Motion : public ::UnityEngine::Object
	{
	public:
		::System::Boolean _isAnimatorMotion_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION__CTOR_OFFSET))(this);
		}

		::System::Single get_averageDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_AVERAGEDURATION_OFFSET))(this);
		}

		::System::Single get_averageAngularSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_AVERAGEANGULARSPEED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_averageSpeed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_AVERAGESPEED_OFFSET))(this);
		}

		::System::Single get_apparentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_APPARENTSPEED_OFFSET))(this);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Boolean get_legacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_LEGACY_OFFSET))(this);
		}

		::System::Boolean get_isHumanMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_ISHUMANMOTION_OFFSET))(this);
		}

		::System::Boolean ValidateIfRetargetable(::System::Boolean val)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_VALIDATEIFRETARGETABLE_OFFSET))(this, val);
		}

		::System::Boolean get_isAnimatorMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_ISANIMATORMOTION_OFFSET))(this);
		}

		::System::Void get_averageSpeed_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_AVERAGESPEED_INJECTED_OFFSET))(this, ret);
		}
	};
}
