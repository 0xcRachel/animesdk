#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class Item; }
namespace System { class String; }

#define PROTO_ITEMLIST_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A88EA0)
#define PROTO_ITEMLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x17A7D100)
#define PROTO_ITEMLIST_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A88CE0)
#define PROTO_ITEMLIST_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A88C00)
#define PROTO_ITEMLIST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A7D510)
#define PROTO_ITEMLIST_GET_ITEMLIST__OFFSET UNITYSDK_OFFSET(0x17A88BF0)
#define PROTO_ITEMLIST_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A88F40)
#define PROTO_ITEMLIST_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A7DA00)
#define PROTO_ITEMLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A88B50)
#define PROTO_ITEMLIST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A88D90)
#define PROTO_ITEMLIST_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A88DF0)
#define PROTO_ITEMLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A88FF0)
#define PROTO_ITEMLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A88B60)
#define PROTO_ITEMLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7D9C0)

namespace Proto
{
	inline static constexpr unsigned int ItemList_TypeDefinitionIndex = 23395;

	class ItemList : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::Item*>** StaticGet__repeated_itemList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::Item*>**)Il2CppClass::FromTypeDefinitionIndex(ItemList_TypeDefinitionIndex)->GetStaticField(0x1B420);
		}
		// static const ::System::Int32 ItemList_FieldNumber = 0xC; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* itemList_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ItemList* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMLIST__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ItemList* Clone()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* get_ItemList_()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_GET_ITEMLIST__OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::ItemList* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ItemList* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
