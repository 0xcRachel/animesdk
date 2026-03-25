#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_120319518E6F6581_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B04A20)
#define CLASS_1_120319518E6F6581_12_CLONE_OFFSET UNITYSDK_OFFSET(0x17B046F0)
#define CLASS_1_120319518E6F6581_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B04880)
#define CLASS_1_120319518E6F6581_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B047D0)
#define CLASS_1_120319518E6F6581_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B048F0)
#define CLASS_1_120319518E6F6581_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B04C00)
#define CLASS_1_120319518E6F6581_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B04BB0)
#define CLASS_1_120319518E6F6581_12_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17B04790)
#define CLASS_1_120319518E6F6581_12_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17B047B0)
#define CLASS_1_120319518E6F6581_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B04770)
#define CLASS_1_120319518E6F6581_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17B047A0)
#define CLASS_1_120319518E6F6581_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17B047C0)
#define CLASS_1_120319518E6F6581_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B04780)
#define CLASS_1_120319518E6F6581_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B04690)
#define CLASS_1_120319518E6F6581_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B04920)
#define CLASS_1_120319518E6F6581_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B04980)
#define CLASS_1_120319518E6F6581_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B046B0)
#define CLASS_1_120319518E6F6581_12__CTOR_OFFSET UNITYSDK_OFFSET(0x17B046A0)

inline static constexpr unsigned int Class_1_120319518E6F6581_12_TypeDefinitionIndex = 23315;

class Class_1_120319518E6F6581_12 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_120319518E6F6581_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_12*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_12* Clone()
	{
		return ((::Class_1_120319518E6F6581_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_120319518E6F6581_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_120319518E6F6581_12*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_120319518E6F6581_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_12*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
