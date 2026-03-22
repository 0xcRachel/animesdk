#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ContextCallback; }
namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading::Tasks::Sources { template <typename T> class ManualResetValueTaskSourceCore_1___c; }

namespace System::Threading::Tasks::Sources
{
	inline static constexpr unsigned int ManualResetValueTaskSourceCore_1___c_TypeDefinitionIndex = 8805;

	template <typename TResult>
	class ManualResetValueTaskSourceCore_1___c : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>** StaticGet___9()
		{
			return (::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>**)Il2CppClass::FromTypeDefinitionIndex(ManualResetValueTaskSourceCore_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::SendOrPostCallback** StaticGet___9__19_0()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(ManualResetValueTaskSourceCore_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::ContextCallback** StaticGet___9__21_0()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(ManualResetValueTaskSourceCore_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::SendOrPostCallback** StaticGet___9__22_0()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(ManualResetValueTaskSourceCore_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
