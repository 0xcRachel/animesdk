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

#define CLASS_1_735612C94F558EAE_88_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A148A0)
#define CLASS_1_735612C94F558EAE_88_CLONE_OFFSET UNITYSDK_OFFSET(0x17A14380)
#define CLASS_1_735612C94F558EAE_88_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A144D0)
#define CLASS_1_735612C94F558EAE_88_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A143F0)
#define CLASS_1_735612C94F558EAE_88_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A14580)
#define CLASS_1_735612C94F558EAE_88_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A149D0)
#define CLASS_1_735612C94F558EAE_88_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A14970)
#define CLASS_1_735612C94F558EAE_88_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17A143E0)
#define CLASS_1_735612C94F558EAE_88_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17A143D0)
#define CLASS_1_735612C94F558EAE_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A14200)
#define CLASS_1_735612C94F558EAE_88_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A14760)
#define CLASS_1_735612C94F558EAE_88_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A147C0)
#define CLASS_1_735612C94F558EAE_88__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A14B10)
#define CLASS_1_735612C94F558EAE_88__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A142A0)
#define CLASS_1_735612C94F558EAE_88__CTOR_OFFSET UNITYSDK_OFFSET(0x17A14210)

inline static constexpr unsigned int Class_1_735612C94F558EAE_88_TypeDefinitionIndex = 26529;

class Class_1_735612C94F558EAE_88 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_735612C94F558EAE_88_TypeDefinitionIndex)->GetStaticField(0x13EE0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_735612C94F558EAE_88_TypeDefinitionIndex)->GetStaticField(0x13EE8);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_735612C94F558EAE_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_88*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_88* Clone()
	{
		return ((::Class_1_735612C94F558EAE_88*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_735612C94F558EAE_88* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_735612C94F558EAE_88*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_735612C94F558EAE_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_88*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_88_MERGEFROM_1_OFFSET))(this, a1);
	}
};
