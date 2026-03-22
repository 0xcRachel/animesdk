#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_61.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_99;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_995D71A1466B2CCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17722540)
#define CLASS_1_995D71A1466B2CCC_CLONE_OFFSET UNITYSDK_OFFSET(0x17722030)
#define CLASS_1_995D71A1466B2CCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177221F0)
#define CLASS_1_995D71A1466B2CCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x177220D0)
#define CLASS_1_995D71A1466B2CCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177222C0)
#define CLASS_1_995D71A1466B2CCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177227D0)
#define CLASS_1_995D71A1466B2CCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17722720)
#define CLASS_1_995D71A1466B2CCC_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x177220B0)
#define CLASS_1_995D71A1466B2CCC_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x177220A0)
#define CLASS_1_995D71A1466B2CCC_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17722080)
#define CLASS_1_995D71A1466B2CCC_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x177220C0)
#define CLASS_1_995D71A1466B2CCC_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17722090)
#define CLASS_1_995D71A1466B2CCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17721F10)
#define CLASS_1_995D71A1466B2CCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177223C0)
#define CLASS_1_995D71A1466B2CCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x17722420)
#define CLASS_1_995D71A1466B2CCC__CCTOR_OFFSET UNITYSDK_OFFSET(0x177228B0)
#define CLASS_1_995D71A1466B2CCC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17721F70)
#define CLASS_1_995D71A1466B2CCC__CTOR_OFFSET UNITYSDK_OFFSET(0x17721F20)

inline static constexpr unsigned int Class_1_995D71A1466B2CCC_TypeDefinitionIndex = 26688;

class Class_1_995D71A1466B2CCC : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_99*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_99*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_995D71A1466B2CCC_TypeDefinitionIndex)->GetStaticField(0x346B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_99*>* Field_1_3; // 0x18
	::Enum_3_DB663931210BBC27_61 Field_1_5; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_995D71A1466B2CCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_995D71A1466B2CCC*))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_995D71A1466B2CCC* Clone()
	{
		return ((::Class_1_995D71A1466B2CCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_99*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_99*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_61 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_61(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_61 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_61))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_995D71A1466B2CCC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_995D71A1466B2CCC*))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_995D71A1466B2CCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_995D71A1466B2CCC*))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_995D71A1466B2CCC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
