#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class IInputProxy; }
namespace UnityEngine { class RawInputProxy; }

#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x182E6430)
#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x182E65A0)
#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x182E62C0)
#define UNITYENGINE_INPUTPROXY_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x182D9780)
#define UNITYENGINE_INPUTPROXY_GET_ISINPROXYMODE_OFFSET UNITYSDK_OFFSET(0x182E6190)
#define UNITYENGINE_INPUTPROXY_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x182E6710)
#define UNITYENGINE_INPUTPROXY_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x182D95C0)
#define UNITYENGINE_INPUTPROXY_SETPROXYIMPL_OFFSET UNITYSDK_OFFSET(0x182E6280)
#define UNITYENGINE_INPUTPROXY_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x182E61E0)
#define UNITYENGINE_INPUTPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x182E6900)

namespace UnityEngine
{
	inline static constexpr unsigned int InputProxy_TypeDefinitionIndex = 5456;

	class InputProxy : public ::System::Object
	{
	public:
		static ::UnityEngine::IInputProxy** StaticGet_Poxyimpl()
		{
			return (::UnityEngine::IInputProxy**)Il2CppClass::FromTypeDefinitionIndex(InputProxy_TypeDefinitionIndex)->GetStaticField(0x6FB0);
		}
		static ::UnityEngine::RawInputProxy** StaticGet_defaultProxy()
		{
			return (::UnityEngine::RawInputProxy**)Il2CppClass::FromTypeDefinitionIndex(InputProxy_TypeDefinitionIndex)->GetStaticField(0x6FB8);
		}
		static ::System::Boolean* StaticGet_InProxyMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputProxy_TypeDefinitionIndex)->GetStaticField(0x25E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsInProxyMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_ISINPROXYMODE_OFFSET))();
		}

		static ::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_TOUCHCOUNT_OFFSET))();
		}

		static ::System::Int32 TouchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_TOUCHCOUNT_OFFSET))();
		}

		static ::UnityEngine::Touch GetTouch(::System::Int32 index)
		{
			return ((::UnityEngine::Touch(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETTOUCH_OFFSET))(index);
		}

		static ::System::Void SetProxyImpl(::UnityEngine::IInputProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::IInputProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_SETPROXYIMPL_OFFSET))(proxy);
		}

		static ::System::Boolean GetMouseButton(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTON_OFFSET))(index);
		}

		static ::System::Boolean GetMouseButtonDown(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET))(index);
		}

		static ::System::Boolean GetMouseButtonUp(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONUP_OFFSET))(index);
		}

		static ::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_MOUSEPOSITION_OFFSET))();
		}
	};
}
