#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_30.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_265;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A21ACB7E0A72D3E4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C9EB90)
#define CLASS_1_A21ACB7E0A72D3E4_CLONE_OFFSET UNITYSDK_OFFSET(0x17C9E6D0)
#define CLASS_1_A21ACB7E0A72D3E4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C9E840)
#define CLASS_1_A21ACB7E0A72D3E4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C9E750)
#define CLASS_1_A21ACB7E0A72D3E4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C9E910)
#define CLASS_1_A21ACB7E0A72D3E4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C9EE20)
#define CLASS_1_A21ACB7E0A72D3E4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C9ED70)
#define CLASS_1_A21ACB7E0A72D3E4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C9E730)
#define CLASS_1_A21ACB7E0A72D3E4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17C9E720)
#define CLASS_1_A21ACB7E0A72D3E4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17C9E700)
#define CLASS_1_A21ACB7E0A72D3E4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C9E740)
#define CLASS_1_A21ACB7E0A72D3E4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17C9E710)
#define CLASS_1_A21ACB7E0A72D3E4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C9E5E0)
#define CLASS_1_A21ACB7E0A72D3E4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C9EA10)
#define CLASS_1_A21ACB7E0A72D3E4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C9EA70)
#define CLASS_1_A21ACB7E0A72D3E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C9EEF0)
#define CLASS_1_A21ACB7E0A72D3E4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C9E630)
#define CLASS_1_A21ACB7E0A72D3E4__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9E5F0)

inline static constexpr unsigned int Class_1_A21ACB7E0A72D3E4_TypeDefinitionIndex = 24246;

class Class_1_A21ACB7E0A72D3E4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_265*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_265*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A21ACB7E0A72D3E4_TypeDefinitionIndex)->GetStaticField(0x43C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_265*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_0A3761FE34514D6C_30 Field_1_5; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A21ACB7E0A72D3E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A21ACB7E0A72D3E4* Clone()
	{
		return ((::Class_1_A21ACB7E0A72D3E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_265*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_265*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_30 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_30(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_30 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_30))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A21ACB7E0A72D3E4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A21ACB7E0A72D3E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
