#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_575;
class Class_1_FA4F4A67B1C04320_576;
class Class_1_FA4F4A67B1C04320_577;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AC707EB222DD7018_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179BC830)
#define CLASS_1_AC707EB222DD7018_1_CLONE_OFFSET UNITYSDK_OFFSET(0x179BC2B0)
#define CLASS_1_AC707EB222DD7018_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179BC340)
#define CLASS_1_AC707EB222DD7018_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x179BC310)
#define CLASS_1_AC707EB222DD7018_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179BC450)
#define CLASS_1_AC707EB222DD7018_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179BCA90)
#define CLASS_1_AC707EB222DD7018_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179BC940)
#define CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x179BC2F0)
#define CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x179BC300)
#define CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x179BC2E0)
#define CLASS_1_AC707EB222DD7018_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179BC110)
#define CLASS_1_AC707EB222DD7018_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179BC6B0)
#define CLASS_1_AC707EB222DD7018_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x179BC710)
#define CLASS_1_AC707EB222DD7018_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x179BCC20)
#define CLASS_1_AC707EB222DD7018_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179BC1A0)
#define CLASS_1_AC707EB222DD7018_1__CTOR_OFFSET UNITYSDK_OFFSET(0x179BC120)

inline static constexpr unsigned int Class_1_AC707EB222DD7018_1_TypeDefinitionIndex = 25017;

class Class_1_AC707EB222DD7018_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_575*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_575*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC707EB222DD7018_1_TypeDefinitionIndex)->GetStaticField(0x9AB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_576*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_576*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC707EB222DD7018_1_TypeDefinitionIndex)->GetStaticField(0x9AB8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_577*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_577*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC707EB222DD7018_1_TypeDefinitionIndex)->GetStaticField(0x9AC0);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_575*>* Field_1_3; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_576*>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_577*>* Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AC707EB222DD7018_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC707EB222DD7018_1*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AC707EB222DD7018_1* Clone()
	{
		return ((::Class_1_AC707EB222DD7018_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_575*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_575*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_577*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_577*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_576*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_576*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AC707EB222DD7018_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC707EB222DD7018_1*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AC707EB222DD7018_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC707EB222DD7018_1*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
