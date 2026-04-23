#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_ADD_OFFSET UNITYSDK_OFFSET(0x2268820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0x2268930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22689F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x2268960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOINT32_OFFSET UNITYSDK_OFFSET(0x2268880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOUINT32_OFFSET UNITYSDK_OFFSET(0x2268870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FORMATWITHDECIMAL_OFFSET UNITYSDK_OFFSET(0x2268B10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2268A00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETLERPEDVALUE_OFFSET UNITYSDK_OFFSET(0x22688F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETSCALEDNUMERATOR_OFFSET UNITYSDK_OFFSET(0x2268800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_MUL_OFFSET UNITYSDK_OFFSET(0x2268840)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x17349ED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17355B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17356140)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_1_OFFSET UNITYSDK_OFFSET(0x17356020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x17355EE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x173390F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x173336A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x17355780)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x17335F10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17355810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17355C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x173560B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_1_OFFSET UNITYSDK_OFFSET(0x17355DA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x17355D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x17333770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x17338C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POWEROF10_OFFSET UNITYSDK_OFFSET(0x17353B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POW_OFFSET UNITYSDK_OFFSET(0x2268850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_SUB_OFFSET UNITYSDK_OFFSET(0x2268830)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TODISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x2268AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFIXPOINT_OFFSET UNITYSDK_OFFSET(0x22688A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x2268890)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOLONG_OFFSET UNITYSDK_OFFSET(0x22688B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRINGWITHSIGN_OFFSET UNITYSDK_OFFSET(0x2268AE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x2268AD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2268A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOULONG_OFFSET UNITYSDK_OFFSET(0x22688C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x22688D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17353700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2268740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2268790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_3_OFFSET UNITYSDK_OFFSET(0x22687E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_4_OFFSET UNITYSDK_OFFSET(0x22687F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1C9ECB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x22686B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__TODISPLAYDATARAW_OFFSET UNITYSDK_OFFSET(0x2268B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2268B60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2268BB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2268BF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDecimal_TypeDefinitionIndex = 69179;

	struct alignas(8) IdleLiveDecimal
	{
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal* StaticGet_One()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDecimal*)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDecimal_TypeDefinitionIndex)->GetStaticField(0x200B0);
		}
		static ::Il2CppArray<::System::Numerics::BigInteger>** StaticGet_s_powerOf10Table()
		{
			return (::Il2CppArray<::System::Numerics::BigInteger>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDecimal_TypeDefinitionIndex)->GetStaticField(0x200C8);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal* StaticGet_Zero()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDecimal*)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDecimal_TypeDefinitionIndex)->GetStaticField(0x200D0);
		}
		// static const ::System::Int32 MAX_DENOMINATOR_LOG10 = 0x63; // 0x0
		::System::Numerics::BigInteger _numerator; // 0x10
		::System::Int32 _denominatorLog10; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::Double value, ::System::Int32 pointScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_3_OFFSET))(this, value, pointScale);
		}

		/*
		::System::Void _ctor_4(::RPG::GameCore::FixPoint value, ::System::Int32 pointScale)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_4_OFFSET))(this, value, pointScale);
		}
		*/

		::System::Void _ctor_5(::System::Numerics::BigInteger numerator, ::System::Int32 denominatorLog10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__CTOR_5_OFFSET))(this, numerator, denominatorLog10);
		}

		static ::System::Numerics::BigInteger PowerOf10(::System::Int32 exp)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POWEROF10_OFFSET))(exp);
		}

		::System::Numerics::BigInteger GetScaledNumerator(::System::Int32 targetDenominatorLog10)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETSCALEDNUMERATOR_OFFSET))(this, targetDenominatorLog10);
		}

		::System::Void Add(::RPG::Client::ActivityIdleLive::IdleLiveDecimal& rhs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_ADD_OFFSET))(this, rhs);
		}

		::System::Void Sub(::RPG::Client::ActivityIdleLive::IdleLiveDecimal& rhs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_SUB_OFFSET))(this, rhs);
		}

		::System::Void Mul(::RPG::Client::ActivityIdleLive::IdleLiveDecimal& rhs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_MUL_OFFSET))(this, rhs);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal Pow(::System::Int32 exponent)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POW_OFFSET))(this, exponent);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Addition(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal right)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_ADDITION_OFFSET))(left, right);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Subtraction(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal right)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_SUBTRACTION_OFFSET))(left, right);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Multiply(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal right)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_MULTIPLY_OFFSET))(left, right);
		}

		::System::UInt32 FloorToUint32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOUINT32_OFFSET))(this);
		}

		::System::Int32 FloorToInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOINT32_OFFSET))(this);
		}

		::System::Single ToFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFLOAT_OFFSET))(this);
		}

		/*
		::RPG::GameCore::FixPoint ToFixPoint()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFIXPOINT_OFFSET))(this);
		}
		*/

		::System::Int64 ToLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOLONG_OFFSET))(this);
		}

		::System::UInt64 ToULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOULONG_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal Truncate()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TRUNCATE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetLerpedValue(::RPG::Client::ActivityIdleLive::IdleLiveDecimal from, ::System::Int32 index, ::System::Int32 total)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETLERPEDVALUE_OFFSET))(this, from, index, total);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit(::System::Int64 value)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_OFFSET))(value);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_1(::System::UInt64 value)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_2(::System::UInt32 value)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_3(::System::Double value)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_3_OFFSET))(value);
		}

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_4(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_4_OFFSET))(value);
		}
		*/

		::System::Int32 CompareTo(::RPG::Client::ActivityIdleLive::IdleLiveDecimal other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_COMPARETO_OFFSET))(this, other);
		}

		::System::Boolean Equals(::RPG::Client::ActivityIdleLive::IdleLiveDecimal other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan_1(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::System::Int32 right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::System::Int32 right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan_1(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::ActivityIdleLive::IdleLiveDecimal left, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHANOREQUAL_OFFSET))(left, right);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 significantFigures)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_1_OFFSET))(this, significantFigures);
		}

		::System::String* ToStringWithSign()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRINGWITHSIGN_OFFSET))(this);
		}

		/*
		::System::ValueTuple_2<::System::String*, ::System::String*> ToDisplayData()
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TODISPLAYDATA_OFFSET))(this);
		}
		*/

		::System::String* FormatWithDecimal(::System::String* wholePart, ::System::String* decimalPart)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FORMATWITHDECIMAL_OFFSET))(this, wholePart, decimalPart);
		}

		/*
		::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*> _ToDisplayDataRaw(::System::Int32 significantFigures, ::System::Nullable_1<::System::Numerics::BigInteger> overrideIntegerPart)
		{
			return ((::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*>(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Numerics::BigInteger>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__TODISPLAYDATARAW_OFFSET))(this, significantFigures, overrideIntegerPart);
		}
		*/

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
