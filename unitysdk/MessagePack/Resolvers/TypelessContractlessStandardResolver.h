#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Resolvers { class TypelessContractlessStandardResolver_ResolverCache; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MESSAGEPACK_RESOLVERS_TYPELESSCONTRACTLESSSTANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A5710)
#define MESSAGEPACK_RESOLVERS_TYPELESSCONTRACTLESSSTANDARDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x156A63C0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int TypelessContractlessStandardResolver_TypeDefinitionIndex = 9561;

	class TypelessContractlessStandardResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::TypelessContractlessStandardResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::TypelessContractlessStandardResolver**)Il2CppClass::FromTypeDefinitionIndex(TypelessContractlessStandardResolver_TypeDefinitionIndex)->GetStaticField(0x27340);
		}
		static ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(TypelessContractlessStandardResolver_TypeDefinitionIndex)->GetStaticField(0x27348);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(TypelessContractlessStandardResolver_TypeDefinitionIndex)->GetStaticField(0x27350);
		}
		::MessagePack::Resolvers::TypelessContractlessStandardResolver_ResolverCache* resolverCache; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_TYPELESSCONTRACTLESSSTANDARDRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_TYPELESSCONTRACTLESSSTANDARDRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
