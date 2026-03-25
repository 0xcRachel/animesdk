#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

class Class_1_F381659723E3F143_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2E3F0B7D2C2B7128_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AF0E40)
#define CLASS_1_2E3F0B7D2C2B7128_CLONE_OFFSET UNITYSDK_OFFSET(0x17AF09F0)
#define CLASS_1_2E3F0B7D2C2B7128_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AF0B40)
#define CLASS_1_2E3F0B7D2C2B7128_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AF0A50)
#define CLASS_1_2E3F0B7D2C2B7128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AF0BF0)
#define CLASS_1_2E3F0B7D2C2B7128_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AF1030)
#define CLASS_1_2E3F0B7D2C2B7128_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AF0F90)
#define CLASS_1_2E3F0B7D2C2B7128_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17AF0A30)
#define CLASS_1_2E3F0B7D2C2B7128_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17AF0A40)
#define CLASS_1_2E3F0B7D2C2B7128_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17AF0A20)
#define CLASS_1_2E3F0B7D2C2B7128_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AF08D0)
#define CLASS_1_2E3F0B7D2C2B7128_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AF0CE0)
#define CLASS_1_2E3F0B7D2C2B7128_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AF0D40)
#define CLASS_1_2E3F0B7D2C2B7128__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AF1110)
#define CLASS_1_2E3F0B7D2C2B7128__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AF0930)
#define CLASS_1_2E3F0B7D2C2B7128__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF08E0)

inline static constexpr unsigned int Class_1_2E3F0B7D2C2B7128_TypeDefinitionIndex = 25676;

class Class_1_2E3F0B7D2C2B7128 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F381659723E3F143_1*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F381659723E3F143_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E3F0B7D2C2B7128_TypeDefinitionIndex)->GetStaticField(0x2BF60);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F381659723E3F143_1*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_F80BFD5B986D5503_3 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2E3F0B7D2C2B7128* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E3F0B7D2C2B7128*))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2E3F0B7D2C2B7128* Clone()
	{
		return ((::Class_1_2E3F0B7D2C2B7128*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_CLONE_OFFSET))(this);
	}

	::Enum_3_F80BFD5B986D5503_3 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_F80BFD5B986D5503_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_F80BFD5B986D5503_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F381659723E3F143_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F381659723E3F143_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2E3F0B7D2C2B7128* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2E3F0B7D2C2B7128*))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2E3F0B7D2C2B7128* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E3F0B7D2C2B7128*))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2E3F0B7D2C2B7128_MERGEFROM_1_OFFSET))(this, a1);
	}
};
