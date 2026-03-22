#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_78_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177ED080)
#define CLASS_1_FA4F4A67B1C04320_78_CLONE_OFFSET UNITYSDK_OFFSET(0x177ECE10)
#define CLASS_1_FA4F4A67B1C04320_78_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177ECF10)
#define CLASS_1_FA4F4A67B1C04320_78_EQUALS_OFFSET UNITYSDK_OFFSET(0x177ECEA0)
#define CLASS_1_FA4F4A67B1C04320_78_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177ECF70)
#define CLASS_1_FA4F4A67B1C04320_78_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177ED1D0)
#define CLASS_1_FA4F4A67B1C04320_78_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177ED190)
#define CLASS_1_FA4F4A67B1C04320_78_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x177ECE80)
#define CLASS_1_FA4F4A67B1C04320_78_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x177ECE60)
#define CLASS_1_FA4F4A67B1C04320_78_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x177ECE90)
#define CLASS_1_FA4F4A67B1C04320_78_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x177ECE70)
#define CLASS_1_FA4F4A67B1C04320_78_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177ECDC0)
#define CLASS_1_FA4F4A67B1C04320_78_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177ECFA0)
#define CLASS_1_FA4F4A67B1C04320_78_WRITETO_OFFSET UNITYSDK_OFFSET(0x177ED000)
#define CLASS_1_FA4F4A67B1C04320_78__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177ECDE0)
#define CLASS_1_FA4F4A67B1C04320_78__CTOR_OFFSET UNITYSDK_OFFSET(0x177ECDD0)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_78_TypeDefinitionIndex = 22786;

class Class_1_FA4F4A67B1C04320_78 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_78*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_78* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_78* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_78*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_78*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_78_MERGEFROM_1_OFFSET))(this, a1);
	}
};
