#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR3INT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204E4E0)
#define UNITYENGINE_VECTOR3INT_EQUALS_OFFSET UNITYSDK_OFFSET(0x204E4A0)
#define UNITYENGINE_VECTOR3INT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204E510)
#define UNITYENGINE_VECTOR3INT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x204E480)
#define UNITYENGINE_VECTOR3INT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1824A180)
#define UNITYENGINE_VECTOR3INT_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1824A140)
#define UNITYENGINE_VECTOR3INT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1824A1A0)
#define UNITYENGINE_VECTOR3INT_GET_UP_OFFSET UNITYSDK_OFFSET(0x1824A160)
#define UNITYENGINE_VECTOR3INT_GET_X_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_VECTOR3INT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1DAE0)
#define UNITYENGINE_VECTOR3INT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1824A120)
#define UNITYENGINE_VECTOR3INT_GET_Z_OFFSET UNITYSDK_OFFSET(0xD240)
#define UNITYENGINE_VECTOR3INT_MAX_OFFSET UNITYSDK_OFFSET(0x18249CB0)
#define UNITYENGINE_VECTOR3INT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x18249D10)
#define UNITYENGINE_VECTOR3INT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18249DA0)
#define UNITYENGINE_VECTOR3INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18249CF0)
#define UNITYENGINE_VECTOR3INT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18249DC0)
#define UNITYENGINE_VECTOR3INT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18249D70)
#define UNITYENGINE_VECTOR3INT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x18249D30)
#define UNITYENGINE_VECTOR3INT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x18249D50)
#define UNITYENGINE_VECTOR3INT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x204E490)
#define UNITYENGINE_VECTOR3INT_SET_OFFSET UNITYSDK_OFFSET(0xC9EC0)
#define UNITYENGINE_VECTOR3INT_SET_X_OFFSET UNITYSDK_OFFSET(0x29250)
#define UNITYENGINE_VECTOR3INT_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_VECTOR3INT_SET_Z_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_VECTOR3INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204E540)
#define UNITYENGINE_VECTOR3INT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1824A1C0)
#define UNITYENGINE_VECTOR3INT__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EC0)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector3Int_TypeDefinitionIndex = 4017;

	struct alignas(4) Vector3Int
	{
		static ::UnityEngine::Vector3Int* StaticGet_s_Left()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x68B0);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_Up()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x68BC);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_Zero()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x68C8);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_Down()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x68D4);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_One()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x68E0);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_Right()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x68EC);
		}
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14
		::System::Int32 m_Z; // 0x18

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT__CTOR_OFFSET))(this, x, y, z);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT__CCTOR_OFFSET))();
		}

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_X_OFFSET))(this, value);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_Y_OFFSET))(this, value);
		}

		::System::Int32 get_z()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_Z_OFFSET))(this, value);
		}

		::System::Void Set(::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_OFFSET))(this, x, y, z);
		}

		::System::Int32 get_Item(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::UnityEngine::Vector3Int Max(::UnityEngine::Vector3Int lhs, ::UnityEngine::Vector3Int rhs)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_MAX_OFFSET))(lhs, rhs);
		}

		/*
		static ::UnityEngine::Vector3 op_Implicit(::UnityEngine::Vector3Int v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		static ::UnityEngine::Vector3Int op_Addition(::UnityEngine::Vector3Int a, ::UnityEngine::Vector3Int b)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3Int op_Subtraction(::UnityEngine::Vector3Int a, ::UnityEngine::Vector3Int b)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3Int op_UnaryNegation(::UnityEngine::Vector3Int a)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::UnityEngine::Vector3Int op_Multiply(::UnityEngine::Vector3Int a, ::System::Int32 b)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector3Int lhs, ::UnityEngine::Vector3Int rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector3Int lhs, ::UnityEngine::Vector3Int rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector3Int other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::Vector3Int get_zero()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Vector3Int get_one()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_ONE_OFFSET))();
		}

		static ::UnityEngine::Vector3Int get_up()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_UP_OFFSET))();
		}

		static ::UnityEngine::Vector3Int get_left()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_LEFT_OFFSET))();
		}

		static ::UnityEngine::Vector3Int get_right()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_RIGHT_OFFSET))();
		}
	};
}
