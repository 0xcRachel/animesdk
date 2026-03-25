#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_782_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BE2800)
#define CLASS_1_FA4F4A67B1C04320_782_CLONE_OFFSET UNITYSDK_OFFSET(0x17BE2600)
#define CLASS_1_FA4F4A67B1C04320_782_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BE26C0)
#define CLASS_1_FA4F4A67B1C04320_782_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BE2660)
#define CLASS_1_FA4F4A67B1C04320_782_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BE2710)
#define CLASS_1_FA4F4A67B1C04320_782_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BE28C0)
#define CLASS_1_FA4F4A67B1C04320_782_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BE2890)
#define CLASS_1_FA4F4A67B1C04320_782_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BE2640)
#define CLASS_1_FA4F4A67B1C04320_782_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BE2650)
#define CLASS_1_FA4F4A67B1C04320_782_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BE25B0)
#define CLASS_1_FA4F4A67B1C04320_782_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BE2740)
#define CLASS_1_FA4F4A67B1C04320_782_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BE27A0)
#define CLASS_1_FA4F4A67B1C04320_782__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BE25D0)
#define CLASS_1_FA4F4A67B1C04320_782__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE25C0)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_782_TypeDefinitionIndex = 26652;

class Class_1_FA4F4A67B1C04320_782 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_782* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_782*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_782* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_782*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_782* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_782*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_782* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_782*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_782_MERGEFROM_1_OFFSET))(this, a1);
	}
};
