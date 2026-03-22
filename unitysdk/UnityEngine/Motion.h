#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_MOTION_GET_APPARENTSPEED_OFFSET UNITYSDK_OFFSET(0x181C68F0)
#define UNITYENGINE_MOTION_GET_AVERAGEANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x181C6880)
#define UNITYENGINE_MOTION_GET_AVERAGEDURATION_OFFSET UNITYSDK_OFFSET(0x181C6870)
#define UNITYENGINE_MOTION_GET_AVERAGESPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x181C68E0)
#define UNITYENGINE_MOTION_GET_AVERAGESPEED_OFFSET UNITYSDK_OFFSET(0x181C6890)
#define UNITYENGINE_MOTION_GET_ISANIMATORMOTION_OFFSET UNITYSDK_OFFSET(0x181C6940)
#define UNITYENGINE_MOTION_GET_ISHUMANMOTION_OFFSET UNITYSDK_OFFSET(0x181C6920)
#define UNITYENGINE_MOTION_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x181C6900)
#define UNITYENGINE_MOTION_GET_LEGACY_OFFSET UNITYSDK_OFFSET(0x181C6910)
#define UNITYENGINE_MOTION_VALIDATEIFRETARGETABLE_OFFSET UNITYSDK_OFFSET(0x181C6930)
#define UNITYENGINE_MOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x181BCD70)

namespace UnityEngine
{
	inline static constexpr unsigned int Motion_TypeDefinitionIndex = 4949;

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
