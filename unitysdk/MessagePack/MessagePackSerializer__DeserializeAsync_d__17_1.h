#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequencePool_Rental.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace Nerdbank::Streams { template <typename T> class Sequence_1; }
namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer__DeserializeAsync_d__17_1_TypeDefinitionIndex = 9471;

	template <typename T>
	struct MessagePackSerializer__DeserializeAsync_d__17_1
	{
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<T> __t__builder; // 0x0
		::MessagePack::MessagePackSerializerOptions* options; // 0x0
		::System::IO::Stream* stream; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::MessagePack::SequencePool_Rental _sequenceRental_5__2; // 0x0
		::Nerdbank::Streams::Sequence_1<::System::Byte>* _sequence_5__3; // 0x0
		::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<::System::Int32> __u__1; // 0x0
	};
}
