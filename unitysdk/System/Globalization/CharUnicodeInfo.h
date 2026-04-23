#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_1_OFFSET UNITYSDK_OFFSET(0x170E9CB0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x170E9C80)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_1_OFFSET UNITYSDK_OFFSET(0x170E9870)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x170E9B40)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_1_OFFSET UNITYSDK_OFFSET(0x170E96B0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET UNITYSDK_OFFSET(0x170E9550)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETCATEGORYVALUE_OFFSET UNITYSDK_OFFSET(0x170E9F60)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x170E9B90)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_1_OFFSET UNITYSDK_OFFSET(0x170E9ED0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_2_OFFSET UNITYSDK_OFFSET(0x170EA050)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x170E9EA0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISCOMBININGCATEGORY_OFFSET UNITYSDK_OFFSET(0x170EA0E0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_1_OFFSET UNITYSDK_OFFSET(0x170E9AD0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x170E9800)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x170EA120)

namespace System::Globalization
{
	inline static constexpr unsigned int CharUnicodeInfo_TypeDefinitionIndex = 730;

	class CharUnicodeInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_pDigitValues()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x4F00);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_pCategoryLevel1Index()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x4F08);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_pCategoriesValue()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x4F10);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_pNumericValues()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x4F18);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_pNumericLevel1Index()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x4F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO__CCTOR_OFFSET))();
		}

		static ::System::Int32 InternalConvertToUtf32(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET))(s, index);
		}

		static ::System::Int32 InternalConvertToUtf32_1(::System::String* s, ::System::Int32 index, ::System::Int32& charLength)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_1_OFFSET))(s, index, charLength);
		}

		static ::System::Boolean IsWhiteSpace(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET))(s, index);
		}

		static ::System::Boolean IsWhiteSpace_1(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_1_OFFSET))(c);
		}

		static ::System::Double InternalGetNumericValue(::System::Int32 ch)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETNUMERICVALUE_OFFSET))(ch);
		}

		static ::System::Double GetNumericValue(::System::Char ch)
		{
			return ((::System::Double(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_OFFSET))(ch);
		}

		static ::System::Double GetNumericValue_1(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Double(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_1_OFFSET))(s, index);
		}

		static ::System::Globalization::UnicodeCategory GetUnicodeCategory(::System::Char ch)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET))(ch);
		}

		static ::System::Globalization::UnicodeCategory GetUnicodeCategory_1(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_1_OFFSET))(s, index);
		}

		static ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::System::Int32 ch)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET))(ch);
		}

		static ::System::Byte InternalGetCategoryValue(::System::Int32 ch, ::System::Int32 offset)
		{
			return ((::System::Byte(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETCATEGORYVALUE_OFFSET))(ch, offset);
		}

		static ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory_1(::System::String* value, ::System::Int32 index)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_1_OFFSET))(value, index);
		}

		static ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory_2(::System::String* str, ::System::Int32 index, ::System::Int32& charLength)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::String*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_2_OFFSET))(str, index, charLength);
		}

		static ::System::Boolean IsCombiningCategory(::System::Globalization::UnicodeCategory uc)
		{
			return ((::System::Boolean(*)(::System::Globalization::UnicodeCategory))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISCOMBININGCATEGORY_OFFSET))(uc);
		}
	};
}
