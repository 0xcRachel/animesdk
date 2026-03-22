#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/DescriptorBase.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_ENUMDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x156C3160)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x156CD820)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x156C3170)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x156CD810)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x156CBC50)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueDescriptor_TypeDefinitionIndex = 27379;

	class EnumValueDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto* proto; // 0x28
		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor* enumDescriptor; // 0x30

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto* proto, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file, ::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor* parent, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR__CTOR_OFFSET))(this, proto, file, parent, index);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto* get_Proto()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_NUMBER_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor* get_EnumDescriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_ENUMDESCRIPTOR_OFFSET))(this);
		}
	};
}
