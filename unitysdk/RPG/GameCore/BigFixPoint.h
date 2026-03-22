#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_BIGFIXPOINT_ABS_OFFSET UNITYSDK_OFFSET(0x17226E20)
#define RPG_GAMECORE_BIGFIXPOINT_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x17228010)
#define RPG_GAMECORE_BIGFIXPOINT_CEILING_OFFSET UNITYSDK_OFFSET(0x17227BB0)
#define RPG_GAMECORE_BIGFIXPOINT_CLAMP01_OFFSET UNITYSDK_OFFSET(0x17227660)
#define RPG_GAMECORE_BIGFIXPOINT_CLAMPTOFIXPOINTWITHMULTIPLIER_1_OFFSET UNITYSDK_OFFSET(0x201B2E0)
#define RPG_GAMECORE_BIGFIXPOINT_CLAMPTOFIXPOINTWITHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x201B2D0)
#define RPG_GAMECORE_BIGFIXPOINT_CLAMPTOFIXPOINT_1_OFFSET UNITYSDK_OFFSET(0x201B2C0)
#define RPG_GAMECORE_BIGFIXPOINT_CLAMPTOFIXPOINT_OFFSET UNITYSDK_OFFSET(0x201B2B0)
#define RPG_GAMECORE_BIGFIXPOINT_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x172274C0)
#define RPG_GAMECORE_BIGFIXPOINT_CLAMP_OFFSET UNITYSDK_OFFSET(0x17227390)
#define RPG_GAMECORE_BIGFIXPOINT_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x201B130)
#define RPG_GAMECORE_BIGFIXPOINT_COMPARETO_2_OFFSET UNITYSDK_OFFSET(0x201B1B0)
#define RPG_GAMECORE_BIGFIXPOINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x201B110)
#define RPG_GAMECORE_BIGFIXPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x201B1D0)
#define RPG_GAMECORE_BIGFIXPOINT_FLOOR_OFFSET UNITYSDK_OFFSET(0x172278B0)
#define RPG_GAMECORE_BIGFIXPOINT_FROMMULTIPLY_OFFSET UNITYSDK_OFFSET(0x17228E00)
#define RPG_GAMECORE_BIGFIXPOINT_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0xD2410)
#define RPG_GAMECORE_BIGFIXPOINT_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x1465FE0)
#define RPG_GAMECORE_BIGFIXPOINT_GET_SIGN_OFFSET UNITYSDK_OFFSET(0x201B070)
#define RPG_GAMECORE_BIGFIXPOINT_ISALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x172281D0)
#define RPG_GAMECORE_BIGFIXPOINT_ISOVERFLOWFORFIXPOINT_OFFSET UNITYSDK_OFFSET(0x201B330)
#define RPG_GAMECORE_BIGFIXPOINT_MAX_1_OFFSET UNITYSDK_OFFSET(0x17226F70)
#define RPG_GAMECORE_BIGFIXPOINT_MAX_2_OFFSET UNITYSDK_OFFSET(0x17227060)
#define RPG_GAMECORE_BIGFIXPOINT_MAX_OFFSET UNITYSDK_OFFSET(0x17226EF0)
#define RPG_GAMECORE_BIGFIXPOINT_MIN_1_OFFSET UNITYSDK_OFFSET(0x172271C0)
#define RPG_GAMECORE_BIGFIXPOINT_MIN_2_OFFSET UNITYSDK_OFFSET(0x172272A0)
#define RPG_GAMECORE_BIGFIXPOINT_MIN_OFFSET UNITYSDK_OFFSET(0x17227140)
#define RPG_GAMECORE_BIGFIXPOINT_OP_ADDITION_1_OFFSET UNITYSDK_OFFSET(0x17225AC0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x17225A00)
#define RPG_GAMECORE_BIGFIXPOINT_OP_DIVISION_1_OFFSET UNITYSDK_OFFSET(0x172257B0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_DIVISION_2_OFFSET UNITYSDK_OFFSET(0x17225870)
#define RPG_GAMECORE_BIGFIXPOINT_OP_DIVISION_3_OFFSET UNITYSDK_OFFSET(0x17225970)
#define RPG_GAMECORE_BIGFIXPOINT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x17225720)
#define RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x17225DE0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_2_OFFSET UNITYSDK_OFFSET(0x17225E60)
#define RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_3_OFFSET UNITYSDK_OFFSET(0x17225EE0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_4_OFFSET UNITYSDK_OFFSET(0x172262D0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17225D80)
#define RPG_GAMECORE_BIGFIXPOINT_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17226D40)
#define RPG_GAMECORE_BIGFIXPOINT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x17226C90)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_1_OFFSET UNITYSDK_OFFSET(0x17226910)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_2_OFFSET UNITYSDK_OFFSET(0x172269B0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_3_OFFSET UNITYSDK_OFFSET(0x17226A50)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_4_OFFSET UNITYSDK_OFFSET(0x17226A70)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x172268B0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_1_OFFSET UNITYSDK_OFFSET(0x17226530)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_2_OFFSET UNITYSDK_OFFSET(0x172265D0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_3_OFFSET UNITYSDK_OFFSET(0x17226670)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_4_OFFSET UNITYSDK_OFFSET(0x17226690)
#define RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x172264D0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17226DC0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x17226DF0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17226D90)
#define RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x17226360)
#define RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_2_OFFSET UNITYSDK_OFFSET(0x172263F0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_3_OFFSET UNITYSDK_OFFSET(0x17226480)
#define RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_4_OFFSET UNITYSDK_OFFSET(0x172264A0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17226300)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_1_OFFSET UNITYSDK_OFFSET(0x17226B00)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_2_OFFSET UNITYSDK_OFFSET(0x17226BA0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_3_OFFSET UNITYSDK_OFFSET(0x17226C40)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_4_OFFSET UNITYSDK_OFFSET(0x17226C60)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17226AA0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_1_OFFSET UNITYSDK_OFFSET(0x17226720)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_2_OFFSET UNITYSDK_OFFSET(0x172267C0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_3_OFFSET UNITYSDK_OFFSET(0x17226860)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_4_OFFSET UNITYSDK_OFFSET(0x17226880)
#define RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x172266C0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x172254C0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x17225590)
#define RPG_GAMECORE_BIGFIXPOINT_OP_MULTIPLY_3_OFFSET UNITYSDK_OFFSET(0x17225690)
#define RPG_GAMECORE_BIGFIXPOINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x17225420)
#define RPG_GAMECORE_BIGFIXPOINT_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x17225C60)
#define RPG_GAMECORE_BIGFIXPOINT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x17225BA0)
#define RPG_GAMECORE_BIGFIXPOINT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x17225D40)
#define RPG_GAMECORE_BIGFIXPOINT_ROUND_OFFSET UNITYSDK_OFFSET(0x17227DD0)
#define RPG_GAMECORE_BIGFIXPOINT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x201B240)
#define RPG_GAMECORE_BIGFIXPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201B230)
#define RPG_GAMECORE_BIGFIXPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x17229130)
#define RPG_GAMECORE_BIGFIXPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x201B0B0)
#define RPG_GAMECORE_BIGFIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x201B080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BigFixPoint_TypeDefinitionIndex = 8823;

	struct alignas(8) BigFixPoint
	{
		static ::RPG::GameCore::BigFixPoint* StaticGet_One()
		{
			return (::RPG::GameCore::BigFixPoint*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0x1A040);
		}
		static ::RPG::GameCore::BigFixPoint* StaticGet_Zero()
		{
			return (::RPG::GameCore::BigFixPoint*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0x1A050);
		}
		static ::RPG::GameCore::BigFixPoint* StaticGet_BitMask_One()
		{
			return (::RPG::GameCore::BigFixPoint*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0x1A060);
		}
		static ::System::Int64* StaticGet_Raw_Max_FixPoint()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0x6130);
		}
		static ::System::Int64* StaticGet_Raw_Min_FixPoint()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0x6138);
		}
		// static const ::System::Int32 FRACTIONAL_SLIDE = 0x0; // 0x0
		// static const ::System::Int32 FRACTIONAL_PLACES = 0x20; // 0x0
		// static const ::System::Int64 ONE = 0x100000000; // 0x0
		::System::Numerics::BigInteger _RawValue; // 0x10

		/*
		::System::Void _ctor(::RPG::GameCore::FixPoint baseVal)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT__CTOR_OFFSET))(this, baseVal);
		}
		*/

		::System::Void _ctor_1(::System::Int64 baseVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT__CTOR_1_OFFSET))(this, baseVal);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_GET_ISZERO_OFFSET))(this);
		}

		::System::Int32 get_Sign()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_GET_SIGN_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_RawValue()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_GET_RAWVALUE_OFFSET))(this);
		}

		static ::RPG::GameCore::BigFixPoint op_Multiply(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint multiplier)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_MULTIPLY_OFFSET))(value, multiplier);
		}

		/*
		static ::RPG::GameCore::BigFixPoint op_Multiply_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint multiplier)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_MULTIPLY_1_OFFSET))(value, multiplier);
		}
		*/

		static ::RPG::GameCore::BigFixPoint op_Multiply_2(::RPG::GameCore::BigFixPoint value, ::System::Int32 multiplier)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_MULTIPLY_2_OFFSET))(value, multiplier);
		}

		static ::RPG::GameCore::BigFixPoint op_Multiply_3(::RPG::GameCore::BigFixPoint value, ::System::Int64 multiplier)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_MULTIPLY_3_OFFSET))(value, multiplier);
		}

		static ::RPG::GameCore::BigFixPoint op_Division(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint divider)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_DIVISION_OFFSET))(value, divider);
		}

		/*
		static ::RPG::GameCore::BigFixPoint op_Division_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint divider)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_DIVISION_1_OFFSET))(value, divider);
		}
		*/

		static ::RPG::GameCore::BigFixPoint op_Division_2(::RPG::GameCore::BigFixPoint value, ::System::Int32 divider)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_DIVISION_2_OFFSET))(value, divider);
		}

		static ::RPG::GameCore::BigFixPoint op_Division_3(::RPG::GameCore::BigFixPoint value, ::System::Int64 divider)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_DIVISION_3_OFFSET))(value, divider);
		}

		static ::RPG::GameCore::BigFixPoint op_Addition(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_ADDITION_OFFSET))(value, other);
		}

		/*
		static ::RPG::GameCore::BigFixPoint op_Addition_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_ADDITION_1_OFFSET))(value, other);
		}
		*/

		static ::RPG::GameCore::BigFixPoint op_Subtraction(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_SUBTRACTION_OFFSET))(value, other);
		}

		/*
		static ::RPG::GameCore::BigFixPoint op_Subtraction_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_SUBTRACTION_1_OFFSET))(value, other);
		}
		*/

		static ::RPG::GameCore::BigFixPoint op_UnaryNegation(::RPG::GameCore::BigFixPoint value)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_UNARYNEGATION_OFFSET))(value);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::BigFixPoint left, ::RPG::GameCore::BigFixPoint right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_OFFSET))(left, right);
		}

		/*
		static ::System::Boolean op_Equality_1(::RPG::GameCore::BigFixPoint left, ::RPG::GameCore::FixPoint right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_1_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Equality_2(::RPG::GameCore::FixPoint left, ::RPG::GameCore::BigFixPoint right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_2_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Equality_3(::RPG::GameCore::BigFixPoint left, ::RPG::GameCore::FixPointWithMultiplier right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_3_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Equality_4(::RPG::GameCore::FixPointWithMultiplier left, ::RPG::GameCore::BigFixPoint right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_EQUALITY_4_OFFSET))(left, right);
		}
		*/

		static ::System::Boolean op_Inequality(::RPG::GameCore::BigFixPoint left, ::RPG::GameCore::BigFixPoint right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_OFFSET))(left, right);
		}

		/*
		static ::System::Boolean op_Inequality_1(::RPG::GameCore::BigFixPoint left, ::RPG::GameCore::FixPoint right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_1_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Inequality_2(::RPG::GameCore::FixPoint left, ::RPG::GameCore::BigFixPoint right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_2_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Inequality_3(::RPG::GameCore::BigFixPoint left, ::RPG::GameCore::FixPointWithMultiplier right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_3_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Inequality_4(::RPG::GameCore::FixPointWithMultiplier left, ::RPG::GameCore::BigFixPoint right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_INEQUALITY_4_OFFSET))(left, right);
		}
		*/

		static ::System::Boolean op_GreaterThan(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_OFFSET))(value, other);
		}

		/*
		static ::System::Boolean op_GreaterThan_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_1_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThan_2(::RPG::GameCore::FixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_2_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThan_3(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPointWithMultiplier other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_3_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThan_4(::RPG::GameCore::FixPointWithMultiplier value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHAN_4_OFFSET))(value, other);
		}
		*/

		static ::System::Boolean op_LessThan(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_OFFSET))(value, other);
		}

		/*
		static ::System::Boolean op_LessThan_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_1_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_LessThan_2(::RPG::GameCore::FixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_2_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_LessThan_3(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPointWithMultiplier other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_3_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_LessThan_4(::RPG::GameCore::FixPointWithMultiplier value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHAN_4_OFFSET))(value, other);
		}
		*/

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_OFFSET))(value, other);
		}

		/*
		static ::System::Boolean op_GreaterThanOrEqual_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_1_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThanOrEqual_2(::RPG::GameCore::FixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_2_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThanOrEqual_3(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPointWithMultiplier other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_3_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThanOrEqual_4(::RPG::GameCore::FixPointWithMultiplier value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_GREATERTHANOREQUAL_4_OFFSET))(value, other);
		}
		*/

		static ::System::Boolean op_LessThanOrEqual(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_OFFSET))(value, other);
		}

		/*
		static ::System::Boolean op_LessThanOrEqual_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_1_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_LessThanOrEqual_2(::RPG::GameCore::FixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_2_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_LessThanOrEqual_3(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPointWithMultiplier other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_3_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Boolean op_LessThanOrEqual_4(::RPG::GameCore::FixPointWithMultiplier value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPointWithMultiplier, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_LESSTHANOREQUAL_4_OFFSET))(value, other);
		}
		*/

		/*
		static ::System::Decimal op_Explicit(::RPG::GameCore::BigFixPoint value)
		{
			return ((::System::Decimal(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_EXPLICIT_OFFSET))(value);
		}
		*/

		static ::System::Double op_Explicit_1(::RPG::GameCore::BigFixPoint value)
		{
			return ((::System::Double(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_EXPLICIT_1_OFFSET))(value);
		}

		/*
		static ::RPG::GameCore::BigFixPoint op_Implicit(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_IMPLICIT_OFFSET))(value);
		}
		*/

		static ::RPG::GameCore::BigFixPoint op_Implicit_1(::System::Int32 value)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::RPG::GameCore::BigFixPoint op_Implicit_2(::System::Int64 value)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::RPG::GameCore::BigFixPoint Abs(::RPG::GameCore::BigFixPoint value)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_ABS_OFFSET))(value);
		}

		static ::RPG::GameCore::BigFixPoint Max(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_MAX_OFFSET))(value, other);
		}

		/*
		static ::RPG::GameCore::BigFixPoint Max_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_MAX_1_OFFSET))(value, other);
		}
		*/

		/*
		static ::RPG::GameCore::BigFixPoint Max_2(::RPG::GameCore::FixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_MAX_2_OFFSET))(value, other);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Min(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_MIN_OFFSET))(value, other);
		}

		/*
		static ::RPG::GameCore::BigFixPoint Min_1(::RPG::GameCore::BigFixPoint value, ::RPG::GameCore::FixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_MIN_1_OFFSET))(value, other);
		}
		*/

		/*
		static ::RPG::GameCore::BigFixPoint Min_2(::RPG::GameCore::FixPoint value, ::RPG::GameCore::BigFixPoint other)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_MIN_2_OFFSET))(value, other);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Clamp(::RPG::GameCore::BigFixPoint val, ::RPG::GameCore::BigFixPoint min, ::RPG::GameCore::BigFixPoint max)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_CLAMP_OFFSET))(val, min, max);
		}

		/*
		static ::RPG::GameCore::FixPoint Clamp_1(::RPG::GameCore::BigFixPoint val, ::RPG::GameCore::FixPoint min, ::RPG::GameCore::FixPoint max)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_CLAMP_1_OFFSET))(val, min, max);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Clamp01(::RPG::GameCore::BigFixPoint val)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_CLAMP01_OFFSET))(val);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Floor(::RPG::GameCore::BigFixPoint value)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_FLOOR_OFFSET))(value);
		}

		static ::RPG::GameCore::BigFixPoint Ceiling(::RPG::GameCore::BigFixPoint value)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_CEILING_OFFSET))(value);
		}

		static ::RPG::GameCore::BigFixPoint Round(::RPG::GameCore::BigFixPoint value)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_ROUND_OFFSET))(value);
		}

		static ::System::Boolean Approximately(::RPG::GameCore::BigFixPoint a, ::RPG::GameCore::BigFixPoint b)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::System::Boolean IsAlmostZero(::RPG::GameCore::BigFixPoint a)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_ISALMOSTZERO_OFFSET))(a);
		}

		::System::Int32 CompareTo(::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_COMPARETO_OFFSET))(this, other);
		}

		/*
		::System::Int32 CompareTo_1(::RPG::GameCore::FixPoint other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_COMPARETO_1_OFFSET))(this, other);
		}
		*/

		/*
		::System::Int32 CompareTo_2(::RPG::GameCore::FixPointWithMultiplier other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPointWithMultiplier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_COMPARETO_2_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals(::RPG::GameCore::BigFixPoint other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_EQUALS_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_TOSTRING_1_OFFSET))(this, format);
		}

		/*
		::RPG::GameCore::FixPoint ClampToFixPoint()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_CLAMPTOFIXPOINT_OFFSET))(this);
		}
		*/

		/*
		::RPG::GameCore::FixPoint ClampToFixPoint_1(::System::Boolean& isOverflow)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_CLAMPTOFIXPOINT_1_OFFSET))(this, isOverflow);
		}
		*/

		/*
		::System::Void ClampToFixPointWithMultiplier(::RPG::GameCore::FixPoint& fixVal, ::RPG::GameCore::FixPoint& multiplier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_CLAMPTOFIXPOINTWITHMULTIPLIER_OFFSET))(this, fixVal, multiplier);
		}
		*/

		/*
		::RPG::GameCore::FixPointWithMultiplier ClampToFixPointWithMultiplier_1()
		{
			return ((::RPG::GameCore::FixPointWithMultiplier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_CLAMPTOFIXPOINTWITHMULTIPLIER_1_OFFSET))(this);
		}
		*/

		/*
		static ::RPG::GameCore::BigFixPoint FromMultiply(::RPG::GameCore::FixPoint fixVal, ::RPG::GameCore::FixPoint multiplier)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_FROMMULTIPLY_OFFSET))(fixVal, multiplier);
		}
		*/

		::System::Boolean IsOverflowForFixPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_ISOVERFLOWFORFIXPOINT_OFFSET))(this);
		}
	};
}
