#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17C365F0)
#define SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17C36640)
#define SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x17C361A0)
#define SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17C36180)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int BugReportProgressCallback_TypeDefinitionIndex = 28823;

	class BugReportProgressCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_INVOKE_OFFSET))(this, progress);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single progress, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_BEGININVOKE_OFFSET))(this, progress, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
