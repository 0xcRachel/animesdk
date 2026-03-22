#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_410_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17817C70)
#define CLASS_1_FA4F4A67B1C04320_410_CLONE_OFFSET UNITYSDK_OFFSET(0x17817A70)
#define CLASS_1_FA4F4A67B1C04320_410_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17817B30)
#define CLASS_1_FA4F4A67B1C04320_410_EQUALS_OFFSET UNITYSDK_OFFSET(0x17817AD0)
#define CLASS_1_FA4F4A67B1C04320_410_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17817B80)
#define CLASS_1_FA4F4A67B1C04320_410_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17817D30)
#define CLASS_1_FA4F4A67B1C04320_410_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17817D00)
#define CLASS_1_FA4F4A67B1C04320_410_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17817AB0)
#define CLASS_1_FA4F4A67B1C04320_410_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17817AC0)
#define CLASS_1_FA4F4A67B1C04320_410_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17817A20)
#define CLASS_1_FA4F4A67B1C04320_410_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17817BB0)
#define CLASS_1_FA4F4A67B1C04320_410_WRITETO_OFFSET UNITYSDK_OFFSET(0x17817C10)
#define CLASS_1_FA4F4A67B1C04320_410__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17817A40)
#define CLASS_1_FA4F4A67B1C04320_410__CTOR_OFFSET UNITYSDK_OFFSET(0x17817A30)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_410_TypeDefinitionIndex = 24305;

class Class_1_FA4F4A67B1C04320_410 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_410* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_410*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_410* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_410*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_410* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_410*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_410* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_410*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_410_MERGEFROM_1_OFFSET))(this, a1);
	}
};
