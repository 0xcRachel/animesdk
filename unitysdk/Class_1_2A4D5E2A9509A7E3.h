#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35B19D34B208E77E_19;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_2A4D5E2A9509A7E3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F62130)
#define CLASS_1_2A4D5E2A9509A7E3_CLONE_OFFSET UNITYSDK_OFFSET(0x17F61C90)
#define CLASS_1_2A4D5E2A9509A7E3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F61D30)
#define CLASS_1_2A4D5E2A9509A7E3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F61D00)
#define CLASS_1_2A4D5E2A9509A7E3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F61E20)
#define CLASS_1_2A4D5E2A9509A7E3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F623B0)
#define CLASS_1_2A4D5E2A9509A7E3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F622B0)
#define CLASS_1_2A4D5E2A9509A7E3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F61CD0)
#define CLASS_1_2A4D5E2A9509A7E3_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17F61CF0)
#define CLASS_1_2A4D5E2A9509A7E3_METHOD_1_6E8EADC4D1FD06E5_OFFSET UNITYSDK_OFFSET(0x17F61CC0)
#define CLASS_1_2A4D5E2A9509A7E3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F61CE0)
#define CLASS_1_2A4D5E2A9509A7E3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F61B00)
#define CLASS_1_2A4D5E2A9509A7E3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F61FC0)
#define CLASS_1_2A4D5E2A9509A7E3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F62020)
#define CLASS_1_2A4D5E2A9509A7E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F624E0)
#define CLASS_1_2A4D5E2A9509A7E3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F61B80)
#define CLASS_1_2A4D5E2A9509A7E3__CTOR_OFFSET UNITYSDK_OFFSET(0x17F61B10)

inline static constexpr unsigned int Class_1_2A4D5E2A9509A7E3_TypeDefinitionIndex = 26060;

class Class_1_2A4D5E2A9509A7E3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_35B19D34B208E77E_19*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_35B19D34B208E77E_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A4D5E2A9509A7E3_TypeDefinitionIndex)->GetStaticField(0x2B6E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A4D5E2A9509A7E3_TypeDefinitionIndex)->GetStaticField(0x2B6E8);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_19*>* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Field_1_3; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2A4D5E2A9509A7E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A4D5E2A9509A7E3*))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2A4D5E2A9509A7E3* Clone()
	{
		return ((::Class_1_2A4D5E2A9509A7E3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Method_1_6E8EADC4D1FD06E5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_METHOD_1_6E8EADC4D1FD06E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_19*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_19*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2A4D5E2A9509A7E3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A4D5E2A9509A7E3*))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2A4D5E2A9509A7E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A4D5E2A9509A7E3*))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2A4D5E2A9509A7E3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
