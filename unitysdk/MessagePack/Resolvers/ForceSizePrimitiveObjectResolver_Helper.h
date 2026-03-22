#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_RESOLVERS_FORCESIZEPRIMITIVEOBJECTRESOLVER_HELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x156A3690)
#define MESSAGEPACK_RESOLVERS_FORCESIZEPRIMITIVEOBJECTRESOLVER_HELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A3790)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ForceSizePrimitiveObjectResolver_Helper_TypeDefinitionIndex = 9567;

	class ForceSizePrimitiveObjectResolver_Helper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_FormatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ForceSizePrimitiveObjectResolver_Helper_TypeDefinitionIndex)->GetStaticField(0x277F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_FORCESIZEPRIMITIVEOBJECTRESOLVER_HELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_FORCESIZEPRIMITIVEOBJECTRESOLVER_HELPER_GETFORMATTER_OFFSET))(type);
		}
	};
}
