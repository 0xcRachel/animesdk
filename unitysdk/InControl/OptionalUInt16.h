#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALUINT16_CLEAR_OFFSET UNITYSDK_OFFSET(0x20CD370)
#define INCONTROL_OPTIONALUINT16_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x15C16CB0)
#define INCONTROL_OPTIONALUINT16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20CD410)
#define INCONTROL_OPTIONALUINT16_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x20CD430)
#define INCONTROL_OPTIONALUINT16_EQUALS_OFFSET UNITYSDK_OFFSET(0x20CD960)
#define INCONTROL_OPTIONALUINT16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20CD450)
#define INCONTROL_OPTIONALUINT16_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x20CD380)
#define INCONTROL_OPTIONALUINT16_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x20CD390)
#define INCONTROL_OPTIONALUINT16_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x20CD070)
#define INCONTROL_OPTIONALUINT16_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x29C50)
#define INCONTROL_OPTIONALUINT16_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x20CD8F0)
#define INCONTROL_OPTIONALUINT16_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x15C16C70)
#define INCONTROL_OPTIONALUINT16_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15C16C30)
#define INCONTROL_OPTIONALUINT16_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x15C16D30)
#define INCONTROL_OPTIONALUINT16_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x15BC0400)
#define INCONTROL_OPTIONALUINT16_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x15C16C90)
#define INCONTROL_OPTIONALUINT16_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15C16C50)
#define INCONTROL_OPTIONALUINT16_SETVALUE_OFFSET UNITYSDK_OFFSET(0x20CD2F0)
#define INCONTROL_OPTIONALUINT16_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20CD2F0)
#define INCONTROL_OPTIONALUINT16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20CD990)
#define INCONTROL_OPTIONALUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x20CD2F0)

namespace InControl
{
	inline static constexpr unsigned int OptionalUInt16_TypeDefinitionIndex = 31494;

	struct alignas(2) OptionalUInt16
	{
		::System::Boolean hasValue; // 0x10
		::System::UInt16 value; // 0x12

		::System::Void _ctor(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16__CTOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GET_HASNOVALUE_OFFSET))(this);
		}

		::System::UInt16 get_Value()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_CLEAR_OFFSET))(this);
		}

		::System::UInt16 GetValueOrDefault(::System::UInt16 defaultValue)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GETVALUEORDEFAULT_OFFSET))(this, defaultValue);
		}

		::System::UInt16 GetValueOrZero()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_SETVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::InControl::OptionalUInt16 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::System::UInt16 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_EQUALS_2_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalUInt16 a, ::InControl::OptionalUInt16 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt16, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalUInt16 a, ::InControl::OptionalUInt16 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt16, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalUInt16 a, ::System::UInt16 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_EQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalUInt16 a, ::System::UInt16 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_INEQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalUInt16 op_Implicit(::System::UInt16 value)
		{
			return ((::InControl::OptionalUInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::UInt16 op_Explicit(::InControl::OptionalUInt16 optional)
		{
			return ((::System::UInt16(*)(::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_EXPLICIT_OFFSET))(optional);
		}
	};
}
