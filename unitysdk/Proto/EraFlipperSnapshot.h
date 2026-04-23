#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class EraFlipperRegionDataSnapshot; }
namespace System { class String; }

#define PROTO_ERAFLIPPERSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19756DB0)
#define PROTO_ERAFLIPPERSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x19756990)
#define PROTO_ERAFLIPPERSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19756B00)
#define PROTO_ERAFLIPPERSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x197569F0)
#define PROTO_ERAFLIPPERSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19756BB0)
#define PROTO_ERAFLIPPERSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19756820)
#define PROTO_ERAFLIPPERSNAPSHOT_GET_REGIONDATALIST_OFFSET UNITYSDK_OFFSET(0x197569E0)
#define PROTO_ERAFLIPPERSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19756EF0)
#define PROTO_ERAFLIPPERSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19756E50)
#define PROTO_ERAFLIPPERSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19756880)
#define PROTO_ERAFLIPPERSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19756CA0)
#define PROTO_ERAFLIPPERSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19756D00)
#define PROTO_ERAFLIPPERSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19756FD0)
#define PROTO_ERAFLIPPERSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197568E0)
#define PROTO_ERAFLIPPERSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19756890)

namespace Proto
{
	inline static constexpr unsigned int EraFlipperSnapshot_TypeDefinitionIndex = 24549;

	class EraFlipperSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::EraFlipperSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::EraFlipperSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperSnapshot_TypeDefinitionIndex)->GetStaticField(0x4B160);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::EraFlipperRegionDataSnapshot*>** StaticGet__repeated_regionDataList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::EraFlipperRegionDataSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperSnapshot_TypeDefinitionIndex)->GetStaticField(0x4B168);
		}
		// static const ::System::Int32 RegionDataListFieldNumber = 0x1; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::EraFlipperRegionDataSnapshot*>* regionDataList_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::EraFlipperSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::EraFlipperSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::EraFlipperSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::EraFlipperSnapshot* Clone()
		{
			return ((::Proto::EraFlipperSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::EraFlipperRegionDataSnapshot*>* get_RegionDataList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::EraFlipperRegionDataSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_GET_REGIONDATALIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::EraFlipperSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::EraFlipperSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::EraFlipperSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
