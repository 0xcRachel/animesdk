#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESSAGEPACK_NIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x149AE50)
#define MESSAGEPACK_NIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFA170)
#define MESSAGEPACK_NIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCA7B0)
#define MESSAGEPACK_NIL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1569C770)
#define MESSAGEPACK_NIL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1569C780)
#define MESSAGEPACK_NIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFA1C0)

namespace MessagePack
{
	inline static constexpr unsigned int Nil_TypeDefinitionIndex = 9485;

	struct alignas(1) Nil
	{
		static ::MessagePack::Nil* StaticGet_Default()
		{
			return (::MessagePack::Nil*)Il2CppClass::FromTypeDefinitionIndex(Nil_TypeDefinitionIndex)->GetStaticField(0x8320);
		}

		static ::System::Boolean op_Equality(::MessagePack::Nil left, ::MessagePack::Nil right)
		{
			return ((::System::Boolean(*)(::MessagePack::Nil, ::MessagePack::Nil))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::MessagePack::Nil left, ::MessagePack::Nil right)
		{
			return ((::System::Boolean(*)(::MessagePack::Nil, ::MessagePack::Nil))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::MessagePack::Nil other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Nil))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_NIL_TOSTRING_OFFSET))(this);
		}
	};
}
