#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_12.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define PROTO_CLIENTMAIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A77C60)
#define PROTO_CLIENTMAIL_CLONE_OFFSET UNITYSDK_OFFSET(0x17A77260)
#define PROTO_CLIENTMAIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A774D0)
#define PROTO_CLIENTMAIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A774A0)
#define PROTO_CLIENTMAIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A77680)
#define PROTO_CLIENTMAIL_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x17A77290)
#define PROTO_CLIENTMAIL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x17A772D0)
#define PROTO_CLIENTMAIL_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x17A772B0)
#define PROTO_CLIENTMAIL_GET_ID_OFFSET UNITYSDK_OFFSET(0x17A77480)
#define PROTO_CLIENTMAIL_GET_ISREAD_OFFSET UNITYSDK_OFFSET(0x17A77360)
#define PROTO_CLIENTMAIL_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x17A77400)
#define PROTO_CLIENTMAIL_GET_PARALIST_OFFSET UNITYSDK_OFFSET(0x17A77350)
#define PROTO_CLIENTMAIL_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x17A77420)
#define PROTO_CLIENTMAIL_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x17A77330)
#define PROTO_CLIENTMAIL_GET_TIME_OFFSET UNITYSDK_OFFSET(0x17A77380)
#define PROTO_CLIENTMAIL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x17A773A0)
#define PROTO_CLIENTMAIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A784E0)
#define PROTO_CLIENTMAIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A78340)
#define PROTO_CLIENTMAIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A77080)
#define PROTO_CLIENTMAIL_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x17A772A0)
#define PROTO_CLIENTMAIL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x17A772E0)
#define PROTO_CLIENTMAIL_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x17A772C0)
#define PROTO_CLIENTMAIL_SET_ID_OFFSET UNITYSDK_OFFSET(0x17A77490)
#define PROTO_CLIENTMAIL_SET_ISREAD_OFFSET UNITYSDK_OFFSET(0x17A77370)
#define PROTO_CLIENTMAIL_SET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x17A77410)
#define PROTO_CLIENTMAIL_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x17A77430)
#define PROTO_CLIENTMAIL_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x17A77340)
#define PROTO_CLIENTMAIL_SET_TIME_OFFSET UNITYSDK_OFFSET(0x17A77390)
#define PROTO_CLIENTMAIL_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x17A773B0)
#define PROTO_CLIENTMAIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A77940)
#define PROTO_CLIENTMAIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A779A0)
#define PROTO_CLIENTMAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A787C0)
#define PROTO_CLIENTMAIL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A77100)
#define PROTO_CLIENTMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x17A77090)

namespace Proto
{
	inline static constexpr unsigned int ClientMail_TypeDefinitionIndex = 24616;

	class ClientMail : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_paraList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClientMail_TypeDefinitionIndex)->GetStaticField(0x1A6F0);
		}
		// static const ::System::Int32 AttachmentFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 ExpireTimeFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 ContentFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 TemplateIdFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 ParaListFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 IsReadFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 TimeFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 TitleFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 MailTypeFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 SenderFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 IdFieldNumber = 0x5; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* paraList_; // 0x10
		::Proto::ItemList* attachment_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::System::String* title_; // 0x28
		::System::String* content_; // 0x30
		::System::String* sender_; // 0x38
		::System::Int64 expireTime_; // 0x40
		::System::Int64 time_; // 0x48
		::Enum_3_ED790DAC948A65A9_12 mailType_; // 0x50
		::System::Boolean isRead_; // 0x54
		::System::UInt32 id_; // 0x58
		::System::UInt32 templateId_; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ClientMail* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ClientMail*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ClientMail* Clone()
		{
			return ((::Proto::ClientMail*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* get_Attachment()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void set_Attachment(::Proto::ItemList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_ATTACHMENT_OFFSET))(this, value);
		}

		::System::Int64 get_ExpireTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_EXPIRETIME_OFFSET))(this, value);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_CONTENT_OFFSET))(this, value);
		}

		::System::UInt32 get_TemplateId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_TEMPLATEID_OFFSET))(this);
		}

		::System::Void set_TemplateId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_TEMPLATEID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* get_ParaList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_PARALIST_OFFSET))(this);
		}

		::System::Boolean get_IsRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_ISREAD_OFFSET))(this);
		}

		::System::Void set_IsRead(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_ISREAD_OFFSET))(this, value);
		}

		::System::Int64 get_Time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_TIME_OFFSET))(this, value);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_TITLE_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_12 get_MailType()
		{
			return ((::Enum_3_ED790DAC948A65A9_12(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_MAILTYPE_OFFSET))(this);
		}

		::System::Void set_MailType(::Enum_3_ED790DAC948A65A9_12 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_12))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_MAILTYPE_OFFSET))(this, value);
		}

		::System::String* get_Sender()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_SENDER_OFFSET))(this);
		}

		::System::Void set_Sender(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_SENDER_OFFSET))(this, value);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::ClientMail* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ClientMail*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ClientMail* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ClientMail*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
