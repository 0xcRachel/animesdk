#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchControlAnchor.h"
#include "unitysdk/InControl/TouchControl_AnalogTarget.h"
#include "unitysdk/InControl/TouchControl_ButtonTarget.h"
#include "unitysdk/InControl/TouchControl_SnapAngles.h"
#include "unitysdk/InControl/TouchUnitType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class Touch; }

#define INCONTROL_TOUCHCONTROL_COMMITANALOG_OFFSET UNITYSDK_OFFSET(0x155069A0)
#define INCONTROL_TOUCHCONTROL_COMMITBUTTON_OFFSET UNITYSDK_OFFSET(0x15505A20)
#define INCONTROL_TOUCHCONTROL_OFFSETTOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x155040E0)
#define INCONTROL_TOUCHCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x155062B0)
#define INCONTROL_TOUCHCONTROL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x15507260)
#define INCONTROL_TOUCHCONTROL_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x15507400)
#define INCONTROL_TOUCHCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15506110)
#define INCONTROL_TOUCHCONTROL_SETUP_OFFSET UNITYSDK_OFFSET(0x155062D0)
#define INCONTROL_TOUCHCONTROL_SNAPTO_1_OFFSET UNITYSDK_OFFSET(0x15506DF0)
#define INCONTROL_TOUCHCONTROL_SNAPTO_OFFSET UNITYSDK_OFFSET(0x15506D90)
#define INCONTROL_TOUCHCONTROL_SUBMITANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x155066A0)
#define INCONTROL_TOUCHCONTROL_SUBMITBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x15505750)
#define INCONTROL_TOUCHCONTROL_SUBMITBUTTONVALUE_OFFSET UNITYSDK_OFFSET(0x155053D0)
#define INCONTROL_TOUCHCONTROL_SUBMITRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x15506B80)
#define INCONTROL_TOUCHCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x15506100)

namespace InControl
{
	inline static constexpr unsigned int TouchControl_TypeDefinitionIndex = 30591;

	class TouchControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SETUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 OffsetToWorldPosition(::InControl::TouchControlAnchor anchor, ::UnityEngine::Vector2 offset, ::InControl::TouchUnitType offsetUnitType, ::System::Boolean lockAspectRatio)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::InControl::TouchControlAnchor, ::UnityEngine::Vector2, ::InControl::TouchUnitType, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_OFFSETTOWORLDPOSITION_OFFSET))(this, anchor, offset, offsetUnitType, lockAspectRatio);
		}

		::System::Void SubmitButtonState(::InControl::TouchControl_ButtonTarget target, ::System::Boolean state, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_ButtonTarget, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SUBMITBUTTONSTATE_OFFSET))(this, target, state, updateTick, deltaTime);
		}

		::System::Void SubmitButtonValue(::InControl::TouchControl_ButtonTarget target, ::System::Single value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_ButtonTarget, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SUBMITBUTTONVALUE_OFFSET))(this, target, value, updateTick, deltaTime);
		}

		::System::Void CommitButton(::InControl::TouchControl_ButtonTarget target)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_ButtonTarget))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_COMMITBUTTON_OFFSET))(this, target);
		}

		::System::Void SubmitAnalogValue(::InControl::TouchControl_AnalogTarget target, ::UnityEngine::Vector2 value, ::System::Single lowerDeadZone, ::System::Single upperDeadZone, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_AnalogTarget, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SUBMITANALOGVALUE_OFFSET))(this, target, value, lowerDeadZone, upperDeadZone, updateTick, deltaTime);
		}

		::System::Void CommitAnalog(::InControl::TouchControl_AnalogTarget target)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_AnalogTarget))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_COMMITANALOG_OFFSET))(this, target);
		}

		::System::Void SubmitRawAnalogValue(::InControl::TouchControl_AnalogTarget target, ::UnityEngine::Vector2 rawValue, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_AnalogTarget, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SUBMITRAWANALOGVALUE_OFFSET))(this, target, rawValue, updateTick, deltaTime);
		}

		static ::UnityEngine::Vector3 SnapTo(::UnityEngine::Vector2 vector, ::InControl::TouchControl_SnapAngles snapAngles)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::InControl::TouchControl_SnapAngles))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SNAPTO_OFFSET))(vector, snapAngles);
		}

		static ::UnityEngine::Vector3 SnapTo_1(::UnityEngine::Vector2 vector, ::System::Single snapAngle)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SNAPTO_1_OFFSET))(vector, snapAngle);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
