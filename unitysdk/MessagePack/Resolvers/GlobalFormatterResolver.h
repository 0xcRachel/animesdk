#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_GET_REGISTEREDRESOLVERCOUNT_OFFSET UNITYSDK_OFFSET(0x156A4760)
#define MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_GET_REGISTEREDRESOLVERS_OFFSET UNITYSDK_OFFSET(0x156A47C0)
#define MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_REGISTERRESOLVER_OFFSET UNITYSDK_OFFSET(0x156A4680)
#define MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A4850)
#define MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x156A4640)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int GlobalFormatterResolver_TypeDefinitionIndex = 9539;

	class GlobalFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::GlobalFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::GlobalFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(GlobalFormatterResolver_TypeDefinitionIndex)->GetStaticField(0x261B0);
		}
		::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>* registeredResolvers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterResolver(::MessagePack::IFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_REGISTERRESOLVER_OFFSET))(resolver);
		}

		static ::System::Int32 get_RegisteredResolverCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_GET_REGISTEREDRESOLVERCOUNT_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>* get_RegisteredResolvers()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_GET_REGISTEREDRESOLVERS_OFFSET))();
		}
	};
}
