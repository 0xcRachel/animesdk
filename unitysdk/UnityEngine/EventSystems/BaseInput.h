#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETAXISRAW_OFFSET UNITYSDK_OFFSET(0x18230C10)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x18230C20)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x18230790)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x182307A0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x182307B0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x18230990)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x18230730)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x18230700)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x18230710)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x182307C0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0x18230780)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x182307D0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x18230810)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_TOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0x18230800)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x18230760)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x18230720)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x18230C30)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseInput_TypeDefinitionIndex = 5817;

	class BaseInput : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT__CTOR_OFFSET))(this);
		}

		::System::String* get_compositionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_COMPOSITIONSTRING_OFFSET))(this);
		}

		::UnityEngine::IMECompositionMode get_imeCompositionMode()
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_IMECOMPOSITIONMODE_OFFSET))(this);
		}

		::System::Void set_imeCompositionMode(::UnityEngine::IMECompositionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_SET_IMECOMPOSITIONMODE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_compositionCursorPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_COMPOSITIONCURSORPOS_OFFSET))(this);
		}

		::System::Void set_compositionCursorPos(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_SET_COMPOSITIONCURSORPOS_OFFSET))(this, value);
		}

		::System::Boolean get_mousePresent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSEPRESENT_OFFSET))(this);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTONDOWN_OFFSET))(this, button);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTONUP_OFFSET))(this, button);
		}

		::System::Boolean GetMouseButton(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTON_OFFSET))(this, button);
		}

		::UnityEngine::Vector2 get_mousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_mouseScrollDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSESCROLLDELTA_OFFSET))(this);
		}

		::System::Boolean get_touchSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_TOUCHSUPPORTED_OFFSET))(this);
		}

		::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 index)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETTOUCH_OFFSET))(this, index);
		}

		::System::Single GetAxisRaw(::System::String* axisName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETAXISRAW_OFFSET))(this, axisName);
		}

		::System::Boolean GetButtonDown(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETBUTTONDOWN_OFFSET))(this, buttonName);
		}
	};
}
