#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_STRONGCHALLENGEAVATAR_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A593940)
#define PROTO_STRONGCHALLENGEAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x1A593670)
#define PROTO_STRONGCHALLENGEAVATAR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5937C0)
#define PROTO_STRONGCHALLENGEAVATAR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A593720)
#define PROTO_STRONGCHALLENGEAVATAR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A593820)
#define PROTO_STRONGCHALLENGEAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1A593700)
#define PROTO_STRONGCHALLENGEAVATAR_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1A5936E0)
#define PROTO_STRONGCHALLENGEAVATAR_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A5935C0)
#define PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A593AD0)
#define PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A593A90)
#define PROTO_STRONGCHALLENGEAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A593620)
#define PROTO_STRONGCHALLENGEAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1A593710)
#define PROTO_STRONGCHALLENGEAVATAR_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1A5936F0)
#define PROTO_STRONGCHALLENGEAVATAR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A593850)
#define PROTO_STRONGCHALLENGEAVATAR_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5938B0)
#define PROTO_STRONGCHALLENGEAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A593B50)
#define PROTO_STRONGCHALLENGEAVATAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A593640)
#define PROTO_STRONGCHALLENGEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A593630)

namespace Proto
{
	inline static constexpr unsigned int StrongChallengeAvatar_TypeDefinitionIndex = 32360;

	class StrongChallengeAvatar : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::StrongChallengeAvatar*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::StrongChallengeAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeAvatar_TypeDefinitionIndex)->GetStaticField(0x3C8E0);
		}
		// static const ::System::Int32 AvatarTypeFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0x2; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Enum_3_01618AD0437C8486 avatarType_; // 0x18
		::System::UInt32 avatarId_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::StrongChallengeAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::StrongChallengeAvatar*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::StrongChallengeAvatar*>*(*)())((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::StrongChallengeAvatar* Clone()
		{
			return ((::Proto::StrongChallengeAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_CLONE_OFFSET))(this);
		}

		::Enum_3_01618AD0437C8486 get_AvatarType()
		{
			return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::Enum_3_01618AD0437C8486 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_SET_AVATARTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_SET_AVATARID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::StrongChallengeAvatar* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::StrongChallengeAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
