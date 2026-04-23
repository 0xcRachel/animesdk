#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_DYNAMICGENERICRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1962EEF0)
#define MESSAGEPACK_RESOLVERS_DYNAMICGENERICRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1962EEE0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicGenericResolver_TypeDefinitionIndex = 9307;

	class DynamicGenericResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicGenericResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicGenericResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolver_TypeDefinitionIndex)->GetStaticField(0x1E960);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICGENERICRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICGENERICRESOLVER__CCTOR_OFFSET))();
		}
	};
}
