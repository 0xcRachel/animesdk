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

#define CLASS_1_6E708EAB438EC183_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F79C20)
#define CLASS_1_6E708EAB438EC183_CLONE_OFFSET UNITYSDK_OFFSET(0x17F79850)
#define CLASS_1_6E708EAB438EC183_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F79970)
#define CLASS_1_6E708EAB438EC183_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F798B0)
#define CLASS_1_6E708EAB438EC183_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F79A00)
#define CLASS_1_6E708EAB438EC183_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F79D10)
#define CLASS_1_6E708EAB438EC183_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F79CC0)
#define CLASS_1_6E708EAB438EC183_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17F798A0)
#define CLASS_1_6E708EAB438EC183_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F79760)
#define CLASS_1_6E708EAB438EC183_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F79B10)
#define CLASS_1_6E708EAB438EC183_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F79B70)
#define CLASS_1_6E708EAB438EC183__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F79DE0)
#define CLASS_1_6E708EAB438EC183__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F797C0)
#define CLASS_1_6E708EAB438EC183__CTOR_OFFSET UNITYSDK_OFFSET(0x17F79770)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_TypeDefinitionIndex = 22915;

class Class_1_6E708EAB438EC183 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_TypeDefinitionIndex)->GetStaticField(0x40260);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183* Clone()
	{
		return ((::Class_1_6E708EAB438EC183*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_MERGEFROM_1_OFFSET))(this, a1);
	}
};
