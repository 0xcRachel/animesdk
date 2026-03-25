#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7;
class Class_1_9592B34F41301777;
class Class_1_FA34F6BE161ACBE6_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B1FF62FAE312BC49_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18197DB0)
#define CLASS_1_B1FF62FAE312BC49_CLONE_OFFSET UNITYSDK_OFFSET(0x181976B0)
#define CLASS_1_B1FF62FAE312BC49_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181977C0)
#define CLASS_1_B1FF62FAE312BC49_EQUALS_OFFSET UNITYSDK_OFFSET(0x18197790)
#define CLASS_1_B1FF62FAE312BC49_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18197900)
#define CLASS_1_B1FF62FAE312BC49_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181981F0)
#define CLASS_1_B1FF62FAE312BC49_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18198070)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18197710)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x18197770)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181976E0)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x18197730)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x18197740)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18197700)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18197720)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x18197780)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181976F0)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18197760)
#define CLASS_1_B1FF62FAE312BC49_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18197750)
#define CLASS_1_B1FF62FAE312BC49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181974E0)
#define CLASS_1_B1FF62FAE312BC49_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18197B70)
#define CLASS_1_B1FF62FAE312BC49_WRITETO_OFFSET UNITYSDK_OFFSET(0x18197BD0)
#define CLASS_1_B1FF62FAE312BC49__CCTOR_OFFSET UNITYSDK_OFFSET(0x181983B0)
#define CLASS_1_B1FF62FAE312BC49__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18197570)
#define CLASS_1_B1FF62FAE312BC49__CTOR_OFFSET UNITYSDK_OFFSET(0x181974F0)

inline static constexpr unsigned int Class_1_B1FF62FAE312BC49_TypeDefinitionIndex = 24089;

class Class_1_B1FF62FAE312BC49 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA34F6BE161ACBE6_1*>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA34F6BE161ACBE6_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_TypeDefinitionIndex)->GetStaticField(0xD900);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_36E3880E987172D7*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_36E3880E987172D7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_TypeDefinitionIndex)->GetStaticField(0xD908);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9592B34F41301777*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9592B34F41301777*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_TypeDefinitionIndex)->GetStaticField(0xD910);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9592B34F41301777*>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA34F6BE161ACBE6_1*>* Field_1_13; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36E3880E987172D7*>* Field_1_10; // 0x28
	::System::UInt32 Field_1_2; // 0x30
	::System::UInt32 Field_1_7; // 0x34
	::System::UInt32 Field_1_17; // 0x38
	::System::Boolean Field_1_15; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B1FF62FAE312BC49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B1FF62FAE312BC49* Clone()
	{
		return ((::Class_1_B1FF62FAE312BC49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9592B34F41301777*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9592B34F41301777*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36E3880E987172D7*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36E3880E987172D7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA34F6BE161ACBE6_1*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA34F6BE161ACBE6_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B1FF62FAE312BC49* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B1FF62FAE312BC49*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B1FF62FAE312BC49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_MERGEFROM_1_OFFSET))(this, a1);
	}
};
