#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class MessagePackStreamReader; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READASYNC_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF9750)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__READASYNC_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1FF9760)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackStreamReader__ReadAsync_d__14_TypeDefinitionIndex = 9479;

	struct alignas(8) MessagePackStreamReader__ReadAsync_d__14
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Boolean> __u__1; // 0x18
		::MessagePack::MessagePackStreamReader* __4__this; // 0x28
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>> __t__builder; // 0x30
		::System::Int32 __1__state; // 0x78

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READASYNC_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__READASYNC_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
