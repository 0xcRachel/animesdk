#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x17D371F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x202ECB0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x200BE60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x202EC40)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x14FF340)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncValueTaskMethodBuilder_TypeDefinitionIndex = 8765;

	struct alignas(8) AsyncValueTaskMethodBuilder
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder; // 0x10
		::System::Boolean _haveResult; // 0x28
		::System::Boolean _useBuilder; // 0x29

		static ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder Create()
		{
			return ((::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_CREATE_OFFSET))();
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}

		::System::Void SetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETRESULT_OFFSET))(this);
		}

		::System::Void SetException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETEXCEPTION_OFFSET))(this, exception);
		}

		/*
		::System::Threading::Tasks::ValueTask get_Task()
		{
			return ((::System::Threading::Tasks::ValueTask(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_GET_TASK_OFFSET))(this);
		}
		*/
	};
}
