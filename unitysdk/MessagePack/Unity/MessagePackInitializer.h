#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_UNITY_MESSAGEPACKINITIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x1561D6C0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int MessagePackInitializer_TypeDefinitionIndex = 33941;

	class MessagePackInitializer : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_serializerRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessagePackInitializer_TypeDefinitionIndex)->GetStaticField(0xD50);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_MESSAGEPACKINITIALIZER_INIT_OFFSET))();
		}
	};
}
