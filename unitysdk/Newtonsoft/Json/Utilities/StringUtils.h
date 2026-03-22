#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class StringWriter; }

#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_CREATESTRINGWRITER_OFFSET UNITYSDK_OFFSET(0x15DF5810)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x15DF5D10)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_1_OFFSET UNITYSDK_OFFSET(0x15DF1AC0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_2_OFFSET UNITYSDK_OFFSET(0x15DF5340)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_3_OFFSET UNITYSDK_OFFSET(0x15DF5560)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_4_OFFSET UNITYSDK_OFFSET(0x15DF5270)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET UNITYSDK_OFFSET(0x15DF0CA0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x15DF58B0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x15DF5CC0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x15DF5CD0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x15DF5CE0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCAMELCASE_OFFSET UNITYSDK_OFFSET(0x15DF5A00)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCHARASUNICODE_OFFSET UNITYSDK_OFFSET(0x15DF58D0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringUtils_TypeDefinitionIndex = 8156;

	class StringUtils : public ::System::Object
	{
	public:
		static ::System::String* FormatWith(::System::String* format, ::System::IFormatProvider* provider, ::System::Object* arg0)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET))(format, provider, arg0);
		}

		static ::System::String* FormatWith_1(::System::String* format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_1_OFFSET))(format, provider, arg0, arg1);
		}

		static ::System::String* FormatWith_2(::System::String* format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_2_OFFSET))(format, provider, arg0, arg1, arg2);
		}

		static ::System::String* FormatWith_3(::System::String* format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_3_OFFSET))(format, provider, arg0, arg1, arg2, arg3);
		}

		static ::System::String* FormatWith_4(::System::String* format, ::System::IFormatProvider* provider, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_4_OFFSET))(format, provider, args);
		}

		static ::System::IO::StringWriter* CreateStringWriter(::System::Int32 capacity)
		{
			return ((::System::IO::StringWriter*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_CREATESTRINGWRITER_OFFSET))(capacity);
		}

		static ::System::Nullable_1<::System::Int32> GetLength(::System::String* value)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_GETLENGTH_OFFSET))(value);
		}

		static ::System::Void ToCharAsUnicode(::System::Char c, ::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::System::Char, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCHARASUNICODE_OFFSET))(c, buffer);
		}

		static ::System::String* ToCamelCase(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCAMELCASE_OFFSET))(s);
		}

		static ::System::Boolean IsHighSurrogate(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISHIGHSURROGATE_OFFSET))(c);
		}

		static ::System::Boolean IsLowSurrogate(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISLOWSURROGATE_OFFSET))(c);
		}

		static ::System::Boolean StartsWith(::System::String* source, ::System::Char value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_STARTSWITH_OFFSET))(source, value);
		}

		static ::System::Boolean EndsWith(::System::String* source, ::System::Char value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ENDSWITH_OFFSET))(source, value);
		}
	};
}
