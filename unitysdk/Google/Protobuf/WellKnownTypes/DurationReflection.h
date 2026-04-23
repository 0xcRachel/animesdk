#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATIONREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197A5920)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATIONREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x197A5980)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int DurationReflection_TypeDefinitionIndex = 6217;

	class DurationReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(DurationReflection_TypeDefinitionIndex)->GetStaticField(0x6F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATIONREFLECTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATIONREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
