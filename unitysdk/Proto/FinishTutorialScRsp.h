#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class Tutorial; }
namespace System { class String; }

#define PROTO_FINISHTUTORIALSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A7DF70)
#define PROTO_FINISHTUTORIALSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x17A7DC20)
#define PROTO_FINISHTUTORIALSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A7DD90)
#define PROTO_FINISHTUTORIALSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A7DCE0)
#define PROTO_FINISHTUTORIALSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A7DE40)
#define PROTO_FINISHTUTORIALSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A7DCA0)
#define PROTO_FINISHTUTORIALSCRSP_GET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x17A7DCC0)
#define PROTO_FINISHTUTORIALSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A7E0E0)
#define PROTO_FINISHTUTORIALSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A7E040)
#define PROTO_FINISHTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A7DB90)
#define PROTO_FINISHTUTORIALSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A7DCB0)
#define PROTO_FINISHTUTORIALSCRSP_SET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x17A7DCD0)
#define PROTO_FINISHTUTORIALSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A7DE90)
#define PROTO_FINISHTUTORIALSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A7DEF0)
#define PROTO_FINISHTUTORIALSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A7DBB0)
#define PROTO_FINISHTUTORIALSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7DBA0)

namespace Proto
{
	inline static constexpr unsigned int FinishTutorialScRsp_TypeDefinitionIndex = 26831;

	class FinishTutorialScRsp : public ::System::Object
	{
	public:
		// static const ::System::Int32 RetcodeFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 TutorialFieldNumber = 0xB; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Proto::Tutorial* tutorial_; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::FinishTutorialScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FinishTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::FinishTutorialScRsp* Clone()
		{
			return ((::Proto::FinishTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::Proto::Tutorial* get_Tutorial()
		{
			return ((::Proto::Tutorial*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_GET_TUTORIAL_OFFSET))(this);
		}

		::System::Void set_Tutorial(::Proto::Tutorial* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_SET_TUTORIAL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::FinishTutorialScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::FinishTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::FinishTutorialScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FinishTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
