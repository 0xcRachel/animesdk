#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F6D610)
#define CLASS_1_FA4F4A67B1C04320_CLONE_OFFSET UNITYSDK_OFFSET(0x17F6D260)
#define CLASS_1_FA4F4A67B1C04320_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F6D400)
#define CLASS_1_FA4F4A67B1C04320_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F6D350)
#define CLASS_1_FA4F4A67B1C04320_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F6D470)
#define CLASS_1_FA4F4A67B1C04320_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F6D8A0)
#define CLASS_1_FA4F4A67B1C04320_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F6D850)
#define CLASS_1_FA4F4A67B1C04320_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F6D330)
#define CLASS_1_FA4F4A67B1C04320_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F6D2D0)
#define CLASS_1_FA4F4A67B1C04320_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F6D340)
#define CLASS_1_FA4F4A67B1C04320_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F6D2E0)
#define CLASS_1_FA4F4A67B1C04320_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x17F6D320)
#define CLASS_1_FA4F4A67B1C04320_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x17F6D300)
#define CLASS_1_FA4F4A67B1C04320_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x17F6D310)
#define CLASS_1_FA4F4A67B1C04320_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17F6D2F0)
#define CLASS_1_FA4F4A67B1C04320_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F6D210)
#define CLASS_1_FA4F4A67B1C04320_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F6D4B0)
#define CLASS_1_FA4F4A67B1C04320_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F6D510)
#define CLASS_1_FA4F4A67B1C04320__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F6D230)
#define CLASS_1_FA4F4A67B1C04320__CTOR_OFFSET UNITYSDK_OFFSET(0x17F6D220)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_TypeDefinitionIndex = 22884;

class Class_1_FA4F4A67B1C04320 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_8; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Int32 Field_1_6; // 0x20
	::System::Int32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_MERGEFROM_1_OFFSET))(this, a1);
	}
};
