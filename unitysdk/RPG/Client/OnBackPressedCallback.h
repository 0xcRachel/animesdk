#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ONBACKPRESSEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9EA6400)
#define RPG_CLIENT_ONBACKPRESSEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9EA6430)
#define RPG_CLIENT_ONBACKPRESSEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9EA6150)
#define RPG_CLIENT_ONBACKPRESSEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA6130)

namespace RPG::Client
{
	inline static constexpr unsigned int OnBackPressedCallback_TypeDefinitionIndex = 58464;

	class OnBackPressedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDCALLBACK_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
