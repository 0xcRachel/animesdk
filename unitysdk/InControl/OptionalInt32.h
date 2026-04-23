#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALINT32_CLEAR_OFFSET UNITYSDK_OFFSET(0x2177600)
#define INCONTROL_OPTIONALINT32_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x13BCC7C0)
#define INCONTROL_OPTIONALINT32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2177D60)
#define INCONTROL_OPTIONALINT32_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x2177D80)
#define INCONTROL_OPTIONALINT32_EQUALS_OFFSET UNITYSDK_OFFSET(0x2177D30)
#define INCONTROL_OPTIONALINT32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2177D90)
#define INCONTROL_OPTIONALINT32_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x2177D10)
#define INCONTROL_OPTIONALINT32_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x2177D20)
#define INCONTROL_OPTIONALINT32_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x2177580)
#define INCONTROL_OPTIONALINT32_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x608B40)
#define INCONTROL_OPTIONALINT32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2177CA0)
#define INCONTROL_OPTIONALINT32_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x13BCC780)
#define INCONTROL_OPTIONALINT32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13BCC740)
#define INCONTROL_OPTIONALINT32_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x13BCC850)
#define INCONTROL_OPTIONALINT32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x13BCC840)
#define INCONTROL_OPTIONALINT32_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x13BCC7A0)
#define INCONTROL_OPTIONALINT32_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13BCC760)
#define INCONTROL_OPTIONALINT32_SETVALUE_OFFSET UNITYSDK_OFFSET(0x2177C90)
#define INCONTROL_OPTIONALINT32_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2177C90)
#define INCONTROL_OPTIONALINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2177DB0)
#define INCONTROL_OPTIONALINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x2177C90)

namespace InControl
{
	inline static constexpr unsigned int OptionalInt32_TypeDefinitionIndex = 37213;

	struct alignas(4) OptionalInt32
	{
		::System::Boolean hasValue; // 0x10
		::System::Int32 value; // 0x14

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32__CTOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GET_HASNOVALUE_OFFSET))(this);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_CLEAR_OFFSET))(this);
		}

		::System::Int32 GetValueOrDefault(::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GETVALUEORDEFAULT_OFFSET))(this, defaultValue);
		}

		::System::Int32 GetValueOrZero()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_SETVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::InControl::OptionalInt32 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::System::Int32 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_EQUALS_2_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalInt32 a, ::InControl::OptionalInt32 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt32, ::InControl::OptionalInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalInt32 a, ::InControl::OptionalInt32 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt32, ::InControl::OptionalInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalInt32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_EQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalInt32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_INEQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalInt32 op_Implicit(::System::Int32 value)
		{
			return ((::InControl::OptionalInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::Int32 op_Explicit(::InControl::OptionalInt32 optional)
		{
			return ((::System::Int32(*)(::InControl::OptionalInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_EXPLICIT_OFFSET))(optional);
		}
	};
}
