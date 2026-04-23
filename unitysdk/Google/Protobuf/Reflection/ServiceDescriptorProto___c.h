#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class ServiceDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197999B0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197999F0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x19799A00)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptorProto___c_TypeDefinitionIndex = 6282;

	class ServiceDescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::ServiceDescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::ServiceDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(ServiceDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x6DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceDescriptorProto* __cctor_b__42_0()
		{
			return ((::Google::Protobuf::Reflection::ServiceDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C___CCTOR_B__42_0_OFFSET))(this);
		}
	};
}
