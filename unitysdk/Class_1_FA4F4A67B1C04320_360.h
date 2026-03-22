#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_360_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1777DBB0)
#define CLASS_1_FA4F4A67B1C04320_360_CLONE_OFFSET UNITYSDK_OFFSET(0x1777D940)
#define CLASS_1_FA4F4A67B1C04320_360_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1777DA70)
#define CLASS_1_FA4F4A67B1C04320_360_EQUALS_OFFSET UNITYSDK_OFFSET(0x1777D9D0)
#define CLASS_1_FA4F4A67B1C04320_360_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1777DAC0)
#define CLASS_1_FA4F4A67B1C04320_360_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1777DC70)
#define CLASS_1_FA4F4A67B1C04320_360_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1777DC40)
#define CLASS_1_FA4F4A67B1C04320_360_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1777D9B0)
#define CLASS_1_FA4F4A67B1C04320_360_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1777D9C0)
#define CLASS_1_FA4F4A67B1C04320_360_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1777D8F0)
#define CLASS_1_FA4F4A67B1C04320_360_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1777DAF0)
#define CLASS_1_FA4F4A67B1C04320_360_WRITETO_OFFSET UNITYSDK_OFFSET(0x1777DB50)
#define CLASS_1_FA4F4A67B1C04320_360__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1777D910)
#define CLASS_1_FA4F4A67B1C04320_360__CTOR_OFFSET UNITYSDK_OFFSET(0x1777D900)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_360_TypeDefinitionIndex = 24172;

class Class_1_FA4F4A67B1C04320_360 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_360* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_360*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_360* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_360*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_360* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_360*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_360* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_360*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_360_MERGEFROM_1_OFFSET))(this, a1);
	}
};
