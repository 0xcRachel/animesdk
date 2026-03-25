#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B292FE068586E4C9_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_66_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1814E600)
#define CLASS_1_5FEFAED860528596_66_CLONE_OFFSET UNITYSDK_OFFSET(0x1814E150)
#define CLASS_1_5FEFAED860528596_66_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1814E2D0)
#define CLASS_1_5FEFAED860528596_66_EQUALS_OFFSET UNITYSDK_OFFSET(0x1814E1D0)
#define CLASS_1_5FEFAED860528596_66_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1814E3A0)
#define CLASS_1_5FEFAED860528596_66_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1814E7F0)
#define CLASS_1_5FEFAED860528596_66_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1814E6E0)
#define CLASS_1_5FEFAED860528596_66_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1814E1B0)
#define CLASS_1_5FEFAED860528596_66_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1814E1A0)
#define CLASS_1_5FEFAED860528596_66_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1814E1C0)
#define CLASS_1_5FEFAED860528596_66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1814E020)
#define CLASS_1_5FEFAED860528596_66_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1814E4C0)
#define CLASS_1_5FEFAED860528596_66_WRITETO_OFFSET UNITYSDK_OFFSET(0x1814E520)
#define CLASS_1_5FEFAED860528596_66__CCTOR_OFFSET UNITYSDK_OFFSET(0x1814E960)
#define CLASS_1_5FEFAED860528596_66__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1814E080)
#define CLASS_1_5FEFAED860528596_66__CTOR_OFFSET UNITYSDK_OFFSET(0x1814E030)

inline static constexpr unsigned int Class_1_5FEFAED860528596_66_TypeDefinitionIndex = 25865;

class Class_1_5FEFAED860528596_66 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_66_TypeDefinitionIndex)->GetStaticField(0x1910);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	::Class_1_B292FE068586E4C9_4* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_66*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_66* Clone()
	{
		return ((::Class_1_5FEFAED860528596_66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_B292FE068586E4C9_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B292FE068586E4C9_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_B292FE068586E4C9_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_4*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_66* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_66*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_66*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_66_MERGEFROM_1_OFFSET))(this, a1);
	}
};
