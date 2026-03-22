#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_61;
class Class_1_C66F08F6BAF5805C_7;
class Class_1_F3CA30716D4FAF92_9;
class Class_1_FA4F4A67B1C04320_931;
class Class_1_FA4F4A67B1C04320_932;
class Class_1_FA4F4A67B1C04320_933;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_CD010263573232AE_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174BCEC0)
#define CLASS_1_CD010263573232AE_3_CLONE_OFFSET UNITYSDK_OFFSET(0x174BC040)
#define CLASS_1_CD010263573232AE_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174BC2C0)
#define CLASS_1_CD010263573232AE_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x174BC260)
#define CLASS_1_CD010263573232AE_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174BC510)
#define CLASS_1_CD010263573232AE_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174BD800)
#define CLASS_1_CD010263573232AE_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174BD4F0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x174BC130)
#define CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x174BC150)
#define CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x174BC170)
#define CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x174BC1B0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x174BC1F0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x174BC220)
#define CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x174BC240)
#define CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174BC0C0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x174BC120)
#define CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x174BC190)
#define CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x174BC1A0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x174BC1D0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_5_OFFSET UNITYSDK_OFFSET(0x174BC1E0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_6_OFFSET UNITYSDK_OFFSET(0x174BC210)
#define CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x174BC0B0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x174BC140)
#define CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x174BC160)
#define CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x174BC180)
#define CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x174BC1C0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x174BC200)
#define CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x174BC230)
#define CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x174BC250)
#define CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174BC0D0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x174BC0F0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x174BC110)
#define CLASS_1_CD010263573232AE_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x174BC0A0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x174BC0E0)
#define CLASS_1_CD010263573232AE_3_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x174BC100)
#define CLASS_1_CD010263573232AE_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x174BC090)
#define CLASS_1_CD010263573232AE_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174BBD60)
#define CLASS_1_CD010263573232AE_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174BCA50)
#define CLASS_1_CD010263573232AE_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x174BCAB0)
#define CLASS_1_CD010263573232AE_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x174BDC60)
#define CLASS_1_CD010263573232AE_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174BBEA0)
#define CLASS_1_CD010263573232AE_3__CTOR_OFFSET UNITYSDK_OFFSET(0x174BBD70)

inline static constexpr unsigned int Class_1_CD010263573232AE_3_TypeDefinitionIndex = 26793;

class Class_1_CD010263573232AE_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_7*>** StaticGet_Field_1_22()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_3_TypeDefinitionIndex)->GetStaticField(0x38DB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_7*>** StaticGet_Field_1_33()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_3_TypeDefinitionIndex)->GetStaticField(0x38DB8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F3CA30716D4FAF92_9*>** StaticGet_Field_1_25()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F3CA30716D4FAF92_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_3_TypeDefinitionIndex)->GetStaticField(0x38DC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_931*>** StaticGet_Field_1_30()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_931*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_3_TypeDefinitionIndex)->GetStaticField(0x38DC8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_932*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_932*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_3_TypeDefinitionIndex)->GetStaticField(0x38DD0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_933*>** StaticGet_Field_1_13()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_933*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_3_TypeDefinitionIndex)->GetStaticField(0x38DD8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_61*>** StaticGet_Field_1_38()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_61*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_3_TypeDefinitionIndex)->GetStaticField(0x38DE0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1FB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x425; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6FF; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x32E; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x5A; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x41E; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_21 = 0xA5; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x15D; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x161; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_42 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_932*>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_9*>* Field_1_26; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_61*>* Field_1_39; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_931*>* Field_1_31; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>* Field_1_34; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>* Field_1_23; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_933*>* Field_1_14; // 0x48
	::System::UInt32 Field_1_20; // 0x50
	::System::UInt32 Field_1_7; // 0x54
	::System::UInt32 Field_1_28; // 0x58
	::System::UInt32 Field_1_41; // 0x5C
	::System::UInt32 Field_1_16; // 0x60
	::System::UInt32 Field_1_36; // 0x64
	::System::Boolean Field_1_9; // 0x68
	::System::Boolean Field_1_11; // 0x69
	::System::Boolean Field_1_2; // 0x6A
	::System::UInt32 Field_1_43; // 0x6C
	::System::UInt32 Field_1_18; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CD010263573232AE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_3*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CD010263573232AE_3* Clone()
	{
		return ((::Class_1_CD010263573232AE_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_932*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_932*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_933*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_933*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_9*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_931*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_931*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>* Method_1_6E1EC2DF63D7020F_5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_61*>* Method_1_6E1EC2DF63D7020F_6()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_61*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_6E1EC2DF63D7020F_6_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CD010263573232AE_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CD010263573232AE_3*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CD010263573232AE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_3*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
