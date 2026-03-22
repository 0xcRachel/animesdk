#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer__DeserializeObjectAsync_d__56_1_TypeDefinitionIndex = 9472;

	template <typename T>
	struct MessagePackSerializer__DeserializeObjectAsync_d__56_1
	{
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::System::Object*> __t__builder; // 0x0
		::System::IO::Stream* stream; // 0x0
		::MessagePack::MessagePackSerializerOptions* options; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<T> __u__1; // 0x0
	};
}
