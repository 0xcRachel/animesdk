#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_40.h"
#include "unitysdk/System/Object.h"

class Class_1_016B52228E650C03;
class Class_1_4CF8088A158DCE25_37;
class Class_1_FA4F4A67B1C04320_414;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3ED5BD99308B7262_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1775E2A0)
#define CLASS_1_3ED5BD99308B7262_CLONE_OFFSET UNITYSDK_OFFSET(0x1775DCB0)
#define CLASS_1_3ED5BD99308B7262_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1775DD60)
#define CLASS_1_3ED5BD99308B7262_EQUALS_OFFSET UNITYSDK_OFFSET(0x1775DD30)
#define CLASS_1_3ED5BD99308B7262_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1775DE80)
#define CLASS_1_3ED5BD99308B7262_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1775E5F0)
#define CLASS_1_3ED5BD99308B7262_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1775E490)
#define CLASS_1_3ED5BD99308B7262_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1775DD00)
#define CLASS_1_3ED5BD99308B7262_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1775DD10)
#define CLASS_1_3ED5BD99308B7262_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1775DD20)
#define CLASS_1_3ED5BD99308B7262_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1775DCE0)
#define CLASS_1_3ED5BD99308B7262_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1775DCF0)
#define CLASS_1_3ED5BD99308B7262_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1775DB00)
#define CLASS_1_3ED5BD99308B7262_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1775E0E0)
#define CLASS_1_3ED5BD99308B7262_WRITETO_OFFSET UNITYSDK_OFFSET(0x1775E140)
#define CLASS_1_3ED5BD99308B7262__CCTOR_OFFSET UNITYSDK_OFFSET(0x1775E750)
#define CLASS_1_3ED5BD99308B7262__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1775DB90)
#define CLASS_1_3ED5BD99308B7262__CTOR_OFFSET UNITYSDK_OFFSET(0x1775DB10)

inline static constexpr unsigned int Class_1_3ED5BD99308B7262_TypeDefinitionIndex = 24339;

class Class_1_3ED5BD99308B7262 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_016B52228E650C03*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_016B52228E650C03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3ED5BD99308B7262_TypeDefinitionIndex)->GetStaticField(0x37690);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_414*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_414*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3ED5BD99308B7262_TypeDefinitionIndex)->GetStaticField(0x37698);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_37*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_37*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3ED5BD99308B7262_TypeDefinitionIndex)->GetStaticField(0x376A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_37*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_414*>* Field_1_8; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_016B52228E650C03*>* Field_1_11; // 0x28
	::Enum_3_0A3761FE34514D6C_40 Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3ED5BD99308B7262* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3ED5BD99308B7262*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3ED5BD99308B7262* Clone()
	{
		return ((::Class_1_3ED5BD99308B7262*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_37*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_37*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_40 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_40(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_40 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_40))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_414*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_414*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_016B52228E650C03*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_016B52228E650C03*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3ED5BD99308B7262* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3ED5BD99308B7262*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3ED5BD99308B7262* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3ED5BD99308B7262*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5BD99308B7262_MERGEFROM_1_OFFSET))(this, a1);
	}
};
