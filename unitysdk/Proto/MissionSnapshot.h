#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MainMissionMcvSnapshot; }
namespace Proto { class MainMissionSnapshot; }
namespace System { class String; }

#define PROTO_MISSIONSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A456E70)
#define PROTO_MISSIONSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4565B0)
#define PROTO_MISSIONSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A456780)
#define PROTO_MISSIONSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A456720)
#define PROTO_MISSIONSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A4568F0)
#define PROTO_MISSIONSNAPSHOT_GET_CLIENTMCVLIST_OFFSET UNITYSDK_OFFSET(0x1A456610)
#define PROTO_MISSIONSNAPSHOT_GET_CURAUDIOEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A456660)
#define PROTO_MISSIONSNAPSHOT_GET_CURSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0x1A4566C0)
#define PROTO_MISSIONSNAPSHOT_GET_HASMISSIONAUDIOSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1A456640)
#define PROTO_MISSIONSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A456330)
#define PROTO_MISSIONSNAPSHOT_GET_SERVERMCVLIST_OFFSET UNITYSDK_OFFSET(0x1A456600)
#define PROTO_MISSIONSNAPSHOT_GET_TRACKINGMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1A456620)
#define PROTO_MISSIONSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A4573D0)
#define PROTO_MISSIONSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A457160)
#define PROTO_MISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A456390)
#define PROTO_MISSIONSNAPSHOT_SET_CURAUDIOEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A456670)
#define PROTO_MISSIONSNAPSHOT_SET_CURSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0x1A4566D0)
#define PROTO_MISSIONSNAPSHOT_SET_HASMISSIONAUDIOSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1A456650)
#define PROTO_MISSIONSNAPSHOT_SET_TRACKINGMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1A456630)
#define PROTO_MISSIONSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A456C50)
#define PROTO_MISSIONSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A456CB0)
#define PROTO_MISSIONSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A457630)
#define PROTO_MISSIONSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A456430)
#define PROTO_MISSIONSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4563A0)

namespace Proto
{
	inline static constexpr unsigned int MissionSnapshot_TypeDefinitionIndex = 24406;

	class MissionSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::MissionSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MissionSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MissionSnapshot_TypeDefinitionIndex)->GetStaticField(0x3DC20);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::MainMissionMcvSnapshot*>** StaticGet__repeated_clientMcvList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::MainMissionMcvSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MissionSnapshot_TypeDefinitionIndex)->GetStaticField(0x3DC28);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::MainMissionMcvSnapshot*>** StaticGet__repeated_serverMcvList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::MainMissionMcvSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MissionSnapshot_TypeDefinitionIndex)->GetStaticField(0x3DC30);
		}
		// static const ::System::Int32 ServerMcvListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 ClientMcvListFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 TrackingMainMissionFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 HasMissionAudioSnapshotFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 CurAudioEmotionStateFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 CurSoundEffectStateFieldNumber = 0x6; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MainMissionMcvSnapshot*>* clientMcvList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MainMissionMcvSnapshot*>* serverMcvList_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Proto::MainMissionSnapshot* trackingMainMission_; // 0x28
		::System::String* curAudioEmotionState_; // 0x30
		::System::String* curSoundEffectState_; // 0x38
		::System::Boolean hasMissionAudioSnapshot_; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MissionSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::MissionSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MissionSnapshot* Clone()
		{
			return ((::Proto::MissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MainMissionMcvSnapshot*>* get_ServerMcvList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::MainMissionMcvSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_GET_SERVERMCVLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MainMissionMcvSnapshot*>* get_ClientMcvList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::MainMissionMcvSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_GET_CLIENTMCVLIST_OFFSET))(this);
		}

		::Proto::MainMissionSnapshot* get_TrackingMainMission()
		{
			return ((::Proto::MainMissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_GET_TRACKINGMAINMISSION_OFFSET))(this);
		}

		::System::Void set_TrackingMainMission(::Proto::MainMissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_SET_TRACKINGMAINMISSION_OFFSET))(this, a1);
		}

		::System::Boolean get_HasMissionAudioSnapshot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_GET_HASMISSIONAUDIOSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_HasMissionAudioSnapshot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_SET_HASMISSIONAUDIOSNAPSHOT_OFFSET))(this, a1);
		}

		::System::String* get_CurAudioEmotionState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_GET_CURAUDIOEMOTIONSTATE_OFFSET))(this);
		}

		::System::Void set_CurAudioEmotionState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_SET_CURAUDIOEMOTIONSTATE_OFFSET))(this, a1);
		}

		::System::String* get_CurSoundEffectState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_GET_CURSOUNDEFFECTSTATE_OFFSET))(this);
		}

		::System::Void set_CurSoundEffectState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_SET_CURSOUNDEFFECTSTATE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::MissionSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
