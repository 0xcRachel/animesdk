#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_4;
class Class_1_53763D498DB8321D_5;
class Class_1_6FC4D75D938BC053_10;
class Class_1_D17272E82AE804C2_634;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_14E02E1F6D70E487_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19DDD250)
#define CLASS_1_14E02E1F6D70E487_6_CLONE_OFFSET UNITYSDK_OFFSET(0x19DDC6F0)
#define CLASS_1_14E02E1F6D70E487_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19DDC8D0)
#define CLASS_1_14E02E1F6D70E487_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x19DDC8A0)
#define CLASS_1_14E02E1F6D70E487_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19DDCAE0)
#define CLASS_1_14E02E1F6D70E487_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19DDDA40)
#define CLASS_1_14E02E1F6D70E487_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19DDD7D0)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19DDC7B0)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19DDC7D0)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19DDC7F0)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19DDC810)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x19DDC830)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x19DDC860)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x19DDC880)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19DDC790)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19DDC740)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19DDC720)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x19DDC850)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19DDC760)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19DDC380)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x19DDC780)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19DDC770)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19DDC7C0)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19DDC7E0)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19DDC800)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19DDC820)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x19DDC840)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x19DDC870)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x19DDC890)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19DDC7A0)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19DDC750)
#define CLASS_1_14E02E1F6D70E487_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19DDC730)
#define CLASS_1_14E02E1F6D70E487_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19DDC3B0)
#define CLASS_1_14E02E1F6D70E487_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19DDCEA0)
#define CLASS_1_14E02E1F6D70E487_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x19DDCF00)
#define CLASS_1_14E02E1F6D70E487_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DDDE00)
#define CLASS_1_14E02E1F6D70E487_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19DDC4A0)
#define CLASS_1_14E02E1F6D70E487_6__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDC3C0)

inline static constexpr unsigned int Class_1_14E02E1F6D70E487_6_TypeDefinitionIndex = 29518;

class Class_1_14E02E1F6D70E487_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_28()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_6_TypeDefinitionIndex)->GetStaticField(0x6DF0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_53763D498DB8321D_4*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_53763D498DB8321D_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_6_TypeDefinitionIndex)->GetStaticField(0x6DF8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_634*>** StaticGet_Field_1_13()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_634*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_6_TypeDefinitionIndex)->GetStaticField(0x6E00);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_6_TypeDefinitionIndex)->GetStaticField(0x6E08);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_6_TypeDefinitionIndex)->GetStaticField(0x6E10);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_634*>* Field_1_14; // 0x20
	::Class_1_6FC4D75D938BC053_10* Field_1_3; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_29; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_4*>* Field_1_11; // 0x38
	::Class_1_53763D498DB8321D_5* Field_1_5; // 0x40
	::System::UInt32 Field_1_20; // 0x48
	::System::UInt32 Field_1_16; // 0x4C
	::System::UInt32 Field_1_26; // 0x50
	::System::UInt32 Field_1_31; // 0x54
	::System::UInt32 Field_1_18; // 0x58
	::System::UInt32 Field_1_22; // 0x5C
	::System::UInt32 Field_1_24; // 0x60
	::System::UInt32 Field_1_33; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_14E02E1F6D70E487_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_6*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487_6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_6* Clone()
	{
		return ((::Class_1_14E02E1F6D70E487_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_CLONE_OFFSET))(this);
	}

	::Class_1_6FC4D75D938BC053_10* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6FC4D75D938BC053_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6FC4D75D938BC053_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_10*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_53763D498DB8321D_5* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_53763D498DB8321D_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_53763D498DB8321D_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_5*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_634*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_634*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_14E02E1F6D70E487_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_14E02E1F6D70E487_6*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_14E02E1F6D70E487_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_6*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
