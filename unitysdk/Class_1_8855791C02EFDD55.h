#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8855791C02EFDD55_Enum_3_FCBB2C507E9B21A3_27.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_63;
class Class_1_EC79926A4E5993F7;
class Class_1_FA4F4A67B1C04320_613;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8855791C02EFDD55_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173D2FC0)
#define CLASS_1_8855791C02EFDD55_CLONE_OFFSET UNITYSDK_OFFSET(0x173D28C0)
#define CLASS_1_8855791C02EFDD55_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173D2990)
#define CLASS_1_8855791C02EFDD55_EQUALS_OFFSET UNITYSDK_OFFSET(0x173D2960)
#define CLASS_1_8855791C02EFDD55_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173D2BC0)
#define CLASS_1_8855791C02EFDD55_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x173D35D0)
#define CLASS_1_8855791C02EFDD55_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173D3270)
#define CLASS_1_8855791C02EFDD55_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x173D2910)
#define CLASS_1_8855791C02EFDD55_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x173D28F0)
#define CLASS_1_8855791C02EFDD55_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x173D2940)
#define CLASS_1_8855791C02EFDD55_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x173D2840)
#define CLASS_1_8855791C02EFDD55_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x173D27C0)
#define CLASS_1_8855791C02EFDD55_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x173D2930)
#define CLASS_1_8855791C02EFDD55_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x173D2920)
#define CLASS_1_8855791C02EFDD55_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x173D2900)
#define CLASS_1_8855791C02EFDD55_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x173D2950)
#define CLASS_1_8855791C02EFDD55_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x173D28A0)
#define CLASS_1_8855791C02EFDD55_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x173D2820)
#define CLASS_1_8855791C02EFDD55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173D2550)
#define CLASS_1_8855791C02EFDD55_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173D2D80)
#define CLASS_1_8855791C02EFDD55_WRITETO_OFFSET UNITYSDK_OFFSET(0x173D2DE0)
#define CLASS_1_8855791C02EFDD55__CCTOR_OFFSET UNITYSDK_OFFSET(0x173D3890)
#define CLASS_1_8855791C02EFDD55__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173D25B0)
#define CLASS_1_8855791C02EFDD55__CTOR_OFFSET UNITYSDK_OFFSET(0x173D2560)

inline static constexpr unsigned int Class_1_8855791C02EFDD55_TypeDefinitionIndex = 25197;

class Class_1_8855791C02EFDD55 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_613*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_613*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8855791C02EFDD55_TypeDefinitionIndex)->GetStaticField(0x392B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	::System::Object* Field_1_10; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_613*>* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::Class_1_8855791C02EFDD55_Enum_3_FCBB2C507E9B21A3_27 Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8855791C02EFDD55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8855791C02EFDD55*))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8855791C02EFDD55* Clone()
	{
		return ((::Class_1_8855791C02EFDD55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_613*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_613*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_EC79926A4E5993F7* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_EC79926A4E5993F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EC79926A4E5993F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC79926A4E5993F7*))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_5FEFAED860528596_63* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_5FEFAED860528596_63*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_5FEFAED860528596_63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_63*))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_8855791C02EFDD55_Enum_3_FCBB2C507E9B21A3_27 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_8855791C02EFDD55_Enum_3_FCBB2C507E9B21A3_27(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8855791C02EFDD55* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8855791C02EFDD55*))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8855791C02EFDD55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8855791C02EFDD55*))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8855791C02EFDD55_MERGEFROM_1_OFFSET))(this, a1);
	}
};
