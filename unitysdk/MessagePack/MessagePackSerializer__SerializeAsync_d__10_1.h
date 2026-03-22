#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequencePool_Rental.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1_Enumerator.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer__SerializeAsync_d__10_1_TypeDefinitionIndex = 9473;

	template <typename T>
	struct MessagePackSerializer__SerializeAsync_d__10_1
	{
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x0
		::MessagePack::MessagePackSerializerOptions* options; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		T value; // 0x0
		::System::IO::Stream* stream; // 0x0
		::MessagePack::SequencePool_Rental _sequenceRental_5__2; // 0x0
		::System::Buffers::ReadOnlySequence_1_Enumerator<::System::Byte> __7__wrap2; // 0x0
		::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter __u__1; // 0x0
	};
}
