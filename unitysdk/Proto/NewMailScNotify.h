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

#define PROTO_NEWMAILSCNOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A8F030)
#define PROTO_NEWMAILSCNOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x17A8ECD0)
#define PROTO_NEWMAILSCNOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A8EDB0)
#define PROTO_NEWMAILSCNOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A8ED10)
#define PROTO_NEWMAILSCNOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A8EE40)
#define PROTO_NEWMAILSCNOTIFY_GET_MAILIDLIST_OFFSET UNITYSDK_OFFSET(0x17A8ED00)
#define PROTO_NEWMAILSCNOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A8F0F0)
#define PROTO_NEWMAILSCNOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A8F0A0)
#define PROTO_NEWMAILSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A8EBE0)
#define PROTO_NEWMAILSCNOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A8EF50)
#define PROTO_NEWMAILSCNOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A8EFB0)
#define PROTO_NEWMAILSCNOTIFY__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A8F1A0)
#define PROTO_NEWMAILSCNOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A8EC40)
#define PROTO_NEWMAILSCNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8EBF0)

namespace Proto
{
	inline static constexpr unsigned int NewMailScNotify_TypeDefinitionIndex = 24625;

	class NewMailScNotify : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_mailIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NewMailScNotify_TypeDefinitionIndex)->GetStaticField(0x1C030);
		}
		// static const ::System::Int32 MailIdListFieldNumber = 0x4; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* mailIdList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::NewMailScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::NewMailScNotify*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::NewMailScNotify* Clone()
		{
			return ((::Proto::NewMailScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_MailIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_GET_MAILIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::NewMailScNotify* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::NewMailScNotify*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::NewMailScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::NewMailScNotify*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
