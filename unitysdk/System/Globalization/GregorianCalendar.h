#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/GregorianCalendarTypes.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x17106970)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x17106B70)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x17106BA0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x17106BF0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x170F4310)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x17106E50)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x17106EE0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x17106EB0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x17106FF0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x17106E60)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x17106960)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x17106940)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x17106930)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x17107290)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x17107010)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x17106890)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x17107150)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x171072D0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TRYTODATETIME_OFFSET UNITYSDK_OFFSET(0x17107220)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x171073E0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x170F3060)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x17106950)

namespace System::Globalization
{
	inline static constexpr unsigned int GregorianCalendar_TypeDefinitionIndex = 747;

	class GregorianCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::System::Globalization::Calendar** StaticGet_s_defaultInstance()
		{
			return (::System::Globalization::Calendar**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendar_TypeDefinitionIndex)->GetStaticField(0x5320);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendar_TypeDefinitionIndex)->GetStaticField(0x5328);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendar_TypeDefinitionIndex)->GetStaticField(0x5330);
		}
		::System::Globalization::GregorianCalendarTypes m_type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Globalization::GregorianCalendarTypes type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::GregorianCalendarTypes))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CTOR_1_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CCTOR_OFFSET))();
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		static ::System::Globalization::Calendar* GetDefaultInstance()
		{
			return ((::System::Globalization::Calendar*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDEFAULTINSTANCE_OFFSET))();
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 GetDatePart(::System::Int64 ticks, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDATEPART_OFFSET))(this, ticks, part);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETERA_OFFSET))(this, time);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Boolean TryToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TRYTODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era, result);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}
