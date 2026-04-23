#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_FILELOADEXCEPTION_FORMATFILELOADEXCEPTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x194EAF30)
#define SYSTEM_IO_FILELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x194EB620)
#define SYSTEM_IO_FILELOADEXCEPTION_GET_FUSIONLOG_OFFSET UNITYSDK_OFFSET(0x194EB610)
#define SYSTEM_IO_FILELOADEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x194EAE20)
#define SYSTEM_IO_FILELOADEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x194EAEB0)
#define SYSTEM_IO_FILELOADEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x194EAFA0)
#define SYSTEM_IO_FILELOADEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194EADB0)
#define SYSTEM_IO_FILELOADEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x194EB4C0)
#define SYSTEM_IO_FILELOADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x194EACA0)

namespace System::IO
{
	inline static constexpr unsigned int FileLoadException_TypeDefinitionIndex = 668;

	class FileLoadException : public ::System::IO::IOException
	{
	public:
		::System::String* _fusionLog; // 0x90
		::System::String* _fileName; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void SetMessageField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_SETMESSAGEFIELD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::String* get_FusionLog()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_GET_FUSIONLOG_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		static ::System::String* FormatFileLoadExceptionMessage(::System::String* fileName, ::System::Int32 hResult)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_FORMATFILELOADEXCEPTIONMESSAGE_OFFSET))(fileName, hResult);
		}
	};
}
