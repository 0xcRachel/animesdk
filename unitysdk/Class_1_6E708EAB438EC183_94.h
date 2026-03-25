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

#define CLASS_1_6E708EAB438EC183_94_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181D4C10)
#define CLASS_1_6E708EAB438EC183_94_CLONE_OFFSET UNITYSDK_OFFSET(0x181D4840)
#define CLASS_1_6E708EAB438EC183_94_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181D4960)
#define CLASS_1_6E708EAB438EC183_94_EQUALS_OFFSET UNITYSDK_OFFSET(0x181D48A0)
#define CLASS_1_6E708EAB438EC183_94_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181D49F0)
#define CLASS_1_6E708EAB438EC183_94_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181D4D00)
#define CLASS_1_6E708EAB438EC183_94_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181D4CB0)
#define CLASS_1_6E708EAB438EC183_94_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x181D4890)
#define CLASS_1_6E708EAB438EC183_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181D4750)
#define CLASS_1_6E708EAB438EC183_94_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181D4B00)
#define CLASS_1_6E708EAB438EC183_94_WRITETO_OFFSET UNITYSDK_OFFSET(0x181D4B60)
#define CLASS_1_6E708EAB438EC183_94__CCTOR_OFFSET UNITYSDK_OFFSET(0x181D4DD0)
#define CLASS_1_6E708EAB438EC183_94__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181D47B0)
#define CLASS_1_6E708EAB438EC183_94__CTOR_OFFSET UNITYSDK_OFFSET(0x181D4760)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_94_TypeDefinitionIndex = 26819;

class Class_1_6E708EAB438EC183_94 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_94_TypeDefinitionIndex)->GetStaticField(0x27870);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_94*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_94* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_94* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_94*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_94*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_94_MERGEFROM_1_OFFSET))(this, a1);
	}
};
