#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_TYPELESSOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A6510)
#define MESSAGEPACK_RESOLVERS_TYPELESSOBJECTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x156A6500)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int TypelessObjectResolver_TypeDefinitionIndex = 9563;

	class TypelessObjectResolver : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(TypelessObjectResolver_TypeDefinitionIndex)->GetStaticField(0x278F0);
		}
		static ::MessagePack::IFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(TypelessObjectResolver_TypeDefinitionIndex)->GetStaticField(0x278F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_TYPELESSOBJECTRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_TYPELESSOBJECTRESOLVER__CCTOR_OFFSET))();
		}
	};
}
