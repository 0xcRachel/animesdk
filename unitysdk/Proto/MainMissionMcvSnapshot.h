#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MissionCustomValueSnapshotList; }
namespace System { class String; }

#define PROTO_MAINMISSIONMCVSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A896D0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x17A89140)
#define PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A89320)
#define PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A89240)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A893D0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GET_CUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x17A89220)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x17A89200)
#define PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A89A20)
#define PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A897A0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A89050)
#define PROTO_MAINMISSIONMCVSNAPSHOT_SET_CUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x17A89230)
#define PROTO_MAINMISSIONMCVSNAPSHOT_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x17A89210)
#define PROTO_MAINMISSIONMCVSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A895F0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A89650)
#define PROTO_MAINMISSIONMCVSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A89070)
#define PROTO_MAINMISSIONMCVSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A89060)

namespace Proto
{
	inline static constexpr unsigned int MainMissionMcvSnapshot_TypeDefinitionIndex = 22652;

	class MainMissionMcvSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 MainMissionIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 CustomValueListFieldNumber = 0x2; // 0x0
		::Proto::MissionCustomValueSnapshotList* customValueList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 mainMissionId_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MainMissionMcvSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionMcvSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MainMissionMcvSnapshot* Clone()
		{
			return ((::Proto::MainMissionMcvSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_SET_MAINMISSIONID_OFFSET))(this, value);
		}

		::Proto::MissionCustomValueSnapshotList* get_CustomValueList()
		{
			return ((::Proto::MissionCustomValueSnapshotList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GET_CUSTOMVALUELIST_OFFSET))(this);
		}

		::System::Void set_CustomValueList(::Proto::MissionCustomValueSnapshotList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionCustomValueSnapshotList*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_SET_CUSTOMVALUELIST_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::MainMissionMcvSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MainMissionMcvSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MainMissionMcvSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionMcvSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
