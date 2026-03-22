#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncIteratorMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/Sources/ManualResetValueTaskSourceCore_1.h"
#include "unitysdk/System/Threading/Tasks/Sources/ValueTaskSourceOnCompletedFlags.h"
#include "unitysdk/System/Threading/Tasks/Sources/ValueTaskSourceStatus.h"
#include "unitysdk/System/Threading/Tasks/ValueTask.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"

namespace MessagePack { class MessagePackStreamReader; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IAsyncEnumerator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15697FD0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x15698A60)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_COLLECTIONS_GENERIC_IASYNCENUMERABLE_SYSTEM_BUFFERS_READONLYSEQUENCE_SYSTEM_BYTE___GETASYNCENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15698A70)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_COLLECTIONS_GENERIC_IASYNCENUMERATOR_SYSTEM_BUFFERS_READONLYSEQUENCE_SYSTEM_BYTE___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15698E90)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_COLLECTIONS_GENERIC_IASYNCENUMERATOR_SYSTEM_BUFFERS_READONLYSEQUENCE_SYSTEM_BYTE___MOVENEXTASYNC_OFFSET UNITYSDK_OFFSET(0x15698D80)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_IASYNCDISPOSABLE_DISPOSEASYNC_OFFSET UNITYSDK_OFFSET(0x15698F50)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x15698F00)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x15698F10)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x15698F20)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_SYSTEM_BOOLEAN__GETRESULT_OFFSET UNITYSDK_OFFSET(0x15698EB0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_SYSTEM_BOOLEAN__GETSTATUS_OFFSET UNITYSDK_OFFSET(0x15698EC0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_SYSTEM_BOOLEAN__ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x15698ED0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x15696D20)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackStreamReader__ReadArrayAsync_d__1_TypeDefinitionIndex = 9477;

	class MessagePackStreamReader__ReadArrayAsync_d__1 : public ::System::Object
	{
	public:
		::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder __t__builder; // 0x10
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Boolean> __u__1; // 0x30
		::System::Threading::CancellationToken __3__cancellationToken; // 0x40
		::System::Threading::CancellationToken cancellationToken; // 0x48
		::System::Buffers::ReadOnlySequence_1<::System::Byte> __2__current; // 0x50
		::System::Threading::CancellationTokenSource* __x__combinedTokens; // 0x70
		::MessagePack::MessagePackStreamReader* __4__this; // 0x78
		::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<::System::Boolean> __v__promiseOfValueOrEnd; // 0x80
		::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>> __u__2; // 0xB0
		::System::Int32 __l__initialThreadId; // 0xE8
		::System::Int32 _i_5__3; // 0xEC
		::System::Boolean __w__disposeMode; // 0xF0
		::System::Int32 _length_5__2; // 0xF4
		::System::Int32 __1__state; // 0xF8

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}

		::System::Collections::Generic::IAsyncEnumerator_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>* System_Collections_Generic_IAsyncEnumerable_System_Buffers_ReadOnlySequence_System_Byte___GetAsyncEnumerator(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Collections::Generic::IAsyncEnumerator_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_COLLECTIONS_GENERIC_IASYNCENUMERABLE_SYSTEM_BUFFERS_READONLYSEQUENCE_SYSTEM_BYTE___GETASYNCENUMERATOR_OFFSET))(this, cancellationToken);
		}

		::System::Threading::Tasks::ValueTask_1<::System::Boolean> System_Collections_Generic_IAsyncEnumerator_System_Buffers_ReadOnlySequence_System_Byte___MoveNextAsync()
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_COLLECTIONS_GENERIC_IASYNCENUMERATOR_SYSTEM_BUFFERS_READONLYSEQUENCE_SYSTEM_BYTE___MOVENEXTASYNC_OFFSET))(this);
		}

		::System::Buffers::ReadOnlySequence_1<::System::Byte> System_Collections_Generic_IAsyncEnumerator_System_Buffers_ReadOnlySequence_System_Byte___get_Current()
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_COLLECTIONS_GENERIC_IASYNCENUMERATOR_SYSTEM_BUFFERS_READONLYSEQUENCE_SYSTEM_BYTE___GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetResult(::System::Int16 token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_SYSTEM_BOOLEAN__GETRESULT_OFFSET))(this, token);
		}

		::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetStatus(::System::Int16 token)
		{
			return ((::System::Threading::Tasks::Sources::ValueTaskSourceStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_SYSTEM_BOOLEAN__GETSTATUS_OFFSET))(this, token);
		}

		::System::Void System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_SYSTEM_BOOLEAN__ONCOMPLETED_OFFSET))(this, continuation, state, token, flags);
		}

		::System::Void System_Threading_Tasks_Sources_IValueTaskSource_GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_GetStatus(::System::Int16 token)
		{
			return ((::System::Threading::Tasks::Sources::ValueTaskSourceStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_GETSTATUS_OFFSET))(this, token);
		}

		::System::Void System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_ONCOMPLETED_OFFSET))(this, continuation, state, token, flags);
		}

		::System::Threading::Tasks::ValueTask System_IAsyncDisposable_DisposeAsync()
		{
			return ((::System::Threading::Tasks::ValueTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYASYNC_D__1_SYSTEM_IASYNCDISPOSABLE_DISPOSEASYNC_OFFSET))(this);
		}
	};
}
