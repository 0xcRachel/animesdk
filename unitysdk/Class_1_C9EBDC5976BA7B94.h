#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_18.h"
#include "unitysdk/System/Object.h"

class Class_1_56410FBEF89611C1_1;
class Class_1_E473F14F738B1BF5_3;
class Class_1_FA4F4A67B1C04320_153;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9EBDC5976BA7B94_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1797CE30)
#define CLASS_1_C9EBDC5976BA7B94_CLONE_OFFSET UNITYSDK_OFFSET(0x1797C710)
#define CLASS_1_C9EBDC5976BA7B94_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1797C830)
#define CLASS_1_C9EBDC5976BA7B94_EQUALS_OFFSET UNITYSDK_OFFSET(0x1797C800)
#define CLASS_1_C9EBDC5976BA7B94_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1797C9B0)
#define CLASS_1_C9EBDC5976BA7B94_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1797D2A0)
#define CLASS_1_C9EBDC5976BA7B94_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1797D130)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1797C7D0)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1797C760)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1797C7A0)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1797C740)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1797C790)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1797C7F0)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1797C7C0)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1797C7E0)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1797C770)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1797C7B0)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1797C750)
#define CLASS_1_C9EBDC5976BA7B94_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1797C780)
#define CLASS_1_C9EBDC5976BA7B94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1797C4E0)
#define CLASS_1_C9EBDC5976BA7B94_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1797CBE0)
#define CLASS_1_C9EBDC5976BA7B94_WRITETO_OFFSET UNITYSDK_OFFSET(0x1797CC40)
#define CLASS_1_C9EBDC5976BA7B94__CCTOR_OFFSET UNITYSDK_OFFSET(0x1797D4A0)
#define CLASS_1_C9EBDC5976BA7B94__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1797C560)
#define CLASS_1_C9EBDC5976BA7B94__CTOR_OFFSET UNITYSDK_OFFSET(0x1797C4F0)

inline static constexpr unsigned int Class_1_C9EBDC5976BA7B94_TypeDefinitionIndex = 23147;

class Class_1_C9EBDC5976BA7B94 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_153*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_153*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9EBDC5976BA7B94_TypeDefinitionIndex)->GetStaticField(0x3E100);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_15()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9EBDC5976BA7B94_TypeDefinitionIndex)->GetStaticField(0x3E108);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x5; // 0x0
	::Class_1_E473F14F738B1BF5_3* Field_1_2; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_16; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_153*>* Field_1_11; // 0x20
	::Class_1_56410FBEF89611C1_1* Field_1_8; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x30
	::System::UInt32 Field_1_4; // 0x38
	::Enum_3_DB663931210BBC27_18 Field_1_6; // 0x3C
	::System::UInt32 Field_1_13; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9EBDC5976BA7B94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9EBDC5976BA7B94*))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9EBDC5976BA7B94* Clone()
	{
		return ((::Class_1_C9EBDC5976BA7B94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_CLONE_OFFSET))(this);
	}

	::Class_1_E473F14F738B1BF5_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E473F14F738B1BF5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E473F14F738B1BF5_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E473F14F738B1BF5_3*))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_18 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_18(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_18 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_18))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_56410FBEF89611C1_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_56410FBEF89611C1_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_56410FBEF89611C1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56410FBEF89611C1_1*))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_153*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_153*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9EBDC5976BA7B94* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9EBDC5976BA7B94*))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9EBDC5976BA7B94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9EBDC5976BA7B94*))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9EBDC5976BA7B94_MERGEFROM_1_OFFSET))(this, a1);
	}
};
