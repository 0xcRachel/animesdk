#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define RPG_STRUTILS_CHARATINDEXTOCACHEDSTRING_OFFSET UNITYSDK_OFFSET(0x17A7D0E0)
#define RPG_STRUTILS_CONCATWITHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x17A7C950)
#define RPG_STRUTILS_CONCAT_1_OFFSET UNITYSDK_OFFSET(0x17A7C770)
#define RPG_STRUTILS_CONCAT_2_OFFSET UNITYSDK_OFFSET(0x17A7C7D0)
#define RPG_STRUTILS_CONCAT_3_OFFSET UNITYSDK_OFFSET(0x17A7C840)
#define RPG_STRUTILS_CONCAT_4_OFFSET UNITYSDK_OFFSET(0x17A7C8C0)
#define RPG_STRUTILS_CONCAT_5_OFFSET UNITYSDK_OFFSET(0x17A7CA00)
#define RPG_STRUTILS_CONCAT_6_OFFSET UNITYSDK_OFFSET(0x17A7CA60)
#define RPG_STRUTILS_CONCAT_7_OFFSET UNITYSDK_OFFSET(0x17A7CAD0)
#define RPG_STRUTILS_CONCAT_8_OFFSET UNITYSDK_OFFSET(0x17A7CB50)
#define RPG_STRUTILS_CONCAT_9_OFFSET UNITYSDK_OFFSET(0x17A7CBF0)
#define RPG_STRUTILS_CONCAT_OFFSET UNITYSDK_OFFSET(0x17A7C720)
#define RPG_STRUTILS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x17A7D310)
#define RPG_STRUTILS_ENDSWITHOPT_OFFSET UNITYSDK_OFFSET(0x17A7D630)
#define RPG_STRUTILS_FORMATBYPROVIDER_OFFSET UNITYSDK_OFFSET(0x17A7C500)
#define RPG_STRUTILS_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x17A7C570)
#define RPG_STRUTILS_FORMAT_2_OFFSET UNITYSDK_OFFSET(0x17A7C5E0)
#define RPG_STRUTILS_FORMAT_3_OFFSET UNITYSDK_OFFSET(0x17A7C660)
#define RPG_STRUTILS_FORMAT_OFFSET UNITYSDK_OFFSET(0x17A7C490)
#define RPG_STRUTILS_GETBUILDER_OFFSET UNITYSDK_OFFSET(0x17A7C2E0)
#define RPG_STRUTILS_GETSTABLEHASH_OFFSET UNITYSDK_OFFSET(0x17A7DB40)
#define RPG_STRUTILS_INTERNSTRING_OFFSET UNITYSDK_OFFSET(0x17A7D0C0)
#define RPG_STRUTILS_INTERN_OFFSET UNITYSDK_OFFSET(0x17A7D0B0)
#define RPG_STRUTILS_STARTSWITHOPT_OFFSET UNITYSDK_OFFSET(0x17A7D350)
#define RPG_STRUTILS_SUBSTRINGAFTERLAST_OFFSET UNITYSDK_OFFSET(0x17A7DC10)
#define RPG_STRUTILS_SUBSTRINGLAST_OFFSET UNITYSDK_OFFSET(0x17A7DC60)
#define RPG_STRUTILS_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x17A7CD00)
#define RPG_STRUTILS_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x17A7CD70)
#define RPG_STRUTILS_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x17A7CDE0)
#define RPG_STRUTILS_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x17A7CE50)
#define RPG_STRUTILS_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x17A7CEB0)
#define RPG_STRUTILS_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x17A7CF10)
#define RPG_STRUTILS_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x17A7CF70)
#define RPG_STRUTILS_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x17A7CFD0)
#define RPG_STRUTILS_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x17A7D040)
#define RPG_STRUTILS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A7CC90)
#define RPG_STRUTILS_TRYGETSTRINGFROMSTABLEHASH_OFFSET UNITYSDK_OFFSET(0x17A7DC00)
#define RPG_STRUTILS_WILDCARDMATCH_OFFSET UNITYSDK_OFFSET(0x17A7D8B0)
#define RPG_STRUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A7DDF0)

namespace RPG
{
	inline static constexpr unsigned int StrUtils_TypeDefinitionIndex = 8715;

	class StrUtils : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet__Builder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(StrUtils_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Char, ::System::String*>** StaticGet__CharToStrDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Char, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StrUtils_TypeDefinitionIndex)->GetStaticField(0x5E8);
		}
		static ::System::Int32* StaticGet_msMainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StrUtils_TypeDefinitionIndex)->GetStaticField(0x4C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_STRUTILS__CCTOR_OFFSET))();
		}

		static ::System::Text::StringBuilder* GetBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + RPG_STRUTILS_GETBUILDER_OFFSET))();
		}

		static ::System::String* Format(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_OFFSET))(format, arg0);
		}

		static ::System::String* FormatByProvider(::System::String* format, ::System::Object* arg0, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMATBYPROVIDER_OFFSET))(format, arg0, provider);
		}

		static ::System::String* Format_1(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_1_OFFSET))(format, arg0, arg1);
		}

		static ::System::String* Format_2(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_2_OFFSET))(format, arg0, arg1, arg2);
		}

		static ::System::String* Format_3(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_3_OFFSET))(format, args);
		}

		static ::System::String* Concat(::System::String* arg0, ::System::String* arg1)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_OFFSET))(arg0, arg1);
		}

		static ::System::String* Concat_1(::System::String* arg0, ::System::String* arg1, ::System::String* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_1_OFFSET))(arg0, arg1, arg2);
		}

		static ::System::String* Concat_2(::System::String* arg0, ::System::String* arg1, ::System::String* arg2, ::System::String* arg3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_2_OFFSET))(arg0, arg1, arg2, arg3);
		}

		static ::System::String* Concat_3(::System::String* arg0, ::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_3_OFFSET))(arg0, arg1, arg2, arg3, arg4);
		}

		static ::System::String* Concat_4(::Il2CppArray<::System::String*>* args)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_4_OFFSET))(args);
		}

		static ::System::String* ConcatWithSeparator(::System::Char separator, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::String*(*)(::System::Char, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCATWITHSEPARATOR_OFFSET))(separator, args);
		}

		static ::System::String* Concat_5(::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_5_OFFSET))(arg0, arg1);
		}

		static ::System::String* Concat_6(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_6_OFFSET))(arg0, arg1, arg2);
		}

		static ::System::String* Concat_7(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_7_OFFSET))(arg0, arg1, arg2, arg3);
		}

		static ::System::String* Concat_8(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3, ::System::Object* arg4)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_8_OFFSET))(arg0, arg1, arg2, arg3, arg4);
		}

		static ::System::String* Concat_9(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_9_OFFSET))(args);
		}

		static ::System::String* ToString(::System::Byte value)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_OFFSET))(value);
		}

		static ::System::String* ToString_1(::System::SByte value)
		{
			return ((::System::String*(*)(::System::SByte))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_1_OFFSET))(value);
		}

		static ::System::String* ToString_2(::System::Int16 value)
		{
			return ((::System::String*(*)(::System::Int16))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_2_OFFSET))(value);
		}

		static ::System::String* ToString_3(::System::UInt16 value)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_3_OFFSET))(value);
		}

		static ::System::String* ToString_4(::System::Int32 value)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_4_OFFSET))(value);
		}

		static ::System::String* ToString_5(::System::UInt32 value)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_5_OFFSET))(value);
		}

		static ::System::String* ToString_6(::System::Int64 value)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_6_OFFSET))(value);
		}

		static ::System::String* ToString_7(::System::UInt64 value)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_7_OFFSET))(value);
		}

		static ::System::String* ToString_8(::System::Single value, ::System::UInt32 decimalDigits)
		{
			return ((::System::String*(*)(::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_8_OFFSET))(value, decimalDigits);
		}

		static ::System::String* ToString_9(::System::Double value, ::System::UInt32 decimalDigits)
		{
			return ((::System::String*(*)(::System::Double, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_9_OFFSET))(value, decimalDigits);
		}

		static ::System::String* Intern(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_INTERN_OFFSET))(s);
		}

		static ::System::Void InternString(::System::String*& s)
		{
			return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + RPG_STRUTILS_INTERNSTRING_OFFSET))(s);
		}

		static ::System::String* CharAtIndexToCachedString(::System::String* s, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CHARATINDEXTOCACHEDSTRING_OFFSET))(s, index);
		}

		static ::System::Boolean Contains(::System::String* s, ::System::String* value, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONTAINS_OFFSET))(s, value, ignoreCase);
		}

		static ::System::Boolean StartsWithOpt(::System::String* s, ::System::String* value, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_STARTSWITHOPT_OFFSET))(s, value, ignoreCase);
		}

		static ::System::Boolean EndsWithOpt(::System::String* s, ::System::String* value, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_ENDSWITHOPT_OFFSET))(s, value, ignoreCase);
		}

		static ::System::Boolean WildcardMatch(::System::String* s, ::System::String* wildcard, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_WILDCARDMATCH_OFFSET))(s, wildcard, ignoreCase);
		}

		static ::System::Int32 GetStableHash(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_GETSTABLEHASH_OFFSET))(s);
		}

		static ::System::String* TryGetStringFromStableHash(::System::Int32 nHash)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TRYGETSTRINGFROMSTABLEHASH_OFFSET))(nHash);
		}

		static ::System::String* SubstringAfterLast(::System::String* s, ::System::Char ch)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + RPG_STRUTILS_SUBSTRINGAFTERLAST_OFFSET))(s, ch);
		}

		static ::System::String* SubstringLast(::System::String* s, ::System::Int32 count)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_SUBSTRINGLAST_OFFSET))(s, count);
		}
	};
}
