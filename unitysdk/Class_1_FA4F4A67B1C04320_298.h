#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_298_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1750D7D0)
#define CLASS_1_FA4F4A67B1C04320_298_CLONE_OFFSET UNITYSDK_OFFSET(0x1750D450)
#define CLASS_1_FA4F4A67B1C04320_298_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1750D5D0)
#define CLASS_1_FA4F4A67B1C04320_298_EQUALS_OFFSET UNITYSDK_OFFSET(0x1750D540)
#define CLASS_1_FA4F4A67B1C04320_298_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1750D650)
#define CLASS_1_FA4F4A67B1C04320_298_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1750DAC0)
#define CLASS_1_FA4F4A67B1C04320_298_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1750DA60)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1750D4C0)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1750D4E0)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1750D500)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1750D520)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1750D4A0)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1750D4D0)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1750D4F0)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1750D510)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1750D530)
#define CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1750D4B0)
#define CLASS_1_FA4F4A67B1C04320_298_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1750D3F0)
#define CLASS_1_FA4F4A67B1C04320_298_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1750D680)
#define CLASS_1_FA4F4A67B1C04320_298_WRITETO_OFFSET UNITYSDK_OFFSET(0x1750D6E0)
#define CLASS_1_FA4F4A67B1C04320_298__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1750D410)
#define CLASS_1_FA4F4A67B1C04320_298__CTOR_OFFSET UNITYSDK_OFFSET(0x1750D400)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_298_TypeDefinitionIndex = 23919;

class Class_1_FA4F4A67B1C04320_298 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_8; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_298* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_298*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_298* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_298*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_298* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_298*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_298* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_298*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_298_MERGEFROM_1_OFFSET))(this, a1);
	}
};
