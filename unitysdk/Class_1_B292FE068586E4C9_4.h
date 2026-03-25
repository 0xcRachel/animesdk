#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C66F08F6BAF5805C_2;
class Class_1_FA4F4A67B1C04320_636;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B292FE068586E4C9_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EACFC0)
#define CLASS_1_B292FE068586E4C9_4_CLONE_OFFSET UNITYSDK_OFFSET(0x17EACB20)
#define CLASS_1_B292FE068586E4C9_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EACBF0)
#define CLASS_1_B292FE068586E4C9_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EACB90)
#define CLASS_1_B292FE068586E4C9_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EACCD0)
#define CLASS_1_B292FE068586E4C9_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EAD190)
#define CLASS_1_B292FE068586E4C9_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EAD0A0)
#define CLASS_1_B292FE068586E4C9_4_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17EACB80)
#define CLASS_1_B292FE068586E4C9_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17EACB70)
#define CLASS_1_B292FE068586E4C9_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EAC9A0)
#define CLASS_1_B292FE068586E4C9_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EACE70)
#define CLASS_1_B292FE068586E4C9_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EACED0)
#define CLASS_1_B292FE068586E4C9_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EAD2C0)
#define CLASS_1_B292FE068586E4C9_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EACA20)
#define CLASS_1_B292FE068586E4C9_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAC9B0)

inline static constexpr unsigned int Class_1_B292FE068586E4C9_4_TypeDefinitionIndex = 25849;

class Class_1_B292FE068586E4C9_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_2*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_4_TypeDefinitionIndex)->GetStaticField(0x2CD90);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_636*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_636*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_4_TypeDefinitionIndex)->GetStaticField(0x2CD98);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_636*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_2*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B292FE068586E4C9_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_4*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B292FE068586E4C9_4* Clone()
	{
		return ((::Class_1_B292FE068586E4C9_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_636*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_636*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B292FE068586E4C9_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B292FE068586E4C9_4*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B292FE068586E4C9_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_4*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
