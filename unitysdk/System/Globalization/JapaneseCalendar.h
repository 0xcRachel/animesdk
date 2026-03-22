#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"

namespace System { class String; }
namespace System::Globalization { class EraInfo; }
namespace System::Globalization { class GregorianCalendarHelper; }

#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ABBREVERANAMES_OFFSET UNITYSDK_OFFSET(0x15C3A780)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x15C3A520)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ERANAMES_OFFSET UNITYSDK_OFFSET(0x15C3A650)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x15C5D3E0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x15C5D420)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x15C5D3C0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x15C4A2B0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAINFO_OFFSET UNITYSDK_OFFSET(0x15C5CD90)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERASFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x15C5D1E0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x15C5D4C0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x15C5D490)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x15C5D4E0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x15C5D520)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x15C5D6D0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x15C5D3B0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x15C5CD80)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x15C5CD20)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x15C5D790)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x15C5D540)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x15C5D6F0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x15C5D590)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x15C5D5B0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C5D7D0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x15C5D1F0)

namespace System::Globalization
{
	inline static constexpr unsigned int JapaneseCalendar_TypeDefinitionIndex = 756;

	class JapaneseCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::System::Globalization::Calendar** StaticGet_s_defaultInstance()
		{
			return (::System::Globalization::Calendar**)Il2CppClass::FromTypeDefinitionIndex(JapaneseCalendar_TypeDefinitionIndex)->GetStaticField(0x8730);
		}
		static ::Il2CppArray<::System::Globalization::EraInfo*>** StaticGet_japaneseEraInfo()
		{
			return (::Il2CppArray<::System::Globalization::EraInfo*>**)Il2CppClass::FromTypeDefinitionIndex(JapaneseCalendar_TypeDefinitionIndex)->GetStaticField(0x8738);
		}
		static ::System::DateTime* StaticGet_calendarMinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(JapaneseCalendar_TypeDefinitionIndex)->GetStaticField(0x2BF0);
		}
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Globalization::EraInfo*>* GetEraInfo()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAINFO_OFFSET))();
		}

		static ::Il2CppArray<::System::Globalization::EraInfo*>* GetErasFromRegistry()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERASFROMREGISTRY_OFFSET))();
		}

		static ::System::Globalization::Calendar* GetDefaultInstance()
		{
			return ((::System::Globalization::Calendar*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDEFAULTINSTANCE_OFFSET))();
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ERAS_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* EraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ERANAMES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* AbbrevEraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ABBREVERANAMES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* EnglishEraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ENGLISHERANAMES_OFFSET))();
		}

		::System::Boolean IsValidYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISVALIDYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}
	};
}
