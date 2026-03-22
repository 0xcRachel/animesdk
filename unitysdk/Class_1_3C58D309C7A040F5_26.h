#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_16;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3C58D309C7A040F5_26_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17810710)
#define CLASS_1_3C58D309C7A040F5_26_CLONE_OFFSET UNITYSDK_OFFSET(0x17810260)
#define CLASS_1_3C58D309C7A040F5_26_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178103E0)
#define CLASS_1_3C58D309C7A040F5_26_EQUALS_OFFSET UNITYSDK_OFFSET(0x178102E0)
#define CLASS_1_3C58D309C7A040F5_26_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178104A0)
#define CLASS_1_3C58D309C7A040F5_26_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17810950)
#define CLASS_1_3C58D309C7A040F5_26_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x178108A0)
#define CLASS_1_3C58D309C7A040F5_26_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x178102C0)
#define CLASS_1_3C58D309C7A040F5_26_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17810290)
#define CLASS_1_3C58D309C7A040F5_26_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x178102B0)
#define CLASS_1_3C58D309C7A040F5_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x178102D0)
#define CLASS_1_3C58D309C7A040F5_26_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x178102A0)
#define CLASS_1_3C58D309C7A040F5_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17810170)
#define CLASS_1_3C58D309C7A040F5_26_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178105A0)
#define CLASS_1_3C58D309C7A040F5_26_WRITETO_OFFSET UNITYSDK_OFFSET(0x17810600)
#define CLASS_1_3C58D309C7A040F5_26__CCTOR_OFFSET UNITYSDK_OFFSET(0x17810A20)
#define CLASS_1_3C58D309C7A040F5_26__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178101C0)
#define CLASS_1_3C58D309C7A040F5_26__CTOR_OFFSET UNITYSDK_OFFSET(0x17810180)

inline static constexpr unsigned int Class_1_3C58D309C7A040F5_26_TypeDefinitionIndex = 24574;

class Class_1_3C58D309C7A040F5_26 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C58D309C7A040F5_26_TypeDefinitionIndex)->GetStaticField(0x418D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3C58D309C7A040F5_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_26*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3C58D309C7A040F5_26* Clone()
	{
		return ((::Class_1_3C58D309C7A040F5_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3C58D309C7A040F5_26* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3C58D309C7A040F5_26*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3C58D309C7A040F5_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_26*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_26_MERGEFROM_1_OFFSET))(this, a1);
	}
};
