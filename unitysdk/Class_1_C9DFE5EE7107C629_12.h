#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
class Class_1_D17272E82AE804C2_207;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ACCBAE0)
#define CLASS_1_C9DFE5EE7107C629_12_CLONE_OFFSET UNITYSDK_OFFSET(0x1ACCB150)
#define CLASS_1_C9DFE5EE7107C629_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ACCB320)
#define CLASS_1_C9DFE5EE7107C629_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ACCB2F0)
#define CLASS_1_C9DFE5EE7107C629_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ACCB4D0)
#define CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AE1CE30)
#define CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AE1CC90)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1ACCB1B0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1ACCB1F0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1ACCB270)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1ACCB290)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1ACCB2B0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1ACCB2D0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ACCB190)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1ACCB230)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1ACCB1E0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1ACCB260)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1ACCB250)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ACCAEA0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1ACCB180)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1ACCB1C0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1ACCB200)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1ACCB280)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1ACCB2A0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1ACCB2C0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1ACCB2E0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ACCB1A0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1ACCB240)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1ACCB1D0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1ACCB220)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1ACCB210)
#define CLASS_1_C9DFE5EE7107C629_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ACCAED0)
#define CLASS_1_C9DFE5EE7107C629_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ACCB780)
#define CLASS_1_C9DFE5EE7107C629_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ACCB7E0)
#define CLASS_1_C9DFE5EE7107C629_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE1D100)
#define CLASS_1_C9DFE5EE7107C629_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ACCAF90)
#define CLASS_1_C9DFE5EE7107C629_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACCAEE0)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex = 30957;

class Class_1_C9DFE5EE7107C629_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_207*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_207*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x7360);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x7368);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x7370);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x7378);
	}
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_17; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_18; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_207*>* Field_1_19; // 0x20
	::Class_1_C74059A83466814F* Field_1_20; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_21; // 0x30
	::System::UInt32 Field_1_22; // 0x38
	::System::UInt32 Field_1_23; // 0x3C
	::System::UInt32 Field_1_24; // 0x40
	::System::UInt32 Field_1_25; // 0x44
	::System::UInt32 Field_1_26; // 0x48
	::System::UInt32 Field_1_27; // 0x4C
	::Enum_3_4608E37A1B3D374A_28 Field_1_28; // 0x50
	::System::UInt32 Field_1_29; // 0x54
	::System::Boolean Field_1_30; // 0x58

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

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_12* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_207*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_207*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
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

	::Enum_3_4608E37A1B3D374A_28 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_28))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_C74059A83466814F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C74059A83466814F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_1_OFFSET))(this);
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
