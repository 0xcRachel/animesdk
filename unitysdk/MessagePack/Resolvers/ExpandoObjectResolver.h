#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A2C70)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ExpandoObjectResolver_TypeDefinitionIndex = 9537;

	class ExpandoObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObjectResolver_TypeDefinitionIndex)->GetStaticField(0x277D0);
		}
		static ::MessagePack::IFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObjectResolver_TypeDefinitionIndex)->GetStaticField(0x277D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER__CCTOR_OFFSET))();
		}
	};
}
