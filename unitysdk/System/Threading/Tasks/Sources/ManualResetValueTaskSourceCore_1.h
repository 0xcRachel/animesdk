#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/Sources/ValueTaskSourceOnCompletedFlags.h"
#include "unitysdk/System/Threading/Tasks/Sources/ValueTaskSourceStatus.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Threading { class ExecutionContext; }

namespace System::Threading::Tasks::Sources
{
	inline static constexpr unsigned int ManualResetValueTaskSourceCore_1_TypeDefinitionIndex = 8804;

	template <typename TResult>
	struct ManualResetValueTaskSourceCore_1
	{
		::System::Action_1<::System::Object*>* _continuation; // 0x0
		::System::Object* _continuationState; // 0x0
		::System::Threading::ExecutionContext* _executionContext; // 0x0
		::System::Object* _capturedContext; // 0x0
		::System::Boolean _completed; // 0x0
		TResult _result; // 0x0
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _error; // 0x0
		::System::Int16 _version; // 0x0
		::System::Boolean _RunContinuationsAsynchronously_k__BackingField; // 0x0
	};
}
