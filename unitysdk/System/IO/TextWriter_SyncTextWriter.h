#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x195026D0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19502700)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x19502770)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x19502670)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x195026A0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x19502930)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x19502960)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x19502990)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_4_OFFSET UNITYSDK_OFFSET(0x195029C0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_5_OFFSET UNITYSDK_OFFSET(0x195029F0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_6_OFFSET UNITYSDK_OFFSET(0x19502A20)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_7_OFFSET UNITYSDK_OFFSET(0x19502A60)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x19502900)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x195027D0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x19502800)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x19502830)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x19502860)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x19502890)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x195028C0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x195027A0)
#define SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x19501510)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter_SyncTextWriter_TypeDefinitionIndex = 701;

	class TextWriter_SyncTextWriter : public ::System::IO::TextWriter
	{
	public:
		::System::IO::TextWriter* _out; // 0x28

		::System::Void _ctor(::System::IO::TextWriter* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER__CTOR_OFFSET))(this, t);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_GET_FORMATPROVIDER_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Write(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_OFFSET))(this, value);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_1_OFFSET))(this, buffer);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_2_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_3(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_3_OFFSET))(this, value);
		}

		::System::Void Write_4(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_4_OFFSET))(this, value);
		}

		::System::Void Write_5(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_5_OFFSET))(this, format, arg0);
		}

		::System::Void Write_6(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITE_6_OFFSET))(this, format, arg0, arg1, arg2);
		}

		::System::Void WriteLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_OFFSET))(this);
		}

		::System::Void WriteLine_1(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_1_OFFSET))(this, value);
		}

		::System::Void WriteLine_2(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_2_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteLine_3(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_3_OFFSET))(this, value);
		}

		::System::Void WriteLine_4(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_4_OFFSET))(this, format, arg0);
		}

		::System::Void WriteLine_5(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_5_OFFSET))(this, format, arg0, arg1);
		}

		::System::Void WriteLine_6(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_6_OFFSET))(this, format, arg0, arg1, arg2);
		}

		::System::Void WriteLine_7(::System::String* format, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCTEXTWRITER_WRITELINE_7_OFFSET))(this, format, arg);
		}
	};
}
