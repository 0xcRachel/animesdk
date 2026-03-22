#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_PILEITEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A927E0)
#define PROTO_PILEITEM_CLONE_OFFSET UNITYSDK_OFFSET(0x17A87BB0)
#define PROTO_PILEITEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A926A0)
#define PROTO_PILEITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A92630)
#define PROTO_PILEITEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A88290)
#define PROTO_PILEITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x17A92610)
#define PROTO_PILEITEM_GET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x17A925F0)
#define PROTO_PILEITEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A928F0)
#define PROTO_PILEITEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A889C0)
#define PROTO_PILEITEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A925B0)
#define PROTO_PILEITEM_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x17A92620)
#define PROTO_PILEITEM_SET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x17A92600)
#define PROTO_PILEITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A92700)
#define PROTO_PILEITEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A92760)
#define PROTO_PILEITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A925C0)
#define PROTO_PILEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A889B0)

namespace Proto
{
	inline static constexpr unsigned int PileItem_TypeDefinitionIndex = 23396;

	class PileItem : public ::System::Object
	{
	public:
		// static const ::System::Int32 ItemNumFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 ItemIdFieldNumber = 0x9; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 itemId_; // 0x18
		::System::UInt32 itemNum_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PileItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PileItem* Clone()
		{
			return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GET_ITEMNUM_OFFSET))(this);
		}

		::System::Void set_ItemNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_SET_ITEMNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::PileItem* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PileItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PILEITEM_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
