#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_126415C60CEDDA17;
class Class_1_D17272E82AE804C2_587;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C260F0)
#define CLASS_1_21DCD4640D389503_30_CLONE_OFFSET UNITYSDK_OFFSET(0x19C250E0)
#define CLASS_1_21DCD4640D389503_30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C25440)
#define CLASS_1_21DCD4640D389503_30_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C253E0)
#define CLASS_1_21DCD4640D389503_30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C256A0)
#define CLASS_1_21DCD4640D389503_30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C26D80)
#define CLASS_1_21DCD4640D389503_30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C26AB0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C25280)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19C252A0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19C252C0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19C25300)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x19C25320)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C251C0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x19C25210)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x19C25370)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x19C25140)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x19C25200)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x19C25360)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19C25130)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_3163C288F3AE2966_1_OFFSET UNITYSDK_OFFSET(0x19C251F0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_3163C288F3AE2966_2_OFFSET UNITYSDK_OFFSET(0x19C253D0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19C251A0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19C24DF0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x19C25260)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x19C25270)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x19C25340)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x19C25350)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19C251B0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C25290)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19C252B0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19C252D0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19C25310)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x19C25330)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C251D0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19C252F0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_CE81D059476B1F49_1_OFFSET UNITYSDK_OFFSET(0x19C251E0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_CE81D059476B1F49_2_OFFSET UNITYSDK_OFFSET(0x19C253C0)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19C25190)
#define CLASS_1_21DCD4640D389503_30_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19C252E0)
#define CLASS_1_21DCD4640D389503_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C24E50)
#define CLASS_1_21DCD4640D389503_30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C25C50)
#define CLASS_1_21DCD4640D389503_30_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C25CB0)
#define CLASS_1_21DCD4640D389503_30__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C271D0)
#define CLASS_1_21DCD4640D389503_30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C24F60)
#define CLASS_1_21DCD4640D389503_30__CTOR_OFFSET UNITYSDK_OFFSET(0x19C24E60)

inline static constexpr unsigned int Class_1_21DCD4640D389503_30_TypeDefinitionIndex = 29178;

class Class_1_21DCD4640D389503_30 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_587*>** StaticGet_Field_1_19()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_587*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_30_TypeDefinitionIndex)->GetStaticField(0x4B0C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_587*>** StaticGet_Field_1_34()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_587*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_30_TypeDefinitionIndex)->GetStaticField(0x4B0C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_587*>** StaticGet_Field_1_16()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_587*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_30_TypeDefinitionIndex)->GetStaticField(0x4B0D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_587*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_587*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_30_TypeDefinitionIndex)->GetStaticField(0x4B0D8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_30*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_30_TypeDefinitionIndex)->GetStaticField(0x4B0E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_126415C60CEDDA17*>** StaticGet_Field_1_37()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_126415C60CEDDA17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_30_TypeDefinitionIndex)->GetStaticField(0x4B0E8);
	}
	// static const ::System::Int32 Field_1_2 = 0x64F; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x78E; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_31 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_33 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_36 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_39 = 0x14D; // 0x0
	// static const ::System::Int32 Field_1_41 = 0x7; // 0x0
	::System::String* Field_1_14; // 0x10
	::System::String* Field_1_3; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_126415C60CEDDA17*>* Field_1_38; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>* Field_1_35; // 0x28
	::System::String* Field_1_40; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>* Field_1_8; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>* Field_1_17; // 0x48
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>* Field_1_20; // 0x50
	::System::UInt32 Field_1_26; // 0x58
	::System::UInt32 Field_1_22; // 0x5C
	::System::Boolean Field_1_28; // 0x60
	::System::UInt64 Field_1_42; // 0x68
	::System::UInt64 Field_1_12; // 0x70
	::System::UInt32 Field_1_32; // 0x78
	::System::UInt32 Field_1_24; // 0x7C
	::System::UInt64 Field_1_5; // 0x80
	::System::UInt32 Field_1_30; // 0x88
	::System::UInt32 Field_1_10; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_30*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_30*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_30*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_30* Clone()
	{
		return ((::Class_1_21DCD4640D389503_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_1()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_CE81D059476B1F49_1_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_3163C288F3AE2966_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_587*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_126415C60CEDDA17*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_126415C60CEDDA17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_2()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_CE81D059476B1F49_2_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_2(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_METHOD_1_3163C288F3AE2966_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_30*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_30*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_30_MERGEFROM_1_OFFSET))(this, a1);
	}
};
