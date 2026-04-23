#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ANTIADDICTSCNOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19E33E50)
#define PROTO_ANTIADDICTSCNOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x19E338F0)
#define PROTO_ANTIADDICTSCNOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19E33B00)
#define PROTO_ANTIADDICTSCNOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x19E33A30)
#define PROTO_ANTIADDICTSCNOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19E33BD0)
#define PROTO_ANTIADDICTSCNOTIFY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19E33950)
#define PROTO_ANTIADDICTSCNOTIFY_GET_MSGTYPE_OFFSET UNITYSDK_OFFSET(0x19E339B0)
#define PROTO_ANTIADDICTSCNOTIFY_GET_MSG_OFFSET UNITYSDK_OFFSET(0x19E339D0)
#define PROTO_ANTIADDICTSCNOTIFY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19E33840)
#define PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19E34130)
#define PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19E340D0)
#define PROTO_ANTIADDICTSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19E33870)
#define PROTO_ANTIADDICTSCNOTIFY_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19E33960)
#define PROTO_ANTIADDICTSCNOTIFY_SET_MSGTYPE_OFFSET UNITYSDK_OFFSET(0x19E339C0)
#define PROTO_ANTIADDICTSCNOTIFY_SET_MSG_OFFSET UNITYSDK_OFFSET(0x19E339E0)
#define PROTO_ANTIADDICTSCNOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19E33D20)
#define PROTO_ANTIADDICTSCNOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x19E33D80)
#define PROTO_ANTIADDICTSCNOTIFY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E34230)
#define PROTO_ANTIADDICTSCNOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E338A0)
#define PROTO_ANTIADDICTSCNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E33880)

namespace Proto
{
	inline static constexpr unsigned int AntiAddictScNotify_TypeDefinitionIndex = 30030;

	class AntiAddictScNotify : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::AntiAddictScNotify*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::AntiAddictScNotify*>**)Il2CppClass::FromTypeDefinitionIndex(AntiAddictScNotify_TypeDefinitionIndex)->GetStaticField(0x40EE0);
		}
		// static const ::System::Int32 LevelFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 MsgTypeFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 MsgFieldNumber = 0xF; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::String* level_; // 0x18
		::System::String* msg_; // 0x20
		::System::UInt32 msgType_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::AntiAddictScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AntiAddictScNotify*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::AntiAddictScNotify*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::AntiAddictScNotify*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::AntiAddictScNotify* Clone()
		{
			return ((::Proto::AntiAddictScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_CLONE_OFFSET))(this);
		}

		::System::String* get_Level()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_MsgType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_MSGTYPE_OFFSET))(this);
		}

		::System::Void set_MsgType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_SET_MSGTYPE_OFFSET))(this, value);
		}

		::System::String* get_Msg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_MSG_OFFSET))(this);
		}

		::System::Void set_Msg(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_SET_MSG_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::AntiAddictScNotify* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::AntiAddictScNotify*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::AntiAddictScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AntiAddictScNotify*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
