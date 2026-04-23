#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Globalization { class TextElementEnumerator; }

#define SYSTEM_GLOBALIZATION_STRINGINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1710E480)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETCURRENTTEXTELEMENTLEN_OFFSET UNITYSDK_OFFSET(0x1710E5B0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1710E520)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_1_OFFSET UNITYSDK_OFFSET(0x1710E760)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1710E750)
#define SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1710E450)
#define SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1710E440)
#define SYSTEM_GLOBALIZATION_STRINGINFO_SET_STRING_OFFSET UNITYSDK_OFFSET(0x1710E3C0)
#define SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1710E340)
#define SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1710E2C0)

namespace System::Globalization
{
	inline static constexpr unsigned int StringInfo_TypeDefinitionIndex = 761;

	class StringInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_indexes; // 0x10
		::System::String* m_str; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_1_OFFSET))(this, value);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Void set_String(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_SET_STRING_OFFSET))(this, value);
		}

		static ::System::Int32 GetCurrentTextElementLen(::System::String* str, ::System::Int32 index, ::System::Int32 len, ::System::Globalization::UnicodeCategory& ucCurrent, ::System::Int32& currentCharCount)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::UnicodeCategory&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETCURRENTTEXTELEMENTLEN_OFFSET))(str, index, len, ucCurrent, currentCharCount);
		}

		static ::System::Globalization::TextElementEnumerator* GetTextElementEnumerator(::System::String* str)
		{
			return ((::System::Globalization::TextElementEnumerator*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_OFFSET))(str);
		}

		static ::System::Globalization::TextElementEnumerator* GetTextElementEnumerator_1(::System::String* str, ::System::Int32 index)
		{
			return ((::System::Globalization::TextElementEnumerator*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_1_OFFSET))(str, index);
		}
	};
}
