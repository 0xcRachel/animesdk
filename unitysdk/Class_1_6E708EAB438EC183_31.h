#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6E708EAB438EC183_31_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1738C060)
#define CLASS_1_6E708EAB438EC183_31_CLONE_OFFSET UNITYSDK_OFFSET(0x1738BC90)
#define CLASS_1_6E708EAB438EC183_31_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1738BDB0)
#define CLASS_1_6E708EAB438EC183_31_EQUALS_OFFSET UNITYSDK_OFFSET(0x1738BCF0)
#define CLASS_1_6E708EAB438EC183_31_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1738BE40)
#define CLASS_1_6E708EAB438EC183_31_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1738C150)
#define CLASS_1_6E708EAB438EC183_31_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1738C100)
#define CLASS_1_6E708EAB438EC183_31_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1738BCE0)
#define CLASS_1_6E708EAB438EC183_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1738BBA0)
#define CLASS_1_6E708EAB438EC183_31_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1738BF50)
#define CLASS_1_6E708EAB438EC183_31_WRITETO_OFFSET UNITYSDK_OFFSET(0x1738BFB0)
#define CLASS_1_6E708EAB438EC183_31__CCTOR_OFFSET UNITYSDK_OFFSET(0x1738C220)
#define CLASS_1_6E708EAB438EC183_31__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1738BC00)
#define CLASS_1_6E708EAB438EC183_31__CTOR_OFFSET UNITYSDK_OFFSET(0x1738BBB0)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_31_TypeDefinitionIndex = 24116;

class Class_1_6E708EAB438EC183_31 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_31_TypeDefinitionIndex)->GetStaticField(0x35C50);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_31*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_31* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_31* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_31*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_31*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_31_MERGEFROM_1_OFFSET))(this, a1);
	}
};
