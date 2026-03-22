#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DE734113B1E313B_1;
class Class_1_FA4F4A67B1C04320_287;
class Class_1_FFE64310E4DB1CD6_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3A7B270FE0BE90AE_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1775F940)
#define CLASS_1_3A7B270FE0BE90AE_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1775F410)
#define CLASS_1_3A7B270FE0BE90AE_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1775F620)
#define CLASS_1_3A7B270FE0BE90AE_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1775F4C0)
#define CLASS_1_3A7B270FE0BE90AE_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1775F740)
#define CLASS_1_3A7B270FE0BE90AE_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1775FB70)
#define CLASS_1_3A7B270FE0BE90AE_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1775FA00)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1775F480)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1775F4A0)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1775F460)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1775F490)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1775F4B0)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1775F470)
#define CLASS_1_3A7B270FE0BE90AE_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1775F310)
#define CLASS_1_3A7B270FE0BE90AE_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1775F830)
#define CLASS_1_3A7B270FE0BE90AE_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1775F890)
#define CLASS_1_3A7B270FE0BE90AE_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1775F330)
#define CLASS_1_3A7B270FE0BE90AE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1775F320)

inline static constexpr unsigned int Class_1_3A7B270FE0BE90AE_1_TypeDefinitionIndex = 23891;

class Class_1_3A7B270FE0BE90AE_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	::Class_1_3DE734113B1E313B_1* Field_1_6; // 0x10
	::Class_1_FA4F4A67B1C04320_287* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Class_1_FFE64310E4DB1CD6_2* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3A7B270FE0BE90AE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3A7B270FE0BE90AE_1* Clone()
	{
		return ((::Class_1_3A7B270FE0BE90AE_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_CLONE_OFFSET))(this);
	}

	::Class_1_FFE64310E4DB1CD6_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FFE64310E4DB1CD6_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FFE64310E4DB1CD6_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6_2*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_FA4F4A67B1C04320_287* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_FA4F4A67B1C04320_287*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_FA4F4A67B1C04320_287* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_287*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_3DE734113B1E313B_1* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_3DE734113B1E313B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_3DE734113B1E313B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3A7B270FE0BE90AE_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3A7B270FE0BE90AE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
