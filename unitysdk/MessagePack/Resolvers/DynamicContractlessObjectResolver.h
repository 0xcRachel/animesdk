#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssemblyFactory; }
namespace System { class String; }

#define MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1569D650)
#define MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1569D640)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicContractlessObjectResolver_TypeDefinitionIndex = 9525;

	class DynamicContractlessObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)Il2CppClass::FromTypeDefinitionIndex(DynamicContractlessObjectResolver_TypeDefinitionIndex)->GetStaticField(0x27540);
		}
		static ::MessagePack::Resolvers::DynamicContractlessObjectResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicContractlessObjectResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicContractlessObjectResolver_TypeDefinitionIndex)->GetStaticField(0x27548);
		}
		// static const ::System::String* ModuleName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER__CCTOR_OFFSET))();
		}
	};
}
