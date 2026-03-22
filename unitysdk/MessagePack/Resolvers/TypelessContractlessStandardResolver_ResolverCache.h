#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Resolvers/CachingFormatterResolver.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MESSAGEPACK_RESOLVERS_TYPELESSCONTRACTLESSSTANDARDRESOLVER_RESOLVERCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x156A6440)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int TypelessContractlessStandardResolver_ResolverCache_TypeDefinitionIndex = 9562;

	class TypelessContractlessStandardResolver_ResolverCache : public ::MessagePack::Resolvers::CachingFormatterResolver
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>* resolvers; // 0x18

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_TYPELESSCONTRACTLESSSTANDARDRESOLVER_RESOLVERCACHE__CTOR_OFFSET))(this, resolvers);
		}
	};
}
