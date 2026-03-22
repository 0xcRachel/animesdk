#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/TouchPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define INCONTROL_TOUCH_GET_ISMOUSE_OFFSET UNITYSDK_OFFSET(0x15503880)
#define INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_1_OFFSET UNITYSDK_OFFSET(0x15503850)
#define INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET UNITYSDK_OFFSET(0x15503820)
#define INCONTROL_TOUCH_RESET_OFFSET UNITYSDK_OFFSET(0x155037A0)
#define INCONTROL_TOUCH_SETWITHMOUSEDATA_OFFSET UNITYSDK_OFFSET(0x15503A00)
#define INCONTROL_TOUCH_SETWITHTOUCHDATA_OFFSET UNITYSDK_OFFSET(0x15503890)
#define INCONTROL_TOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x15503790)

namespace InControl
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 30590;

	class Touch : public ::System::Object
	{
	public:
		// static const ::System::Int32 FingerID_None = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 FingerID_Mouse = 0xFFFFFFFE; // 0x0
		::System::Single azimuthAngle; // 0x10
		::System::Int32 fingerId; // 0x14
		::UnityEngine::Vector2 lastPosition; // 0x18
		::System::Single radiusVariance; // 0x20
		::System::Int32 tapCount; // 0x24
		::UnityEngine::TouchPhase phase; // 0x28
		::System::Single radius; // 0x2C
		::InControl::TouchType type; // 0x30
		::System::Single maximumPossiblePressure; // 0x34
		::UnityEngine::Vector2 deltaPosition; // 0x38
		::UnityEngine::Vector2 position; // 0x40
		::UnityEngine::Vector2 startPosition; // 0x48
		::System::Int32 mouseButton; // 0x50
		::System::Single pressure; // 0x54
		::System::UInt64 updateTick; // 0x58
		::System::Single deltaTime; // 0x60
		::System::Single altitudeAngle; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_RESET_OFFSET))(this);
		}

		::System::Single get_normalizedPressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET))(this);
		}

		::System::Single get_NormalizedPressure_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_1_OFFSET))(this);
		}

		::System::Boolean get_IsMouse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_GET_ISMOUSE_OFFSET))(this);
		}

		::System::Void SetWithTouchData(::UnityEngine::Touch touch, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Touch, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_SETWITHTOUCHDATA_OFFSET))(this, touch, updateTick, deltaTime);
		}

		::System::Boolean SetWithMouseData(::System::Int32 button, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_SETWITHMOUSEDATA_OFFSET))(this, button, updateTick, deltaTime);
		}
	};
}
