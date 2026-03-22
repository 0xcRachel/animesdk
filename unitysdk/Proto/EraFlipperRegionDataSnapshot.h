#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A7BB90)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x17A7B8D0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A7BA20)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A7B980)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A7BA80)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x17A7B940)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x17A7B960)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A7BCE0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A7BCA0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A7B880)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0x17A7B950)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x17A7B970)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A7BAB0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A7BB10)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A7B8A0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7B890)

namespace Proto
{
	inline static constexpr unsigned int EraFlipperRegionDataSnapshot_TypeDefinitionIndex = 22656;

	class EraFlipperRegionDataSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 RegionIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 StateFieldNumber = 0x2; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 state_; // 0x18
		::System::UInt32 regionId_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::EraFlipperRegionDataSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperRegionDataSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::EraFlipperRegionDataSnapshot* Clone()
		{
			return ((::Proto::EraFlipperRegionDataSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_RegionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_REGIONID_OFFSET))(this);
		}

		::System::Void set_RegionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_SET_REGIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_State()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_SET_STATE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::EraFlipperRegionDataSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::EraFlipperRegionDataSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::EraFlipperRegionDataSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperRegionDataSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
