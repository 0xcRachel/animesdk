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

#define CLASS_1_7802A12C8BF248A5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17567210)
#define CLASS_1_7802A12C8BF248A5_CLONE_OFFSET UNITYSDK_OFFSET(0x17566BA0)
#define CLASS_1_7802A12C8BF248A5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17566C70)
#define CLASS_1_7802A12C8BF248A5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17566C40)
#define CLASS_1_7802A12C8BF248A5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17566D90)
#define CLASS_1_7802A12C8BF248A5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175675D0)
#define CLASS_1_7802A12C8BF248A5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17567470)
#define CLASS_1_7802A12C8BF248A5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17566C20)
#define CLASS_1_7802A12C8BF248A5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17566C00)
#define CLASS_1_7802A12C8BF248A5_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17566BE0)
#define CLASS_1_7802A12C8BF248A5_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x17566C10)
#define CLASS_1_7802A12C8BF248A5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17566BD0)
#define CLASS_1_7802A12C8BF248A5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17566C30)
#define CLASS_1_7802A12C8BF248A5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17566BF0)
#define CLASS_1_7802A12C8BF248A5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175669F0)
#define CLASS_1_7802A12C8BF248A5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17567000)
#define CLASS_1_7802A12C8BF248A5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17567060)
#define CLASS_1_7802A12C8BF248A5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17567750)
#define CLASS_1_7802A12C8BF248A5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17566A80)
#define CLASS_1_7802A12C8BF248A5__CTOR_OFFSET UNITYSDK_OFFSET(0x17566A00)

inline static constexpr unsigned int Class_1_7802A12C8BF248A5_TypeDefinitionIndex = 24332;

class Class_1_7802A12C8BF248A5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_016B52228E650C03*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_016B52228E650C03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7802A12C8BF248A5_TypeDefinitionIndex)->GetStaticField(0x32C10);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_414*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_414*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7802A12C8BF248A5_TypeDefinitionIndex)->GetStaticField(0x32C18);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_37*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_37*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7802A12C8BF248A5_TypeDefinitionIndex)->GetStaticField(0x32C20);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_414*>* Field_1_11; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_37*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_016B52228E650C03*>* Field_1_3; // 0x28
	::System::UInt32 Field_1_13; // 0x30
	::Enum_3_0A3761FE34514D6C_40 Field_1_8; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7802A12C8BF248A5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7802A12C8BF248A5*))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7802A12C8BF248A5* Clone()
	{
		return ((::Class_1_7802A12C8BF248A5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_016B52228E650C03*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_016B52228E650C03*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_37*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_37*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_40 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_40(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_40 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_40))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_414*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_414*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7802A12C8BF248A5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7802A12C8BF248A5*))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7802A12C8BF248A5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7802A12C8BF248A5*))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7802A12C8BF248A5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
