#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks::Sources { class IValueTaskSource; }

#define SYSTEM_THREADING_TASKS_VALUETASK_CONFIGUREAWAIT_OFFSET UNITYSDK_OFFSET(0x202EFA0)
#define SYSTEM_THREADING_TASKS_VALUETASK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202EF80)
#define SYSTEM_THREADING_TASKS_VALUETASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x202EF20)
#define SYSTEM_THREADING_TASKS_VALUETASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1491750)
#define SYSTEM_THREADING_TASKS_VALUETASK_GET_COMPLETEDTASK_OFFSET UNITYSDK_OFFSET(0x17D37B80)
#define SYSTEM_THREADING_TASKS_VALUETASK_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x202ED40)
#define SYSTEM_THREADING_TASKS_VALUETASK_THROWIFCOMPLETEDUNSUCCESSFULLY_OFFSET UNITYSDK_OFFSET(0x202EDC0)
#define SYSTEM_THREADING_TASKS_VALUETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D37E80)
#define SYSTEM_THREADING_TASKS_VALUETASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x202EEC0)
#define SYSTEM_THREADING_TASKS_VALUETASK__CTOR_2_OFFSET UNITYSDK_OFFSET(0x202EF10)
#define SYSTEM_THREADING_TASKS_VALUETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x202EE70)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ValueTask_TypeDefinitionIndex = 8758;

	struct alignas(8) ValueTask
	{
		static ::System::Threading::Tasks::Task** StaticGet_s_canceledTask()
		{
			return (::System::Threading::Tasks::Task**)Il2CppClass::FromTypeDefinitionIndex(ValueTask_TypeDefinitionIndex)->GetStaticField(0x6A0);
		}
		static ::System::Threading::Tasks::Task** StaticGet__CompletedTask_k__BackingField()
		{
			return (::System::Threading::Tasks::Task**)Il2CppClass::FromTypeDefinitionIndex(ValueTask_TypeDefinitionIndex)->GetStaticField(0x6A8);
		}
		::System::Object* _obj; // 0x10
		::System::Int16 _token; // 0x18
		::System::Boolean _continueOnCapturedContext; // 0x1A

		::System::Void _ctor(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK__CTOR_OFFSET))(this, task);
		}

		::System::Void _ctor_1(::System::Threading::Tasks::Sources::IValueTaskSource* source, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Sources::IValueTaskSource*, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK__CTOR_1_OFFSET))(this, source, token);
		}

		::System::Void _ctor_2(::System::Object* obj, ::System::Int16 token, ::System::Boolean continueOnCapturedContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int16, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK__CTOR_2_OFFSET))(this, obj, token, continueOnCapturedContext);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK__CCTOR_OFFSET))();
		}

		static ::System::Threading::Tasks::Task* get_CompletedTask()
		{
			return ((::System::Threading::Tasks::Task*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_GET_COMPLETEDTASK_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Threading::Tasks::ValueTask other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::ValueTask))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void ThrowIfCompletedUnsuccessfully()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_THROWIFCOMPLETEDUNSUCCESSFULLY_OFFSET))(this);
		}

		/*
		::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable ConfigureAwait(::System::Boolean continueOnCapturedContext)
		{
			return ((::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_CONFIGUREAWAIT_OFFSET))(this, continueOnCapturedContext);
		}
		*/
	};
}
