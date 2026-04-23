#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESSAGEPACK_NIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x663D10)
#define MESSAGEPACK_NIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x2329090)
#define MESSAGEPACK_NIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x63F430)
#define MESSAGEPACK_NIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x23290E0)

namespace MessagePack
{
	inline static constexpr unsigned int Nil_TypeDefinitionIndex = 9286;

	struct alignas(1) Nil
	{
		static ::MessagePack::Nil* StaticGet_Default()
		{
			return (::MessagePack::Nil*)Il2CppClass::FromTypeDefinitionIndex(Nil_TypeDefinitionIndex)->GetStaticField(0x70D0);
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
