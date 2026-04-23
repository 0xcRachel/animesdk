#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR2INT_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x1A560160)
#define UNITYENGINE_VECTOR2INT_CLAMP_OFFSET UNITYSDK_OFFSET(0x23877F0)
#define UNITYENGINE_VECTOR2INT_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1A55FFC0)
#define UNITYENGINE_VECTOR2INT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2260940)
#define UNITYENGINE_VECTOR2INT_EQUALS_OFFSET UNITYSDK_OFFSET(0x2387830)
#define UNITYENGINE_VECTOR2INT_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x1A560120)
#define UNITYENGINE_VECTOR2INT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2256990)
#define UNITYENGINE_VECTOR2INT_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1A5606B0)
#define UNITYENGINE_VECTOR2INT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2387770)
#define UNITYENGINE_VECTOR2INT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1A5606C0)
#define UNITYENGINE_VECTOR2INT_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x2387790)
#define UNITYENGINE_VECTOR2INT_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1A560690)
#define UNITYENGINE_VECTOR2INT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1A5606D0)
#define UNITYENGINE_VECTOR2INT_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x23877C0)
#define UNITYENGINE_VECTOR2INT_GET_UP_OFFSET UNITYSDK_OFFSET(0x1A5606A0)
#define UNITYENGINE_VECTOR2INT_GET_X_OFFSET UNITYSDK_OFFSET(0x608A20)
#define UNITYENGINE_VECTOR2INT_GET_Y_OFFSET UNITYSDK_OFFSET(0x608600)
#define UNITYENGINE_VECTOR2INT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1A560680)
#define UNITYENGINE_VECTOR2INT_MAX_OFFSET UNITYSDK_OFFSET(0x1A560030)
#define UNITYENGINE_VECTOR2INT_MIN_OFFSET UNITYSDK_OFFSET(0x1A560000)
#define UNITYENGINE_VECTOR2INT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1A560330)
#define UNITYENGINE_VECTOR2INT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1A5603D0)
#define UNITYENGINE_VECTOR2INT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A560400)
#define UNITYENGINE_VECTOR2INT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1A560100)
#define UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A5600E0)
#define UNITYENGINE_VECTOR2INT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A560410)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1A560390)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1A5603B0)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1A560370)
#define UNITYENGINE_VECTOR2INT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1A560350)
#define UNITYENGINE_VECTOR2INT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1A560310)
#define UNITYENGINE_VECTOR2INT_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x1A5601A0)
#define UNITYENGINE_VECTOR2INT_SCALE_1_OFFSET UNITYSDK_OFFSET(0x23877D0)
#define UNITYENGINE_VECTOR2INT_SCALE_OFFSET UNITYSDK_OFFSET(0x1A560060)
#define UNITYENGINE_VECTOR2INT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x2387780)
#define UNITYENGINE_VECTOR2INT_SET_OFFSET UNITYSDK_OFFSET(0x6179C0)
#define UNITYENGINE_VECTOR2INT_SET_X_OFFSET UNITYSDK_OFFSET(0x6326D0)
#define UNITYENGINE_VECTOR2INT_SET_Y_OFFSET UNITYSDK_OFFSET(0x878E70)
#define UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2387860)
#define UNITYENGINE_VECTOR2INT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5606E0)
#define UNITYENGINE_VECTOR2INT__CTOR_OFFSET UNITYSDK_OFFSET(0x6179C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2Int_TypeDefinitionIndex = 4039;

	struct alignas(4) Vector2Int
	{
		static ::UnityEngine::Vector2Int* StaticGet_s_One()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6070);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Right()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6078);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Left()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6080);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Down()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6088);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Zero()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6090);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Up()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6098);
		}
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT__CTOR_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT__CCTOR_OFFSET))();
		}

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_X_OFFSET))(this, value);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_Y_OFFSET))(this, value);
		}

		::System::Void Set(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_OFFSET))(this, x, y);
		}

		::System::Int32 get_Item(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Int32 get_sqrMagnitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::System::Single Distance(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_DISTANCE_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int Min(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_MIN_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector2Int Max(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_MAX_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector2Int Scale(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SCALE_OFFSET))(a, b);
		}

		::System::Void Scale_1(::UnityEngine::Vector2Int scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SCALE_1_OFFSET))(this, scale);
		}

		::System::Void Clamp(::UnityEngine::Vector2Int min, ::UnityEngine::Vector2Int max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_CLAMP_OFFSET))(this, min, max);
		}

		/*
		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::Vector2Int v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector3Int op_Explicit(::UnityEngine::Vector2Int v)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector2Int FloorToInt(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_FLOORTOINT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector2Int CeilToInt(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_CEILTOINT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector2Int RoundToInt(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_ROUNDTOINT_OFFSET))(v);
		}
		*/

		static ::UnityEngine::Vector2Int op_UnaryNegation(::UnityEngine::Vector2Int v)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_UNARYNEGATION_OFFSET))(v);
		}

		static ::UnityEngine::Vector2Int op_Addition(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Subtraction(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Multiply(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Multiply_1(::System::Int32 a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::System::Int32, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_1_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Multiply_2(::UnityEngine::Vector2Int a, ::System::Int32 b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_2_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Division(::UnityEngine::Vector2Int a, ::System::Int32 b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_DIVISION_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector2Int other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::Vector2Int get_zero()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_one()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_ONE_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_up()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_UP_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_down()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_DOWN_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_left()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_LEFT_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_right()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_RIGHT_OFFSET))();
		}
	};
}
