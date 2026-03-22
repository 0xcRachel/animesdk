#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_SAVEPOINTSINFONOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A973A0)
#define PROTO_SAVEPOINTSINFONOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x17A97120)
#define PROTO_SAVEPOINTSINFONOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A97220)
#define PROTO_SAVEPOINTSINFONOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A971B0)
#define PROTO_SAVEPOINTSINFONOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A97280)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x17A97170)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_VALIDTIMES_OFFSET UNITYSDK_OFFSET(0x17A97190)
#define PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A97540)
#define PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A97500)
#define PROTO_SAVEPOINTSINFONOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A970C0)
#define PROTO_SAVEPOINTSINFONOTIFY_SET_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x17A97180)
#define PROTO_SAVEPOINTSINFONOTIFY_SET_VALIDTIMES_OFFSET UNITYSDK_OFFSET(0x17A971A0)
#define PROTO_SAVEPOINTSINFONOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A972C0)
#define PROTO_SAVEPOINTSINFONOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A97320)
#define PROTO_SAVEPOINTSINFONOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A970E0)
#define PROTO_SAVEPOINTSINFONOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x17A970D0)

namespace Proto
{
	inline static constexpr unsigned int SavePointsInfoNotify_TypeDefinitionIndex = 26334;

	class SavePointsInfoNotify : public ::System::Object
	{
	public:
		// static const ::System::Int32 RefreshTimeFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 ValidTimesFieldNumber = 0x1; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int64 refreshTime_; // 0x18
		::System::UInt32 validTimes_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SavePointsInfoNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SavePointsInfoNotify* Clone()
		{
			return ((::Proto::SavePointsInfoNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CLONE_OFFSET))(this);
		}

		::System::Int64 get_RefreshTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_REFRESHTIME_OFFSET))(this);
		}

		::System::Void set_RefreshTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_SET_REFRESHTIME_OFFSET))(this, value);
		}

		::System::UInt32 get_ValidTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_VALIDTIMES_OFFSET))(this);
		}

		::System::Void set_ValidTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_SET_VALIDTIMES_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::SavePointsInfoNotify* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SavePointsInfoNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
