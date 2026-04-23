#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua::TemplateEngine { class Chunk; }

#define XLUA_TEMPLATEENGINE_PARSER_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0xA0902E0)
#define XLUA_TEMPLATEENGINE_PARSER_GETREGEXSTRING_OFFSET UNITYSDK_OFFSET(0xA090050)
#define XLUA_TEMPLATEENGINE_PARSER_GET_REGEXSTRING_OFFSET UNITYSDK_OFFSET(0xA08FF20)
#define XLUA_TEMPLATEENGINE_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0xA08F0B0)
#define XLUA_TEMPLATEENGINE_PARSER_SET_REGEXSTRING_OFFSET UNITYSDK_OFFSET(0xA08FF80)
#define XLUA_TEMPLATEENGINE_PARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA08FFE0)
#define XLUA_TEMPLATEENGINE_PARSER__CTOR_OFFSET UNITYSDK_OFFSET(0xA090500)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int Parser_TypeDefinitionIndex = 46472;

	class Parser : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__RegexString_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Parser_TypeDefinitionIndex)->GetStaticField(0x3AD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER__CTOR_OFFSET))(this);
		}

		static ::System::String* get_RegexString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_GET_REGEXSTRING_OFFSET))();
		}

		static ::System::Void set_RegexString(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_SET_REGEXSTRING_OFFSET))(value);
		}

		static ::System::String* EscapeString(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_ESCAPESTRING_OFFSET))(input);
		}

		static ::System::String* GetRegexString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_GETREGEXSTRING_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::XLua::TemplateEngine::Chunk*>* Parse(::System::String* snippet)
		{
			return ((::System::Collections::Generic::List_1<::XLua::TemplateEngine::Chunk*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_PARSE_OFFSET))(snippet);
		}
	};
}
