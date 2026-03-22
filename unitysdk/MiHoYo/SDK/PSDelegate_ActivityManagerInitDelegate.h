#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_ACTIVITYMANAGERINITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x158C0E00)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYMANAGERINITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x158C0E30)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYMANAGERINITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x158C0A30)
#define MIHOYO_SDK_PSDELEGATE_ACTIVITYMANAGERINITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x158C0A10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_ActivityManagerInitDelegate_TypeDefinitionIndex = 6637;

	class PSDelegate_ActivityManagerInitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYMANAGERINITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYMANAGERINITDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYMANAGERINITDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_ACTIVITYMANAGERINITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
