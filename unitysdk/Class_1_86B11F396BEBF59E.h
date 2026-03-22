#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DE734113B1E313B_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_86B11F396BEBF59E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17782200)
#define CLASS_1_86B11F396BEBF59E_CLONE_OFFSET UNITYSDK_OFFSET(0x17781E10)
#define CLASS_1_86B11F396BEBF59E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17781FC0)
#define CLASS_1_86B11F396BEBF59E_EQUALS_OFFSET UNITYSDK_OFFSET(0x17781EE0)
#define CLASS_1_86B11F396BEBF59E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17782070)
#define CLASS_1_86B11F396BEBF59E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177822D0)
#define CLASS_1_86B11F396BEBF59E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17782260)
#define CLASS_1_86B11F396BEBF59E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17781EC0)
#define CLASS_1_86B11F396BEBF59E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17781ED0)
#define CLASS_1_86B11F396BEBF59E_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17781EB0)
#define CLASS_1_86B11F396BEBF59E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17781EA0)
#define CLASS_1_86B11F396BEBF59E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17781DA0)
#define CLASS_1_86B11F396BEBF59E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17782120)
#define CLASS_1_86B11F396BEBF59E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17782180)
#define CLASS_1_86B11F396BEBF59E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17781DC0)
#define CLASS_1_86B11F396BEBF59E__CTOR_OFFSET UNITYSDK_OFFSET(0x17781DB0)

inline static constexpr unsigned int Class_1_86B11F396BEBF59E_TypeDefinitionIndex = 26338;

class Class_1_86B11F396BEBF59E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_3DE734113B1E313B_1* Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_86B11F396BEBF59E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B11F396BEBF59E*))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_86B11F396BEBF59E* Clone()
	{
		return ((::Class_1_86B11F396BEBF59E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_3DE734113B1E313B_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3DE734113B1E313B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3DE734113B1E313B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_1*))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_86B11F396BEBF59E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_86B11F396BEBF59E*))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_86B11F396BEBF59E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B11F396BEBF59E*))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_86B11F396BEBF59E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
