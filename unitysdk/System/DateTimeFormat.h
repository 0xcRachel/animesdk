#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Globalization { class DateTimeFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DATETIMEFORMAT_EXPANDPREDEFINEDFORMAT_OFFSET UNITYSDK_OFFSET(0x17334AE0)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDROUNDRIPTIMEZONE_OFFSET UNITYSDK_OFFSET(0x173342C0)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDTIMEZONE_OFFSET UNITYSDK_OFFSET(0x17333E30)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZED_OFFSET UNITYSDK_OFFSET(0x17332960)
#define SYSTEM_DATETIMEFORMAT_FORMATDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x17332260)
#define SYSTEM_DATETIMEFORMAT_FORMATDIGITS_1_OFFSET UNITYSDK_OFFSET(0x17332000)
#define SYSTEM_DATETIMEFORMAT_FORMATDIGITS_OFFSET UNITYSDK_OFFSET(0x17331FF0)
#define SYSTEM_DATETIMEFORMAT_FORMATHEBREWMONTHNAME_OFFSET UNITYSDK_OFFSET(0x173322E0)
#define SYSTEM_DATETIMEFORMAT_FORMATMONTH_OFFSET UNITYSDK_OFFSET(0x173322A0)
#define SYSTEM_DATETIMEFORMAT_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x17335010)
#define SYSTEM_DATETIMEFORMAT_FORMAT_OFFSET UNITYSDK_OFFSET(0x17330A60)
#define SYSTEM_DATETIMEFORMAT_GETALLDATETIMES_1_OFFSET UNITYSDK_OFFSET(0x17331630)
#define SYSTEM_DATETIMEFORMAT_GETALLDATETIMES_OFFSET UNITYSDK_OFFSET(0x17331930)
#define SYSTEM_DATETIMEFORMAT_GETREALFORMAT_OFFSET UNITYSDK_OFFSET(0x17334630)
#define SYSTEM_DATETIMEFORMAT_HEBREWFORMATDIGITS_OFFSET UNITYSDK_OFFSET(0x17332170)
#define SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORLOCAL_OFFSET UNITYSDK_OFFSET(0x17335000)
#define SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORUTC_OFFSET UNITYSDK_OFFSET(0x17334620)
#define SYSTEM_DATETIMEFORMAT_ISUSEGENITIVEFORM_OFFSET UNITYSDK_OFFSET(0x17332790)
#define SYSTEM_DATETIMEFORMAT_PARSENEXTCHAR_OFFSET UNITYSDK_OFFSET(0x17332730)
#define SYSTEM_DATETIMEFORMAT_PARSEQUOTESTRING_OFFSET UNITYSDK_OFFSET(0x17332390)
#define SYSTEM_DATETIMEFORMAT_PARSEREPEATPATTERN_OFFSET UNITYSDK_OFFSET(0x173321F0)
#define SYSTEM_DATETIMEFORMAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x17335170)

namespace System
{
	inline static constexpr unsigned int DateTimeFormat_TypeDefinitionIndex = 251;

	class DateTimeFormat : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_allStandardFormats()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormat_TypeDefinitionIndex)->GetStaticField(0x5120);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fixedNumberFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormat_TypeDefinitionIndex)->GetStaticField(0x5128);
		}
		static ::System::TimeSpan* StaticGet_NullOffset()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormat_TypeDefinitionIndex)->GetStaticField(0x2AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT__CCTOR_OFFSET))();
		}

		static ::System::Void FormatDigits(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATDIGITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FormatDigits_1(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATDIGITS_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HebrewFormatDigits(::System::Text::StringBuilder* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_HEBREWFORMATDIGITS_OFFSET))(a1, a2);
		}

		static ::System::Int32 ParseRepeatPattern(::System::String* a1, ::System::Int32 a2, ::System::Char a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_PARSEREPEATPATTERN_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatDayOfWeek(::System::Int32 a1, ::System::Int32 a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATDAYOFWEEK_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatMonth(::System::Int32 a1, ::System::Int32 a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATMONTH_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatHebrewMonthName(::System::DateTime a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Globalization::DateTimeFormatInfo* a4)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::Int32, ::System::Int32, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATHEBREWMONTHNAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 ParseQuoteString(::System::String* a1, ::System::Int32 a2, ::System::Text::StringBuilder* a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_PARSEQUOTESTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 ParseNextChar(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_PARSENEXTCHAR_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsUseGenitiveForm(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Char a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_ISUSEGENITIVEFORM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* FormatCustomized(::System::DateTime a1, ::System::String* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::TimeSpan a4)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void FormatCustomizedTimeZone(::System::DateTime a1, ::System::TimeSpan a2, ::System::String* a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Text::StringBuilder* a6)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::TimeSpan, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDTIMEZONE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FormatCustomizedRoundripTimeZone(::System::DateTime a1, ::System::TimeSpan a2, ::System::Text::StringBuilder* a3)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::TimeSpan, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDROUNDRIPTIMEZONE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetRealFormat(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_GETREALFORMAT_OFFSET))(a1, a2);
		}

		static ::System::String* ExpandPredefinedFormat(::System::String* a1, ::System::DateTime& a2, ::System::Globalization::DateTimeFormatInfo*& a3, ::System::TimeSpan& a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::DateTime&, ::System::Globalization::DateTimeFormatInfo*&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_EXPANDPREDEFINEDFORMAT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* Format(::System::DateTime a1, ::System::String* a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMAT_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Format_1(::System::DateTime a1, ::System::String* a2, ::System::Globalization::DateTimeFormatInfo* a3, ::System::TimeSpan a4)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMAT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::String*>* GetAllDateTimes(::System::DateTime a1, ::System::Char a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::DateTime, ::System::Char, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_GETALLDATETIMES_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* GetAllDateTimes_1(::System::DateTime a1, ::System::Globalization::DateTimeFormatInfo* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::DateTime, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_GETALLDATETIMES_1_OFFSET))(a1, a2);
		}

		static ::System::Void InvalidFormatForLocal(::System::String* a1, ::System::DateTime a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORLOCAL_OFFSET))(a1, a2);
		}

		static ::System::Void InvalidFormatForUtc(::System::String* a1, ::System::DateTime a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORUTC_OFFSET))(a1, a2);
		}
	};
}
