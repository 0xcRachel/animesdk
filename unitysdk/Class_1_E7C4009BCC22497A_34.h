#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_334;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_34_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17882E70)
#define CLASS_1_E7C4009BCC22497A_34_CLONE_OFFSET UNITYSDK_OFFSET(0x17882A50)
#define CLASS_1_E7C4009BCC22497A_34_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17882BC0)
#define CLASS_1_E7C4009BCC22497A_34_EQUALS_OFFSET UNITYSDK_OFFSET(0x17882AB0)
#define CLASS_1_E7C4009BCC22497A_34_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17882C70)
#define CLASS_1_E7C4009BCC22497A_34_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17882FB0)
#define CLASS_1_E7C4009BCC22497A_34_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17882F10)
#define CLASS_1_E7C4009BCC22497A_34_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17882AA0)
#define CLASS_1_E7C4009BCC22497A_34_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17882940)
#define CLASS_1_E7C4009BCC22497A_34_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17882D60)
#define CLASS_1_E7C4009BCC22497A_34_WRITETO_OFFSET UNITYSDK_OFFSET(0x17882DC0)
#define CLASS_1_E7C4009BCC22497A_34__CCTOR_OFFSET UNITYSDK_OFFSET(0x17883090)
#define CLASS_1_E7C4009BCC22497A_34__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178829A0)
#define CLASS_1_E7C4009BCC22497A_34__CTOR_OFFSET UNITYSDK_OFFSET(0x17882950)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_34_TypeDefinitionIndex = 24082;

class Class_1_E7C4009BCC22497A_34 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_334*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_334*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_34_TypeDefinitionIndex)->GetStaticField(0x2ED80);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_334*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_34*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_34* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_34*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_334*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_334*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_34* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_34*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_34*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_34_MERGEFROM_1_OFFSET))(this, a1);
	}
};
