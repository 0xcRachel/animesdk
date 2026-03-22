#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_78AC4D2A7319AFB4;
class Class_1_B3B48B7EEC81A99A_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3BFAE81CD5F8BF5A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1757BDA0)
#define CLASS_1_3BFAE81CD5F8BF5A_CLONE_OFFSET UNITYSDK_OFFSET(0x1757B7C0)
#define CLASS_1_3BFAE81CD5F8BF5A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1757B8D0)
#define CLASS_1_3BFAE81CD5F8BF5A_EQUALS_OFFSET UNITYSDK_OFFSET(0x1757B870)
#define CLASS_1_3BFAE81CD5F8BF5A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1757BA00)
#define CLASS_1_3BFAE81CD5F8BF5A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1757C160)
#define CLASS_1_3BFAE81CD5F8BF5A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1757BF20)
#define CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1757B840)
#define CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1757B810)
#define CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1757B860)
#define CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1757B830)
#define CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1757B850)
#define CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1757B820)
#define CLASS_1_3BFAE81CD5F8BF5A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1757B580)
#define CLASS_1_3BFAE81CD5F8BF5A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1757BC00)
#define CLASS_1_3BFAE81CD5F8BF5A_WRITETO_OFFSET UNITYSDK_OFFSET(0x1757BC60)
#define CLASS_1_3BFAE81CD5F8BF5A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1757C400)
#define CLASS_1_3BFAE81CD5F8BF5A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1757B620)
#define CLASS_1_3BFAE81CD5F8BF5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1757B590)

inline static constexpr unsigned int Class_1_3BFAE81CD5F8BF5A_TypeDefinitionIndex = 23676;

class Class_1_3BFAE81CD5F8BF5A : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFAE81CD5F8BF5A_TypeDefinitionIndex)->GetStaticField(0x10370);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFAE81CD5F8BF5A_TypeDefinitionIndex)->GetStaticField(0x10378);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Class_1_78AC4D2A7319AFB4* Field_1_2; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28
	::Class_1_B3B48B7EEC81A99A_2* Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3BFAE81CD5F8BF5A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BFAE81CD5F8BF5A*))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3BFAE81CD5F8BF5A* Clone()
	{
		return ((::Class_1_3BFAE81CD5F8BF5A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_CLONE_OFFSET))(this);
	}

	::Class_1_78AC4D2A7319AFB4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_78AC4D2A7319AFB4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_78AC4D2A7319AFB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_78AC4D2A7319AFB4*))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_B3B48B7EEC81A99A_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_B3B48B7EEC81A99A_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_B3B48B7EEC81A99A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3B48B7EEC81A99A_2*))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3BFAE81CD5F8BF5A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3BFAE81CD5F8BF5A*))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3BFAE81CD5F8BF5A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BFAE81CD5F8BF5A*))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3BFAE81CD5F8BF5A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
