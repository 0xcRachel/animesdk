#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_23.h"
#include "unitysdk/Proto/EntitySnapshot_EntityOneofCase.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MotionInfoSnapshot; }
namespace Proto { class PropInfoSnapshot; }
namespace System { class String; }

#define PROTO_ENTITYSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A7B0F0)
#define PROTO_ENTITYSNAPSHOT_CLEARENTITY_OFFSET UNITYSDK_OFFSET(0x17A7AB70)
#define PROTO_ENTITYSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x17A7AA90)
#define PROTO_ENTITYSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A7ABE0)
#define PROTO_ENTITYSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A7AB80)
#define PROTO_ENTITYSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A7AD60)
#define PROTO_ENTITYSNAPSHOT_GET_ENTITYCASE_OFFSET UNITYSDK_OFFSET(0x17A7AB60)
#define PROTO_ENTITYSNAPSHOT_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x17A7AAE0)
#define PROTO_ENTITYSNAPSHOT_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x17A7AB00)
#define PROTO_ENTITYSNAPSHOT_GET_MAPOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x17A7AB40)
#define PROTO_ENTITYSNAPSHOT_GET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x17A7AB20)
#define PROTO_ENTITYSNAPSHOT_GET_PROP_OFFSET UNITYSDK_OFFSET(0x17A7A9A0)
#define PROTO_ENTITYSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A7B6E0)
#define PROTO_ENTITYSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A7B380)
#define PROTO_ENTITYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A7A730)
#define PROTO_ENTITYSNAPSHOT_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x17A7AAF0)
#define PROTO_ENTITYSNAPSHOT_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x17A7AB10)
#define PROTO_ENTITYSNAPSHOT_SET_MAPOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x17A7AB50)
#define PROTO_ENTITYSNAPSHOT_SET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x17A7AB30)
#define PROTO_ENTITYSNAPSHOT_SET_PROP_OFFSET UNITYSDK_OFFSET(0x17A7AA70)
#define PROTO_ENTITYSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A7AF40)
#define PROTO_ENTITYSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A7AFA0)
#define PROTO_ENTITYSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A7A750)
#define PROTO_ENTITYSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7A740)

namespace Proto
{
	inline static constexpr unsigned int EntitySnapshot_TypeDefinitionIndex = 22646;

	class EntitySnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 EntityIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 InstanceIdFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 MotionInfoFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 MapObjectTypeFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 PropFieldNumber = 0x5; // 0x0
		::System::Object* entity_; // 0x10
		::Proto::MotionInfoSnapshot* motionInfo_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::System::UInt32 instanceId_; // 0x28
		::Proto::EntitySnapshot_EntityOneofCase entityCase_; // 0x2C
		::Enum_3_0A3761FE34514D6C_23 mapObjectType_; // 0x30
		::System::UInt32 entityId_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::EntitySnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::EntitySnapshot* Clone()
		{
			return ((::Proto::EntitySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_ENTITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_INSTANCEID_OFFSET))(this, value);
		}

		::Proto::MotionInfoSnapshot* get_MotionInfo()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_MOTIONINFO_OFFSET))(this);
		}

		::System::Void set_MotionInfo(::Proto::MotionInfoSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_MOTIONINFO_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_23 get_MapObjectType()
		{
			return ((::Enum_3_0A3761FE34514D6C_23(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_MAPOBJECTTYPE_OFFSET))(this);
		}

		::System::Void set_MapObjectType(::Enum_3_0A3761FE34514D6C_23 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_23))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_MAPOBJECTTYPE_OFFSET))(this, value);
		}

		::Proto::PropInfoSnapshot* get_Prop()
		{
			return ((::Proto::PropInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_PROP_OFFSET))(this);
		}

		::System::Void set_Prop(::Proto::PropInfoSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PropInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_PROP_OFFSET))(this, value);
		}

		::Proto::EntitySnapshot_EntityOneofCase get_EntityCase()
		{
			return ((::Proto::EntitySnapshot_EntityOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_ENTITYCASE_OFFSET))(this);
		}

		::System::Void ClearEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CLEARENTITY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::EntitySnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::EntitySnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
