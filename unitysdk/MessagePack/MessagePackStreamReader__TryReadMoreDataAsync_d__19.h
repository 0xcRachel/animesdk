#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class MessagePackStreamReader; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__TRYREADMOREDATAASYNC_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF9780)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__TRYREADMOREDATAASYNC_D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xD1A70)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackStreamReader__TryReadMoreDataAsync_d__19_TypeDefinitionIndex = 9481;

	struct alignas(8) MessagePackStreamReader__TryReadMoreDataAsync_d__19
	{
		::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<::System::Int32> __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x20
		::System::Threading::CancellationToken cancellationToken; // 0x38
		::MessagePack::MessagePackStreamReader* __4__this; // 0x40
		::System::Int32 _bytesRead_5__2; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__TRYREADMOREDATAASYNC_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__TRYREADMOREDATAASYNC_D__19_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
