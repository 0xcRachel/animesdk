#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_ACCOUNTPLATINVOKERETURNDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x159186B0)
#define MIHOYO_SDK_SDKDELEGATE_ACCOUNTPLATINVOKERETURNDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x159186F0)
#define MIHOYO_SDK_SDKDELEGATE_ACCOUNTPLATINVOKERETURNDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15917E90)
#define MIHOYO_SDK_SDKDELEGATE_ACCOUNTPLATINVOKERETURNDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15917E70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_AccountPlatInvokeReturnDelegate_TypeDefinitionIndex = 6698;

	class SDKDelegate_AccountPlatInvokeReturnDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ACCOUNTPLATINVOKERETURNDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ACCOUNTPLATINVOKERETURNDELEGATE_INVOKE_OFFSET))(this, funcName, args);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* funcName, ::System::String* args, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ACCOUNTPLATINVOKERETURNDELEGATE_BEGININVOKE_OFFSET))(this, funcName, args, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ACCOUNTPLATINVOKERETURNDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
