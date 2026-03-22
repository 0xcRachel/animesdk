#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define PROTO_BUYGOODSSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A765A0)
#define PROTO_BUYGOODSSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x17A76130)
#define PROTO_BUYGOODSSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A76320)
#define PROTO_BUYGOODSSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A76250)
#define PROTO_BUYGOODSSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A763F0)
#define PROTO_BUYGOODSSCRSP_GET_GOODSBUYTIMES_OFFSET UNITYSDK_OFFSET(0x17A761B0)
#define PROTO_BUYGOODSSCRSP_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x17A76210)
#define PROTO_BUYGOODSSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A761F0)
#define PROTO_BUYGOODSSCRSP_GET_RETURNITEMLIST_OFFSET UNITYSDK_OFFSET(0x17A761D0)
#define PROTO_BUYGOODSSCRSP_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x17A76230)
#define PROTO_BUYGOODSSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A768A0)
#define PROTO_BUYGOODSSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A767F0)
#define PROTO_BUYGOODSSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A76090)
#define PROTO_BUYGOODSSCRSP_SET_GOODSBUYTIMES_OFFSET UNITYSDK_OFFSET(0x17A761C0)
#define PROTO_BUYGOODSSCRSP_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x17A76220)
#define PROTO_BUYGOODSSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A76200)
#define PROTO_BUYGOODSSCRSP_SET_RETURNITEMLIST_OFFSET UNITYSDK_OFFSET(0x17A761E0)
#define PROTO_BUYGOODSSCRSP_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x17A76240)
#define PROTO_BUYGOODSSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A76440)
#define PROTO_BUYGOODSSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A764A0)
#define PROTO_BUYGOODSSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A760B0)
#define PROTO_BUYGOODSSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A760A0)

namespace Proto
{
	inline static constexpr unsigned int BuyGoodsScRsp_TypeDefinitionIndex = 26415;

	class BuyGoodsScRsp : public ::System::Object
	{
	public:
		// static const ::System::Int32 GoodsBuyTimesFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 ReturnItemListFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 GoodsIdFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 ShopIdFieldNumber = 0x5; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Proto::ItemList* returnItemList_; // 0x18
		::System::UInt32 goodsId_; // 0x20
		::System::UInt32 shopId_; // 0x24
		::System::UInt32 retcode_; // 0x28
		::System::UInt32 goodsBuyTimes_; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::BuyGoodsScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BuyGoodsScRsp*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::BuyGoodsScRsp* Clone()
		{
			return ((::Proto::BuyGoodsScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_GoodsBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_GOODSBUYTIMES_OFFSET))(this);
		}

		::System::Void set_GoodsBuyTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_GOODSBUYTIMES_OFFSET))(this, value);
		}

		::Proto::ItemList* get_ReturnItemList()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_RETURNITEMLIST_OFFSET))(this);
		}

		::System::Void set_ReturnItemList(::Proto::ItemList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_RETURNITEMLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::UInt32 get_GoodsId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_GOODSID_OFFSET))(this);
		}

		::System::Void set_GoodsId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_GOODSID_OFFSET))(this, value);
		}

		::System::UInt32 get_ShopId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_SET_SHOPID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::BuyGoodsScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::BuyGoodsScRsp*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::BuyGoodsScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BuyGoodsScRsp*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
