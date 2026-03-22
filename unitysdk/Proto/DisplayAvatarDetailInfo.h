#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8064EBA28E797250;
class Class_1_FA4F4A67B1C04320_11;
class Class_1_FA4F4A67B1C04320_298;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_DISPLAYAVATARDETAILINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A79D90)
#define PROTO_DISPLAYAVATARDETAILINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x17A79580)
#define PROTO_DISPLAYAVATARDETAILINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A79720)
#define PROTO_DISPLAYAVATARDETAILINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A796F0)
#define PROTO_DISPLAYAVATARDETAILINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A798A0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x17A795D0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x17A79680)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x17A795B0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x17A796C0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_EXP_OFFSET UNITYSDK_OFFSET(0x17A795F0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17A79610)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x17A79660)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x17A796A0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x17A79630)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_RELICLIST_OFFSET UNITYSDK_OFFSET(0x17A796E0)
#define PROTO_DISPLAYAVATARDETAILINFO_GET_SKILLTREELIST_OFFSET UNITYSDK_OFFSET(0x17A79650)
#define PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A7A440)
#define PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A7A270)
#define PROTO_DISPLAYAVATARDETAILINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A79380)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x17A795E0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x17A79690)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x17A795C0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x17A796D0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_EXP_OFFSET UNITYSDK_OFFSET(0x17A79600)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17A79620)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x17A79670)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x17A796B0)
#define PROTO_DISPLAYAVATARDETAILINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0x17A79640)
#define PROTO_DISPLAYAVATARDETAILINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A79AB0)
#define PROTO_DISPLAYAVATARDETAILINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A79B10)
#define PROTO_DISPLAYAVATARDETAILINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A7A670)
#define PROTO_DISPLAYAVATARDETAILINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A79400)
#define PROTO_DISPLAYAVATARDETAILINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A79390)

namespace Proto
{
	inline static constexpr unsigned int DisplayAvatarDetailInfo_TypeDefinitionIndex = 23921;

	class DisplayAvatarDetailInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_11*>** StaticGet__repeated_skilltreeList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_11*>**)Il2CppClass::FromTypeDefinitionIndex(DisplayAvatarDetailInfo_TypeDefinitionIndex)->GetStaticField(0x1AA10);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_8064EBA28E797250*>** StaticGet__repeated_relicList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_8064EBA28E797250*>**)Il2CppClass::FromTypeDefinitionIndex(DisplayAvatarDetailInfo_TypeDefinitionIndex)->GetStaticField(0x1AA18);
		}
		// static const ::System::Int32 EnhancedIdFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 ExpFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 RankFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 SkilltreeListFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 PosFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 DressedSkinIdFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 PromotionFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 EquipmentFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 RelicListFieldNumber = 0x6; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_11*>* skilltreeList_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8064EBA28E797250*>* relicList_; // 0x20
		::Class_1_FA4F4A67B1C04320_298* equipment_; // 0x28
		::System::UInt32 promotion_; // 0x30
		::System::UInt32 rank_; // 0x34
		::System::UInt32 pos_; // 0x38
		::System::UInt32 exp_; // 0x3C
		::System::UInt32 avatarId_; // 0x40
		::System::UInt32 level_; // 0x44
		::System::UInt32 dressedSkinId_; // 0x48
		::System::UInt32 enhancedId_; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DisplayAvatarDetailInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::DisplayAvatarDetailInfo* Clone()
		{
			return ((::Proto::DisplayAvatarDetailInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_EnhancedId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_ENHANCEDID_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_AVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_EXP_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_RANK_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_11*>* get_SkilltreeList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_SKILLTREELIST_OFFSET))(this);
		}

		::System::UInt32 get_Pos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_POS_OFFSET))(this, value);
		}

		::System::UInt32 get_DressedSkinId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_DRESSEDSKINID_OFFSET))(this);
		}

		::System::Void set_DressedSkinId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_DRESSEDSKINID_OFFSET))(this, value);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_PROMOTION_OFFSET))(this, value);
		}

		::Class_1_FA4F4A67B1C04320_298* get_Equipment()
		{
			return ((::Class_1_FA4F4A67B1C04320_298*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_EQUIPMENT_OFFSET))(this);
		}

		::System::Void set_Equipment(::Class_1_FA4F4A67B1C04320_298* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_298*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_SET_EQUIPMENT_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8064EBA28E797250*>* get_RelicList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8064EBA28E797250*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GET_RELICLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::DisplayAvatarDetailInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DisplayAvatarDetailInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
