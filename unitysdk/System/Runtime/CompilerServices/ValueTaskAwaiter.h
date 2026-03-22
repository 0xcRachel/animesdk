#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/ValueTask.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x202EE50)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x202EE60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D37A00)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ValueTaskAwaiter_TypeDefinitionIndex = 8771;

	struct alignas(8) ValueTaskAwaiter
	{
		static ::System::Action_1<::System::Object*>** StaticGet_s_invokeActionDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ValueTaskAwaiter_TypeDefinitionIndex)->GetStaticField(0x680);
		}
		::System::Threading::Tasks::ValueTask _value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER__CCTOR_OFFSET))();
		}

		::System::Void OnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_ONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void UnsafeOnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_UNSAFEONCOMPLETED_OFFSET))(this, continuation);
		}
	};
}
