#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_2;
class Class_1_F7C690251CDD3A9D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5EB756264B1E13D9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1798ECA0)
#define CLASS_1_5EB756264B1E13D9_CLONE_OFFSET UNITYSDK_OFFSET(0x1798E860)
#define CLASS_1_5EB756264B1E13D9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1798EA70)
#define CLASS_1_5EB756264B1E13D9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1798E980)
#define CLASS_1_5EB756264B1E13D9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1798EB50)
#define CLASS_1_5EB756264B1E13D9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1798EEB0)
#define CLASS_1_5EB756264B1E13D9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1798ED30)
#define CLASS_1_5EB756264B1E13D9_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1798E960)
#define CLASS_1_5EB756264B1E13D9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1798E940)
#define CLASS_1_5EB756264B1E13D9_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1798E970)
#define CLASS_1_5EB756264B1E13D9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1798E950)
#define CLASS_1_5EB756264B1E13D9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1798E770)
#define CLASS_1_5EB756264B1E13D9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1798EBC0)
#define CLASS_1_5EB756264B1E13D9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1798EC20)
#define CLASS_1_5EB756264B1E13D9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1798E790)
#define CLASS_1_5EB756264B1E13D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1798E780)

inline static constexpr unsigned int Class_1_5EB756264B1E13D9_TypeDefinitionIndex = 24629;

class Class_1_5EB756264B1E13D9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_32044B0173B87B04_2* Field_1_2; // 0x18
	::Class_1_F7C690251CDD3A9D* Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5EB756264B1E13D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EB756264B1E13D9*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5EB756264B1E13D9* Clone()
	{
		return ((::Class_1_5EB756264B1E13D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_CLONE_OFFSET))(this);
	}

	::Class_1_32044B0173B87B04_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_32044B0173B87B04_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_32044B0173B87B04_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_2*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_F7C690251CDD3A9D* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_F7C690251CDD3A9D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_F7C690251CDD3A9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F7C690251CDD3A9D*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5EB756264B1E13D9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5EB756264B1E13D9*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5EB756264B1E13D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EB756264B1E13D9*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
