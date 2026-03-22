#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS__WRITEASYNC_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FFA250)
#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS__WRITEASYNC_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1FFA260)

namespace MessagePack
{
	inline static constexpr unsigned int StreamPolyfillExtensions__WriteAsync_d__3_TypeDefinitionIndex = 9499;

	struct alignas(8) StreamPolyfillExtensions__WriteAsync_d__3
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::IO::Stream* stream; // 0x18
		::System::ReadOnlyMemory_1<::System::Byte> buffer; // 0x20
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x30
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder __t__builder; // 0x40
		::Il2CppArray<::System::Byte>* _sharedBuffer_5__2; // 0x60
		::System::Int32 __1__state; // 0x68

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS__WRITEASYNC_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS__WRITEASYNC_D__3_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
