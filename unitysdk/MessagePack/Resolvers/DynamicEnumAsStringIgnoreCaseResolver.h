#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGIGNORECASERESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1569D780)
#define MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGIGNORECASERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1569D770)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicEnumAsStringIgnoreCaseResolver_TypeDefinitionIndex = 9512;

	class DynamicEnumAsStringIgnoreCaseResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicEnumAsStringIgnoreCaseResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicEnumAsStringIgnoreCaseResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumAsStringIgnoreCaseResolver_TypeDefinitionIndex)->GetStaticField(0x275B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGIGNORECASERESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGIGNORECASERESOLVER__CCTOR_OFFSET))();
		}
	};
}
