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

#define CLASS_1_6E708EAB438EC183_46_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174EE4C0)
#define CLASS_1_6E708EAB438EC183_46_CLONE_OFFSET UNITYSDK_OFFSET(0x174EE0F0)
#define CLASS_1_6E708EAB438EC183_46_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174EE210)
#define CLASS_1_6E708EAB438EC183_46_EQUALS_OFFSET UNITYSDK_OFFSET(0x174EE150)
#define CLASS_1_6E708EAB438EC183_46_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174EE2A0)
#define CLASS_1_6E708EAB438EC183_46_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174EE5B0)
#define CLASS_1_6E708EAB438EC183_46_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174EE560)
#define CLASS_1_6E708EAB438EC183_46_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x174EE140)
#define CLASS_1_6E708EAB438EC183_46_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174EE000)
#define CLASS_1_6E708EAB438EC183_46_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174EE3B0)
#define CLASS_1_6E708EAB438EC183_46_WRITETO_OFFSET UNITYSDK_OFFSET(0x174EE410)
#define CLASS_1_6E708EAB438EC183_46__CCTOR_OFFSET UNITYSDK_OFFSET(0x174EE680)
#define CLASS_1_6E708EAB438EC183_46__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174EE060)
#define CLASS_1_6E708EAB438EC183_46__CTOR_OFFSET UNITYSDK_OFFSET(0x174EE010)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_46_TypeDefinitionIndex = 24584;

class Class_1_6E708EAB438EC183_46 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_46_TypeDefinitionIndex)->GetStaticField(0x7040);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_46*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_46* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_46*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_46* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_46*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_46*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_46_MERGEFROM_1_OFFSET))(this, a1);
	}
};
