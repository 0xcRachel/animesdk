#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DE734113B1E313B_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FFE64310E4DB1CD6_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17968B10)
#define CLASS_1_FFE64310E4DB1CD6_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17968780)
#define CLASS_1_FFE64310E4DB1CD6_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179688D0)
#define CLASS_1_FFE64310E4DB1CD6_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17968820)
#define CLASS_1_FFE64310E4DB1CD6_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17968980)
#define CLASS_1_FFE64310E4DB1CD6_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17968C50)
#define CLASS_1_FFE64310E4DB1CD6_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17968BE0)
#define CLASS_1_FFE64310E4DB1CD6_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x179687E0)
#define CLASS_1_FFE64310E4DB1CD6_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17968800)
#define CLASS_1_FFE64310E4DB1CD6_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x179687F0)
#define CLASS_1_FFE64310E4DB1CD6_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17968810)
#define CLASS_1_FFE64310E4DB1CD6_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17968710)
#define CLASS_1_FFE64310E4DB1CD6_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17968A30)
#define CLASS_1_FFE64310E4DB1CD6_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17968A90)
#define CLASS_1_FFE64310E4DB1CD6_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17968730)
#define CLASS_1_FFE64310E4DB1CD6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17968720)

inline static constexpr unsigned int Class_1_FFE64310E4DB1CD6_2_TypeDefinitionIndex = 25438;

class Class_1_FFE64310E4DB1CD6_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_3DE734113B1E313B_1* Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FFE64310E4DB1CD6_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6_2*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FFE64310E4DB1CD6_2* Clone()
	{
		return ((::Class_1_FFE64310E4DB1CD6_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_3DE734113B1E313B_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3DE734113B1E313B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3DE734113B1E313B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_1*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FFE64310E4DB1CD6_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6_2*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FFE64310E4DB1CD6_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6_2*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
