#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class MessagePackStreamReader; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYHEADERASYNC_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF9740)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYHEADERASYNC_D__0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xD4290)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackStreamReader__ReadArrayHeaderAsync_d__0_TypeDefinitionIndex = 9478;

	struct alignas(8) MessagePackStreamReader__ReadArrayHeaderAsync_d__0
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::System::Int32> __t__builder; // 0x18
		::MessagePack::MessagePackStreamReader* __4__this; // 0x38
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Boolean> __u__1; // 0x40
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYHEADERASYNC_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READARRAYHEADERASYNC_D__0_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
