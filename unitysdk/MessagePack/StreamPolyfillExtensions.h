#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/ValueTask.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"

namespace System::IO { class Stream; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READASYNC_OFFSET UNITYSDK_OFFSET(0x15699FE0)
#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READ_OFFSET UNITYSDK_OFFSET(0x156A8780)
#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x156A8CD0)
#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITE_OFFSET UNITYSDK_OFFSET(0x156A8AA0)
#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS__READASYNC_G__FINISHREADASYNC_1_0_OFFSET UNITYSDK_OFFSET(0x156A89D0)

namespace MessagePack
{
	inline static constexpr unsigned int StreamPolyfillExtensions_TypeDefinitionIndex = 9497;

	class StreamPolyfillExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 Read(::System::IO::Stream* stream, ::System::Span_1<::System::Byte> buffer)
		{
			return ((::System::Int32(*)(::System::IO::Stream*, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READ_OFFSET))(stream, buffer);
		}

		static ::System::Threading::Tasks::ValueTask_1<::System::Int32> ReadAsync(::System::IO::Stream* stream, ::System::Memory_1<::System::Byte> buffer, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Int32>(*)(::System::IO::Stream*, ::System::Memory_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READASYNC_OFFSET))(stream, buffer, cancellationToken);
		}

		static ::System::Void Write(::System::IO::Stream* stream, ::System::ReadOnlySpan_1<::System::Byte> buffer)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITE_OFFSET))(stream, buffer);
		}

		static ::System::Threading::Tasks::ValueTask WriteAsync(::System::IO::Stream* stream, ::System::ReadOnlyMemory_1<::System::Byte> buffer, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::ValueTask(*)(::System::IO::Stream*, ::System::ReadOnlyMemory_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITEASYNC_OFFSET))(stream, buffer, cancellationToken);
		}

		static ::System::Threading::Tasks::ValueTask_1<::System::Int32> _ReadAsync_g__FinishReadAsync_1_0(::System::Threading::Tasks::Task_1<::System::Int32>* readTask, ::Il2CppArray<::System::Byte>* localBuffer, ::System::Memory_1<::System::Byte> localDestination)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Int32>(*)(::System::Threading::Tasks::Task_1<::System::Int32>*, ::Il2CppArray<::System::Byte>*, ::System::Memory_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS__READASYNC_G__FINISHREADASYNC_1_0_OFFSET))(readTask, localBuffer, localDestination);
		}
	};
}
