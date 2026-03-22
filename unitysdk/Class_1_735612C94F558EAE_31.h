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

#define CLASS_1_735612C94F558EAE_31_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A27200)
#define CLASS_1_735612C94F558EAE_31_CLONE_OFFSET UNITYSDK_OFFSET(0x17A26D60)
#define CLASS_1_735612C94F558EAE_31_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A26E70)
#define CLASS_1_735612C94F558EAE_31_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A26DB0)
#define CLASS_1_735612C94F558EAE_31_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A26F20)
#define CLASS_1_735612C94F558EAE_31_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A272F0)
#define CLASS_1_735612C94F558EAE_31_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A27290)
#define CLASS_1_735612C94F558EAE_31_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17A26DA0)
#define CLASS_1_735612C94F558EAE_31_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17A26D90)
#define CLASS_1_735612C94F558EAE_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A26BE0)
#define CLASS_1_735612C94F558EAE_31_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A27100)
#define CLASS_1_735612C94F558EAE_31_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A27160)
#define CLASS_1_735612C94F558EAE_31__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A27420)
#define CLASS_1_735612C94F558EAE_31__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A26C80)
#define CLASS_1_735612C94F558EAE_31__CTOR_OFFSET UNITYSDK_OFFSET(0x17A26BF0)

inline static constexpr unsigned int Class_1_735612C94F558EAE_31_TypeDefinitionIndex = 24286;

class Class_1_735612C94F558EAE_31 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_735612C94F558EAE_31_TypeDefinitionIndex)->GetStaticField(0x14990);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_735612C94F558EAE_31_TypeDefinitionIndex)->GetStaticField(0x14998);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_735612C94F558EAE_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_31*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_31* Clone()
	{
		return ((::Class_1_735612C94F558EAE_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_735612C94F558EAE_31* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_735612C94F558EAE_31*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_735612C94F558EAE_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_31*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_31_MERGEFROM_1_OFFSET))(this, a1);
	}
};
