#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_64;
class Class_1_FA4F4A67B1C04320_613;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_13890FD29641C8E9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x178AC900)
#define CLASS_1_13890FD29641C8E9_CLONE_OFFSET UNITYSDK_OFFSET(0x178AC450)
#define CLASS_1_13890FD29641C8E9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178AC540)
#define CLASS_1_13890FD29641C8E9_EQUALS_OFFSET UNITYSDK_OFFSET(0x178AC4E0)
#define CLASS_1_13890FD29641C8E9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178AC660)
#define CLASS_1_13890FD29641C8E9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x178ACBA0)
#define CLASS_1_13890FD29641C8E9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x178ACA30)
#define CLASS_1_13890FD29641C8E9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x178AC4B0)
#define CLASS_1_13890FD29641C8E9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x178AC4A0)
#define CLASS_1_13890FD29641C8E9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x178AC4C0)
#define CLASS_1_13890FD29641C8E9_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x178AC4D0)
#define CLASS_1_13890FD29641C8E9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178AC270)
#define CLASS_1_13890FD29641C8E9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178AC790)
#define CLASS_1_13890FD29641C8E9_WRITETO_OFFSET UNITYSDK_OFFSET(0x178AC7F0)
#define CLASS_1_13890FD29641C8E9__CCTOR_OFFSET UNITYSDK_OFFSET(0x178ACD40)
#define CLASS_1_13890FD29641C8E9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178AC2F0)
#define CLASS_1_13890FD29641C8E9__CTOR_OFFSET UNITYSDK_OFFSET(0x178AC280)

inline static constexpr unsigned int Class_1_13890FD29641C8E9_TypeDefinitionIndex = 25205;

class Class_1_13890FD29641C8E9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_613*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_613*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13890FD29641C8E9_TypeDefinitionIndex)->GetStaticField(0x33400);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13890FD29641C8E9_TypeDefinitionIndex)->GetStaticField(0x33408);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_613*>* Field_1_3; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Class_1_6E708EAB438EC183_64* Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_13890FD29641C8E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13890FD29641C8E9*))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_13890FD29641C8E9* Clone()
	{
		return ((::Class_1_13890FD29641C8E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_613*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_613*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_64* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6E708EAB438EC183_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6E708EAB438EC183_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_64*))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_13890FD29641C8E9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_13890FD29641C8E9*))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_13890FD29641C8E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13890FD29641C8E9*))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_13890FD29641C8E9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
