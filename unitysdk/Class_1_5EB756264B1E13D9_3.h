#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C66F08F6BAF5805C_2;
class Class_1_FA4F4A67B1C04320_636;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5EB756264B1E13D9_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1806D910)
#define CLASS_1_5EB756264B1E13D9_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1806D460)
#define CLASS_1_5EB756264B1E13D9_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1806D6A0)
#define CLASS_1_5EB756264B1E13D9_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1806D590)
#define CLASS_1_5EB756264B1E13D9_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1806D780)
#define CLASS_1_5EB756264B1E13D9_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1806DAA0)
#define CLASS_1_5EB756264B1E13D9_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1806D9A0)
#define CLASS_1_5EB756264B1E13D9_3_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1806D570)
#define CLASS_1_5EB756264B1E13D9_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1806D550)
#define CLASS_1_5EB756264B1E13D9_3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1806D580)
#define CLASS_1_5EB756264B1E13D9_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1806D560)
#define CLASS_1_5EB756264B1E13D9_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1806D390)
#define CLASS_1_5EB756264B1E13D9_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1806D830)
#define CLASS_1_5EB756264B1E13D9_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1806D890)
#define CLASS_1_5EB756264B1E13D9_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1806D3B0)
#define CLASS_1_5EB756264B1E13D9_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1806D3A0)

inline static constexpr unsigned int Class_1_5EB756264B1E13D9_3_TypeDefinitionIndex = 25850;

class Class_1_5EB756264B1E13D9_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Class_1_FA4F4A67B1C04320_636* Field_1_4; // 0x10
	::Class_1_C66F08F6BAF5805C_2* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5EB756264B1E13D9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EB756264B1E13D9_3*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5EB756264B1E13D9_3* Clone()
	{
		return ((::Class_1_5EB756264B1E13D9_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_CLONE_OFFSET))(this);
	}

	::Class_1_C66F08F6BAF5805C_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C66F08F6BAF5805C_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C66F08F6BAF5805C_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C66F08F6BAF5805C_2*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_FA4F4A67B1C04320_636* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_FA4F4A67B1C04320_636*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_FA4F4A67B1C04320_636* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_636*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5EB756264B1E13D9_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5EB756264B1E13D9_3*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5EB756264B1E13D9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EB756264B1E13D9_3*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
