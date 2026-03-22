#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_DELMAILSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A78C70)
#define PROTO_DELMAILSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x17A788E0)
#define PROTO_DELMAILSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A789E0)
#define PROTO_DELMAILSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A78940)
#define PROTO_DELMAILSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A78A70)
#define PROTO_DELMAILSCRSP_GET_IDLIST_OFFSET UNITYSDK_OFFSET(0x17A78910)
#define PROTO_DELMAILSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A78920)
#define PROTO_DELMAILSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A78DB0)
#define PROTO_DELMAILSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A78D60)
#define PROTO_DELMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A787F0)
#define PROTO_DELMAILSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A78930)
#define PROTO_DELMAILSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A78B70)
#define PROTO_DELMAILSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A78BD0)
#define PROTO_DELMAILSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A78E70)
#define PROTO_DELMAILSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A78850)
#define PROTO_DELMAILSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A78800)

namespace Proto
{
	inline static constexpr unsigned int DelMailScRsp_TypeDefinitionIndex = 24621;

	class DelMailScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_idList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DelMailScRsp_TypeDefinitionIndex)->GetStaticField(0x1A9D0);
		}
		// static const ::System::Int32 IdListFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xF; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* idList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DelMailScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DelMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::DelMailScRsp* Clone()
		{
			return ((::Proto::DelMailScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_IdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_GET_IDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::DelMailScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DelMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DelMailScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DelMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
