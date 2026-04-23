#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_TEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x195013F0)
#define SYSTEM_IO_TEXTWRITER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x19501440)
#define SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x194FF440)
#define SYSTEM_IO_TEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x19501490)
#define SYSTEM_IO_TEXTWRITER_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x19501360)
#define SYSTEM_IO_TEXTWRITER_GET_INITIALNEWLINE_OFFSET UNITYSDK_OFFSET(0x19501210)
#define SYSTEM_IO_TEXTWRITER_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x195014A0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x19501A20)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x19501A50)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x19501A90)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_4_OFFSET UNITYSDK_OFFSET(0x19501C70)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_5_OFFSET UNITYSDK_OFFSET(0x19501CE0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_6_OFFSET UNITYSDK_OFFSET(0x19501D60)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_7_OFFSET UNITYSDK_OFFSET(0x19501DE0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x19501A00)
#define SYSTEM_IO_TEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x19501660)
#define SYSTEM_IO_TEXTWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x19501690)
#define SYSTEM_IO_TEXTWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x19501810)
#define SYSTEM_IO_TEXTWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x19501880)
#define SYSTEM_IO_TEXTWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x19501910)
#define SYSTEM_IO_TEXTWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x19501980)
#define SYSTEM_IO_TEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x19501650)
#define SYSTEM_IO_TEXTWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19501EB0)
#define SYSTEM_IO_TEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194FE800)
#define SYSTEM_IO_TEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x19501270)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter_TypeDefinitionIndex = 699;

	class TextWriter : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet__WriteCharDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x6970);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteCharArrayRangeDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x6978);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteLineCharArrayRangeDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x6980);
		}
		static ::System::IO::TextWriter** StaticGet_Null()
		{
			return (::System::IO::TextWriter**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x6988);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteStringDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x6990);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteLineCharDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x6998);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__FlushDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x69A0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet__WriteLineStringDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextWriter_TypeDefinitionIndex)->GetStaticField(0x69A8);
		}
		::Il2CppArray<::System::Char>* CoreNewLine; // 0x18
		::System::IFormatProvider* InternalFormatProvider; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IFormatProvider* formatProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER__CTOR_1_OFFSET))(this, formatProvider);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER__CCTOR_OFFSET))();
		}

		static ::System::String* get_InitialNewLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_GET_INITIALNEWLINE_OFFSET))();
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_GET_FORMATPROVIDER_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_DISPOSE_1_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_FLUSH_OFFSET))(this);
		}

		static ::System::IO::TextWriter* Synchronized(::System::IO::TextWriter* writer)
		{
			return ((::System::IO::TextWriter*(*)(::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCHRONIZED_OFFSET))(writer);
		}

		::System::Void Write(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_OFFSET))(this, value);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_1_OFFSET))(this, buffer);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_2_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_3(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_3_OFFSET))(this, value);
		}

		::System::Void Write_4(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_4_OFFSET))(this, value);
		}

		::System::Void Write_5(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_5_OFFSET))(this, format, arg0);
		}

		::System::Void Write_6(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_6_OFFSET))(this, format, arg0, arg1, arg2);
		}

		::System::Void WriteLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET))(this);
		}

		::System::Void WriteLine_1(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_1_OFFSET))(this, value);
		}

		::System::Void WriteLine_2(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_2_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteLine_3(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_3_OFFSET))(this, value);
		}

		::System::Void WriteLine_4(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_4_OFFSET))(this, format, arg0);
		}

		::System::Void WriteLine_5(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_5_OFFSET))(this, format, arg0, arg1);
		}

		::System::Void WriteLine_6(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_6_OFFSET))(this, format, arg0, arg1, arg2);
		}

		::System::Void WriteLine_7(::System::String* format, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_7_OFFSET))(this, format, arg);
		}
	};
}
