#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class GeneratedCodeInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178BBB00)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178BBB40)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C___CCTOR_B__26_0_OFFSET UNITYSDK_OFFSET(0x178BBB50)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo___c_TypeDefinitionIndex = 5524;

	class GeneratedCodeInfo___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::GeneratedCodeInfo___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::GeneratedCodeInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo___c_TypeDefinitionIndex)->GetStaticField(0x3AF80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::GeneratedCodeInfo* __cctor_b__26_0()
		{
			return ((::Google::Protobuf::Reflection::GeneratedCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C___CCTOR_B__26_0_OFFSET))(this);
		}
	};
}
