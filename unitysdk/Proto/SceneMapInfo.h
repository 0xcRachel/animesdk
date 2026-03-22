#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_111;
class Class_1_35B19D34B208E77E_25;
class Class_1_973F1F5DEEACFA6C_4;
class Class_1_9D5608F598A30CAC_40;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MapInfoGroup; }
namespace System { class String; }

#define PROTO_SCENEMAPINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A9A200)
#define PROTO_SCENEMAPINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x17A99300)
#define PROTO_SCENEMAPINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A994B0)
#define PROTO_SCENEMAPINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A99480)
#define PROTO_SCENEMAPINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A99730)
#define PROTO_SCENEMAPINFO_GET_CHESTLIST_OFFSET UNITYSDK_OFFSET(0x17A99450)
#define PROTO_SCENEMAPINFO_GET_CHESTMONSTERLIST_OFFSET UNITYSDK_OFFSET(0x17A99340)
#define PROTO_SCENEMAPINFO_GET_CHESTMONSTERNUM_OFFSET UNITYSDK_OFFSET(0x17A99460)
#define PROTO_SCENEMAPINFO_GET_CLIENTGROUPMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x17A993B0)
#define PROTO_SCENEMAPINFO_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x17A99430)
#define PROTO_SCENEMAPINFO_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x17A99350)
#define PROTO_SCENEMAPINFO_GET_FINISHEDCHESTMONSTERIDLIST_OFFSET UNITYSDK_OFFSET(0x17A99410)
#define PROTO_SCENEMAPINFO_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x17A993E0)
#define PROTO_SCENEMAPINFO_GET_FLOORSAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0x17A99380)
#define PROTO_SCENEMAPINFO_GET_GROUPLIST_OFFSET UNITYSDK_OFFSET(0x17A99370)
#define PROTO_SCENEMAPINFO_GET_LIGHTENSECTIONLIST_OFFSET UNITYSDK_OFFSET(0x17A99330)
#define PROTO_SCENEMAPINFO_GET_MAPINFOPROPLIST_OFFSET UNITYSDK_OFFSET(0x17A993D0)
#define PROTO_SCENEMAPINFO_GET_OPENEDCHESTIDLIST_OFFSET UNITYSDK_OFFSET(0x17A99420)
#define PROTO_SCENEMAPINFO_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A99390)
#define PROTO_SCENEMAPINFO_GET_UNLOCKTELEPORTLIST_OFFSET UNITYSDK_OFFSET(0x17A99400)
#define PROTO_SCENEMAPINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A9A9F0)
#define PROTO_SCENEMAPINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A9A740)
#define PROTO_SCENEMAPINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A98F40)
#define PROTO_SCENEMAPINFO_SET_CHESTMONSTERNUM_OFFSET UNITYSDK_OFFSET(0x17A99470)
#define PROTO_SCENEMAPINFO_SET_CLIENTGROUPMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x17A993C0)
#define PROTO_SCENEMAPINFO_SET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x17A99440)
#define PROTO_SCENEMAPINFO_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x17A99360)
#define PROTO_SCENEMAPINFO_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x17A993F0)
#define PROTO_SCENEMAPINFO_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A993A0)
#define PROTO_SCENEMAPINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A99DE0)
#define PROTO_SCENEMAPINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A99E40)
#define PROTO_SCENEMAPINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A9AE90)
#define PROTO_SCENEMAPINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A99110)
#define PROTO_SCENEMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A98F50)

namespace Proto
{
	inline static constexpr unsigned int SceneMapInfo_TypeDefinitionIndex = 26364;

	class SceneMapInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_finishedChestMonsterIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x28B0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_9D5608F598A30CAC_40*>** StaticGet__repeated_mapInfoPropList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_9D5608F598A30CAC_40*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x28B8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_35B19D34B208E77E_25*>** StaticGet__repeated_chestList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_35B19D34B208E77E_25*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x28C0);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_unlockTeleportList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x28C8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::MapInfoGroup*>** StaticGet__repeated_groupList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::MapInfoGroup*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x28D0);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_openedChestIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x28D8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_111*>** StaticGet__repeated_chestMonsterList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_111*>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x28E0);
		}
		static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet__map_floorSavedValueMap_codec()
		{
			return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x28E8);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_lightenSectionList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo_TypeDefinitionIndex)->GetStaticField(0x28F0);
		}
		// static const ::System::Int32 LightenSectionListFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 ChestMonsterListFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 EntryIdFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 GroupListFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 FloorSavedValueMapFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 ClientGroupMissionInfoFieldNumber = 0x737; // 0x0
		// static const ::System::Int32 MapInfoPropListFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 FloorIdFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 UnlockTeleportListFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 FinishedChestMonsterIdListFieldNumber = 0x634; // 0x0
		// static const ::System::Int32 OpenedChestIdListFieldNumber = 0x62C; // 0x0
		// static const ::System::Int32 DimensionIdFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 ChestListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 ChestMonsterNumFieldNumber = 0x5; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9D5608F598A30CAC_40*>* mapInfoPropList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* unlockTeleportList_; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* floorSavedValueMap_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_25*>* chestList_; // 0x28
		::Class_1_973F1F5DEEACFA6C_4* clientGroupMissionInfo_; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* openedChestIdList_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* lightenSectionList_; // 0x40
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x48
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* finishedChestMonsterIdList_; // 0x50
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MapInfoGroup*>* groupList_; // 0x58
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_111*>* chestMonsterList_; // 0x60
		::System::UInt32 floorId_; // 0x68
		::System::UInt32 retcode_; // 0x6C
		::System::UInt32 dimensionId_; // 0x70
		::System::UInt32 entryId_; // 0x74
		::System::UInt32 chestMonsterNum_; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SceneMapInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SceneMapInfo* Clone()
		{
			return ((::Proto::SceneMapInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_LightenSectionList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_LIGHTENSECTIONLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_111*>* get_ChestMonsterList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_111*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_CHESTMONSTERLIST_OFFSET))(this);
		}

		::System::UInt32 get_EntryId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_ENTRYID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MapInfoGroup*>* get_GroupList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::MapInfoGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_GROUPLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* get_FloorSavedValueMap()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_FLOORSAVEDVALUEMAP_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_RETCODE_OFFSET))(this, value);
		}

		::Class_1_973F1F5DEEACFA6C_4* get_ClientGroupMissionInfo()
		{
			return ((::Class_1_973F1F5DEEACFA6C_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_CLIENTGROUPMISSIONINFO_OFFSET))(this);
		}

		::System::Void set_ClientGroupMissionInfo(::Class_1_973F1F5DEEACFA6C_4* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_4*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_CLIENTGROUPMISSIONINFO_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9D5608F598A30CAC_40*>* get_MapInfoPropList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9D5608F598A30CAC_40*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_MAPINFOPROPLIST_OFFSET))(this);
		}

		::System::UInt32 get_FloorId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_FLOORID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_UnlockTeleportList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_UNLOCKTELEPORTLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_FinishedChestMonsterIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_FINISHEDCHESTMONSTERIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_OpenedChestIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_OPENEDCHESTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_DimensionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::Void set_DimensionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_DIMENSIONID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_25*>* get_ChestList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_25*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_CHESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_ChestMonsterNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GET_CHESTMONSTERNUM_OFFSET))(this);
		}

		::System::Void set_ChestMonsterNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_SET_CHESTMONSTERNUM_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::SceneMapInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SceneMapInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
