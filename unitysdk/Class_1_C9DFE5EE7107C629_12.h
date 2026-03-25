#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_30.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
class Class_1_FA4F4A67B1C04320_716;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FEBE30)
#define CLASS_1_C9DFE5EE7107C629_12_CLONE_OFFSET UNITYSDK_OFFSET(0x17FEB530)
#define CLASS_1_C9DFE5EE7107C629_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FEB760)
#define CLASS_1_C9DFE5EE7107C629_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FEB700)
#define CLASS_1_C9DFE5EE7107C629_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FEB900)
#define CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FEC560)
#define CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FEC3E0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17FEB5B0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17FEB5D0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17FEB600)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17FEB620)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17FEB660)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17FEB680)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x17FEB6C0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17FEB590)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FEB6E0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17FEB650)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17FEB5F0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17FEB580)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17FEB5C0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17FEB5E0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17FEB610)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17FEB630)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17FEB670)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17FEB690)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x17FEB6D0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17FEB5A0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FEB6F0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17FEB640)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17FEB6B0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17FEB6A0)
#define CLASS_1_C9DFE5EE7107C629_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FEB300)
#define CLASS_1_C9DFE5EE7107C629_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FEBB10)
#define CLASS_1_C9DFE5EE7107C629_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FEBB70)
#define CLASS_1_C9DFE5EE7107C629_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FEC820)
#define CLASS_1_C9DFE5EE7107C629_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FEB3A0)
#define CLASS_1_C9DFE5EE7107C629_12__CTOR_OFFSET UNITYSDK_OFFSET(0x17FEB310)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex = 26277;

class Class_1_C9DFE5EE7107C629_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_716*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_716*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x3CEC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x3CEC8);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_716*>* Field_1_3; // 0x18
	::Class_1_4D5D53619B020DDD* Field_1_28; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_12; // 0x28
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_9; // 0x34
	::System::UInt32 Field_1_7; // 0x38
	::System::UInt32 Field_1_16; // 0x3C
	::System::UInt32 Field_1_26; // 0x40
	::System::UInt32 Field_1_22; // 0x44
	::System::Boolean Field_1_24; // 0x48
	::Enum_3_4608E37A1B3D374A_30 Field_1_18; // 0x4C
	::System::UInt32 Field_1_5; // 0x50
	::System::UInt32 Field_1_20; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_12* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_716*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_716*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_30 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_30(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_30 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_30))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Class_1_4D5D53619B020DDD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
