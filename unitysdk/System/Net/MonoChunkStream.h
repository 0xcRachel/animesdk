#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/MonoChunkStream_State.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_MONOCHUNKSTREAM_GETCHUNKSIZE_OFFSET UNITYSDK_OFFSET(0x176C9B20)
#define SYSTEM_NET_MONOCHUNKSTREAM_GET_CHUNKLEFT_OFFSET UNITYSDK_OFFSET(0x176CA760)
#define SYSTEM_NET_MONOCHUNKSTREAM_GET_DATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x176CA670)
#define SYSTEM_NET_MONOCHUNKSTREAM_GET_WANTMORE_OFFSET UNITYSDK_OFFSET(0x176CA650)
#define SYSTEM_NET_MONOCHUNKSTREAM_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x176C9A00)
#define SYSTEM_NET_MONOCHUNKSTREAM_READBODY_OFFSET UNITYSDK_OFFSET(0x176C9F30)
#define SYSTEM_NET_MONOCHUNKSTREAM_READCRLF_OFFSET UNITYSDK_OFFSET(0x176CA020)
#define SYSTEM_NET_MONOCHUNKSTREAM_READFROMCHUNKS_OFFSET UNITYSDK_OFFSET(0x176C96E0)
#define SYSTEM_NET_MONOCHUNKSTREAM_READTRAILER_OFFSET UNITYSDK_OFFSET(0x176CA1B0)
#define SYSTEM_NET_MONOCHUNKSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x176C96D0)
#define SYSTEM_NET_MONOCHUNKSTREAM_REMOVECHUNKEXTENSION_OFFSET UNITYSDK_OFFSET(0x176CA7E0)
#define SYSTEM_NET_MONOCHUNKSTREAM_RESETBUFFER_OFFSET UNITYSDK_OFFSET(0x176C9630)
#define SYSTEM_NET_MONOCHUNKSTREAM_THROWPROTOCOLVIOLATION_OFFSET UNITYSDK_OFFSET(0x176CA780)
#define SYSTEM_NET_MONOCHUNKSTREAM_WRITEANDREADBACK_OFFSET UNITYSDK_OFFSET(0x176C9670)
#define SYSTEM_NET_MONOCHUNKSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x176C9610)
#define SYSTEM_NET_MONOCHUNKSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176C9550)
#define SYSTEM_NET_MONOCHUNKSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x176C9450)

namespace System::Net
{
	inline static constexpr unsigned int MonoChunkStream_TypeDefinitionIndex = 2856;

	class MonoChunkStream : public ::System::Object
	{
	public:
		::System::Net::WebHeaderCollection* headers; // 0x10
		::System::Text::StringBuilder* saved; // 0x18
		::System::Collections::ArrayList* chunks; // 0x20
		::System::Int32 chunkRead; // 0x28
		::System::Boolean gotit; // 0x2C
		::System::Boolean sawCR; // 0x2D
		::System::Net::MonoChunkStream_State state; // 0x30
		::System::Int32 chunkSize; // 0x34
		::System::Int32 totalWritten; // 0x38
		::System::Int32 trailerState; // 0x3C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::WebHeaderCollection* headers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM__CTOR_OFFSET))(this, buffer, offset, size, headers);
		}

		::System::Void _ctor_1(::System::Net::WebHeaderCollection* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM__CTOR_1_OFFSET))(this, headers);
		}

		::System::Void ResetBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_RESETBUFFER_OFFSET))(this);
		}

		::System::Void WriteAndReadBack(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Int32& read)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_WRITEANDREADBACK_OFFSET))(this, buffer, offset, size, read);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READ_OFFSET))(this, buffer, offset, size);
		}

		::System::Int32 ReadFromChunks(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READFROMCHUNKS_OFFSET))(this, buffer, offset, size);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_WRITE_OFFSET))(this, buffer, offset, size);
		}

		::System::Void InternalWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32& offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_INTERNALWRITE_OFFSET))(this, buffer, offset, size);
		}

		::System::Boolean get_WantMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_GET_WANTMORE_OFFSET))(this);
		}

		::System::Boolean get_DataAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_GET_DATAAVAILABLE_OFFSET))(this);
		}

		::System::Int32 get_ChunkLeft()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_GET_CHUNKLEFT_OFFSET))(this);
		}

		::System::Net::MonoChunkStream_State ReadBody(::Il2CppArray<::System::Byte>* buffer, ::System::Int32& offset, ::System::Int32 size)
		{
			return ((::System::Net::MonoChunkStream_State(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READBODY_OFFSET))(this, buffer, offset, size);
		}

		::System::Net::MonoChunkStream_State GetChunkSize(::Il2CppArray<::System::Byte>* buffer, ::System::Int32& offset, ::System::Int32 size)
		{
			return ((::System::Net::MonoChunkStream_State(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_GETCHUNKSIZE_OFFSET))(this, buffer, offset, size);
		}

		static ::System::String* RemoveChunkExtension(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_REMOVECHUNKEXTENSION_OFFSET))(input);
		}

		::System::Net::MonoChunkStream_State ReadCRLF(::Il2CppArray<::System::Byte>* buffer, ::System::Int32& offset, ::System::Int32 size)
		{
			return ((::System::Net::MonoChunkStream_State(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READCRLF_OFFSET))(this, buffer, offset, size);
		}

		::System::Net::MonoChunkStream_State ReadTrailer(::Il2CppArray<::System::Byte>* buffer, ::System::Int32& offset, ::System::Int32 size)
		{
			return ((::System::Net::MonoChunkStream_State(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READTRAILER_OFFSET))(this, buffer, offset, size);
		}

		static ::System::Void ThrowProtocolViolation(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_THROWPROTOCOLVIOLATION_OFFSET))(message);
		}
	};
}
