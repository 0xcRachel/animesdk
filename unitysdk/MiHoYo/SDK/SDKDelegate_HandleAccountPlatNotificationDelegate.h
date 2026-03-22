#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_HANDLEACCOUNTPLATNOTIFICATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1591ECE0)
#define MIHOYO_SDK_SDKDELEGATE_HANDLEACCOUNTPLATNOTIFICATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1591ED10)
#define MIHOYO_SDK_SDKDELEGATE_HANDLEACCOUNTPLATNOTIFICATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1591E5A0)
#define MIHOYO_SDK_SDKDELEGATE_HANDLEACCOUNTPLATNOTIFICATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1591E580)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_HandleAccountPlatNotificationDelegate_TypeDefinitionIndex = 6695;

	class SDKDelegate_HandleAccountPlatNotificationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HANDLEACCOUNTPLATNOTIFICATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* strNotification)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HANDLEACCOUNTPLATNOTIFICATIONDELEGATE_INVOKE_OFFSET))(this, strNotification);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strNotification, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HANDLEACCOUNTPLATNOTIFICATIONDELEGATE_BEGININVOKE_OFFSET))(this, strNotification, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HANDLEACCOUNTPLATNOTIFICATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
