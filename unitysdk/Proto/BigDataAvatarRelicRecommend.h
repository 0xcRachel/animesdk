#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_92;
class Class_1_FA4F4A67B1C04320_683;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_BIGDATAAVATARRELICRECOMMEND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A75760)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_CLONE_OFFSET UNITYSDK_OFFSET(0x17A74DA0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A74ED0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A74E70)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A75070)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x17A74E20)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_BODYMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x17A74E60)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_FOOTMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x17A74E50)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_INNERSETLIST_OFFSET UNITYSDK_OFFSET(0x17A74DF0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_OUTERSETLIST_OFFSET UNITYSDK_OFFSET(0x17A74E10)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_ROPEMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x17A74E40)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_SPHEREMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x17A74E00)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A75BF0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A759A0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A74B60)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x17A74E30)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A75500)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A75560)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A75EA0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A74C70)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_OFFSET UNITYSDK_OFFSET(0x17A74B70)

namespace Proto
{
	inline static constexpr unsigned int BigDataAvatarRelicRecommend_TypeDefinitionIndex = 25531;

	class BigDataAvatarRelicRecommend : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_683*>** StaticGet__repeated_sphereMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_683*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x1A5C0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_92*>** StaticGet__repeated_innerSetList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_92*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x1A5C8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_92*>** StaticGet__repeated_outerSetList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_92*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x1A5D0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_683*>** StaticGet__repeated_ropeMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_683*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x1A5D8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_683*>** StaticGet__repeated_footMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_683*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x1A5E0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_683*>** StaticGet__repeated_bodyMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_683*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x1A5E8);
		}
		// static const ::System::Int32 InnerSetListFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 SphereMainPropertyListFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 OuterSetListFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 RopeMainPropertyListFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 FootMainPropertyListFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 BodyMainPropertyListFieldNumber = 0x6; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_92*>* outerSetList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>* footMainPropertyList_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>* ropeMainPropertyList_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>* bodyMainPropertyList_; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>* sphereMainPropertyList_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_92*>* innerSetList_; // 0x40
		::System::UInt32 avatarId_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::BigDataAvatarRelicRecommend* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::BigDataAvatarRelicRecommend* Clone()
		{
			return ((::Proto::BigDataAvatarRelicRecommend*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_92*>* get_InnerSetList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_92*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_INNERSETLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>* get_SphereMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_SPHEREMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_92*>* get_OuterSetList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_92*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_OUTERSETLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_SET_AVATARID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>* get_RopeMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_ROPEMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>* get_FootMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_FOOTMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>* get_BodyMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_683*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_BODYMAINPROPERTYLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::BigDataAvatarRelicRecommend* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::BigDataAvatarRelicRecommend* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
