#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS___READASYNC_G__FINISHREADASYNC_1_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FFA240)
#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS___READASYNC_G__FINISHREADASYNC_1_0_D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xD1A70)

namespace MessagePack
{
	inline static constexpr unsigned int StreamPolyfillExtensions___ReadAsync_g__FinishReadAsync_1_0_d_TypeDefinitionIndex = 9498;

	struct alignas(8) StreamPolyfillExtensions___ReadAsync_g__FinishReadAsync_1_0_d
	{
		::System::Threading::Tasks::Task_1<::System::Int32>* readTask; // 0x10
		::Il2CppArray<::System::Byte>* localBuffer; // 0x18
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::System::Int32> __t__builder; // 0x20
		::System::Memory_1<::System::Byte> localDestination; // 0x40
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Int32> __u__1; // 0x50
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS___READASYNC_G__FINISHREADASYNC_1_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS___READASYNC_G__FINISHREADASYNC_1_0_D_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
