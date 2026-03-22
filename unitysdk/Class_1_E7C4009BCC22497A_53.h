#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_564;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_53_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17511C40)
#define CLASS_1_E7C4009BCC22497A_53_CLONE_OFFSET UNITYSDK_OFFSET(0x17511870)
#define CLASS_1_E7C4009BCC22497A_53_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17511990)
#define CLASS_1_E7C4009BCC22497A_53_EQUALS_OFFSET UNITYSDK_OFFSET(0x175118B0)
#define CLASS_1_E7C4009BCC22497A_53_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17511A40)
#define CLASS_1_E7C4009BCC22497A_53_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17511D80)
#define CLASS_1_E7C4009BCC22497A_53_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17511CE0)
#define CLASS_1_E7C4009BCC22497A_53_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x175118A0)
#define CLASS_1_E7C4009BCC22497A_53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17511760)
#define CLASS_1_E7C4009BCC22497A_53_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17511B30)
#define CLASS_1_E7C4009BCC22497A_53_WRITETO_OFFSET UNITYSDK_OFFSET(0x17511B90)
#define CLASS_1_E7C4009BCC22497A_53__CCTOR_OFFSET UNITYSDK_OFFSET(0x17511E60)
#define CLASS_1_E7C4009BCC22497A_53__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175117C0)
#define CLASS_1_E7C4009BCC22497A_53__CTOR_OFFSET UNITYSDK_OFFSET(0x17511770)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_53_TypeDefinitionIndex = 24955;

class Class_1_E7C4009BCC22497A_53 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_564*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_564*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_53_TypeDefinitionIndex)->GetStaticField(0x8CA0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_564*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_53*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_53* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_564*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_564*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_53* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_53*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_53*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_53_MERGEFROM_1_OFFSET))(this, a1);
	}
};
