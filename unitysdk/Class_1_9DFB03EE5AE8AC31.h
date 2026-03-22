#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_287;
class Class_1_FFE64310E4DB1CD6_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9DFB03EE5AE8AC31_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177D11E0)
#define CLASS_1_9DFB03EE5AE8AC31_CLONE_OFFSET UNITYSDK_OFFSET(0x177D0D60)
#define CLASS_1_9DFB03EE5AE8AC31_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177D0FB0)
#define CLASS_1_9DFB03EE5AE8AC31_EQUALS_OFFSET UNITYSDK_OFFSET(0x177D0EA0)
#define CLASS_1_9DFB03EE5AE8AC31_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177D1090)
#define CLASS_1_9DFB03EE5AE8AC31_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177D13A0)
#define CLASS_1_9DFB03EE5AE8AC31_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177D1270)
#define CLASS_1_9DFB03EE5AE8AC31_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x177D0E80)
#define CLASS_1_9DFB03EE5AE8AC31_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x177D0E60)
#define CLASS_1_9DFB03EE5AE8AC31_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x177D0E90)
#define CLASS_1_9DFB03EE5AE8AC31_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x177D0E70)
#define CLASS_1_9DFB03EE5AE8AC31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177D0C80)
#define CLASS_1_9DFB03EE5AE8AC31_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177D1100)
#define CLASS_1_9DFB03EE5AE8AC31_WRITETO_OFFSET UNITYSDK_OFFSET(0x177D1160)
#define CLASS_1_9DFB03EE5AE8AC31__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177D0CA0)
#define CLASS_1_9DFB03EE5AE8AC31__CTOR_OFFSET UNITYSDK_OFFSET(0x177D0C90)

inline static constexpr unsigned int Class_1_9DFB03EE5AE8AC31_TypeDefinitionIndex = 23897;

class Class_1_9DFB03EE5AE8AC31 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Class_1_FA4F4A67B1C04320_287* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_FFE64310E4DB1CD6_2* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9DFB03EE5AE8AC31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DFB03EE5AE8AC31*))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9DFB03EE5AE8AC31* Clone()
	{
		return ((::Class_1_9DFB03EE5AE8AC31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_CLONE_OFFSET))(this);
	}

	::Class_1_FFE64310E4DB1CD6_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FFE64310E4DB1CD6_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FFE64310E4DB1CD6_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6_2*))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_FA4F4A67B1C04320_287* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_FA4F4A67B1C04320_287*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_FA4F4A67B1C04320_287* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_287*))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9DFB03EE5AE8AC31* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9DFB03EE5AE8AC31*))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9DFB03EE5AE8AC31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DFB03EE5AE8AC31*))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9DFB03EE5AE8AC31_MERGEFROM_1_OFFSET))(this, a1);
	}
};
