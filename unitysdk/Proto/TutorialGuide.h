#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_76.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_23.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_TUTORIALGUIDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AA0160)
#define PROTO_TUTORIALGUIDE_CLONE_OFFSET UNITYSDK_OFFSET(0x17A9FE70)
#define PROTO_TUTORIALGUIDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A9FF90)
#define PROTO_TUTORIALGUIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A9FF20)
#define PROTO_TUTORIALGUIDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AA0000)
#define PROTO_TUTORIALGUIDE_GET_ID_OFFSET UNITYSDK_OFFSET(0x17A9FF00)
#define PROTO_TUTORIALGUIDE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x17A9FEE0)
#define PROTO_TUTORIALGUIDE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A9FEC0)
#define PROTO_TUTORIALGUIDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AA03B0)
#define PROTO_TUTORIALGUIDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AA0360)
#define PROTO_TUTORIALGUIDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A9FE10)
#define PROTO_TUTORIALGUIDE_SET_ID_OFFSET UNITYSDK_OFFSET(0x17A9FF10)
#define PROTO_TUTORIALGUIDE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x17A9FEF0)
#define PROTO_TUTORIALGUIDE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A9FED0)
#define PROTO_TUTORIALGUIDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AA0030)
#define PROTO_TUTORIALGUIDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AA0090)
#define PROTO_TUTORIALGUIDE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A9FE30)
#define PROTO_TUTORIALGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9FE20)

namespace Proto
{
	inline static constexpr unsigned int TutorialGuide_TypeDefinitionIndex = 26821;

	class TutorialGuide : public ::System::Object
	{
	public:
		// static const ::System::Int32 TypeFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 StatusFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 IdFieldNumber = 0xC; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 id_; // 0x18
		::Enum_3_0A3761FE34514D6C_76 status_; // 0x1C
		::Enum_3_ED790DAC948A65A9_23 type_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::TutorialGuide* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::TutorialGuide* Clone()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_CLONE_OFFSET))(this);
		}

		::Enum_3_ED790DAC948A65A9_23 get_Type()
		{
			return ((::Enum_3_ED790DAC948A65A9_23(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_ED790DAC948A65A9_23 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_23))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_SET_TYPE_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_76 get_Status()
		{
			return ((::Enum_3_0A3761FE34514D6C_76(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_0A3761FE34514D6C_76 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_76))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_SET_STATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::TutorialGuide* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::TutorialGuide* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
