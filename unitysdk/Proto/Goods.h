#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GOODS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197616A0)
#define PROTO_GOODS_CLONE_OFFSET UNITYSDK_OFFSET(0x197612E0)
#define PROTO_GOODS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19761460)
#define PROTO_GOODS_EQUALS_OFFSET UNITYSDK_OFFSET(0x197613D0)
#define PROTO_GOODS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197614E0)
#define PROTO_GOODS_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x19761390)
#define PROTO_GOODS_GET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x197613B0)
#define PROTO_GOODS_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x19761330)
#define PROTO_GOODS_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x19761370)
#define PROTO_GOODS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x19761350)
#define PROTO_GOODS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19761250)
#define PROTO_GOODS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19761A30)
#define PROTO_GOODS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197619D0)
#define PROTO_GOODS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19761280)
#define PROTO_GOODS_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x197613A0)
#define PROTO_GOODS_SET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x197613C0)
#define PROTO_GOODS_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x19761340)
#define PROTO_GOODS_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x19761380)
#define PROTO_GOODS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x19761360)
#define PROTO_GOODS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19761540)
#define PROTO_GOODS_WRITETO_OFFSET UNITYSDK_OFFSET(0x197615A0)
#define PROTO_GOODS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19761AF0)
#define PROTO_GOODS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197612A0)
#define PROTO_GOODS__CTOR_OFFSET UNITYSDK_OFFSET(0x19761290)

namespace Proto
{
	inline static constexpr unsigned int Goods_TypeDefinitionIndex = 32281;

	class Goods : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::Goods*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::Goods*>**)Il2CppClass::FromTypeDefinitionIndex(Goods_TypeDefinitionIndex)->GetStaticField(0x4BEB0);
		}
		// static const ::System::Int32 EndTimeFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 ItemIdFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 GoodsIdFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 BeginTimeFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 BuyTimesFieldNumber = 0xA; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 goodsId_; // 0x18
		::System::UInt32 buyTimes_; // 0x1C
		::System::UInt32 itemId_; // 0x20
		::System::Int64 endTime_; // 0x28
		::System::Int64 beginTime_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::Goods* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Goods*))((::PBYTE)hIl2Cpp + PROTO_GOODS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GOODS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::Goods*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::Goods*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::Goods* Clone()
		{
			return ((::Proto::Goods*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_CLONE_OFFSET))(this);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_ENDTIME_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_GoodsId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_GOODSID_OFFSET))(this);
		}

		::System::Void set_GoodsId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_GOODSID_OFFSET))(this, value);
		}

		::System::Int64 get_BeginTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_BEGINTIME_OFFSET))(this, value);
		}

		::System::UInt32 get_BuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GET_BUYTIMES_OFFSET))(this);
		}

		::System::Void set_BuyTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GOODS_SET_BUYTIMES_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GOODS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::Goods* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::Goods*))((::PBYTE)hIl2Cpp + PROTO_GOODS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GOODS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::Goods* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Goods*))((::PBYTE)hIl2Cpp + PROTO_GOODS_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GOODS_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
