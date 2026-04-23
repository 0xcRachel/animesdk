#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonReader.h"
#include "unitysdk/Newtonsoft/Json/ReadType.h"
#include "unitysdk/Newtonsoft/Json/Utilities/StringBuffer.h"
#include "unitysdk/Newtonsoft/Json/Utilities/StringReference.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json { class JsonReaderException; }
namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }
namespace Newtonsoft::Json::Utilities { class PropertyNameTable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class TextReader; }

#define NEWTONSOFT_JSON_JSONTEXTREADER_BLOCKCOPYCHARS_OFFSET UNITYSDK_OFFSET(0x17B6BB80)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CLEARRECENTSTRING_OFFSET UNITYSDK_OFFSET(0x17B714B0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x17B72120)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CREATEUNEXPECTEDCHARACTEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B6EFA0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x17B6CF60)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENDCOMMENT_OFFSET UNITYSDK_OFFSET(0x17B71E60)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFERNOTEMPTY_OFFSET UNITYSDK_OFFSET(0x17B6AE00)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFER_OFFSET UNITYSDK_OFFSET(0x17B6C3E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSURECHARS_OFFSET UNITYSDK_OFFSET(0x17B6C020)
#define NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x17B72300)
#define NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x17B72330)
#define NEWTONSOFT_JSON_JSONTEXTREADER_HANDLENULL_OFFSET UNITYSDK_OFFSET(0x17B6ED10)
#define NEWTONSOFT_JSON_JSONTEXTREADER_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x17B722F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ISSEPARATOR_OFFSET UNITYSDK_OFFSET(0x17B71FF0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEWITHTRAILINGSEPARATOR_OFFSET UNITYSDK_OFFSET(0x17B70330)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUE_OFFSET UNITYSDK_OFFSET(0x17B71E90)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ONNEWLINE_OFFSET UNITYSDK_OFFSET(0x17B6AEE0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSECOMMENT_OFFSET UNITYSDK_OFFSET(0x17B6D110)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17B71A90)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEFALSE_OFFSET UNITYSDK_OFFSET(0x17B719E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENULL_OFFSET UNITYSDK_OFFSET(0x17B71070)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNAN_OFFSET UNITYSDK_OFFSET(0x17B705D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x17B6F2B0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x17B70430)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x17B6F450)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x17B6CAE0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPOSTVALUE_OFFSET UNITYSDK_OFFSET(0x17B6CC50)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17B714D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x17B6AEF0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSETRUE_OFFSET UNITYSDK_OFFSET(0x17B71900)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x17B71DA0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNICODE_OFFSET UNITYSDK_OFFSET(0x17B71110)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNQUOTEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x17B71770)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x17B6C4E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURN_OFFSET UNITYSDK_OFFSET(0x17B6F050)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSLINEFEED_OFFSET UNITYSDK_OFFSET(0x17B6F110)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSVALUECOMMA_OFFSET UNITYSDK_OFFSET(0x17B6EEB0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x17B70770)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASBYTES_OFFSET UNITYSDK_OFFSET(0x17B6E640)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x17B70E10)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIME_OFFSET UNITYSDK_OFFSET(0x17B6DCB0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDECIMAL_OFFSET UNITYSDK_OFFSET(0x17B70EE0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDOUBLE_OFFSET UNITYSDK_OFFSET(0x17B70FB0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASINT32_OFFSET UNITYSDK_OFFSET(0x17B6D520)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASSTRING_OFFSET UNITYSDK_OFFSET(0x17B6E610)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READCHARS_OFFSET UNITYSDK_OFFSET(0x17B6C090)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_1_OFFSET UNITYSDK_OFFSET(0x17B6BBB0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_OFFSET UNITYSDK_OFFSET(0x17B6BBA0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READFINISHED_OFFSET UNITYSDK_OFFSET(0x17B6F140)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNULLCHAR_OFFSET UNITYSDK_OFFSET(0x17B6ECC0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x17B71260)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x17B6D5E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x17B6B2D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x17B6DD70)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x17B6C0F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_SET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x17B6ADB0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_SHIFTBUFFERIFNEEDED_OFFSET UNITYSDK_OFFSET(0x17B6B1F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_VALIDIDENTIFIERCHAR_OFFSET UNITYSDK_OFFSET(0x17B71740)
#define NEWTONSOFT_JSON_JSONTEXTREADER_WRITECHARTOBUFFER_OFFSET UNITYSDK_OFFSET(0x17B71200)
#define NEWTONSOFT_JSON_JSONTEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B636A0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonTextReader_TypeDefinitionIndex = 8356;

	class JsonTextReader : public ::Newtonsoft::Json::JsonReader
	{
	public:
		::Newtonsoft::Json::Utilities::StringReference _stringReference; // 0x70
		::System::IO::TextReader* _reader; // 0x80
		::Newtonsoft::Json::IArrayPool_1<::System::Char>* _arrayPool; // 0x88
		::Newtonsoft::Json::Utilities::StringBuffer _stringBuffer; // 0x90
		::Il2CppArray<::System::Char>* _chars; // 0xA0
		::Newtonsoft::Json::Utilities::PropertyNameTable* NameTable; // 0xA8
		::System::Boolean _isEndOfFile; // 0xB0
		::System::Int32 _lineStartPos; // 0xB4
		::System::Int32 _charPos; // 0xB8
		::System::Int32 _lineNumber; // 0xBC
		::System::Int32 _charsUsed; // 0xC0

		::System::Void _ctor(::System::IO::TextReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER__CTOR_OFFSET))(this, reader);
		}

		::System::Void set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<::System::Char>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_SET_ARRAYPOOL_OFFSET))(this, value);
		}

		::System::Void EnsureBufferNotEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFERNOTEMPTY_OFFSET))(this);
		}

		::System::Void OnNewLine(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ONNEWLINE_OFFSET))(this, pos);
		}

		::System::Void ParseString(::System::Char quote, ::Newtonsoft::Json::ReadType readType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSESTRING_OFFSET))(this, quote, readType);
		}

		static ::System::Void BlockCopyChars(::Il2CppArray<::System::Char>* src, ::System::Int32 srcOffset, ::Il2CppArray<::System::Char>* dst, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_BLOCKCOPYCHARS_OFFSET))(src, srcOffset, dst, dstOffset, count);
		}

		::System::Void ShiftBufferIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_SHIFTBUFFERIFNEEDED_OFFSET))(this);
		}

		::System::Int32 ReadData(::System::Boolean append)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_OFFSET))(this, append);
		}

		::System::Int32 ReadData_1(::System::Boolean append, ::System::Int32 charsRequired)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_1_OFFSET))(this, append, charsRequired);
		}

		::System::Boolean EnsureChars(::System::Int32 relativePosition, ::System::Boolean append)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSURECHARS_OFFSET))(this, relativePosition, append);
		}

		::System::Boolean ReadChars(::System::Int32 relativePosition, ::System::Boolean append)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READCHARS_OFFSET))(this, relativePosition, append);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READ_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> ReadAsInt32()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASINT32_OFFSET))(this);
		}

		::System::Nullable_1<::System::DateTime> ReadAsDateTime()
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIME_OFFSET))(this);
		}

		::System::String* ReadAsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadAsBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASBYTES_OFFSET))(this);
		}

		::System::Object* ReadStringValue(::Newtonsoft::Json::ReadType readType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGVALUE_OFFSET))(this, readType);
		}

		::Newtonsoft::Json::JsonReaderException* CreateUnexpectedCharacterException(::System::Char c)
		{
			return ((::Newtonsoft::Json::JsonReaderException*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CREATEUNEXPECTEDCHARACTEREXCEPTION_OFFSET))(this, c);
		}

		::System::Nullable_1<::System::Boolean> ReadAsBoolean()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASBOOLEAN_OFFSET))(this);
		}

		::System::Void ProcessValueComma()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSVALUECOMMA_OFFSET))(this);
		}

		::System::Object* ReadNumberValue(::Newtonsoft::Json::ReadType readType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERVALUE_OFFSET))(this, readType);
		}

		::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEOFFSET_OFFSET))(this);
		}

		::System::Nullable_1<::System::Decimal> ReadAsDecimal()
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDECIMAL_OFFSET))(this);
		}

		::System::Nullable_1<::System::Double> ReadAsDouble()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDOUBLE_OFFSET))(this);
		}

		::System::Void HandleNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_HANDLENULL_OFFSET))(this);
		}

		::System::Void ReadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READFINISHED_OFFSET))(this);
		}

		::System::Boolean ReadNullChar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNULLCHAR_OFFSET))(this);
		}

		::System::Void EnsureBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFER_OFFSET))(this);
		}

		::System::Void ReadStringIntoBuffer(::System::Char quote)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGINTOBUFFER_OFFSET))(this, quote);
		}

		::System::Void WriteCharToBuffer(::System::Char writeChar, ::System::Int32 lastWritePosition, ::System::Int32 writeToPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_WRITECHARTOBUFFER_OFFSET))(this, writeChar, lastWritePosition, writeToPosition);
		}

		::System::Char ParseUnicode()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNICODE_OFFSET))(this);
		}

		::System::Void ReadNumberIntoBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERINTOBUFFER_OFFSET))(this);
		}

		::System::Void ClearRecentString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CLEARRECENTSTRING_OFFSET))(this);
		}

		::System::Boolean ParsePostValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPOSTVALUE_OFFSET))(this);
		}

		::System::Boolean ParseObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEOBJECT_OFFSET))(this);
		}

		::System::Boolean ParseProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPROPERTY_OFFSET))(this);
		}

		::System::Boolean ValidIdentifierChar(::System::Char value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_VALIDIDENTIFIERCHAR_OFFSET))(this, value);
		}

		::System::Void ParseUnquotedProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNQUOTEDPROPERTY_OFFSET))(this);
		}

		::System::Boolean ParseValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEVALUE_OFFSET))(this);
		}

		::System::Void ProcessLineFeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSLINEFEED_OFFSET))(this);
		}

		::System::Void ProcessCarriageReturn(::System::Boolean append)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURN_OFFSET))(this, append);
		}

		::System::Boolean EatWhitespace(::System::Boolean oneOrMore)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_EATWHITESPACE_OFFSET))(this, oneOrMore);
		}

		::System::Void ParseConstructor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSECONSTRUCTOR_OFFSET))(this);
		}

		::System::Void ParseNumber(::Newtonsoft::Json::ReadType readType)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBER_OFFSET))(this, readType);
		}

		::System::Void ParseComment(::System::Boolean setToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSECOMMENT_OFFSET))(this, setToken);
		}

		::System::Void EndComment(::System::Boolean setToken, ::System::Int32 initialPosition, ::System::Int32 endPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENDCOMMENT_OFFSET))(this, setToken, initialPosition, endPosition);
		}

		::System::Boolean MatchValue(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUE_OFFSET))(this, value);
		}

		::System::Boolean MatchValueWithTrailingSeparator(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEWITHTRAILINGSEPARATOR_OFFSET))(this, value);
		}

		::System::Boolean IsSeparator(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ISSEPARATOR_OFFSET))(this, c);
		}

		::System::Void ParseTrue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSETRUE_OFFSET))(this);
		}

		::System::Void ParseNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENULL_OFFSET))(this);
		}

		::System::Void ParseUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNDEFINED_OFFSET))(this);
		}

		::System::Void ParseFalse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEFALSE_OFFSET))(this);
		}

		::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType readType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITY_OFFSET))(this, readType);
		}

		::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType readType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITY_OFFSET))(this, readType);
		}

		::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType readType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNAN_OFFSET))(this, readType);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CLOSE_OFFSET))(this);
		}

		::System::Boolean HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINEPOSITION_OFFSET))(this);
		}
	};
}
