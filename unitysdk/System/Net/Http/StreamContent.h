#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/HttpContent.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::IO { class Stream; }
namespace System::Net { class TransportContext; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_HTTP_STREAMCONTENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B035D50)
#define SYSTEM_NET_HTTP_STREAMCONTENT_SERIALIZETOSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x1B035DB0)
#define SYSTEM_NET_HTTP_STREAMCONTENT_TRYCOMPUTELENGTH_OFFSET UNITYSDK_OFFSET(0x1B035E70)
#define SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B035CA0)
#define SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B030C20)
#define SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B035C20)

namespace System::Net::Http
{
	inline static constexpr unsigned int StreamContent_TypeDefinitionIndex = 3762;

	class StreamContent : public ::System::Net::Http::HttpContent
	{
	public:
		::System::IO::Stream* content; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Int64 startPosition; // 0x38
		::System::Int32 bufferSize; // 0x40
		::System::Boolean contentCopied; // 0x44

		::System::Void _ctor(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_DISPOSE_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* a1, ::System::Net::TransportContext* a2)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Net::TransportContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_SERIALIZETOSTREAMASYNC_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryComputeLength(::System::Int64& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_TRYCOMPUTELENGTH_OFFSET))(this, a1);
		}
	};
}
