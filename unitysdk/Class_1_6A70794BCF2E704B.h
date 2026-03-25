#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_75;
class Class_1_4CF8088A158DCE25_76;
class Class_1_53763D498DB8321D_6;
class Class_1_FA4F4A67B1C04320_777;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6A70794BCF2E704B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1825AD60)
#define CLASS_1_6A70794BCF2E704B_CLONE_OFFSET UNITYSDK_OFFSET(0x1825A6C0)
#define CLASS_1_6A70794BCF2E704B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1825A760)
#define CLASS_1_6A70794BCF2E704B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1825A730)
#define CLASS_1_6A70794BCF2E704B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1825A8A0)
#define CLASS_1_6A70794BCF2E704B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1825B040)
#define CLASS_1_6A70794BCF2E704B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1825AEA0)
#define CLASS_1_6A70794BCF2E704B_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1825A700)
#define CLASS_1_6A70794BCF2E704B_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1825A710)
#define CLASS_1_6A70794BCF2E704B_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1825A720)
#define CLASS_1_6A70794BCF2E704B_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1825A6F0)
#define CLASS_1_6A70794BCF2E704B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1825A4B0)
#define CLASS_1_6A70794BCF2E704B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1825ABB0)
#define CLASS_1_6A70794BCF2E704B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1825AC10)
#define CLASS_1_6A70794BCF2E704B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1825B210)
#define CLASS_1_6A70794BCF2E704B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1825A560)
#define CLASS_1_6A70794BCF2E704B__CTOR_OFFSET UNITYSDK_OFFSET(0x1825A4C0)

inline static constexpr unsigned int Class_1_6A70794BCF2E704B_TypeDefinitionIndex = 26620;

class Class_1_6A70794BCF2E704B : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_76*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_76*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A70794BCF2E704B_TypeDefinitionIndex)->GetStaticField(0x17A10);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_75*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_75*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A70794BCF2E704B_TypeDefinitionIndex)->GetStaticField(0x17A18);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_53763D498DB8321D_6*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_53763D498DB8321D_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A70794BCF2E704B_TypeDefinitionIndex)->GetStaticField(0x17A20);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_777*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_777*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A70794BCF2E704B_TypeDefinitionIndex)->GetStaticField(0x17A28);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_6*>* Field_1_12; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_75*>* Field_1_9; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_777*>* Field_1_3; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_76*>* Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6A70794BCF2E704B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A70794BCF2E704B*))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6A70794BCF2E704B* Clone()
	{
		return ((::Class_1_6A70794BCF2E704B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_777*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_777*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_76*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_76*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_75*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_75*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_6*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6A70794BCF2E704B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6A70794BCF2E704B*))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6A70794BCF2E704B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A70794BCF2E704B*))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6A70794BCF2E704B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
