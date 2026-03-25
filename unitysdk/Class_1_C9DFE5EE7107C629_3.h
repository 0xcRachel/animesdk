#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_22.h"
#include "unitysdk/Enum_3_DB663931210BBC27_23.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_21;
class Class_1_C5EC8F6B23A665DA;
class Class_1_E7C4009BCC22497A_6;
class Class_1_FA4F4A67B1C04320_203;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FE4840)
#define CLASS_1_C9DFE5EE7107C629_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17FE3D70)
#define CLASS_1_C9DFE5EE7107C629_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FE3F60)
#define CLASS_1_C9DFE5EE7107C629_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FE3F30)
#define CLASS_1_C9DFE5EE7107C629_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FE4140)
#define CLASS_1_C9DFE5EE7107C629_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FE5000)
#define CLASS_1_C9DFE5EE7107C629_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FE4E30)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17FE3DC0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17FE3DF0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17FE3E40)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17FE3E90)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17FE3EF0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17FE3DA0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_217A4C673B33B3F5_1_OFFSET UNITYSDK_OFFSET(0x17FE3E20)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x17FE3DE0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x17FE3F20)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17FE3EE0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17FE3E10)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17FE3E60)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17FE3E30)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17FE3DD0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17FE3E00)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17FE3E50)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17FE3EA0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17FE3F00)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17FE3DB0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x17FE3F10)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17FE3ED0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17FE3EC0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17FE3E80)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17FE3EB0)
#define CLASS_1_C9DFE5EE7107C629_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17FE3E70)
#define CLASS_1_C9DFE5EE7107C629_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FE3B10)
#define CLASS_1_C9DFE5EE7107C629_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FE4430)
#define CLASS_1_C9DFE5EE7107C629_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FE4490)
#define CLASS_1_C9DFE5EE7107C629_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FE53A0)
#define CLASS_1_C9DFE5EE7107C629_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FE3C20)
#define CLASS_1_C9DFE5EE7107C629_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE3B20)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_3_TypeDefinitionIndex = 23933;

class Class_1_C9DFE5EE7107C629_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_E7C4009BCC22497A_6*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_E7C4009BCC22497A_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_3_TypeDefinitionIndex)->GetStaticField(0x3ACD0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_203*>** StaticGet_Field_1_22()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_203*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_3_TypeDefinitionIndex)->GetStaticField(0x3ACD8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_3_TypeDefinitionIndex)->GetStaticField(0x3ACE0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_6E708EAB438EC183_21*>** StaticGet_Field_1_14()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_6E708EAB438EC183_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_3_TypeDefinitionIndex)->GetStaticField(0x3ACE8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C5EC8F6B23A665DA*>** StaticGet_Field_1_17()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C5EC8F6B23A665DA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_3_TypeDefinitionIndex)->GetStaticField(0x3ACF0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_203*>* Field_1_23; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_12; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_6*>* Field_1_7; // 0x20
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_6E708EAB438EC183_21*>* Field_1_15; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C5EC8F6B23A665DA*>* Field_1_18; // 0x38
	::System::UInt32 Field_1_33; // 0x40
	::Enum_3_DB663931210BBC27_22 Field_1_35; // 0x44
	::System::UInt32 Field_1_20; // 0x48
	::Enum_3_DB663931210BBC27_23 Field_1_31; // 0x4C
	::System::UInt32 Field_1_4; // 0x50
	::System::UInt32 Field_1_2; // 0x54
	::System::Boolean Field_1_29; // 0x58
	::System::Boolean Field_1_25; // 0x59
	::System::UInt32 Field_1_27; // 0x5C
	::System::UInt32 Field_1_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_3*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_3* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_6*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_6E708EAB438EC183_21*>* Method_1_217A4C673B33B3F5_1()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_6E708EAB438EC183_21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_217A4C673B33B3F5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C5EC8F6B23A665DA*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C5EC8F6B23A665DA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_203*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_203*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_23 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_23(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_23 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_23))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_22 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_DB663931210BBC27_22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_DB663931210BBC27_22 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_22))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_3*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_3*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
