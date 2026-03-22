#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_50;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D8EAED2BCF3F4D39_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x172E98F0)
#define CLASS_1_D8EAED2BCF3F4D39_9_CLONE_OFFSET UNITYSDK_OFFSET(0x172E9420)
#define CLASS_1_D8EAED2BCF3F4D39_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x172E94C0)
#define CLASS_1_D8EAED2BCF3F4D39_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x172E9490)
#define CLASS_1_D8EAED2BCF3F4D39_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x172E95B0)
#define CLASS_1_D8EAED2BCF3F4D39_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x172E9B30)
#define CLASS_1_D8EAED2BCF3F4D39_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x172E9A30)
#define CLASS_1_D8EAED2BCF3F4D39_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x172E9450)
#define CLASS_1_D8EAED2BCF3F4D39_9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x172E9480)
#define CLASS_1_D8EAED2BCF3F4D39_9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x172E9470)
#define CLASS_1_D8EAED2BCF3F4D39_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x172E9460)
#define CLASS_1_D8EAED2BCF3F4D39_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x172E9290)
#define CLASS_1_D8EAED2BCF3F4D39_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172E9750)
#define CLASS_1_D8EAED2BCF3F4D39_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x172E97B0)
#define CLASS_1_D8EAED2BCF3F4D39_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x172E9C50)
#define CLASS_1_D8EAED2BCF3F4D39_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172E9310)
#define CLASS_1_D8EAED2BCF3F4D39_9__CTOR_OFFSET UNITYSDK_OFFSET(0x172E92A0)

inline static constexpr unsigned int Class_1_D8EAED2BCF3F4D39_9_TypeDefinitionIndex = 25581;

class Class_1_D8EAED2BCF3F4D39_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_50*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8EAED2BCF3F4D39_9_TypeDefinitionIndex)->GetStaticField(0x2AAE0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_50*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8EAED2BCF3F4D39_9_TypeDefinitionIndex)->GetStaticField(0x2AAE8);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_50*>* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_50*>* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8EAED2BCF3F4D39_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_9*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8EAED2BCF3F4D39_9* Clone()
	{
		return ((::Class_1_D8EAED2BCF3F4D39_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_50*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_50*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_50*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_50*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8EAED2BCF3F4D39_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_9*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8EAED2BCF3F4D39_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_9*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
