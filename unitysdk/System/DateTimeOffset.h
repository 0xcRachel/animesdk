#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/DateTimeStyles.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class Calendar; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATETIMEOFFSET_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x22AC210)
#define SYSTEM_DATETIMEOFFSET_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x22AC280)
#define SYSTEM_DATETIMEOFFSET_ADDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x22AC2F0)
#define SYSTEM_DATETIMEOFFSET_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x22AC360)
#define SYSTEM_DATETIMEOFFSET_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x22AC3D0)
#define SYSTEM_DATETIMEOFFSET_ADDSECONDS_OFFSET UNITYSDK_OFFSET(0x22AC430)
#define SYSTEM_DATETIMEOFFSET_ADDTICKS_OFFSET UNITYSDK_OFFSET(0x22AC160)
#define SYSTEM_DATETIMEOFFSET_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x22AC4A0)
#define SYSTEM_DATETIMEOFFSET_ADD_OFFSET UNITYSDK_OFFSET(0x22AC160)
#define SYSTEM_DATETIMEOFFSET_COMPARETO_OFFSET UNITYSDK_OFFSET(0x22AC580)
#define SYSTEM_DATETIMEOFFSET_COMPARE_OFFSET UNITYSDK_OFFSET(0x1807A060)
#define SYSTEM_DATETIMEOFFSET_EQUALSEXACT_OFFSET UNITYSDK_OFFSET(0x22AC5D0)
#define SYSTEM_DATETIMEOFFSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22AC5B0)
#define SYSTEM_DATETIMEOFFSET_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1807A4E0)
#define SYSTEM_DATETIMEOFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x22AC5A0)
#define SYSTEM_DATETIMEOFFSET_FROMFILETIME_OFFSET UNITYSDK_OFFSET(0x1807A590)
#define SYSTEM_DATETIMEOFFSET_FROMUNIXTIMEMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1807A6D0)
#define SYSTEM_DATETIMEOFFSET_FROMUNIXTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x1807A5C0)
#define SYSTEM_DATETIMEOFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22AC670)
#define SYSTEM_DATETIMEOFFSET_GET_CLOCKDATETIME_OFFSET UNITYSDK_OFFSET(0x22ABB30)
#define SYSTEM_DATETIMEOFFSET_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0x22ABB30)
#define SYSTEM_DATETIMEOFFSET_GET_DATE_OFFSET UNITYSDK_OFFSET(0x22ABC50)
#define SYSTEM_DATETIMEOFFSET_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x22ABCC0)
#define SYSTEM_DATETIMEOFFSET_GET_DAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x22ABD20)
#define SYSTEM_DATETIMEOFFSET_GET_DAY_OFFSET UNITYSDK_OFFSET(0x22ABC90)
#define SYSTEM_DATETIMEOFFSET_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x22ABE00)
#define SYSTEM_DATETIMEOFFSET_GET_LOCALDATETIME_OFFSET UNITYSDK_OFFSET(0x22ABBB0)
#define SYSTEM_DATETIMEOFFSET_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x22ABE50)
#define SYSTEM_DATETIMEOFFSET_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x22ABEB0)
#define SYSTEM_DATETIMEOFFSET_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x22ABF00)
#define SYSTEM_DATETIMEOFFSET_GET_NOW_OFFSET UNITYSDK_OFFSET(0x180792C0)
#define SYSTEM_DATETIMEOFFSET_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x22ABF30)
#define SYSTEM_DATETIMEOFFSET_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x22ABF40)
#define SYSTEM_DATETIMEOFFSET_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x22ABF90)
#define SYSTEM_DATETIMEOFFSET_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x22AC020)
#define SYSTEM_DATETIMEOFFSET_GET_UTCDATETIME_OFFSET UNITYSDK_OFFSET(0x22ABB40)
#define SYSTEM_DATETIMEOFFSET_GET_UTCNOW_OFFSET UNITYSDK_OFFSET(0x18079370)
#define SYSTEM_DATETIMEOFFSET_GET_UTCTICKS_OFFSET UNITYSDK_OFFSET(0x22ABFB0)
#define SYSTEM_DATETIMEOFFSET_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x22AC070)
#define SYSTEM_DATETIMEOFFSET_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1807C770)
#define SYSTEM_DATETIMEOFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1807C990)
#define SYSTEM_DATETIMEOFFSET_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1807CD00)
#define SYSTEM_DATETIMEOFFSET_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1807CC50)
#define SYSTEM_DATETIMEOFFSET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1807C750)
#define SYSTEM_DATETIMEOFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1807CA40)
#define SYSTEM_DATETIMEOFFSET_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1807CBA0)
#define SYSTEM_DATETIMEOFFSET_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1807CAF0)
#define SYSTEM_DATETIMEOFFSET_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1807C8E0)
#define SYSTEM_DATETIMEOFFSET_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1807C820)
#define SYSTEM_DATETIMEOFFSET_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1807B120)
#define SYSTEM_DATETIMEOFFSET_PARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x1807B3F0)
#define SYSTEM_DATETIMEOFFSET_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1807B0C0)
#define SYSTEM_DATETIMEOFFSET_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1807AE60)
#define SYSTEM_DATETIMEOFFSET_PARSE_2_OFFSET UNITYSDK_OFFSET(0x1807AEB0)
#define SYSTEM_DATETIMEOFFSET_PARSE_OFFSET UNITYSDK_OFFSET(0x1807ACD0)
#define SYSTEM_DATETIMEOFFSET_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x22AC710)
#define SYSTEM_DATETIMEOFFSET_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x22AC6F0)
#define SYSTEM_DATETIMEOFFSET_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x22AC570)
#define SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x22AC640)
#define SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x22AC650)
#define SYSTEM_DATETIMEOFFSET_TOFILETIME_OFFSET UNITYSDK_OFFSET(0x22AC730)
#define SYSTEM_DATETIMEOFFSET_TOLOCALTIME_1_OFFSET UNITYSDK_OFFSET(0x22AC8E0)
#define SYSTEM_DATETIMEOFFSET_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x22AC840)
#define SYSTEM_DATETIMEOFFSET_TOOFFSET_OFFSET UNITYSDK_OFFSET(0x22ABBC0)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x22AC9D0)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x22ACA30)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x22ACA90)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22AC980)
#define SYSTEM_DATETIMEOFFSET_TOUNIVERSALTIME_OFFSET UNITYSDK_OFFSET(0x22ACAF0)
#define SYSTEM_DATETIMEOFFSET_TOUNIXTIMEMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x22AC7C0)
#define SYSTEM_DATETIMEOFFSET_TOUNIXTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x22AC740)
#define SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1807C4A0)
#define SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1807C150)
#define SYSTEM_DATETIMEOFFSET_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1807BFA0)
#define SYSTEM_DATETIMEOFFSET_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1807BD80)
#define SYSTEM_DATETIMEOFFSET_VALIDATEDATE_OFFSET UNITYSDK_OFFSET(0x18078CB0)
#define SYSTEM_DATETIMEOFFSET_VALIDATEOFFSET_OFFSET UNITYSDK_OFFSET(0x18078BC0)
#define SYSTEM_DATETIMEOFFSET_VALIDATESTYLES_OFFSET UNITYSDK_OFFSET(0x1807AFC0)
#define SYSTEM_DATETIMEOFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1807CDB0)
#define SYSTEM_DATETIMEOFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22ABAE0)
#define SYSTEM_DATETIMEOFFSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x22ABAF0)
#define SYSTEM_DATETIMEOFFSET__CTOR_3_OFFSET UNITYSDK_OFFSET(0x22ABB00)
#define SYSTEM_DATETIMEOFFSET__CTOR_4_OFFSET UNITYSDK_OFFSET(0x22ABB10)
#define SYSTEM_DATETIMEOFFSET__CTOR_5_OFFSET UNITYSDK_OFFSET(0x22ABB20)
#define SYSTEM_DATETIMEOFFSET__CTOR_6_OFFSET UNITYSDK_OFFSET(0x22AC660)
#define SYSTEM_DATETIMEOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x22ABAD0)

namespace System
{
	inline static constexpr unsigned int DateTimeOffset_TypeDefinitionIndex = 226;

	struct alignas(8) DateTimeOffset
	{
		static ::System::DateTimeOffset* StaticGet_MinValue()
		{
			return (::System::DateTimeOffset*)Il2CppClass::FromTypeDefinitionIndex(DateTimeOffset_TypeDefinitionIndex)->GetStaticField(0x1880);
		}
		static ::System::DateTimeOffset* StaticGet_MaxValue()
		{
			return (::System::DateTimeOffset*)Il2CppClass::FromTypeDefinitionIndex(DateTimeOffset_TypeDefinitionIndex)->GetStaticField(0x1890);
		}
		// static const ::System::Int64 MaxOffset = 0x7558BDB000; // 0x0
		// static const ::System::Int64 MinOffset = 0xFFFFFF8AA7425000; // 0x0
		// static const ::System::Int64 UnixEpochTicks = 0x89F7FF5F7B58000; // 0x0
		// static const ::System::Int64 UnixEpochSeconds = 0xE7791F700; // 0x0
		// static const ::System::Int64 UnixEpochMilliseconds = 0x3883122CD800; // 0x0
		::System::DateTime m_dateTime; // 0x10
		::System::Int16 m_offsetMinutes; // 0x18

		/*
		::System::Void _ctor(::System::Int64 ticks, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_OFFSET))(this, ticks, offset);
		}
		*/

		::System::Void _ctor_1(::System::DateTime dateTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_1_OFFSET))(this, dateTime);
		}

		/*
		::System::Void _ctor_2(::System::DateTime dateTime, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_2_OFFSET))(this, dateTime, offset);
		}
		*/

		/*
		::System::Void _ctor_3(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_3_OFFSET))(this, year, month, day, hour, minute, second, offset);
		}
		*/

		/*
		::System::Void _ctor_4(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_4_OFFSET))(this, year, month, day, hour, minute, second, millisecond, offset);
		}
		*/

		/*
		::System::Void _ctor_5(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Globalization::Calendar* calendar, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_5_OFFSET))(this, year, month, day, hour, minute, second, millisecond, calendar, offset);
		}
		*/

		/*
		::System::Void _ctor_6(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_6_OFFSET))(this, info, context);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CCTOR_OFFSET))();
		}

		static ::System::DateTimeOffset get_Now()
		{
			return ((::System::DateTimeOffset(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_NOW_OFFSET))();
		}

		static ::System::DateTimeOffset get_UtcNow()
		{
			return ((::System::DateTimeOffset(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_UTCNOW_OFFSET))();
		}

		::System::DateTime get_DateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DATETIME_OFFSET))(this);
		}

		::System::DateTime get_UtcDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_UTCDATETIME_OFFSET))(this);
		}

		::System::DateTime get_LocalDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_LOCALDATETIME_OFFSET))(this);
		}

		/*
		::System::DateTimeOffset ToOffset(::System::TimeSpan offset)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOOFFSET_OFFSET))(this, offset);
		}
		*/

		::System::DateTime get_ClockDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_CLOCKDATETIME_OFFSET))(this);
		}

		::System::DateTime get_Date()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DATE_OFFSET))(this);
		}

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DAY_OFFSET))(this);
		}

		::System::DayOfWeek get_DayOfWeek()
		{
			return ((::System::DayOfWeek(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DAYOFWEEK_OFFSET))(this);
		}

		::System::Int32 get_DayOfYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DAYOFYEAR_OFFSET))(this);
		}

		::System::Int32 get_Hour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_HOUR_OFFSET))(this);
		}

		::System::Int32 get_Millisecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_MILLISECOND_OFFSET))(this);
		}

		::System::Int32 get_Minute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_MINUTE_OFFSET))(this);
		}

		::System::Int32 get_Month()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_MONTH_OFFSET))(this);
		}

		/*
		::System::TimeSpan get_Offset()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_OFFSET_OFFSET))(this);
		}
		*/

		::System::Int32 get_Second()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_SECOND_OFFSET))(this);
		}

		::System::Int64 get_Ticks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_TICKS_OFFSET))(this);
		}

		::System::Int64 get_UtcTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_UTCTICKS_OFFSET))(this);
		}

		/*
		::System::TimeSpan get_TimeOfDay()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_TIMEOFDAY_OFFSET))(this);
		}
		*/

		::System::Int32 get_Year()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_YEAR_OFFSET))(this);
		}

		/*
		::System::DateTimeOffset Add(::System::TimeSpan timeSpan)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADD_OFFSET))(this, timeSpan);
		}
		*/

		::System::DateTimeOffset AddDays(::System::Double days)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDDAYS_OFFSET))(this, days);
		}

		::System::DateTimeOffset AddHours(::System::Double hours)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDHOURS_OFFSET))(this, hours);
		}

		::System::DateTimeOffset AddMilliseconds(::System::Double milliseconds)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDMILLISECONDS_OFFSET))(this, milliseconds);
		}

		::System::DateTimeOffset AddMinutes(::System::Double minutes)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDMINUTES_OFFSET))(this, minutes);
		}

		::System::DateTimeOffset AddMonths(::System::Int32 months)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDMONTHS_OFFSET))(this, months);
		}

		::System::DateTimeOffset AddSeconds(::System::Double seconds)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDSECONDS_OFFSET))(this, seconds);
		}

		::System::DateTimeOffset AddTicks(::System::Int64 ticks)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDTICKS_OFFSET))(this, ticks);
		}

		::System::DateTimeOffset AddYears(::System::Int32 years)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDYEARS_OFFSET))(this, years);
		}

		static ::System::Int32 Compare(::System::DateTimeOffset first, ::System::DateTimeOffset second)
		{
			return ((::System::Int32(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_COMPARE_OFFSET))(first, second);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, obj);
		}

		::System::Int32 CompareTo(::System::DateTimeOffset other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_COMPARETO_OFFSET))(this, other);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::DateTimeOffset other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean EqualsExact(::System::DateTimeOffset other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALSEXACT_OFFSET))(this, other);
		}

		static ::System::Boolean Equals_2(::System::DateTimeOffset first, ::System::DateTimeOffset second)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALS_2_OFFSET))(first, second);
		}

		static ::System::DateTimeOffset FromFileTime(::System::Int64 fileTime)
		{
			return ((::System::DateTimeOffset(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_FROMFILETIME_OFFSET))(fileTime);
		}

		static ::System::DateTimeOffset FromUnixTimeSeconds(::System::Int64 seconds)
		{
			return ((::System::DateTimeOffset(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_FROMUNIXTIMESECONDS_OFFSET))(seconds);
		}

		static ::System::DateTimeOffset FromUnixTimeMilliseconds(::System::Int64 milliseconds)
		{
			return ((::System::DateTimeOffset(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_FROMUNIXTIMEMILLISECONDS_OFFSET))(milliseconds);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		/*
		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GETHASHCODE_OFFSET))(this);
		}

		static ::System::DateTimeOffset Parse(::System::String* input)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSE_OFFSET))(input);
		}

		static ::System::DateTimeOffset Parse_1(::System::String* input, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSE_1_OFFSET))(input, formatProvider);
		}

		static ::System::DateTimeOffset Parse_2(::System::String* input, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSE_2_OFFSET))(input, formatProvider, styles);
		}

		static ::System::DateTimeOffset ParseExact(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSEEXACT_OFFSET))(input, format, formatProvider);
		}

		static ::System::DateTimeOffset ParseExact_1(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSEEXACT_1_OFFSET))(input, format, formatProvider, styles);
		}

		static ::System::DateTimeOffset ParseExact_2(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSEEXACT_2_OFFSET))(input, formats, formatProvider, styles);
		}

		/*
		::System::TimeSpan Subtract(::System::DateTimeOffset value)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SUBTRACT_OFFSET))(this, value);
		}
		*/

		/*
		::System::DateTimeOffset Subtract_1(::System::TimeSpan value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SUBTRACT_1_OFFSET))(this, value);
		}
		*/

		::System::Int64 ToFileTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOFILETIME_OFFSET))(this);
		}

		::System::Int64 ToUnixTimeSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOUNIXTIMESECONDS_OFFSET))(this);
		}

		::System::Int64 ToUnixTimeMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOUNIXTIMEMILLISECONDS_OFFSET))(this);
		}

		::System::DateTimeOffset ToLocalTime()
		{
			return ((::System::DateTimeOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOLOCALTIME_OFFSET))(this);
		}

		::System::DateTimeOffset ToLocalTime_1(::System::Boolean throwOnOverflow)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOLOCALTIME_1_OFFSET))(this, throwOnOverflow);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_2_OFFSET))(this, formatProvider);
		}

		::System::String* ToString_3(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_3_OFFSET))(this, format, formatProvider);
		}

		::System::DateTimeOffset ToUniversalTime()
		{
			return ((::System::DateTimeOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOUNIVERSALTIME_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::DateTimeOffset& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSE_OFFSET))(input, result);
		}

		static ::System::Boolean TryParse_1(::System::String* input, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles, ::System::DateTimeOffset& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSE_1_OFFSET))(input, formatProvider, styles, result);
		}

		static ::System::Boolean TryParseExact(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles, ::System::DateTimeOffset& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_OFFSET))(input, format, formatProvider, styles, result);
		}

		static ::System::Boolean TryParseExact_1(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles, ::System::DateTimeOffset& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_1_OFFSET))(input, formats, formatProvider, styles, result);
		}

		/*
		static ::System::Int16 ValidateOffset(::System::TimeSpan offset)
		{
			return ((::System::Int16(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_VALIDATEOFFSET_OFFSET))(offset);
		}
		*/

		/*
		static ::System::DateTime ValidateDate(::System::DateTime dateTime, ::System::TimeSpan offset)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_VALIDATEDATE_OFFSET))(dateTime, offset);
		}
		*/

		static ::System::Globalization::DateTimeStyles ValidateStyles(::System::Globalization::DateTimeStyles style, ::System::String* parameterName)
		{
			return ((::System::Globalization::DateTimeStyles(*)(::System::Globalization::DateTimeStyles, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_VALIDATESTYLES_OFFSET))(style, parameterName);
		}

		static ::System::DateTimeOffset op_Implicit(::System::DateTime dateTime)
		{
			return ((::System::DateTimeOffset(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_IMPLICIT_OFFSET))(dateTime);
		}

		/*
		static ::System::DateTimeOffset op_Addition(::System::DateTimeOffset dateTimeOffset, ::System::TimeSpan timeSpan)
		{
			return ((::System::DateTimeOffset(*)(::System::DateTimeOffset, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_ADDITION_OFFSET))(dateTimeOffset, timeSpan);
		}
		*/

		/*
		static ::System::DateTimeOffset op_Subtraction(::System::DateTimeOffset dateTimeOffset, ::System::TimeSpan timeSpan)
		{
			return ((::System::DateTimeOffset(*)(::System::DateTimeOffset, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_SUBTRACTION_OFFSET))(dateTimeOffset, timeSpan);
		}
		*/

		/*
		static ::System::TimeSpan op_Subtraction_1(::System::DateTimeOffset left, ::System::DateTimeOffset right)
		{
			return ((::System::TimeSpan(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_SUBTRACTION_1_OFFSET))(left, right);
		}
		*/

		static ::System::Boolean op_Equality(::System::DateTimeOffset left, ::System::DateTimeOffset right)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::DateTimeOffset left, ::System::DateTimeOffset right)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan(::System::DateTimeOffset left, ::System::DateTimeOffset right)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_LESSTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::DateTimeOffset left, ::System::DateTimeOffset right)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_LESSTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan(::System::DateTimeOffset left, ::System::DateTimeOffset right)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_GREATERTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::DateTimeOffset left, ::System::DateTimeOffset right)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_GREATERTHANOREQUAL_OFFSET))(left, right);
		}
	};
}
