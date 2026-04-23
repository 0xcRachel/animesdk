#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class MethodOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19793E60)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19793EA0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x19793EB0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodOptions___c_TypeDefinitionIndex = 6307;

	class MethodOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::MethodOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::MethodOptions___c**)Il2CppClass::FromTypeDefinitionIndex(MethodOptions___c_TypeDefinitionIndex)->GetStaticField(0x6CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MethodOptions* __cctor_b__53_0()
		{
			return ((::Google::Protobuf::Reflection::MethodOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}
