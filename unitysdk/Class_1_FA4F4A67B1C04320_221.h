#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_221_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1777D720)
#define CLASS_1_FA4F4A67B1C04320_221_CLONE_OFFSET UNITYSDK_OFFSET(0x1777D460)
#define CLASS_1_FA4F4A67B1C04320_221_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1777D5B0)
#define CLASS_1_FA4F4A67B1C04320_221_EQUALS_OFFSET UNITYSDK_OFFSET(0x1777D510)
#define CLASS_1_FA4F4A67B1C04320_221_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1777D610)
#define CLASS_1_FA4F4A67B1C04320_221_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1777D870)
#define CLASS_1_FA4F4A67B1C04320_221_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1777D830)
#define CLASS_1_FA4F4A67B1C04320_221_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1777D4F0)
#define CLASS_1_FA4F4A67B1C04320_221_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1777D4D0)
#define CLASS_1_FA4F4A67B1C04320_221_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1777D500)
#define CLASS_1_FA4F4A67B1C04320_221_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1777D4E0)
#define CLASS_1_FA4F4A67B1C04320_221_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1777D410)
#define CLASS_1_FA4F4A67B1C04320_221_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1777D640)
#define CLASS_1_FA4F4A67B1C04320_221_WRITETO_OFFSET UNITYSDK_OFFSET(0x1777D6A0)
#define CLASS_1_FA4F4A67B1C04320_221__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1777D430)
#define CLASS_1_FA4F4A67B1C04320_221__CTOR_OFFSET UNITYSDK_OFFSET(0x1777D420)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_221_TypeDefinitionIndex = 23504;

class Class_1_FA4F4A67B1C04320_221 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_221* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_221*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_221* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_221*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_221* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_221*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_221* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_221*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_221_MERGEFROM_1_OFFSET))(this, a1);
	}
};
