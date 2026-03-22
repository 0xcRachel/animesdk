#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_32.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_279;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3CA30716D4FAF92_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177A6780)
#define CLASS_1_F3CA30716D4FAF92_5_CLONE_OFFSET UNITYSDK_OFFSET(0x177A6190)
#define CLASS_1_F3CA30716D4FAF92_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177A6310)
#define CLASS_1_F3CA30716D4FAF92_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x177A62B0)
#define CLASS_1_F3CA30716D4FAF92_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177A6420)
#define CLASS_1_F3CA30716D4FAF92_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177A6B80)
#define CLASS_1_F3CA30716D4FAF92_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177A6A90)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x177A6230)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x177A6210)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x177A62A0)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x177A61E0)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x177A6240)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x177A6220)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x177A6290)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x177A6280)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x177A6270)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x177A6260)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x177A6200)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x177A6250)
#define CLASS_1_F3CA30716D4FAF92_5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x177A61F0)
#define CLASS_1_F3CA30716D4FAF92_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177A6060)
#define CLASS_1_F3CA30716D4FAF92_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177A6530)
#define CLASS_1_F3CA30716D4FAF92_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x177A6590)
#define CLASS_1_F3CA30716D4FAF92_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x177A6CF0)
#define CLASS_1_F3CA30716D4FAF92_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177A60C0)
#define CLASS_1_F3CA30716D4FAF92_5__CTOR_OFFSET UNITYSDK_OFFSET(0x177A6070)

inline static constexpr unsigned int Class_1_F3CA30716D4FAF92_5_TypeDefinitionIndex = 23831;

class Class_1_F3CA30716D4FAF92_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_279*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_279*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CA30716D4FAF92_5_TypeDefinitionIndex)->GetStaticField(0x3CB70);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_279*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_0A3761FE34514D6C_32 Field_1_15; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::Int32 Field_1_13; // 0x28
	::System::UInt32 Field_1_7; // 0x2C
	::System::Boolean Field_1_11; // 0x30
	::System::Boolean Field_1_5; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3CA30716D4FAF92_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3CA30716D4FAF92_5* Clone()
	{
		return ((::Class_1_F3CA30716D4FAF92_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_279*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_279*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_32 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3CA30716D4FAF92_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3CA30716D4FAF92_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
