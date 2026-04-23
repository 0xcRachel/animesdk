#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Proto/SceneEntityInfo_EntityOneofCase.h"
#include "unitysdk/System/Object.h"

class Class_1_070964BB68D18B9F_3;
class Class_1_08093FBB447FB7BD_33;
class Class_1_1CBA230307F9C289_58;
class Class_1_20D743894CDF214D_1;
class Class_1_53763D498DB8321D_9;
class Class_1_DCE302F7FD05DE84_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_SCENEENTITYINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A58E8C0)
#define PROTO_SCENEENTITYINFO_CLEARENTITY_OFFSET UNITYSDK_OFFSET(0x1A58E110)
#define PROTO_SCENEENTITYINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1A58E050)
#define PROTO_SCENEENTITYINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A58E150)
#define PROTO_SCENEENTITYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A58E120)
#define PROTO_SCENEENTITYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A58E3F0)
#define PROTO_SCENEENTITYINFO_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1A58DE80)
#define PROTO_SCENEENTITYINFO_GET_ENTITYCASE_OFFSET UNITYSDK_OFFSET(0x1A58E100)
#define PROTO_SCENEENTITYINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1A58E080)
#define PROTO_SCENEENTITYINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A58E0C0)
#define PROTO_SCENEENTITYINFO_GET_INSTID_OFFSET UNITYSDK_OFFSET(0x1A58E0A0)
#define PROTO_SCENEENTITYINFO_GET_MOTION_OFFSET UNITYSDK_OFFSET(0x1A58E0E0)
#define PROTO_SCENEENTITYINFO_GET_NPCMONSTER_OFFSET UNITYSDK_OFFSET(0x1A58DED0)
#define PROTO_SCENEENTITYINFO_GET_NPC_OFFSET UNITYSDK_OFFSET(0x1A58DF30)
#define PROTO_SCENEENTITYINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A58DBC0)
#define PROTO_SCENEENTITYINFO_GET_PROP_OFFSET UNITYSDK_OFFSET(0x1A58DF90)
#define PROTO_SCENEENTITYINFO_GET_SUMMONUNIT_OFFSET UNITYSDK_OFFSET(0x1A58DFF0)
#define PROTO_SCENEENTITYINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A58F0F0)
#define PROTO_SCENEENTITYINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A58EC00)
#define PROTO_SCENEENTITYINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A58DBF0)
#define PROTO_SCENEENTITYINFO_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1A58DEC0)
#define PROTO_SCENEENTITYINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1A58E090)
#define PROTO_SCENEENTITYINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A58E0D0)
#define PROTO_SCENEENTITYINFO_SET_INSTID_OFFSET UNITYSDK_OFFSET(0x1A58E0B0)
#define PROTO_SCENEENTITYINFO_SET_MOTION_OFFSET UNITYSDK_OFFSET(0x1A58E0F0)
#define PROTO_SCENEENTITYINFO_SET_NPCMONSTER_OFFSET UNITYSDK_OFFSET(0x1A58DF10)
#define PROTO_SCENEENTITYINFO_SET_NPC_OFFSET UNITYSDK_OFFSET(0x1A58DF70)
#define PROTO_SCENEENTITYINFO_SET_PROP_OFFSET UNITYSDK_OFFSET(0x1A58DFD0)
#define PROTO_SCENEENTITYINFO_SET_SUMMONUNIT_OFFSET UNITYSDK_OFFSET(0x1A58E030)
#define PROTO_SCENEENTITYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A58E620)
#define PROTO_SCENEENTITYINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A58E680)
#define PROTO_SCENEENTITYINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A58F4F0)
#define PROTO_SCENEENTITYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A58DC10)
#define PROTO_SCENEENTITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58DC00)

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo_TypeDefinitionIndex = 32027;

	class SceneEntityInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::SceneEntityInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SceneEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityInfo_TypeDefinitionIndex)->GetStaticField(0x1D7B0);
		}
		// static const ::System::Int32 EntityIdFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 InstIdFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 GroupIdFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 MotionFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 ActorFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 NpcMonsterFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 NpcFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 PropFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 SummonUnitFieldNumber = 0xB; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Class_1_20D743894CDF214D_1* motion_; // 0x18
		::System::Object* entity_; // 0x20
		::System::UInt32 entityId_; // 0x28
		::System::UInt32 groupId_; // 0x2C
		::System::UInt32 instId_; // 0x30
		::Proto::SceneEntityInfo_EntityOneofCase entityCase_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SceneEntityInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::SceneEntityInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::SceneEntityInfo*>*(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SceneEntityInfo* Clone()
		{
			return ((::Proto::SceneEntityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_ENTITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_InstId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_INSTID_OFFSET))(this);
		}

		::System::Void set_InstId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_INSTID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_GROUPID_OFFSET))(this, value);
		}

		::Class_1_20D743894CDF214D_1* get_Motion()
		{
			return ((::Class_1_20D743894CDF214D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_MOTION_OFFSET))(this);
		}

		::System::Void set_Motion(::Class_1_20D743894CDF214D_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_1*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_MOTION_OFFSET))(this, value);
		}

		::Class_1_1CBA230307F9C289_58* get_Actor()
		{
			return ((::Class_1_1CBA230307F9C289_58*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_ACTOR_OFFSET))(this);
		}

		::System::Void set_Actor(::Class_1_1CBA230307F9C289_58* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_58*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_ACTOR_OFFSET))(this, value);
		}

		::Class_1_DCE302F7FD05DE84_5* get_NpcMonster()
		{
			return ((::Class_1_DCE302F7FD05DE84_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_NPCMONSTER_OFFSET))(this);
		}

		::System::Void set_NpcMonster(::Class_1_DCE302F7FD05DE84_5* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84_5*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_NPCMONSTER_OFFSET))(this, value);
		}

		::Class_1_08093FBB447FB7BD_33* get_Npc()
		{
			return ((::Class_1_08093FBB447FB7BD_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_NPC_OFFSET))(this);
		}

		::System::Void set_Npc(::Class_1_08093FBB447FB7BD_33* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_08093FBB447FB7BD_33*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_NPC_OFFSET))(this, value);
		}

		::Class_1_070964BB68D18B9F_3* get_Prop()
		{
			return ((::Class_1_070964BB68D18B9F_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_PROP_OFFSET))(this);
		}

		::System::Void set_Prop(::Class_1_070964BB68D18B9F_3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_3*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_PROP_OFFSET))(this, value);
		}

		::Class_1_53763D498DB8321D_9* get_SummonUnit()
		{
			return ((::Class_1_53763D498DB8321D_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_SUMMONUNIT_OFFSET))(this);
		}

		::System::Void set_SummonUnit(::Class_1_53763D498DB8321D_9* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_9*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_SUMMONUNIT_OFFSET))(this, value);
		}

		::Proto::SceneEntityInfo_EntityOneofCase get_EntityCase()
		{
			return ((::Proto::SceneEntityInfo_EntityOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_ENTITYCASE_OFFSET))(this);
		}

		::System::Void ClearEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_CLEARENTITY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::SceneEntityInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SceneEntityInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
