#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_CONFIGSYNCWITHNATIVEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x159197C0)
#define MIHOYO_SDK_SDKDELEGATE_CONFIGSYNCWITHNATIVEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15919800)
#define MIHOYO_SDK_SDKDELEGATE_CONFIGSYNCWITHNATIVEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15918FA0)
#define MIHOYO_SDK_SDKDELEGATE_CONFIGSYNCWITHNATIVEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15918F80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_ConfigSyncWithNativeDelegate_TypeDefinitionIndex = 6694;

	class SDKDelegate_ConfigSyncWithNativeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CONFIGSYNCWITHNATIVEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* type, ::System::String* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CONFIGSYNCWITHNATIVEDELEGATE_INVOKE_OFFSET))(this, type, config);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* type, ::System::String* config, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CONFIGSYNCWITHNATIVEDELEGATE_BEGININVOKE_OFFSET))(this, type, config, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CONFIGSYNCWITHNATIVEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
