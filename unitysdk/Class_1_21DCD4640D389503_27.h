#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_39;
class Class_1_93AA40F7202497D0_12;
class Class_1_DB9F32FCA772D309_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6FE3E0)
#define CLASS_1_21DCD4640D389503_27_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6FD450)
#define CLASS_1_21DCD4640D389503_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6FD7C0)
#define CLASS_1_21DCD4640D389503_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6FD760)
#define CLASS_1_21DCD4640D389503_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6FDA40)
#define CLASS_1_21DCD4640D389503_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A6FEFE0)
#define CLASS_1_21DCD4640D389503_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6FED50)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x1A6FD6E0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x1A6FD710)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A6FD4C0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A6FD4E0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A6FD500)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A6FD520)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A6FD540)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1A6FD5E0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1A6FD610)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1A6FD630)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1A6FD650)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A6FD4A0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1A6FD680)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A6FD570)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1A6FD670)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A6FD560)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A6FD730)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A6FD5C0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A6FD0C0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A6FD6D0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1A6FD700)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A6FD600)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A6FD750)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x1A6FD6F0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x1A6FD720)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A6FD4D0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A6FD4F0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A6FD510)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A6FD530)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A6FD550)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1A6FD5F0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1A6FD620)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1A6FD640)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1A6FD660)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A6FD4B0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A6FD740)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A6FD5D0)
#define CLASS_1_21DCD4640D389503_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6FD120)
#define CLASS_1_21DCD4640D389503_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6FDEF0)
#define CLASS_1_21DCD4640D389503_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A6FDF50)
#define CLASS_1_21DCD4640D389503_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6FF4A0)
#define CLASS_1_21DCD4640D389503_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6FD260)
#define CLASS_1_21DCD4640D389503_27__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FD130)

inline static constexpr unsigned int Class_1_21DCD4640D389503_27_TypeDefinitionIndex = 27394;

class Class_1_21DCD4640D389503_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_27*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_27*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_27_TypeDefinitionIndex)->GetStaticField(0xE500);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_DB9F32FCA772D309_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_DB9F32FCA772D309_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_27_TypeDefinitionIndex)->GetStaticField(0xE508);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_27_TypeDefinitionIndex)->GetStaticField(0xE510);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_27_TypeDefinitionIndex)->GetStaticField(0xE518);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_27_TypeDefinitionIndex)->GetStaticField(0xE520);
	}
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xD7; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x423; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x24D; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x4D5; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x443; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x5DE; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_25; // 0x10
	::System::String* Field_1_26; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_27; // 0x20
	::Class_1_455008579EB95638_39* Field_1_28; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_2*>* Field_1_29; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_30; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_31; // 0x40
	::System::String* Field_1_32; // 0x48
	::Class_1_93AA40F7202497D0_12* Field_1_33; // 0x50
	::System::UInt32 Field_1_34; // 0x58
	::System::UInt32 Field_1_35; // 0x5C
	::System::UInt32 Field_1_36; // 0x60
	::System::UInt32 Field_1_37; // 0x64
	::System::UInt32 Field_1_38; // 0x68
	::System::UInt32 Field_1_39; // 0x6C
	::System::UInt32 Field_1_40; // 0x70
	::System::UInt32 Field_1_41; // 0x74
	::System::UInt32 Field_1_42; // 0x78
	::System::UInt32 Field_1_43; // 0x7C
	::System::UInt32 Field_1_44; // 0x80
	::System::UInt32 Field_1_45; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_27*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_27*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_27*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_27* Clone()
	{
		return ((::Class_1_21DCD4640D389503_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Class_1_455008579EB95638_39* Method_1_24748FC20F375725()
	{
		return ((::Class_1_455008579EB95638_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_455008579EB95638_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_39*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::Class_1_93AA40F7202497D0_12* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_93AA40F7202497D0_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_93AA40F7202497D0_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_12*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_27*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_27*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
