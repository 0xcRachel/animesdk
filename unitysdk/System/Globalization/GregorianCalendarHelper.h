#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class Calendar; }
namespace System::Globalization { class EraInfo; }

#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x171079F0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_DATETOTICKS_OFFSET UNITYSDK_OFFSET(0x17107D00)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETABSOLUTEDATE_OFFSET UNITYSDK_OFFSET(0x17107B40)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x171077C0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x17107EC0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x17107EF0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x17107F50)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETERA_OFFSET UNITYSDK_OFFSET(0x171080B0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETGREGORIANYEAR_OFFSET UNITYSDK_OFFSET(0x17107540)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x17108310)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTH_OFFSET UNITYSDK_OFFSET(0x171082E0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAR_OFFSET UNITYSDK_OFFSET(0x17108330)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x17108170)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_MAXYEAR_OFFSET UNITYSDK_OFFSET(0x171074B0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x17108410)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x17107740)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x17107D80)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x17108450)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x171085D0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x171074C0)

namespace System::Globalization
{
	inline static constexpr unsigned int GregorianCalendarHelper_TypeDefinitionIndex = 749;

	class GregorianCalendarHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendarHelper_TypeDefinitionIndex)->GetStaticField(0x5390);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendarHelper_TypeDefinitionIndex)->GetStaticField(0x5398);
		}
		::Il2CppArray<::System::Globalization::EraInfo*>* m_EraInfo; // 0x10
		::Il2CppArray<::System::Int32>* m_eras; // 0x18
		::System::Globalization::Calendar* m_Cal; // 0x20
		::System::Int32 m_maxYear; // 0x28
		::System::Int32 m_minYear; // 0x2C
		::System::DateTime m_minDate; // 0x30

		::System::Void _ctor(::System::Globalization::Calendar* cal, ::Il2CppArray<::System::Globalization::EraInfo*>* eraInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::Calendar*, ::Il2CppArray<::System::Globalization::EraInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER__CTOR_OFFSET))(this, cal, eraInfo);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MaxYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_MAXYEAR_OFFSET))(this);
		}

		::System::Int32 GetGregorianYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETGREGORIANYEAR_OFFSET))(this, year, era);
		}

		::System::Boolean IsValidYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISVALIDYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetDatePart(::System::Int64 ticks, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDATEPART_OFFSET))(this, ticks, part);
		}

		static ::System::Int64 GetAbsoluteDate(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETABSOLUTEDATE_OFFSET))(year, month, day);
		}

		static ::System::Int64 DateToTicks(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_DATETOTICKS_OFFSET))(year, month, day);
		}

		static ::System::Int64 TimeToTicks(::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TIMETOTICKS_OFFSET))(hour, minute, second, millisecond);
		}

		::System::Void CheckTicksRange(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_CHECKTICKSRANGE_OFFSET))(this, ticks);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETERA_OFFSET))(this, time);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}
	};
}
