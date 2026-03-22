#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_11.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_5;
class Class_1_BD570EF86E624FB1_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class AssistSimpleInfo; }
namespace System { class String; }

#define PROTO_PLAYERSIMPLEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A94390)
#define PROTO_PLAYERSIMPLEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x17A92A30)
#define PROTO_PLAYERSIMPLEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A93D10)
#define PROTO_PLAYERSIMPLEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A93CE0)
#define PROTO_PLAYERSIMPLEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A92D00)
#define PROTO_PLAYERSIMPLEINFO_GET_ASSISTINFOLIST_OFFSET UNITYSDK_OFFSET(0x17A93A10)
#define PROTO_PLAYERSIMPLEINFO_GET_CHATBUBBLE_OFFSET UNITYSDK_OFFSET(0x17A93CA0)
#define PROTO_PLAYERSIMPLEINFO_GET_GENDER_OFFSET UNITYSDK_OFFSET(0x17A939F0)
#define PROTO_PLAYERSIMPLEINFO_GET_HEADICONFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x17A93A20)
#define PROTO_PLAYERSIMPLEINFO_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x17A93AC0)
#define PROTO_PLAYERSIMPLEINFO_GET_ISBANNED_OFFSET UNITYSDK_OFFSET(0x17A93B80)
#define PROTO_PLAYERSIMPLEINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17A93CC0)
#define PROTO_PLAYERSIMPLEINFO_GET_LOGOUTTIME_OFFSET UNITYSDK_OFFSET(0x17A93B60)
#define PROTO_PLAYERSIMPLEINFO_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x17A93C40)
#define PROTO_PLAYERSIMPLEINFO_GET_ONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x17A939D0)
#define PROTO_PLAYERSIMPLEINFO_GET_PERSONALCARD_OFFSET UNITYSDK_OFFSET(0x17A93AE0)
#define PROTO_PLAYERSIMPLEINFO_GET_PLATFORMNICK_OFFSET UNITYSDK_OFFSET(0x17A93BC0)
#define PROTO_PLAYERSIMPLEINFO_GET_PLATFORMUUID_OFFSET UNITYSDK_OFFSET(0x17A93B00)
#define PROTO_PLAYERSIMPLEINFO_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x17A93BA0)
#define PROTO_PLAYERSIMPLEINFO_GET_PLAYEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x17A93C20)
#define PROTO_PLAYERSIMPLEINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x17A93A40)
#define PROTO_PLAYERSIMPLEINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0x17A93AA0)
#define PROTO_PLAYERSIMPLEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A94D50)
#define PROTO_PLAYERSIMPLEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A933E0)
#define PROTO_PLAYERSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A93810)
#define PROTO_PLAYERSIMPLEINFO_SET_CHATBUBBLE_OFFSET UNITYSDK_OFFSET(0x17A93CB0)
#define PROTO_PLAYERSIMPLEINFO_SET_GENDER_OFFSET UNITYSDK_OFFSET(0x17A93A00)
#define PROTO_PLAYERSIMPLEINFO_SET_HEADICONFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x17A93A30)
#define PROTO_PLAYERSIMPLEINFO_SET_HEADICON_OFFSET UNITYSDK_OFFSET(0x17A93AD0)
#define PROTO_PLAYERSIMPLEINFO_SET_ISBANNED_OFFSET UNITYSDK_OFFSET(0x17A93B90)
#define PROTO_PLAYERSIMPLEINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17A93CD0)
#define PROTO_PLAYERSIMPLEINFO_SET_LOGOUTTIME_OFFSET UNITYSDK_OFFSET(0x17A93B70)
#define PROTO_PLAYERSIMPLEINFO_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x17A93C50)
#define PROTO_PLAYERSIMPLEINFO_SET_ONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x17A939E0)
#define PROTO_PLAYERSIMPLEINFO_SET_PERSONALCARD_OFFSET UNITYSDK_OFFSET(0x17A93AF0)
#define PROTO_PLAYERSIMPLEINFO_SET_PLATFORMNICK_OFFSET UNITYSDK_OFFSET(0x17A93BD0)
#define PROTO_PLAYERSIMPLEINFO_SET_PLATFORMUUID_OFFSET UNITYSDK_OFFSET(0x17A93B10)
#define PROTO_PLAYERSIMPLEINFO_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x17A93BB0)
#define PROTO_PLAYERSIMPLEINFO_SET_PLAYEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x17A93C30)
#define PROTO_PLAYERSIMPLEINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x17A93A50)
#define PROTO_PLAYERSIMPLEINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0x17A93AB0)
#define PROTO_PLAYERSIMPLEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A93F40)
#define PROTO_PLAYERSIMPLEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A93FA0)
#define PROTO_PLAYERSIMPLEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A95150)
#define PROTO_PLAYERSIMPLEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A93820)
#define PROTO_PLAYERSIMPLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A93360)

namespace Proto
{
	inline static constexpr unsigned int PlayerSimpleInfo_TypeDefinitionIndex = 23918;

	class PlayerSimpleInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::AssistSimpleInfo*>** StaticGet__repeated_assistInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::AssistSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerSimpleInfo_TypeDefinitionIndex)->GetStaticField(0x1C7B0);
		}
		// static const ::System::Int32 OnlineStatusFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 GenderFieldNumber = 0x3C5; // 0x0
		// static const ::System::Int32 AssistInfoListFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 HeadIconFrameInfoFieldNumber = 0x3EF; // 0x0
		// static const ::System::Int32 SignatureFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 UidFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 HeadIconFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 PersonalCardFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 PlatformUuidFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 LogoutTimeFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 IsBannedFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 PlatformFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 PlatformNickFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 PlayerOutfitDataFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 NicknameFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 ChatBubbleFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x3; // 0x0
		::System::String* signature_; // 0x10
		::Class_1_6E708EAB438EC183_5* playerOutfitData_; // 0x18
		::Class_1_BD570EF86E624FB1_3* headIconFrameInfo_; // 0x20
		::System::String* nickname_; // 0x28
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::AssistSimpleInfo*>* assistInfoList_; // 0x38
		::System::String* platformNick_; // 0x40
		::System::String* platformUuid_; // 0x48
		::System::UInt32 gender_; // 0x50
		::Enum_3_ED790DAC948A65A9_11 onlineStatus_; // 0x54
		::System::UInt32 level_; // 0x58
		::System::UInt32 chatBubble_; // 0x5C
		::System::Boolean isBanned_; // 0x60
		::System::UInt32 uid_; // 0x64
		::Enum_3_7D0231C413D78CFA platform_; // 0x68
		::System::UInt32 personalCard_; // 0x6C
		::System::Int64 logoutTime_; // 0x70
		::System::UInt32 headIcon_; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PlayerSimpleInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PlayerSimpleInfo* Clone()
		{
			return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_CLONE_OFFSET))(this);
		}

		::Enum_3_ED790DAC948A65A9_11 get_OnlineStatus()
		{
			return ((::Enum_3_ED790DAC948A65A9_11(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_ONLINESTATUS_OFFSET))(this);
		}

		::System::Void set_OnlineStatus(::Enum_3_ED790DAC948A65A9_11 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_11))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_ONLINESTATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_Gender()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_GENDER_OFFSET))(this);
		}

		::System::Void set_Gender(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_GENDER_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::AssistSimpleInfo*>* get_AssistInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::AssistSimpleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_ASSISTINFOLIST_OFFSET))(this);
		}

		::Class_1_BD570EF86E624FB1_3* get_HeadIconFrameInfo()
		{
			return ((::Class_1_BD570EF86E624FB1_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_HEADICONFRAMEINFO_OFFSET))(this);
		}

		::System::Void set_HeadIconFrameInfo(::Class_1_BD570EF86E624FB1_3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_HEADICONFRAMEINFO_OFFSET))(this, value);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_SIGNATURE_OFFSET))(this, value);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_HeadIcon()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_HEADICON_OFFSET))(this);
		}

		::System::Void set_HeadIcon(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_HEADICON_OFFSET))(this, value);
		}

		::System::UInt32 get_PersonalCard()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PERSONALCARD_OFFSET))(this);
		}

		::System::Void set_PersonalCard(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PERSONALCARD_OFFSET))(this, value);
		}

		::System::String* get_PlatformUuid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLATFORMUUID_OFFSET))(this);
		}

		::System::Void set_PlatformUuid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLATFORMUUID_OFFSET))(this, value);
		}

		::System::Int64 get_LogoutTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_LOGOUTTIME_OFFSET))(this);
		}

		::System::Void set_LogoutTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_LOGOUTTIME_OFFSET))(this, value);
		}

		::System::Boolean get_IsBanned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_ISBANNED_OFFSET))(this);
		}

		::System::Void set_IsBanned(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_ISBANNED_OFFSET))(this, value);
		}

		::Enum_3_7D0231C413D78CFA get_Platform()
		{
			return ((::Enum_3_7D0231C413D78CFA(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::Enum_3_7D0231C413D78CFA value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7D0231C413D78CFA))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLATFORM_OFFSET))(this, value);
		}

		::System::String* get_PlatformNick()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLATFORMNICK_OFFSET))(this);
		}

		::System::Void set_PlatformNick(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLATFORMNICK_OFFSET))(this, value);
		}

		::Class_1_6E708EAB438EC183_5* get_PlayerOutfitData()
		{
			return ((::Class_1_6E708EAB438EC183_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_PLAYEROUTFITDATA_OFFSET))(this);
		}

		::System::Void set_PlayerOutfitData(::Class_1_6E708EAB438EC183_5* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_5*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_PLAYEROUTFITDATA_OFFSET))(this, value);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_Nickname(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_NICKNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_ChatBubble()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_CHATBUBBLE_OFFSET))(this);
		}

		::System::Void set_ChatBubble(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_CHATBUBBLE_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::PlayerSimpleInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PlayerSimpleInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
