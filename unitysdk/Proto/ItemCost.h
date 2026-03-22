#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Proto/ItemCost_ItemOneofCase.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define PROTO_ITEMCOST_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A884E0)
#define PROTO_ITEMCOST_CLEARITEM_OFFSET UNITYSDK_OFFSET(0x17A87DE0)
#define PROTO_ITEMCOST_CLONE_OFFSET UNITYSDK_OFFSET(0x17A87D80)
#define PROTO_ITEMCOST_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A87E50)
#define PROTO_ITEMCOST_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A87DF0)
#define PROTO_ITEMCOST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A88190)
#define PROTO_ITEMCOST_GET_EQUIPMENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x17A87C20)
#define PROTO_ITEMCOST_GET_ITEMCASE_OFFSET UNITYSDK_OFFSET(0x17A87DD0)
#define PROTO_ITEMCOST_GET_PILEITEM_OFFSET UNITYSDK_OFFSET(0x17A87B70)
#define PROTO_ITEMCOST_GET_RELICUNIQUEID_OFFSET UNITYSDK_OFFSET(0x17A87CD0)
#define PROTO_ITEMCOST_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A88A00)
#define PROTO_ITEMCOST_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A88740)
#define PROTO_ITEMCOST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A87980)
#define PROTO_ITEMCOST_SET_EQUIPMENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x17A87CA0)
#define PROTO_ITEMCOST_SET_PILEITEM_OFFSET UNITYSDK_OFFSET(0x17A87C00)
#define PROTO_ITEMCOST_SET_RELICUNIQUEID_OFFSET UNITYSDK_OFFSET(0x17A87D50)
#define PROTO_ITEMCOST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A882C0)
#define PROTO_ITEMCOST_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A88320)
#define PROTO_ITEMCOST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A879A0)
#define PROTO_ITEMCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x17A87990)

namespace Proto
{
	inline static constexpr unsigned int ItemCost_TypeDefinitionIndex = 23397;

	class ItemCost : public ::System::Object
	{
	public:
		// static const ::System::Int32 PileItemFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 EquipmentUniqueIdFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 RelicUniqueIdFieldNumber = 0x9; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Object* item_; // 0x18
		::Proto::ItemCost_ItemOneofCase itemCase_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ItemCost* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ItemCost* Clone()
		{
			return ((::Proto::ItemCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_CLONE_OFFSET))(this);
		}

		::Proto::PileItem* get_PileItem()
		{
			return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GET_PILEITEM_OFFSET))(this);
		}

		::System::Void set_PileItem(::Proto::PileItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_SET_PILEITEM_OFFSET))(this, value);
		}

		::System::UInt32 get_EquipmentUniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GET_EQUIPMENTUNIQUEID_OFFSET))(this);
		}

		::System::Void set_EquipmentUniqueId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_SET_EQUIPMENTUNIQUEID_OFFSET))(this, value);
		}

		::System::UInt32 get_RelicUniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GET_RELICUNIQUEID_OFFSET))(this);
		}

		::System::Void set_RelicUniqueId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_SET_RELICUNIQUEID_OFFSET))(this, value);
		}

		::Proto::ItemCost_ItemOneofCase get_ItemCase()
		{
			return ((::Proto::ItemCost_ItemOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GET_ITEMCASE_OFFSET))(this);
		}

		::System::Void ClearItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_CLEARITEM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::ItemCost* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ItemCost* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
