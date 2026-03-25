#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F644F0)
#define CLASS_1_C9DFE5EE7107C629_8_CLONE_OFFSET UNITYSDK_OFFSET(0x17F63F00)
#define CLASS_1_C9DFE5EE7107C629_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F64050)
#define CLASS_1_C9DFE5EE7107C629_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F63FF0)
#define CLASS_1_C9DFE5EE7107C629_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F64120)
#define CLASS_1_C9DFE5EE7107C629_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F64810)
#define CLASS_1_C9DFE5EE7107C629_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F64790)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F63FA0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F63F50)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F63FE0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17F63FC0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17F63F90)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F63FB0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F63F60)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F63FD0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17F63F80)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F63F70)
#define CLASS_1_C9DFE5EE7107C629_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F63D60)
#define CLASS_1_C9DFE5EE7107C629_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F64300)
#define CLASS_1_C9DFE5EE7107C629_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F64360)
#define CLASS_1_C9DFE5EE7107C629_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F649C0)
#define CLASS_1_C9DFE5EE7107C629_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F63E00)
#define CLASS_1_C9DFE5EE7107C629_8__CTOR_OFFSET UNITYSDK_OFFSET(0x17F63D70)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_8_TypeDefinitionIndex = 24923;

class Class_1_C9DFE5EE7107C629_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_8_TypeDefinitionIndex)->GetStaticField(0x2B9B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_8_TypeDefinitionIndex)->GetStaticField(0x2B9B8);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_12; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_9; // 0x2C
	::Enum_3_0A3761FE34514D6C_37 Field_1_14; // 0x30
	::System::Boolean Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_8*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_8* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_37 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_37(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_37))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_8*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_8*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
