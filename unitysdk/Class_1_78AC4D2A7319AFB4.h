#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_10526515FFAD6598_1;
class Class_1_F1F83A16E5B8B459;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_78AC4D2A7319AFB4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1781DE10)
#define CLASS_1_78AC4D2A7319AFB4_CLONE_OFFSET UNITYSDK_OFFSET(0x1781D850)
#define CLASS_1_78AC4D2A7319AFB4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1781D980)
#define CLASS_1_78AC4D2A7319AFB4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1781D920)
#define CLASS_1_78AC4D2A7319AFB4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1781DAF0)
#define CLASS_1_78AC4D2A7319AFB4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1781E1C0)
#define CLASS_1_78AC4D2A7319AFB4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1781DFC0)
#define CLASS_1_78AC4D2A7319AFB4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1781D8A0)
#define CLASS_1_78AC4D2A7319AFB4_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1781D8E0)
#define CLASS_1_78AC4D2A7319AFB4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1781D900)
#define CLASS_1_78AC4D2A7319AFB4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1781D8C0)
#define CLASS_1_78AC4D2A7319AFB4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1781D8F0)
#define CLASS_1_78AC4D2A7319AFB4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1781D8B0)
#define CLASS_1_78AC4D2A7319AFB4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1781D910)
#define CLASS_1_78AC4D2A7319AFB4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1781D8D0)
#define CLASS_1_78AC4D2A7319AFB4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1781D610)
#define CLASS_1_78AC4D2A7319AFB4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1781DC20)
#define CLASS_1_78AC4D2A7319AFB4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1781DC80)
#define CLASS_1_78AC4D2A7319AFB4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1781E440)
#define CLASS_1_78AC4D2A7319AFB4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1781D690)
#define CLASS_1_78AC4D2A7319AFB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1781D620)

inline static constexpr unsigned int Class_1_78AC4D2A7319AFB4_TypeDefinitionIndex = 23677;

class Class_1_78AC4D2A7319AFB4 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_10526515FFAD6598_1*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_10526515FFAD6598_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78AC4D2A7319AFB4_TypeDefinitionIndex)->GetStaticField(0x41DF0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F1F83A16E5B8B459*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F1F83A16E5B8B459*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78AC4D2A7319AFB4_TypeDefinitionIndex)->GetStaticField(0x41DF8);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xC; // 0x0
	::Class_1_10526515FFAD6598_1* Field_1_4; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_10526515FFAD6598_1*>* Field_1_7; // 0x18
	::Class_1_10526515FFAD6598_1* Field_1_12; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F1F83A16E5B8B459*>* Field_1_10; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x30
	::System::UInt32 Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_78AC4D2A7319AFB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_78AC4D2A7319AFB4*))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_78AC4D2A7319AFB4* Clone()
	{
		return ((::Class_1_78AC4D2A7319AFB4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_10526515FFAD6598_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_10526515FFAD6598_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_10526515FFAD6598_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10526515FFAD6598_1*))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_10526515FFAD6598_1*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_10526515FFAD6598_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F1F83A16E5B8B459*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F1F83A16E5B8B459*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_10526515FFAD6598_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_10526515FFAD6598_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_10526515FFAD6598_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10526515FFAD6598_1*))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_78AC4D2A7319AFB4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_78AC4D2A7319AFB4*))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_78AC4D2A7319AFB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_78AC4D2A7319AFB4*))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_78AC4D2A7319AFB4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
