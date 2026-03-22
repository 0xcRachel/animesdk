#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_5;
class Class_1_A0360CE19DA90CEC_8;
class Class_1_A16A135FC5A0DDB9_1;
class Class_1_BD570EF86E624FB1_3;
class Class_1_CEB0D1FB248C9C52_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17936750)
#define CLASS_1_21DCD4640D389503_21_CLONE_OFFSET UNITYSDK_OFFSET(0x179355B0)
#define CLASS_1_21DCD4640D389503_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179359E0)
#define CLASS_1_21DCD4640D389503_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x17935980)
#define CLASS_1_21DCD4640D389503_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17935D30)
#define CLASS_1_21DCD4640D389503_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17937550)
#define CLASS_1_21DCD4640D389503_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17937110)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x179356A0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x179356C0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x179356E0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x179357F0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17935810)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17935960)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17935620)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x17935740)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x179357A0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_3_OFFSET UNITYSDK_OFFSET(0x17935910)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17935650)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17935730)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x17935790)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x17935900)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17935640)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17935830)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x17935870)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x179358C0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x179358E0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17935710)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17935860)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x179356B0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x179356D0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x179356F0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17935800)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17935820)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17935970)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17935630)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17935840)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x17935880)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x179358D0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_4_OFFSET UNITYSDK_OFFSET(0x179358F0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17935720)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17935850)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x179358A0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17935610)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_CF8C379558248BF8_1_OFFSET UNITYSDK_OFFSET(0x179358B0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_CF8C379558248BF8_OFFSET UNITYSDK_OFFSET(0x17935700)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17935890)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17935600)
#define CLASS_1_21DCD4640D389503_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17935210)
#define CLASS_1_21DCD4640D389503_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17936210)
#define CLASS_1_21DCD4640D389503_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x17936270)
#define CLASS_1_21DCD4640D389503_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x17937AA0)
#define CLASS_1_21DCD4640D389503_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179352C0)
#define CLASS_1_21DCD4640D389503_21__CTOR_OFFSET UNITYSDK_OFFSET(0x17935220)

inline static constexpr unsigned int Class_1_21DCD4640D389503_21_TypeDefinitionIndex = 23926;

class Class_1_21DCD4640D389503_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_Field_1_14()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_21_TypeDefinitionIndex)->GetStaticField(0x389B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_Field_1_35()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_21_TypeDefinitionIndex)->GetStaticField(0x389B8);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x282; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x28D; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x573; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x420; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x72A; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_34 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x4BF; // 0x0
	// static const ::System::Int32 Field_1_39 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_41 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_43 = 0x7; // 0x0
	::System::String* Field_1_19; // 0x10
	::Class_1_CEB0D1FB248C9C52_2* Field_1_27; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::String* Field_1_42; // 0x28
	::System::String* Field_1_6; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Field_1_36; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Field_1_15; // 0x40
	::Class_1_A0360CE19DA90CEC_8* Field_1_38; // 0x48
	::System::String* Field_1_21; // 0x50
	::Class_1_6E708EAB438EC183_5* Field_1_31; // 0x58
	::Class_1_A16A135FC5A0DDB9_1* Field_1_40; // 0x60
	::Class_1_BD570EF86E624FB1_3* Field_1_17; // 0x68
	::Enum_3_7D0231C413D78CFA Field_1_29; // 0x70
	::System::UInt32 Field_1_10; // 0x74
	::System::UInt32 Field_1_44; // 0x78
	::System::UInt32 Field_1_12; // 0x7C
	::System::UInt32 Field_1_8; // 0x80
	::System::UInt32 Field_1_4; // 0x84
	::System::UInt32 Field_1_25; // 0x88
	::System::Boolean Field_1_2; // 0x8C
	::System::Boolean Field_1_33; // 0x8D
	::System::UInt32 Field_1_23; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_21*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_21* Clone()
	{
		return ((::Class_1_21DCD4640D389503_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Method_1_CF8C379558248BF8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_CF8C379558248BF8_OFFSET))(this);
	}

	::Class_1_BD570EF86E624FB1_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BD570EF86E624FB1_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BD570EF86E624FB1_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Class_1_CEB0D1FB248C9C52_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_CEB0D1FB248C9C52_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_CEB0D1FB248C9C52_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_2*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Enum_3_7D0231C413D78CFA Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_7D0231C413D78CFA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_7D0231C413D78CFA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7D0231C413D78CFA))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_6E708EAB438EC183_5* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_6E708EAB438EC183_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_6E708EAB438EC183_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_5*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Method_1_CF8C379558248BF8_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_CF8C379558248BF8_1_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_8* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_A0360CE19DA90CEC_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_A0360CE19DA90CEC_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_8*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::Class_1_A16A135FC5A0DDB9_1* Method_1_24748FC20F375725_4()
	{
		return ((::Class_1_A16A135FC5A0DDB9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_24748FC20F375725_4_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_4(::Class_1_A16A135FC5A0DDB9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_1*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_8C8625211DA811AE_4_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_21*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_21*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
