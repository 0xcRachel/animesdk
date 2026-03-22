#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_4.h"
#include "unitysdk/System/Object.h"

class Class_1_0306FBB84513F0B2_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_MONOPOLYACTIONRESULT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A8E0F0)
#define PROTO_MONOPOLYACTIONRESULT_CLONE_OFFSET UNITYSDK_OFFSET(0x17A8DB30)
#define PROTO_MONOPOLYACTIONRESULT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A8DDF0)
#define PROTO_MONOPOLYACTIONRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A8DCE0)
#define PROTO_MONOPOLYACTIONRESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A8DED0)
#define PROTO_MONOPOLYACTIONRESULT_GET_CLICKCELLID_OFFSET UNITYSDK_OFFSET(0x17A8DC00)
#define PROTO_MONOPOLYACTIONRESULT_GET_CLICKMAPID_OFFSET UNITYSDK_OFFSET(0x17A8DC60)
#define PROTO_MONOPOLYACTIONRESULT_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x17A8DC20)
#define PROTO_MONOPOLYACTIONRESULT_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x17A8DC80)
#define PROTO_MONOPOLYACTIONRESULT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x17A8DCC0)
#define PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERCELLID_OFFSET UNITYSDK_OFFSET(0x17A8DC40)
#define PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERMAPID_OFFSET UNITYSDK_OFFSET(0x17A8DCA0)
#define PROTO_MONOPOLYACTIONRESULT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A8E530)
#define PROTO_MONOPOLYACTIONRESULT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A8E460)
#define PROTO_MONOPOLYACTIONRESULT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A8DA80)
#define PROTO_MONOPOLYACTIONRESULT_SET_CLICKCELLID_OFFSET UNITYSDK_OFFSET(0x17A8DC10)
#define PROTO_MONOPOLYACTIONRESULT_SET_CLICKMAPID_OFFSET UNITYSDK_OFFSET(0x17A8DC70)
#define PROTO_MONOPOLYACTIONRESULT_SET_DETAIL_OFFSET UNITYSDK_OFFSET(0x17A8DC30)
#define PROTO_MONOPOLYACTIONRESULT_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x17A8DC90)
#define PROTO_MONOPOLYACTIONRESULT_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x17A8DCD0)
#define PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERCELLID_OFFSET UNITYSDK_OFFSET(0x17A8DC50)
#define PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERMAPID_OFFSET UNITYSDK_OFFSET(0x17A8DCB0)
#define PROTO_MONOPOLYACTIONRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A8DF30)
#define PROTO_MONOPOLYACTIONRESULT_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A8DF90)
#define PROTO_MONOPOLYACTIONRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A8DAA0)
#define PROTO_MONOPOLYACTIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8DA90)

namespace Proto
{
	inline static constexpr unsigned int MonopolyActionResult_TypeDefinitionIndex = 24899;

	class MonopolyActionResult : public ::System::Object
	{
	public:
		// static const ::System::Int32 ClickCellIdFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 DetailFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 TriggerCellIdFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 ClickMapIdFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 EffectTypeFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 TriggerMapIdFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 SourceTypeFieldNumber = 0xC; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Class_1_0306FBB84513F0B2_1* detail_; // 0x18
		::Enum_3_0F1B992870941C13_4 sourceType_; // 0x20
		::System::UInt32 triggerMapId_; // 0x24
		::System::UInt32 clickMapId_; // 0x28
		::System::UInt32 effectType_; // 0x2C
		::System::UInt32 triggerCellId_; // 0x30
		::System::UInt32 clickCellId_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MonopolyActionResult* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MonopolyActionResult* Clone()
		{
			return ((::Proto::MonopolyActionResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ClickCellId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_CLICKCELLID_OFFSET))(this);
		}

		::System::Void set_ClickCellId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_CLICKCELLID_OFFSET))(this, value);
		}

		::Class_1_0306FBB84513F0B2_1* get_Detail()
		{
			return ((::Class_1_0306FBB84513F0B2_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_DETAIL_OFFSET))(this);
		}

		::System::Void set_Detail(::Class_1_0306FBB84513F0B2_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0306FBB84513F0B2_1*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_DETAIL_OFFSET))(this, value);
		}

		::System::UInt32 get_TriggerCellId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERCELLID_OFFSET))(this);
		}

		::System::Void set_TriggerCellId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERCELLID_OFFSET))(this, value);
		}

		::System::UInt32 get_ClickMapId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_CLICKMAPID_OFFSET))(this);
		}

		::System::Void set_ClickMapId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_CLICKMAPID_OFFSET))(this, value);
		}

		::System::UInt32 get_EffectType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_EFFECTTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_TriggerMapId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERMAPID_OFFSET))(this);
		}

		::System::Void set_TriggerMapId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERMAPID_OFFSET))(this, value);
		}

		::Enum_3_0F1B992870941C13_4 get_SourceType()
		{
			return ((::Enum_3_0F1B992870941C13_4(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::Enum_3_0F1B992870941C13_4 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_4))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_SOURCETYPE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::MonopolyActionResult* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MonopolyActionResult* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
