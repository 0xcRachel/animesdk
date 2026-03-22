#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXPOINT_ABS_OFFSET UNITYSDK_OFFSET(0x17229270)
#define RPG_GAMECORE_FIXPOINT_ACOS_OFFSET UNITYSDK_OFFSET(0x1722B340)
#define RPG_GAMECORE_FIXPOINT_ADDOVERFLOWHELPER_OFFSET UNITYSDK_OFFSET(0x17229340)
#define RPG_GAMECORE_FIXPOINT_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1722D060)
#define RPG_GAMECORE_FIXPOINT_ATAN2_OFFSET UNITYSDK_OFFSET(0x1722BB40)
#define RPG_GAMECORE_FIXPOINT_ATAN_OFFSET UNITYSDK_OFFSET(0x1722B4C0)
#define RPG_GAMECORE_FIXPOINT_CEILING_OFFSET UNITYSDK_OFFSET(0x17227D80)
#define RPG_GAMECORE_FIXPOINT_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x1722D100)
#define RPG_GAMECORE_FIXPOINT_CLAMP01_OFFSET UNITYSDK_OFFSET(0x17227890)
#define RPG_GAMECORE_FIXPOINT_CLAMPFROMDECIMAL_OFFSET UNITYSDK_OFFSET(0x1722C5A0)
#define RPG_GAMECORE_FIXPOINT_CLAMPSINVALUE_OFFSET UNITYSDK_OFFSET(0x1722A650)
#define RPG_GAMECORE_FIXPOINT_CLAMP_OFFSET UNITYSDK_OFFSET(0x1722D0E0)
#define RPG_GAMECORE_FIXPOINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x200A540)
#define RPG_GAMECORE_FIXPOINT_COS_OFFSET UNITYSDK_OFFSET(0x1722B120)
#define RPG_GAMECORE_FIXPOINT_COUNTLEADINGZEROES_OFFSET UNITYSDK_OFFSET(0x17229390)
#define RPG_GAMECORE_FIXPOINT_CREATEFROMRAW_OFFSET UNITYSDK_OFFSET(0x17227650)
#define RPG_GAMECORE_FIXPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x149B4C0)
#define RPG_GAMECORE_FIXPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x201B340)
#define RPG_GAMECORE_FIXPOINT_FASTABS_OFFSET UNITYSDK_OFFSET(0x172292A0)
#define RPG_GAMECORE_FIXPOINT_FASTADD_OFFSET UNITYSDK_OFFSET(0x172292F0)
#define RPG_GAMECORE_FIXPOINT_FASTCOS_OFFSET UNITYSDK_OFFSET(0x1722B150)
#define RPG_GAMECORE_FIXPOINT_FASTMOD_OFFSET UNITYSDK_OFFSET(0x17229610)
#define RPG_GAMECORE_FIXPOINT_FASTMUL_OFFSET UNITYSDK_OFFSET(0x17229360)
#define RPG_GAMECORE_FIXPOINT_FASTSIN_OFFSET UNITYSDK_OFFSET(0x1722AB90)
#define RPG_GAMECORE_FIXPOINT_FASTSUB_OFFSET UNITYSDK_OFFSET(0x17229330)
#define RPG_GAMECORE_FIXPOINT_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x1722D150)
#define RPG_GAMECORE_FIXPOINT_FLOOR_OFFSET UNITYSDK_OFFSET(0x17227BA0)
#define RPG_GAMECORE_FIXPOINT_FRACTIONALPART_OFFSET UNITYSDK_OFFSET(0x172292E0)
#define RPG_GAMECORE_FIXPOINT_FROMRAW_OFFSET UNITYSDK_OFFSET(0x17229960)
#define RPG_GAMECORE_FIXPOINT_GENERATESINLUT_OFFSET UNITYSDK_OFFSET(0x1722C770)
#define RPG_GAMECORE_FIXPOINT_GENERATETANLUT_OFFSET UNITYSDK_OFFSET(0x1722CAC0)
#define RPG_GAMECORE_FIXPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD97D0)
#define RPG_GAMECORE_FIXPOINT_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x5580)
#define RPG_GAMECORE_FIXPOINT_ISALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x1722D0B0)
#define RPG_GAMECORE_FIXPOINT_LN_OFFSET UNITYSDK_OFFSET(0x17229A90)
#define RPG_GAMECORE_FIXPOINT_LOG2_OFFSET UNITYSDK_OFFSET(0x17229970)
#define RPG_GAMECORE_FIXPOINT_MAX_OFFSET UNITYSDK_OFFSET(0x1722D830)
#define RPG_GAMECORE_FIXPOINT_MIN_OFFSET UNITYSDK_OFFSET(0x1722D840)
#define RPG_GAMECORE_FIXPOINT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x17229020)
#define RPG_GAMECORE_FIXPOINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x172292B0)
#define RPG_GAMECORE_FIXPOINT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x172293E0)
#define RPG_GAMECORE_FIXPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17225580)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17229950)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1722C470)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1722C480)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1722C490)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1722C4A0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1722C3C0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1722C4B0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1722C4C0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1722C460)
#define RPG_GAMECORE_FIXPOINT_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17229680)
#define RPG_GAMECORE_FIXPOINT_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x17229660)
#define RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1722D050)
#define RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17229940)
#define RPG_GAMECORE_FIXPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17229650)
#define RPG_GAMECORE_FIXPOINT_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17229690)
#define RPG_GAMECORE_FIXPOINT_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x17229670)
#define RPG_GAMECORE_FIXPOINT_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x172295D0)
#define RPG_GAMECORE_FIXPOINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x17228680)
#define RPG_GAMECORE_FIXPOINT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x17229300)
#define RPG_GAMECORE_FIXPOINT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x17229630)
#define RPG_GAMECORE_FIXPOINT_PARSE_OFFSET UNITYSDK_OFFSET(0x1722D310)
#define RPG_GAMECORE_FIXPOINT_POW2_OFFSET UNITYSDK_OFFSET(0x172296A0)
#define RPG_GAMECORE_FIXPOINT_POW_OFFSET UNITYSDK_OFFSET(0x17229AD0)
#define RPG_GAMECORE_FIXPOINT_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x1722D160)
#define RPG_GAMECORE_FIXPOINT_ROUND_1_OFFSET UNITYSDK_OFFSET(0x1722D1C0)
#define RPG_GAMECORE_FIXPOINT_ROUND_OFFSET UNITYSDK_OFFSET(0x17227FB0)
#define RPG_GAMECORE_FIXPOINT_SIGN_OFFSET UNITYSDK_OFFSET(0x17229250)
#define RPG_GAMECORE_FIXPOINT_SIN_OFFSET UNITYSDK_OFFSET(0x17229F90)
#define RPG_GAMECORE_FIXPOINT_SQRT_OFFSET UNITYSDK_OFFSET(0x17229C40)
#define RPG_GAMECORE_FIXPOINT_TAN_OFFSET UNITYSDK_OFFSET(0x1722B180)
#define RPG_GAMECORE_FIXPOINT_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x201B380)
#define RPG_GAMECORE_FIXPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201B360)
#define RPG_GAMECORE_FIXPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1722D850)
#define RPG_GAMECORE_FIXPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x201B370)
#define RPG_GAMECORE_FIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPoint_TypeDefinitionIndex = 8826;

	struct alignas(8) FixPoint
	{
		static ::Il2CppArray<::System::Int64>** StaticGet_SinLut()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x4340);
		}
		static ::Il2CppArray<::System::Int64>** StaticGet_TanLut()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x4348);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_One()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1110);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Epsilon()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1118);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_s_FixEpsilon()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1120);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Log2Max()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1128);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Ln2()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1130);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_MinValue()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1138);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Rad2Deg()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1140);
		}
		static ::System::Decimal* StaticGet_Precision()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1148);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiOver2()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1158);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiOver2Inv()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1160);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Pi()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1168);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_MaxValue()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1170);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiTimes2()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1178);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Deg2Rad()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1180);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Log2Min()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1188);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_LutInterval()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1190);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_InvalidFixPoint()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x1198);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiInv()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x11A0);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Zero()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x11A8);
		}
		// static const ::System::Int64 MAX_VALUE = 0x7FFFFFFFFFFFFFFF; // 0x0
		// static const ::System::Int64 MIN_VALUE = 0x8000000000000000; // 0x0
		// static const ::System::Int32 NUM_BITS = 0x40; // 0x0
		// static const ::System::Int32 FRACTIONAL_SLIDE = 0x0; // 0x0
		// static const ::System::Int32 FRACTIONAL_PLACES = 0x20; // 0x0
		// static const ::System::Int64 ONE = 0x100000000; // 0x0
		// static const ::System::Int64 PI_TIMES_2 = 0x6487ED511; // 0x0
		// static const ::System::Int64 PI = 0x3243F6A88; // 0x0
		// static const ::System::Int64 PI_OVER_2 = 0x1921FB544; // 0x0
		// static const ::System::Int64 LN2 = 0xB17217F7; // 0x0
		// static const ::System::Int64 LOG2MAX = 0x1F00000000; // 0x0
		// static const ::System::Int64 LOG2MIN = 0xFFFFFFE000000000; // 0x0
		// static const ::System::Int64 EPSILON = 0x1000; // 0x0
		// static const ::System::Int32 LUT_SIZE = 0x3243; // 0x0
		// static const ::System::Int64 FRACTIONAL_CUT = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt64 INTEGER_CUT = 0xFFFFFFFF00000000; // 0x0
		::System::Int64 m_rawValue; // 0x10

		::System::Void _ctor(::System::Int64 rawValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__CTOR_OFFSET))(this, rawValue);
		}

		::System::Void _ctor_1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__CCTOR_OFFSET))();
		}

		static ::System::Int32 Sign(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SIGN_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint Abs(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ABS_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint FastAbs(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTABS_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint Floor(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOOR_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint Ceiling(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILING_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint Round(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUND_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint FractionalPart(::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FRACTIONALPART_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint op_Addition(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_ADDITION_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint FastAdd(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTADD_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint op_Subtraction(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint FastSub(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTSUB_OFFSET))(x, y);
		}

		static ::System::Int64 AddOverflowHelper(::System::Int64 x, ::System::Int64 y, ::System::Boolean& overflow)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ADDOVERFLOWHELPER_OFFSET))(x, y, overflow);
		}

		static ::RPG::GameCore::FixPoint op_Multiply(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint Multiply(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y, ::System::Boolean& isOverflow)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MULTIPLY_OFFSET))(x, y, isOverflow);
		}

		static ::RPG::GameCore::FixPoint FastMul(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMUL_OFFSET))(x, y);
		}

		static ::System::Int32 CountLeadingZeroes(::System::UInt64 x)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COUNTLEADINGZEROES_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint op_Division(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_DIVISION_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint op_Modulus(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_MODULUS_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint FastMod(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMOD_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint op_UnaryNegation(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_UNARYNEGATION_OFFSET))(x);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EQUALITY_OFFSET))(x, y);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_INEQUALITY_OFFSET))(x, y);
		}

		static ::System::Boolean op_GreaterThan(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_GREATERTHAN_OFFSET))(x, y);
		}

		static ::System::Boolean op_LessThan(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_LESSTHAN_OFFSET))(x, y);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_GREATERTHANOREQUAL_OFFSET))(x, y);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_LESSTHANOREQUAL_OFFSET))(x, y);
		}

		static ::RPG::GameCore::FixPoint Pow2(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_POW2_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Log2(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LOG2_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Ln(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LN_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Pow(::RPG::GameCore::FixPoint b, ::RPG::GameCore::FixPoint exp)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_POW_OFFSET))(b, exp);
		}

		static ::RPG::GameCore::FixPoint Sqrt(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SQRT_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Sin(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SIN_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint FastSin(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTSIN_OFFSET))(x);
		}

		static ::System::Int64 ClampSinValue(::System::Int64 angle, ::System::Boolean& flipHorizontal, ::System::Boolean& flipVertical)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMPSINVALUE_OFFSET))(angle, flipHorizontal, flipVertical);
		}

		static ::RPG::GameCore::FixPoint Cos(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COS_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint FastCos(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTCOS_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Tan(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TAN_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Acos(::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ACOS_OFFSET))(x);
		}

		static ::RPG::GameCore::FixPoint Atan(::RPG::GameCore::FixPoint z)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ATAN_OFFSET))(z);
		}

		static ::RPG::GameCore::FixPoint Atan2(::RPG::GameCore::FixPoint y, ::RPG::GameCore::FixPoint x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ATAN2_OFFSET))(y, x);
		}

		static ::RPG::GameCore::FixPoint op_Explicit(::System::Int64 value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_OFFSET))(value);
		}

		static ::System::Int64 op_Explicit_1(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_1_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint op_Explicit_2(::System::Single value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_2_OFFSET))(value);
		}

		static ::System::Single op_Explicit_3(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Single(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_3_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint op_Explicit_4(::System::Double value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Double))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_4_OFFSET))(value);
		}

		static ::System::Double op_Explicit_5(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Double(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_5_OFFSET))(value);
		}

		static ::RPG::GameCore::FixPoint op_Explicit_6(::System::Decimal value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_6_OFFSET))(value);
		}

		static ::System::UInt32 op_Explicit_7(::RPG::GameCore::FixPoint value)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_7_OFFSET))(value);
		}

		static ::System::Decimal op_Explicit_8(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Decimal(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_8_OFFSET))(value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::GameCore::FixPoint other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 CompareTo(::RPG::GameCore::FixPoint other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COMPARETO_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSTRING_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint ClampFromDecimal(::System::Decimal val)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMPFROMDECIMAL_OFFSET))(val);
		}

		static ::RPG::GameCore::FixPoint FromRaw(::System::Int64 rawValue)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FROMRAW_OFFSET))(rawValue);
		}

		static ::System::Void GenerateSinLut(::System::String* filePath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GENERATESINLUT_OFFSET))(filePath);
		}

		static ::System::Void GenerateTanLut(::System::String* filePath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GENERATETANLUT_OFFSET))(filePath);
		}

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_RAWVALUE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint CreateFromRaw(::System::Int64 rawValue)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEFROMRAW_OFFSET))(rawValue);
		}

		::System::Single ToFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOFLOAT_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint op_Implicit(::System::Int32 i)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_OFFSET))(i);
		}

		static ::RPG::GameCore::FixPoint op_Implicit_1(::System::UInt32 u)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_1_OFFSET))(u);
		}

		static ::System::Boolean Approximately(::RPG::GameCore::FixPoint a, ::RPG::GameCore::FixPoint b)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::System::Boolean IsAlmostZero(::RPG::GameCore::FixPoint a)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ISALMOSTZERO_OFFSET))(a);
		}

		static ::RPG::GameCore::FixPoint Clamp(::RPG::GameCore::FixPoint val, ::RPG::GameCore::FixPoint min, ::RPG::GameCore::FixPoint max)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMP_OFFSET))(val, min, max);
		}

		static ::RPG::GameCore::FixPoint Clamp01(::RPG::GameCore::FixPoint f)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMP01_OFFSET))(f);
		}

		static ::System::Int32 CeilToInt(::RPG::GameCore::FixPoint f)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILTOINT_OFFSET))(f);
		}

		static ::System::Int32 FloorToInt(::RPG::GameCore::FixPoint f)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOORTOINT_OFFSET))(f);
		}

		static ::System::Int32 RoundToInt(::RPG::GameCore::FixPoint f)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUNDTOINT_OFFSET))(f);
		}

		static ::RPG::GameCore::FixPoint Round_1(::RPG::GameCore::FixPoint value, ::System::Int32 numDigits)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUND_1_OFFSET))(value, numDigits);
		}

		static ::RPG::GameCore::FixPoint Parse(::System::String* s)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_PARSE_OFFSET))(s);
		}

		static ::RPG::GameCore::FixPoint Max(::RPG::GameCore::FixPoint a, ::RPG::GameCore::FixPoint b)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MAX_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixPoint Min(::RPG::GameCore::FixPoint a, ::RPG::GameCore::FixPoint b)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MIN_OFFSET))(a, b);
		}
	};
}
