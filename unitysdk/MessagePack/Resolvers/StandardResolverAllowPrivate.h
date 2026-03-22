#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A5070)
#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CTOR_OFFSET UNITYSDK_OFFSET(0x156A5440)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int StandardResolverAllowPrivate_TypeDefinitionIndex = 9555;

	class StandardResolverAllowPrivate : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x278A0);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x278A8);
		}
		static ::MessagePack::Resolvers::StandardResolverAllowPrivate** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StandardResolverAllowPrivate**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x278B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CTOR_OFFSET))(this);
		}
	};
}
