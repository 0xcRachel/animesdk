#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_FORCESIZEPRIMITIVEOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A3610)
#define MESSAGEPACK_RESOLVERS_FORCESIZEPRIMITIVEOBJECTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x156A3680)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ForceSizePrimitiveObjectResolver_TypeDefinitionIndex = 9565;

	class ForceSizePrimitiveObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::ForceSizePrimitiveObjectResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::ForceSizePrimitiveObjectResolver**)Il2CppClass::FromTypeDefinitionIndex(ForceSizePrimitiveObjectResolver_TypeDefinitionIndex)->GetStaticField(0x277E0);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(ForceSizePrimitiveObjectResolver_TypeDefinitionIndex)->GetStaticField(0x277E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_FORCESIZEPRIMITIVEOBJECTRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_FORCESIZEPRIMITIVEOBJECTRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
