#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A734B6279A7AB66E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1770C770)
#define CLASS_1_A734B6279A7AB66E_CLONE_OFFSET UNITYSDK_OFFSET(0x1770C450)
#define CLASS_1_A734B6279A7AB66E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1770C570)
#define CLASS_1_A734B6279A7AB66E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1770C490)
#define CLASS_1_A734B6279A7AB66E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1770C620)
#define CLASS_1_A734B6279A7AB66E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1770C8B0)
#define CLASS_1_A734B6279A7AB66E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1770C810)
#define CLASS_1_A734B6279A7AB66E_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1770C480)
#define CLASS_1_A734B6279A7AB66E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1770C370)
#define CLASS_1_A734B6279A7AB66E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1770C690)
#define CLASS_1_A734B6279A7AB66E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1770C6F0)
#define CLASS_1_A734B6279A7AB66E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1770C990)
#define CLASS_1_A734B6279A7AB66E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1770C3C0)
#define CLASS_1_A734B6279A7AB66E__CTOR_OFFSET UNITYSDK_OFFSET(0x1770C380)

inline static constexpr unsigned int Class_1_A734B6279A7AB66E_TypeDefinitionIndex = 24997;

class Class_1_A734B6279A7AB66E : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_F80BFD5B986D5503_4>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_F80BFD5B986D5503_4>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A734B6279A7AB66E_TypeDefinitionIndex)->GetStaticField(0x33650);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_F80BFD5B986D5503_4>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A734B6279A7AB66E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A734B6279A7AB66E*))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A734B6279A7AB66E* Clone()
	{
		return ((::Class_1_A734B6279A7AB66E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_F80BFD5B986D5503_4>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_F80BFD5B986D5503_4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A734B6279A7AB66E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A734B6279A7AB66E*))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A734B6279A7AB66E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A734B6279A7AB66E*))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
