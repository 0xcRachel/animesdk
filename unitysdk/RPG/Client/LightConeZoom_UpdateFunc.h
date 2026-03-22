#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x950A230)
#define RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x950A260)
#define RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x9509E30)
#define RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x950A210)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeZoom_UpdateFunc_TypeDefinitionIndex = 57832;

	class LightConeZoom_UpdateFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
