#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFAC20)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_EXPENSIVECONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFAC30)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_GETHASHCODEHELPER_OFFSET UNITYSDK_OFFSET(0x156B3550)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FFACE0)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x10490)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_REFERENCEEQUALS_OFFSET UNITYSDK_OFFSET(0x1FFAC40)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x156B35E0)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0xBA10)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFAC50)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFAC10)
#define MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFABF0)

namespace Microsoft::NET::StringTools
{
	inline static constexpr unsigned int InternableString_TypeDefinitionIndex = 8814;

	struct alignas(8) InternableString
	{
		::System::ReadOnlySpan_1<::System::Char> _inlineSpan; // 0x10
		::System::String* _inlineSpanString; // 0x28
		::System::Collections::Generic::List_1<::System::ReadOnlyMemory_1<::System::Char>>* _spans; // 0x30
		::System::Int32 _Length_k__BackingField; // 0x38

		::System::Void _ctor(::System::ReadOnlySpan_1<::System::Char> span)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING__CTOR_OFFSET))(this, span);
		}

		::System::Void _ctor_1(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING__CTOR_1_OFFSET))(this, str);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::String* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_EQUALS_OFFSET))(this, other);
		}

		::System::String* ExpensiveConvertToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_EXPENSIVECONVERTTOSTRING_OFFSET))(this);
		}

		::System::Boolean ReferenceEquals(::System::String* str)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_REFERENCEEQUALS_OFFSET))(this, str);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_GETHASHCODE_OFFSET))(this);
		}

		static ::System::UInt32 GetHashCodeHelper(::System::Char* charPtr, ::System::Int32 length, ::System::UInt32 hash, ::System::Boolean& hashedOddNumberOfCharacters)
		{
			return ((::System::UInt32(*)(::System::Char*, ::System::Int32, ::System::UInt32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_GETHASHCODEHELPER_OFFSET))(charPtr, length, hash, hashedOddNumberOfCharacters);
		}

		static ::System::UInt32 RotateLeft(::System::UInt32 value, ::System::Int32 offset)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_INTERNABLESTRING_ROTATELEFT_OFFSET))(value, offset);
		}
	};
}
