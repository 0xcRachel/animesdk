#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_364_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182D8A70)
#define CLASS_1_FA4F4A67B1C04320_364_CLONE_OFFSET UNITYSDK_OFFSET(0x182D87B0)
#define CLASS_1_FA4F4A67B1C04320_364_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182D8900)
#define CLASS_1_FA4F4A67B1C04320_364_EQUALS_OFFSET UNITYSDK_OFFSET(0x182D8860)
#define CLASS_1_FA4F4A67B1C04320_364_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182D8960)
#define CLASS_1_FA4F4A67B1C04320_364_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182D8BC0)
#define CLASS_1_FA4F4A67B1C04320_364_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182D8B80)
#define CLASS_1_FA4F4A67B1C04320_364_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x182D8840)
#define CLASS_1_FA4F4A67B1C04320_364_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x182D8820)
#define CLASS_1_FA4F4A67B1C04320_364_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x182D8850)
#define CLASS_1_FA4F4A67B1C04320_364_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182D8830)
#define CLASS_1_FA4F4A67B1C04320_364_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182D8760)
#define CLASS_1_FA4F4A67B1C04320_364_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182D8990)
#define CLASS_1_FA4F4A67B1C04320_364_WRITETO_OFFSET UNITYSDK_OFFSET(0x182D89F0)
#define CLASS_1_FA4F4A67B1C04320_364__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182D8780)
#define CLASS_1_FA4F4A67B1C04320_364__CTOR_OFFSET UNITYSDK_OFFSET(0x182D8770)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_364_TypeDefinitionIndex = 24782;

class Class_1_FA4F4A67B1C04320_364 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_364* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_364*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_364* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_364*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_364* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_364*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_364* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_364*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_364_MERGEFROM_1_OFFSET))(this, a1);
	}
};
