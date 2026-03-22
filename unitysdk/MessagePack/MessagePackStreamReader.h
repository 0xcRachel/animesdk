#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequencePool_Rental.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/SequencePosition.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"

namespace MessagePack { class SequencePool; }
namespace Nerdbank::Streams { template <typename T> class Sequence_1; }
namespace System::Collections::Generic { template <typename T> class IAsyncEnumerable_1; }
namespace System::IO { class Stream; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISCARDBUFFEREDDATA_OFFSET UNITYSDK_OFFSET(0x15697500)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x156975B0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15697560)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_GET_READDATA_OFFSET UNITYSDK_OFFSET(0x15697060)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_GET_REMAININGBYTES_OFFSET UNITYSDK_OFFSET(0x156971E0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_READARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x15696C90)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_READARRAYHEADERASYNC_OFFSET UNITYSDK_OFFSET(0x15696BD0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_READASYNC_OFFSET UNITYSDK_OFFSET(0x15697330)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_READMAPHEADERASYNC_OFFSET UNITYSDK_OFFSET(0x15697C20)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_RECYCLELASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x15697600)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x15696D70)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADMAPHEADER_OFFSET UNITYSDK_OFFSET(0x15697CE0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADMOREDATAASYNC_OFFSET UNITYSDK_OFFSET(0x156976A0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADNEXTMESSAGE_OFFSET UNITYSDK_OFFSET(0x15697790)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156970C0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15697110)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x15697070)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackStreamReader_TypeDefinitionIndex = 9476;

	class MessagePackStreamReader : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::SequencePosition> endOfLastMessage; // 0x10
		::MessagePack::SequencePool_Rental sequenceRental; // 0x28
		::System::IO::Stream* stream; // 0x38
		::System::Boolean leaveOpen; // 0x40

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_OFFSET))(this, stream);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_1_OFFSET))(this, stream, leaveOpen);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::Boolean leaveOpen, ::MessagePack::SequencePool* sequencePool)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::MessagePack::SequencePool*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_2_OFFSET))(this, stream, leaveOpen, sequencePool);
		}

		::System::Threading::Tasks::ValueTask_1<::System::Int32> ReadArrayHeaderAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_READARRAYHEADERASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Collections::Generic::IAsyncEnumerable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>* ReadArrayAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Collections::Generic::IAsyncEnumerable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_READARRAYASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Boolean TryReadArrayHeader(::System::Int32& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADARRAYHEADER_OFFSET))(this, length);
		}

		::System::Buffers::ReadOnlySequence_1<::System::Byte> get_RemainingBytes()
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_GET_REMAININGBYTES_OFFSET))(this);
		}

		::Nerdbank::Streams::Sequence_1<::System::Byte>* get_ReadData()
		{
			return ((::Nerdbank::Streams::Sequence_1<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_GET_READDATA_OFFSET))(this);
		}

		::System::Threading::Tasks::ValueTask_1<::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>> ReadAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_READASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Void DiscardBufferedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISCARDBUFFEREDDATA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void RecycleLastMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_RECYCLELASTMESSAGE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::Boolean>* TryReadMoreDataAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Boolean>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADMOREDATAASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Boolean TryReadNextMessage(::System::Buffers::ReadOnlySequence_1<::System::Byte>& completeMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADNEXTMESSAGE_OFFSET))(this, completeMessage);
		}

		::System::Threading::Tasks::ValueTask_1<::System::Int32> ReadMapHeaderAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_READMAPHEADERASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Boolean TryReadMapHeader(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADMAPHEADER_OFFSET))(this, count);
		}
	};
}
