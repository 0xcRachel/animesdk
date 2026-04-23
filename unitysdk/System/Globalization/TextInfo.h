#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Globalization { class CultureData; }

#define SYSTEM_GLOBALIZATION_TEXTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1710FAE0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASEEX_OFFSET UNITYSDK_OFFSET(0x1710F9A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1710F790)
#define SYSTEM_GLOBALIZATION_TEXTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17110D40)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1710F4E0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x17110EA0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_1_OFFSET UNITYSDK_OFFSET(0x1710F450)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1710F3C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17110DB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETINVARIANTCASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x17110EB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x1710FAD0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_INVARIANT_OFFSET UNITYSDK_OFFSET(0x170F0450)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISASCIICASINGSAMEASINVARIANT_OFFSET UNITYSDK_OFFSET(0x1710FC30)
#define SYSTEM_GLOBALIZATION_TEXTINFO_INDEXOFSTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1710F9B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_INTERNALCOMPARESTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1710F7D0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISASCII_OFFSET UNITYSDK_OFFSET(0x1710FC20)
#define SYSTEM_GLOBALIZATION_TEXTINFO_LASTINDEXOFSTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1710FA50)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x1710F370)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1710F2B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1710F290)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1710F380)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SETREADONLYSTATE_OFFSET UNITYSDK_OFFSET(0x1710FBC0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x17110E90)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x1710FCE0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1710FCF0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET UNITYSDK_OFFSET(0x17110410)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_1_OFFSET UNITYSDK_OFFSET(0x17110310)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET UNITYSDK_OFFSET(0x1710FBD0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17110E40)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x17110530)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x17110540)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET UNITYSDK_OFFSET(0x17110C70)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_1_OFFSET UNITYSDK_OFFSET(0x17110B70)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET UNITYSDK_OFFSET(0x171104E0)
#define SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x171110C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x170F04D0)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfo_TypeDefinitionIndex = 764;

	class TextInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::TextInfo** StaticGet_s_Invariant()
		{
			return (::System::Globalization::TextInfo**)Il2CppClass::FromTypeDefinitionIndex(TextInfo_TypeDefinitionIndex)->GetStaticField(0x55F0);
		}
		::System::Globalization::CultureData* m_cultureData; // 0x10
		::System::String* m_textInfoName; // 0x18
		::System::String* m_listSeparator; // 0x20
		::System::String* m_cultureName; // 0x28
		::System::String* customCultureName; // 0x30
		::System::Int32 m_nDataItem; // 0x38
		::System::Boolean m_useUserOverride; // 0x3C
		::System::Boolean m_isReadOnly; // 0x3D
		::System::Nullable_1<::System::Boolean> m_IsAsciiCasingSameAsInvariant; // 0x3E
		::System::Int32 m_win32LangID; // 0x40

		::System::Void _ctor(::System::Globalization::CultureData* cultureData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureData*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_OFFSET))(this, cultureData);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_1_OFFSET))(this);
		}

		static ::System::Globalization::TextInfo* get_Invariant()
		{
			return ((::System::Globalization::TextInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_INVARIANT_OFFSET))();
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET))(this);
		}

		::System::Void OnDeserialized_1(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_1_OFFSET))(this, ctx);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONSERIALIZING_OFFSET))(this, ctx);
		}

		static ::System::Int32 GetHashCodeOrdinalIgnoreCase(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_OFFSET))(s);
		}

		static ::System::Int32 GetHashCodeOrdinalIgnoreCase_1(::System::String* s, ::System::Boolean forceRandomizedHashing, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_1_OFFSET))(s, forceRandomizedHashing, additionalEntropy);
		}

		static ::System::Int32 CompareOrdinalIgnoreCase(::System::String* str1, ::System::String* str2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASE_OFFSET))(str1, str2);
		}

		static ::System::Int32 CompareOrdinalIgnoreCaseEx(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 lengthA, ::System::Int32 lengthB)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASEEX_OFFSET))(strA, indexA, strB, indexB, lengthA, lengthB);
		}

		static ::System::Int32 IndexOfStringOrdinalIgnoreCase(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_INDEXOFSTRINGORDINALIGNORECASE_OFFSET))(source, value, startIndex, count);
		}

		static ::System::Int32 LastIndexOfStringOrdinalIgnoreCase(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_LASTINDEXOFSTRINGORDINALIGNORECASE_OFFSET))(source, value, startIndex, count);
		}

		::System::String* get_CultureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_CULTURENAME_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_CLONE_OFFSET))(this);
		}

		::System::Void SetReadOnlyState(::System::Boolean readOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_SETREADONLYSTATE_OFFSET))(this, readOnly);
		}

		::System::Char ToLower(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET))(this, c);
		}

		::System::String* ToLower_1(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_1_OFFSET))(this, str);
		}

		static ::System::Char ToLowerAsciiInvariant(::System::Char c)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERASCIIINVARIANT_OFFSET))(c);
		}

		::System::Char ToUpper(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET))(this, c);
		}

		::System::String* ToUpper_1(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_1_OFFSET))(this, str);
		}

		static ::System::Char ToUpperAsciiInvariant(::System::Char c)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET))(c);
		}

		static ::System::Boolean IsAscii(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ISASCII_OFFSET))(c);
		}

		::System::Boolean get_IsAsciiCasingSameAsInvariant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISASCIICASINGSAMEASINVARIANT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Int32 GetCaseInsensitiveHashCode(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_OFFSET))(this, str);
		}

		::System::Int32 GetCaseInsensitiveHashCode_1(::System::String* str, ::System::Boolean forceRandomizedHashing, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_1_OFFSET))(this, str, forceRandomizedHashing, additionalEntropy);
		}

		::System::Int32 GetInvariantCaseInsensitiveHashCode(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETINVARIANTCASEINSENSITIVEHASHCODE_OFFSET))(this, str);
		}

		::System::String* ToUpperInternal(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET))(this, str);
		}

		::System::String* ToLowerInternal(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET))(this, str);
		}

		::System::Char ToUpperInternal_1(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_1_OFFSET))(this, c);
		}

		::System::Char ToLowerInternal_1(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_1_OFFSET))(this, c);
		}

		static ::System::Int32 InternalCompareStringOrdinalIgnoreCase(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 lenA, ::System::Int32 lenB)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_INTERNALCOMPARESTRINGORDINALIGNORECASE_OFFSET))(strA, indexA, strB, indexB, lenA, lenB);
		}
	};
}
