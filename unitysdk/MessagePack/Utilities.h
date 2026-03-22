#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Utilities_NonGenericDictionaryEnumerable.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class SequencePool; }
namespace MessagePack { template <typename T> class Utilities_GetWriterBytesAction_1; }
namespace System { class String; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::Collections { class IDictionary; }

#define MESSAGEPACK_UTILITIES_GETENTRYENUMERATOR_OFFSET UNITYSDK_OFFSET(0x156AB180)
#define MESSAGEPACK_UTILITIES_GETMEMORYCHECKRESULT_OFFSET UNITYSDK_OFFSET(0x156AAF40)
#define MESSAGEPACK_UTILITIES__GETMEMORYCHECKRESULT_G__THROWINVALIDOPERATIONEXCEPTION_2_0_OFFSET UNITYSDK_OFFSET(0x156AB130)

namespace MessagePack
{
	inline static constexpr unsigned int Utilities_TypeDefinitionIndex = 9501;

	class Utilities : public ::System::Object
	{
	public:
		static ::System::Memory_1<::System::Byte> GetMemoryCheckResult(::System::Buffers::IBufferWriter_1<::System::Byte>* bufferWriter, ::System::Int32 size)
		{
			return ((::System::Memory_1<::System::Byte>(*)(::System::Buffers::IBufferWriter_1<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_GETMEMORYCHECKRESULT_OFFSET))(bufferWriter, size);
		}

		static ::MessagePack::Utilities_NonGenericDictionaryEnumerable GetEntryEnumerator(::System::Collections::IDictionary* dictionary)
		{
			return ((::MessagePack::Utilities_NonGenericDictionaryEnumerable(*)(::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_GETENTRYENUMERATOR_OFFSET))(dictionary);
		}

		static ::System::Void _GetMemoryCheckResult_g__ThrowInvalidOperationException_2_0(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES__GETMEMORYCHECKRESULT_G__THROWINVALIDOPERATIONEXCEPTION_2_0_OFFSET))(message);
		}
	};
}
