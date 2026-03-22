#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17B66710)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17B66740)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17B65FD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B65720)

namespace Simplygon
{
	inline static constexpr unsigned int SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate_TypeDefinitionIndex = 28708;

	class SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONDELEGATE_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONDELEGATE_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
