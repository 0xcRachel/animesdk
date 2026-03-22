#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssemblyFactory; }
namespace System { class String; }

#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1569E0E0)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1569E0D0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolverAllowPrivate_TypeDefinitionIndex = 9523;

	class DynamicObjectResolverAllowPrivate : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicObjectResolverAllowPrivate** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicObjectResolverAllowPrivate**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x27570);
		}
		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x27578);
		}
		// static const ::System::String* ModuleName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CCTOR_OFFSET))();
		}
	};
}
