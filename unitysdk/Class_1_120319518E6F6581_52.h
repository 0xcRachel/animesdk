#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_120319518E6F6581_52_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BE3D20)
#define CLASS_1_120319518E6F6581_52_CLONE_OFFSET UNITYSDK_OFFSET(0x17BE3A60)
#define CLASS_1_120319518E6F6581_52_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BE3B80)
#define CLASS_1_120319518E6F6581_52_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BE3B10)
#define CLASS_1_120319518E6F6581_52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BE3BF0)
#define CLASS_1_120319518E6F6581_52_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BE3F00)
#define CLASS_1_120319518E6F6581_52_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BE3EB0)
#define CLASS_1_120319518E6F6581_52_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17BE3AD0)
#define CLASS_1_120319518E6F6581_52_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17BE3AF0)
#define CLASS_1_120319518E6F6581_52_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BE3AB0)
#define CLASS_1_120319518E6F6581_52_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17BE3AE0)
#define CLASS_1_120319518E6F6581_52_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17BE3B00)
#define CLASS_1_120319518E6F6581_52_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BE3AC0)
#define CLASS_1_120319518E6F6581_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BE3A00)
#define CLASS_1_120319518E6F6581_52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BE3C20)
#define CLASS_1_120319518E6F6581_52_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BE3C80)
#define CLASS_1_120319518E6F6581_52__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BE3A20)
#define CLASS_1_120319518E6F6581_52__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE3A10)

inline static constexpr unsigned int Class_1_120319518E6F6581_52_TypeDefinitionIndex = 25207;

class Class_1_120319518E6F6581_52 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_120319518E6F6581_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_52*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_52* Clone()
	{
		return ((::Class_1_120319518E6F6581_52*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_120319518E6F6581_52* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_120319518E6F6581_52*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_120319518E6F6581_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_52*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_52_MERGEFROM_1_OFFSET))(this, a1);
	}
};
