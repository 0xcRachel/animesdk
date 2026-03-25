#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_11.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F31567335EF0BCE6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E13900)
#define CLASS_1_F31567335EF0BCE6_CLONE_OFFSET UNITYSDK_OFFSET(0x17E134C0)
#define CLASS_1_F31567335EF0BCE6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E13640)
#define CLASS_1_F31567335EF0BCE6_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E13520)
#define CLASS_1_F31567335EF0BCE6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E13730)
#define CLASS_1_F31567335EF0BCE6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E13AE0)
#define CLASS_1_F31567335EF0BCE6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E139F0)
#define CLASS_1_F31567335EF0BCE6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E134F0)
#define CLASS_1_F31567335EF0BCE6_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x17E13510)
#define CLASS_1_F31567335EF0BCE6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E13500)
#define CLASS_1_F31567335EF0BCE6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E133A0)
#define CLASS_1_F31567335EF0BCE6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E137C0)
#define CLASS_1_F31567335EF0BCE6_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E13820)
#define CLASS_1_F31567335EF0BCE6__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E13BD0)
#define CLASS_1_F31567335EF0BCE6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E133F0)
#define CLASS_1_F31567335EF0BCE6__CTOR_OFFSET UNITYSDK_OFFSET(0x17E133B0)

inline static constexpr unsigned int Class_1_F31567335EF0BCE6_TypeDefinitionIndex = 25231;

class Class_1_F31567335EF0BCE6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_71AA90D596A09AC8_11>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_71AA90D596A09AC8_11>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F31567335EF0BCE6_TypeDefinitionIndex)->GetStaticField(0x256C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_11>* Field_1_5; // 0x18
	::Class_1_14E02E1F6D70E487_2* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F31567335EF0BCE6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F31567335EF0BCE6*))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F31567335EF0BCE6* Clone()
	{
		return ((::Class_1_F31567335EF0BCE6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_CLONE_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_11>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_11>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F31567335EF0BCE6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F31567335EF0BCE6*))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F31567335EF0BCE6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F31567335EF0BCE6*))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
