#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXVEC2_ANGLE_OFFSET UNITYSDK_OFFSET(0x172315E0)
#define RPG_GAMECORE_FIXVEC2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x17232270)
#define RPG_GAMECORE_FIXVEC2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x17232120)
#define RPG_GAMECORE_FIXVEC2_DOT_OFFSET UNITYSDK_OFFSET(0x172311F0)
#define RPG_GAMECORE_FIXVEC2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201BB10)
#define RPG_GAMECORE_FIXVEC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x201BAE0)
#define RPG_GAMECORE_FIXVEC2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201BAC0)
#define RPG_GAMECORE_FIXVEC2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x172330F0)
#define RPG_GAMECORE_FIXVEC2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x201B710)
#define RPG_GAMECORE_FIXVEC2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x17233100)
#define RPG_GAMECORE_FIXVEC2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x201BB30)
#define RPG_GAMECORE_FIXVEC2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x201B9F0)
#define RPG_GAMECORE_FIXVEC2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x172330D0)
#define RPG_GAMECORE_FIXVEC2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x17233110)
#define RPG_GAMECORE_FIXVEC2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x201BC30)
#define RPG_GAMECORE_FIXVEC2_GET_UP_OFFSET UNITYSDK_OFFSET(0x172330E0)
#define RPG_GAMECORE_FIXVEC2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x172330C0)
#define RPG_GAMECORE_FIXVEC2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1722FD40)
#define RPG_GAMECORE_FIXVEC2_LERP_OFFSET UNITYSDK_OFFSET(0x1722FA50)
#define RPG_GAMECORE_FIXVEC2_MAX_OFFSET UNITYSDK_OFFSET(0x17232870)
#define RPG_GAMECORE_FIXVEC2_MIN_OFFSET UNITYSDK_OFFSET(0x17232840)
#define RPG_GAMECORE_FIXVEC2_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x17230060)
#define RPG_GAMECORE_FIXVEC2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x201B9E0)
#define RPG_GAMECORE_FIXVEC2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x172328A0)
#define RPG_GAMECORE_FIXVEC2_OP_DIVISION_1_OFFSET UNITYSDK_OFFSET(0x17233010)
#define RPG_GAMECORE_FIXVEC2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x17232B60)
#define RPG_GAMECORE_FIXVEC2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17233050)
#define RPG_GAMECORE_FIXVEC2_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x172331C0)
#define RPG_GAMECORE_FIXVEC2_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x17233150)
#define RPG_GAMECORE_FIXVEC2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x172330A0)
#define RPG_GAMECORE_FIXVEC2_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x17233120)
#define RPG_GAMECORE_FIXVEC2_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x17233190)
#define RPG_GAMECORE_FIXVEC2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17233090)
#define RPG_GAMECORE_FIXVEC2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17233070)
#define RPG_GAMECORE_FIXVEC2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x17232BF0)
#define RPG_GAMECORE_FIXVEC2_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x17232E00)
#define RPG_GAMECORE_FIXVEC2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x17232980)
#define RPG_GAMECORE_FIXVEC2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x17232920)
#define RPG_GAMECORE_FIXVEC2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x17232BB0)
#define RPG_GAMECORE_FIXVEC2_PERPENDICULAR_OFFSET UNITYSDK_OFFSET(0x172311B0)
#define RPG_GAMECORE_FIXVEC2_REFLECT_OFFSET UNITYSDK_OFFSET(0x17230CC0)
#define RPG_GAMECORE_FIXVEC2_SCALE_1_OFFSET UNITYSDK_OFFSET(0x201B810)
#define RPG_GAMECORE_FIXVEC2_SCALE_OFFSET UNITYSDK_OFFSET(0x17230530)
#define RPG_GAMECORE_FIXVEC2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x201B790)
#define RPG_GAMECORE_FIXVEC2_SET_OFFSET UNITYSDK_OFFSET(0xC7E20)
#define RPG_GAMECORE_FIXVEC2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x172319D0)
#define RPG_GAMECORE_FIXVEC2_SQRMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x201BC30)
#define RPG_GAMECORE_FIXVEC2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x17232640)
#define RPG_GAMECORE_FIXVEC2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201BA20)
#define RPG_GAMECORE_FIXVEC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17233200)
#define RPG_GAMECORE_FIXVEC2__CTOR_OFFSET UNITYSDK_OFFSET(0xC7E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixVec2_TypeDefinitionIndex = 8829;

	struct alignas(8) FixVec2
	{
		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonNormalSqrt()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x61C0);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x61C8);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_rightVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x61D8);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_leftVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x61E8);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_downVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x61F8);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_oneVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x6208);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_upVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x6218);
		}
		::RPG::GameCore::FixPoint x; // 0x10
		::RPG::GameCore::FixPoint y; // 0x18

		::System::Void _ctor(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2__CTOR_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2__CCTOR_OFFSET))();
		}

		::RPG::GameCore::FixPoint get_Item(::System::Int32 index)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Set(::RPG::GameCore::FixPoint newX, ::RPG::GameCore::FixPoint newY)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SET_OFFSET))(this, newX, newY);
		}

		static ::RPG::GameCore::FixVec2 Lerp(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixVec2 b, ::RPG::GameCore::FixPoint t)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_LERP_OFFSET))(a, b, t);
		}

		static ::RPG::GameCore::FixVec2 LerpUnclamped(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixVec2 b, ::RPG::GameCore::FixPoint t)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::RPG::GameCore::FixVec2 MoveTowards(::RPG::GameCore::FixVec2 current, ::RPG::GameCore::FixVec2 target, ::RPG::GameCore::FixPoint maxDistanceDelta)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_MOVETOWARDS_OFFSET))(current, target, maxDistanceDelta);
		}

		static ::RPG::GameCore::FixVec2 Scale(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixVec2 b)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SCALE_OFFSET))(a, b);
		}

		::System::Void Scale_1(::RPG::GameCore::FixVec2 scale)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SCALE_1_OFFSET))(this, scale);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_NORMALIZE_OFFSET))(this);
		}

		::RPG::GameCore::FixVec2 get_normalized()
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_NORMALIZED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::RPG::GameCore::FixVec2 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EQUALS_1_OFFSET))(this, other);
		}

		static ::RPG::GameCore::FixVec2 Reflect(::RPG::GameCore::FixVec2 inDirection, ::RPG::GameCore::FixVec2 inNormal)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_REFLECT_OFFSET))(inDirection, inNormal);
		}

		static ::RPG::GameCore::FixVec2 Perpendicular(::RPG::GameCore::FixVec2 inDirection)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_PERPENDICULAR_OFFSET))(inDirection);
		}

		static ::RPG::GameCore::FixPoint Dot(::RPG::GameCore::FixVec2 lhs, ::RPG::GameCore::FixVec2 rhs)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_DOT_OFFSET))(lhs, rhs);
		}

		::RPG::GameCore::FixPoint get_magnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_MAGNITUDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_sqrMagnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint Angle(::RPG::GameCore::FixVec2 from, ::RPG::GameCore::FixVec2 to)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_ANGLE_OFFSET))(from, to);
		}

		static ::RPG::GameCore::FixPoint SignedAngle(::RPG::GameCore::FixVec2 from, ::RPG::GameCore::FixVec2 to)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SIGNEDANGLE_OFFSET))(from, to);
		}

		static ::RPG::GameCore::FixPoint Distance(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixVec2 b)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_DISTANCE_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixVec2 ClampMagnitude(::RPG::GameCore::FixVec2 vector, ::RPG::GameCore::FixPoint maxLength)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_CLAMPMAGNITUDE_OFFSET))(vector, maxLength);
		}

		static ::RPG::GameCore::FixPoint SqrMagnitude(::RPG::GameCore::FixVec2 a)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SQRMAGNITUDE_OFFSET))(a);
		}

		::RPG::GameCore::FixPoint SqrMagnitude_1()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SQRMAGNITUDE_1_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec2 Min(::RPG::GameCore::FixVec2 lhs, ::RPG::GameCore::FixVec2 rhs)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_MIN_OFFSET))(lhs, rhs);
		}

		static ::RPG::GameCore::FixVec2 Max(::RPG::GameCore::FixVec2 lhs, ::RPG::GameCore::FixVec2 rhs)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_MAX_OFFSET))(lhs, rhs);
		}

		static ::RPG::GameCore::FixVec2 op_Addition(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixVec2 b)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_ADDITION_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixVec2 op_Subtraction(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixVec2 b)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixVec2 op_Multiply(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixVec2 b)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixVec2 op_Division(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixVec2 b)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_DIVISION_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixVec2 op_UnaryNegation(::RPG::GameCore::FixVec2 a)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::RPG::GameCore::FixVec2 op_Multiply_1(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixPoint d)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_MULTIPLY_1_OFFSET))(a, d);
		}

		static ::RPG::GameCore::FixVec2 op_Multiply_2(::RPG::GameCore::FixPoint d, ::RPG::GameCore::FixVec2 a)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_MULTIPLY_2_OFFSET))(d, a);
		}

		static ::RPG::GameCore::FixVec2 op_Division_1(::RPG::GameCore::FixVec2 a, ::RPG::GameCore::FixPoint d)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_DIVISION_1_OFFSET))(a, d);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::FixVec2 lhs, ::RPG::GameCore::FixVec2 rhs)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::FixVec2 lhs, ::RPG::GameCore::FixVec2 rhs)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::RPG::GameCore::FixVec2 op_Implicit(::RPG::GameCore::FixVec3 v)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec3 op_Implicit_1(::RPG::GameCore::FixVec2 v)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		static ::RPG::GameCore::FixVec2 get_zero()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ZERO_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_one()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ONE_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_up()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_UP_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_down()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_DOWN_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_left()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_LEFT_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_right()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_RIGHT_OFFSET))();
		}

		/*
		static ::RPG::MVector2 op_Implicit_2(::RPG::GameCore::FixVec2 vec)
		{
			return ((::RPG::MVector2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_IMPLICIT_2_OFFSET))(vec);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 op_Explicit(::RPG::MVector2 vec)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_EXPLICIT_OFFSET))(vec);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Implicit_3(::RPG::GameCore::FixVec2 vec)
		{
			return ((::UnityEngine::Vector2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_IMPLICIT_3_OFFSET))(vec);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 op_Explicit_1(::UnityEngine::Vector2 vec)
		{
			return ((::RPG::GameCore::FixVec2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_OP_EXPLICIT_1_OFFSET))(vec);
		}
		*/
	};
}
