#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3CA30716D4FAF92_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181BC8F0)
#define CLASS_1_F3CA30716D4FAF92_CLONE_OFFSET UNITYSDK_OFFSET(0x181BBD30)
#define CLASS_1_F3CA30716D4FAF92_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181BC050)
#define CLASS_1_F3CA30716D4FAF92_EQUALS_OFFSET UNITYSDK_OFFSET(0x181BBFF0)
#define CLASS_1_F3CA30716D4FAF92_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181BC250)
#define CLASS_1_F3CA30716D4FAF92_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181BD360)
#define CLASS_1_F3CA30716D4FAF92_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181BD1D0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x181BBE20)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x181BBE40)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x181BBE60)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x181BBE80)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x181BBEB0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x181BBED0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x181BBF70)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x181BBFD0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181BBE00)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x181BBD80)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x181BBD90)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x181BBEF0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x181BBEA0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x181BBE30)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x181BBE50)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x181BBE70)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x181BBE90)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x181BBEC0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x181BBEE0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x181BBF80)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x181BBFE0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181BBE10)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x181BBF40)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x181BBF60)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_3_OFFSET UNITYSDK_OFFSET(0x181BBFA0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_4_OFFSET UNITYSDK_OFFSET(0x181BBFC0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x181BBF20)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x181BBF30)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x181BBF50)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0x181BBF90)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_4_OFFSET UNITYSDK_OFFSET(0x181BBFB0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x181BBF10)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x181BBF00)
#define CLASS_1_F3CA30716D4FAF92_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181BBB90)
#define CLASS_1_F3CA30716D4FAF92_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181BC490)
#define CLASS_1_F3CA30716D4FAF92_WRITETO_OFFSET UNITYSDK_OFFSET(0x181BC4F0)
#define CLASS_1_F3CA30716D4FAF92__CCTOR_OFFSET UNITYSDK_OFFSET(0x181BD650)
#define CLASS_1_F3CA30716D4FAF92__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181BBC00)
#define CLASS_1_F3CA30716D4FAF92__CTOR_OFFSET UNITYSDK_OFFSET(0x181BBBA0)

inline static constexpr unsigned int Class_1_F3CA30716D4FAF92_TypeDefinitionIndex = 22897;

class Class_1_F3CA30716D4FAF92 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_3*>** StaticGet_Field_1_14()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CA30716D4FAF92_TypeDefinitionIndex)->GetStaticField(0xC220);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_26 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x11; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_3*>* Field_1_15; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Int32 Field_1_27; // 0x28
	::System::Int32 Field_1_23; // 0x2C
	::System::Int32 Field_1_25; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::Single Field_1_21; // 0x38
	::System::UInt32 Field_1_35; // 0x3C
	::System::UInt32 Field_1_8; // 0x40
	::System::UInt32 Field_1_12; // 0x44
	::System::Int32 Field_1_33; // 0x48
	::System::UInt32 Field_1_19; // 0x4C
	::System::UInt32 Field_1_10; // 0x50
	::System::UInt32 Field_1_29; // 0x54
	::System::Int32 Field_1_31; // 0x58
	::System::UInt32 Field_1_17; // 0x5C
	::System::UInt32 Field_1_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3CA30716D4FAF92* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3CA30716D4FAF92* Clone()
	{
		return ((::Class_1_F3CA30716D4FAF92*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_4_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3CA30716D4FAF92* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3CA30716D4FAF92* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_MERGEFROM_1_OFFSET))(this, a1);
	}
};
