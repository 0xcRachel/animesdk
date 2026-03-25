#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_CALLJSPUBLISHFUNCTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16054500)
#define MIHOYO_SDK_WEBDELEGATE_CALLJSPUBLISHFUNCTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16054570)
#define MIHOYO_SDK_WEBDELEGATE_CALLJSPUBLISHFUNCTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1604F440)
#define MIHOYO_SDK_WEBDELEGATE_CALLJSPUBLISHFUNCTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x160544E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_CallJSPublishFunctionDelegate_TypeDefinitionIndex = 6849;

	class WebDelegate_CallJSPublishFunctionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSPUBLISHFUNCTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::String* typeString, ::System::String* dataString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSPUBLISHFUNCTIONDELEGATE_INVOKE_OFFSET))(this, webView, typeString, dataString, isDirectly);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::String* typeString, ::System::String* dataString, ::System::Boolean isDirectly, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSPUBLISHFUNCTIONDELEGATE_BEGININVOKE_OFFSET))(this, webView, typeString, dataString, isDirectly, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSPUBLISHFUNCTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
