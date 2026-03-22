#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF839200)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF839240)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6_INVOKE_OFFSET UNITYSDK_OFFSET(0xF8389E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B060)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE6_TypeDefinitionIndex = 39437;

	class InternalGlobals___GEN_DELEGATE6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Events::UnityEvent_1<::System::Single>* unityEvent, ::UnityEngine::Events::UnityAction_1<::System::Single>* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent_1<::System::Single>*, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6_INVOKE_OFFSET))(this, unityEvent, call);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Events::UnityEvent_1<::System::Single>* unityEvent, ::UnityEngine::Events::UnityAction_1<::System::Single>* call, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Events::UnityEvent_1<::System::Single>*, ::UnityEngine::Events::UnityAction_1<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6_BEGININVOKE_OFFSET))(this, unityEvent, call, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
