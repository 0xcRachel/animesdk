#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }

#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1566A7A0)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1566A7E0)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS___C__HASPRIVATECTORFORSERIALIZATION_B__7_0_OFFSET UNITYSDK_OFFSET(0x1566A7F0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ReflectionExtensions___c_TypeDefinitionIndex = 9598;

	class ReflectionExtensions___c : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::ReflectionExtensions___c** StaticGet___9()
		{
			return (::MessagePack::Internal::ReflectionExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(ReflectionExtensions___c_TypeDefinitionIndex)->GetStaticField(0x26060);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionExtensions___c_TypeDefinitionIndex)->GetStaticField(0x26068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasPrivateCtorForSerialization_b__7_0(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS___C__HASPRIVATECTORFORSERIALIZATION_B__7_0_OFFSET))(this, x);
		}
	};
}
