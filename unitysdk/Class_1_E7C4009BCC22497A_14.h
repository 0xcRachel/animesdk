#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_262;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18047750)
#define CLASS_1_E7C4009BCC22497A_14_CLONE_OFFSET UNITYSDK_OFFSET(0x18047330)
#define CLASS_1_E7C4009BCC22497A_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180474A0)
#define CLASS_1_E7C4009BCC22497A_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x18047390)
#define CLASS_1_E7C4009BCC22497A_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18047550)
#define CLASS_1_E7C4009BCC22497A_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18047890)
#define CLASS_1_E7C4009BCC22497A_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180477F0)
#define CLASS_1_E7C4009BCC22497A_14_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18047380)
#define CLASS_1_E7C4009BCC22497A_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18047220)
#define CLASS_1_E7C4009BCC22497A_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18047640)
#define CLASS_1_E7C4009BCC22497A_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x180476A0)
#define CLASS_1_E7C4009BCC22497A_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x18047970)
#define CLASS_1_E7C4009BCC22497A_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18047280)
#define CLASS_1_E7C4009BCC22497A_14__CTOR_OFFSET UNITYSDK_OFFSET(0x18047230)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_14_TypeDefinitionIndex = 24227;

class Class_1_E7C4009BCC22497A_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_262*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_262*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_14_TypeDefinitionIndex)->GetStaticField(0x461A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_262*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_14*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_14* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_262*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_262*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_14*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_14*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
