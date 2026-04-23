#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class RotationMapInfoSnapshot; }
namespace System { class String; }

#define PROTO_MAPROTATIONSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197686F0)
#define PROTO_MAPROTATIONSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x197682E0)
#define PROTO_MAPROTATIONSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197684E0)
#define PROTO_MAPROTATIONSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x19768400)
#define PROTO_MAPROTATIONSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19768590)
#define PROTO_MAPROTATIONSNAPSHOT_GET_MAPINFO_OFFSET UNITYSDK_OFFSET(0x197683E0)
#define PROTO_MAPROTATIONSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x197681E0)
#define PROTO_MAPROTATIONSNAPSHOT_GET_POSEID_OFFSET UNITYSDK_OFFSET(0x197683C0)
#define PROTO_MAPROTATIONSNAPSHOT_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x197683A0)
#define PROTO_MAPROTATIONSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197688F0)
#define PROTO_MAPROTATIONSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19768850)
#define PROTO_MAPROTATIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19768240)
#define PROTO_MAPROTATIONSNAPSHOT_SET_MAPINFO_OFFSET UNITYSDK_OFFSET(0x197683F0)
#define PROTO_MAPROTATIONSNAPSHOT_SET_POSEID_OFFSET UNITYSDK_OFFSET(0x197683D0)
#define PROTO_MAPROTATIONSNAPSHOT_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0x197683B0)
#define PROTO_MAPROTATIONSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197685D0)
#define PROTO_MAPROTATIONSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19768630)
#define PROTO_MAPROTATIONSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19768A30)
#define PROTO_MAPROTATIONSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19768260)
#define PROTO_MAPROTATIONSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19768250)

namespace Proto
{
	inline static constexpr unsigned int MapRotationSnapshot_TypeDefinitionIndex = 24553;

	class MapRotationSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::MapRotationSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MapRotationSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(MapRotationSnapshot_TypeDefinitionIndex)->GetStaticField(0x4C6C0);
		}
		// static const ::System::Int32 RegionIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 PoseIdFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 MapInfoFieldNumber = 0x3; // 0x0
		::Proto::RotationMapInfoSnapshot* mapInfo_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::Int32 regionId_; // 0x20
		::System::UInt32 poseId_; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MapRotationSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MapRotationSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MapRotationSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::MapRotationSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MapRotationSnapshot* Clone()
		{
			return ((::Proto::MapRotationSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::Int32 get_RegionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_GET_REGIONID_OFFSET))(this);
		}

		::System::Void set_RegionId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_SET_REGIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_PoseId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_GET_POSEID_OFFSET))(this);
		}

		::System::Void set_PoseId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_SET_POSEID_OFFSET))(this, value);
		}

		::Proto::RotationMapInfoSnapshot* get_MapInfo()
		{
			return ((::Proto::RotationMapInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_GET_MAPINFO_OFFSET))(this);
		}

		::System::Void set_MapInfo(::Proto::RotationMapInfoSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::RotationMapInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_SET_MAPINFO_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::MapRotationSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MapRotationSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MapRotationSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MapRotationSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
