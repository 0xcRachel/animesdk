#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }

#define MICROSOFT_NET_STRINGTOOLS_STRINGS_WEAKINTERN_1_OFFSET UNITYSDK_OFFSET(0x156B3690)
#define MICROSOFT_NET_STRINGTOOLS_STRINGS_WEAKINTERN_OFFSET UNITYSDK_OFFSET(0x156B35F0)

namespace Microsoft::NET::StringTools
{
	inline static constexpr unsigned int Strings_TypeDefinitionIndex = 8815;

	class Strings : public ::System::Object
	{
	public:
		static ::System::String* WeakIntern(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_STRINGS_WEAKINTERN_OFFSET))(str);
		}

		static ::System::String* WeakIntern_1(::System::ReadOnlySpan_1<::System::Char> str)
		{
			return ((::System::String*(*)(::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_STRINGS_WEAKINTERN_1_OFFSET))(str);
		}
	};
}
