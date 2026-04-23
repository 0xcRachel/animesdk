#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssemblyFactory; }

#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1962EF20)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1962EFD0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver_TypeDefinitionIndex = 9309;

	class DynamicObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x1FCA0);
		}
		static ::MessagePack::Resolvers::DynamicObjectResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicObjectResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x1FCA8);
		}
		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x1FCB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
