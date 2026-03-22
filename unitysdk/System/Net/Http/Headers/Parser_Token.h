#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_TOKEN_CHECK_OFFSET UNITYSDK_OFFSET(0x17D1CC90)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_Token_TypeDefinitionIndex = 4743;

	class Parser_Token : public ::System::Object
	{
	public:
		static ::System::Void Check(::System::String* s)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_TOKEN_CHECK_OFFSET))(s);
		}
	};
}
