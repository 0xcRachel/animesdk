#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class SDKDelegate_HandleAccountPlatNotificationDelegate; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_REGISTERHANDLEACCOUNTPLATNOTIFICATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15925FD0)
#define MIHOYO_SDK_SDKDELEGATE_REGISTERHANDLEACCOUNTPLATNOTIFICATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15926000)
#define MIHOYO_SDK_SDKDELEGATE_REGISTERHANDLEACCOUNTPLATNOTIFICATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15925890)
#define MIHOYO_SDK_SDKDELEGATE_REGISTERHANDLEACCOUNTPLATNOTIFICATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15925870)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_RegisterHandleAccountPlatNotificationDelegate_TypeDefinitionIndex = 6696;

	class SDKDelegate_RegisterHandleAccountPlatNotificationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_REGISTERHANDLEACCOUNTPLATNOTIFICATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::SDKDelegate_HandleAccountPlatNotificationDelegate* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SDKDelegate_HandleAccountPlatNotificationDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_REGISTERHANDLEACCOUNTPLATNOTIFICATIONDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::SDKDelegate_HandleAccountPlatNotificationDelegate* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::SDKDelegate_HandleAccountPlatNotificationDelegate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_REGISTERHANDLEACCOUNTPLATNOTIFICATIONDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_REGISTERHANDLEACCOUNTPLATNOTIFICATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
