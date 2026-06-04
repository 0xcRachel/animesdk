#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_019938BC9C50B169_7_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x35D9D30)
#define STRUCT_2_019938BC9C50B169_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x35D9CA0)
#define STRUCT_2_019938BC9C50B169_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x37D8150)
#define STRUCT_2_019938BC9C50B169_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x35D9C00)
#define STRUCT_2_019938BC9C50B169_7_GET_ID_OFFSET UNITYSDK_OFFSET(0x72BBF0)
#define STRUCT_2_019938BC9C50B169_7_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16C136E0)
#define STRUCT_2_019938BC9C50B169_7_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16C13650)
#define STRUCT_2_019938BC9C50B169_7_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x37D80E0)
#define STRUCT_2_019938BC9C50B169_7_SET_ID_OFFSET UNITYSDK_OFFSET(0xA18540)
#define STRUCT_2_019938BC9C50B169_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x37D80D0)
#define STRUCT_2_019938BC9C50B169_7__CTOR_OFFSET UNITYSDK_OFFSET(0xA18540)

inline static constexpr unsigned int Struct_2_019938BC9C50B169_7_TypeDefinitionIndex = 48605;

struct alignas(4) Struct_2_019938BC9C50B169_7
{
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_SET_ID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_019938BC9C50B169_7 a1, ::Struct_2_019938BC9C50B169_7 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_7, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_019938BC9C50B169_7 a1, ::Struct_2_019938BC9C50B169_7 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_7, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_019938BC9C50B169_7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_DECONSTRUCT_OFFSET))(this, a1);
	}
};
