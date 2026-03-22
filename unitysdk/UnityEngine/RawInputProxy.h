#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x182E6590)
#define UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x182E6700)
#define UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x182E6420)
#define UNITYENGINE_RAWINPUTPROXY_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x182E6210)
#define UNITYENGINE_RAWINPUTPROXY_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x182E68C0)
#define UNITYENGINE_RAWINPUTPROXY_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x182E61D0)
#define UNITYENGINE_RAWINPUTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x182E6930)

namespace UnityEngine
{
	inline static constexpr unsigned int RawInputProxy_TypeDefinitionIndex = 5455;

	class RawInputProxy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 index)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GETTOUCH_OFFSET))(this, index);
		}

		::System::Boolean GetMouseButton(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTON_OFFSET))(this, index);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET))(this, index);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTONUP_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GET_MOUSEPOSITION_OFFSET))(this);
		}
	};
}
