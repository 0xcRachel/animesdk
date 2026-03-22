#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DCEE691286F89A_1;
class Class_1_E48503FFC95DBC50;
class Class_1_EF0E638FDA49C9A1_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B1FF62FAE312BC49_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179C1A60)
#define CLASS_1_B1FF62FAE312BC49_3_CLONE_OFFSET UNITYSDK_OFFSET(0x179C12C0)
#define CLASS_1_B1FF62FAE312BC49_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179C13D0)
#define CLASS_1_B1FF62FAE312BC49_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x179C1370)
#define CLASS_1_B1FF62FAE312BC49_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179C1540)
#define CLASS_1_B1FF62FAE312BC49_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179C1DF0)
#define CLASS_1_B1FF62FAE312BC49_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179C1BD0)
#define CLASS_1_B1FF62FAE312BC49_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x179C1350)
#define CLASS_1_B1FF62FAE312BC49_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x179C1320)
#define CLASS_1_B1FF62FAE312BC49_3_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x179C1330)
#define CLASS_1_B1FF62FAE312BC49_3_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x179C1340)
#define CLASS_1_B1FF62FAE312BC49_3_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x179C1310)
#define CLASS_1_B1FF62FAE312BC49_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x179C1360)
#define CLASS_1_B1FF62FAE312BC49_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179C10B0)
#define CLASS_1_B1FF62FAE312BC49_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179C1860)
#define CLASS_1_B1FF62FAE312BC49_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x179C18C0)
#define CLASS_1_B1FF62FAE312BC49_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C2040)
#define CLASS_1_B1FF62FAE312BC49_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179C1180)
#define CLASS_1_B1FF62FAE312BC49_3__CTOR_OFFSET UNITYSDK_OFFSET(0x179C10C0)

inline static constexpr unsigned int Class_1_B1FF62FAE312BC49_3_TypeDefinitionIndex = 23757;

class Class_1_B1FF62FAE312BC49_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EF0E638FDA49C9A1_2*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EF0E638FDA49C9A1_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_3_TypeDefinitionIndex)->GetStaticField(0x9CA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E48503FFC95DBC50*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E48503FFC95DBC50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_3_TypeDefinitionIndex)->GetStaticField(0x9CA8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EF0E638FDA49C9A1_2*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EF0E638FDA49C9A1_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_3_TypeDefinitionIndex)->GetStaticField(0x9CB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_52DCEE691286F89A_1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_52DCEE691286F89A_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_3_TypeDefinitionIndex)->GetStaticField(0x9CB8);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E48503FFC95DBC50*>* Field_1_12; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1_2*>* Field_1_6; // 0x18
	::Class_1_EF0E638FDA49C9A1_2* Field_1_14; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1_2*>* Field_1_9; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_1*>* Field_1_3; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B1FF62FAE312BC49_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_3*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B1FF62FAE312BC49_3* Clone()
	{
		return ((::Class_1_B1FF62FAE312BC49_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1_2*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1_2*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E48503FFC95DBC50*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E48503FFC95DBC50*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Class_1_EF0E638FDA49C9A1_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EF0E638FDA49C9A1_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EF0E638FDA49C9A1_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_2*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B1FF62FAE312BC49_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_3*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B1FF62FAE312BC49_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_3*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
