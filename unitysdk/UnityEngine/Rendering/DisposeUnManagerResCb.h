#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_RENDERING_DISPOSEUNMANAGERRESCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x188F60F0)
#define UNITYENGINE_RENDERING_DISPOSEUNMANAGERRESCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x188F6120)
#define UNITYENGINE_RENDERING_DISPOSEUNMANAGERRESCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x188F5E50)
#define UNITYENGINE_RENDERING_DISPOSEUNMANAGERRESCB__CTOR_OFFSET UNITYSDK_OFFSET(0x188F5E30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DisposeUnManagerResCb_TypeDefinitionIndex = 27850;

	class DisposeUnManagerResCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEUNMANAGERRESCB__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEUNMANAGERRESCB_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEUNMANAGERRESCB_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEUNMANAGERRESCB_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
