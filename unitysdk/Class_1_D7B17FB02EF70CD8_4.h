#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_15;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D7B17FB02EF70CD8_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1824CC30)
#define CLASS_1_D7B17FB02EF70CD8_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1824C860)
#define CLASS_1_D7B17FB02EF70CD8_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1824CA50)
#define CLASS_1_D7B17FB02EF70CD8_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1824C970)
#define CLASS_1_D7B17FB02EF70CD8_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1824CB00)
#define CLASS_1_D7B17FB02EF70CD8_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1824CDC0)
#define CLASS_1_D7B17FB02EF70CD8_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1824CD00)
#define CLASS_1_D7B17FB02EF70CD8_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1824C930)
#define CLASS_1_D7B17FB02EF70CD8_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1824C950)
#define CLASS_1_D7B17FB02EF70CD8_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1824C940)
#define CLASS_1_D7B17FB02EF70CD8_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1824C960)
#define CLASS_1_D7B17FB02EF70CD8_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1824C7B0)
#define CLASS_1_D7B17FB02EF70CD8_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1824CB50)
#define CLASS_1_D7B17FB02EF70CD8_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1824CBB0)
#define CLASS_1_D7B17FB02EF70CD8_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1824C7D0)
#define CLASS_1_D7B17FB02EF70CD8_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1824C7C0)

inline static constexpr unsigned int Class_1_D7B17FB02EF70CD8_4_TypeDefinitionIndex = 24299;

class Class_1_D7B17FB02EF70CD8_4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_352A8B3482C80E7D_15* Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D7B17FB02EF70CD8_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7B17FB02EF70CD8_4*))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D7B17FB02EF70CD8_4* Clone()
	{
		return ((::Class_1_D7B17FB02EF70CD8_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_352A8B3482C80E7D_15* Method_1_24748FC20F375725()
	{
		return ((::Class_1_352A8B3482C80E7D_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_352A8B3482C80E7D_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_15*))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D7B17FB02EF70CD8_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D7B17FB02EF70CD8_4*))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D7B17FB02EF70CD8_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7B17FB02EF70CD8_4*))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D7B17FB02EF70CD8_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
