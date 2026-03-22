#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_279_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1767BA10)
#define CLASS_1_FA4F4A67B1C04320_279_CLONE_OFFSET UNITYSDK_OFFSET(0x1767B5D0)
#define CLASS_1_FA4F4A67B1C04320_279_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1767B7B0)
#define CLASS_1_FA4F4A67B1C04320_279_EQUALS_OFFSET UNITYSDK_OFFSET(0x1767B6F0)
#define CLASS_1_FA4F4A67B1C04320_279_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1767B830)
#define CLASS_1_FA4F4A67B1C04320_279_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1767BD50)
#define CLASS_1_FA4F4A67B1C04320_279_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1767BCF0)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1767B6D0)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1767B6B0)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1767B6E0)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1767B6C0)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1767B680)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x1767B6A0)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1767B660)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1767B670)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x1767B690)
#define CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1767B650)
#define CLASS_1_FA4F4A67B1C04320_279_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1767B570)
#define CLASS_1_FA4F4A67B1C04320_279_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1767B870)
#define CLASS_1_FA4F4A67B1C04320_279_WRITETO_OFFSET UNITYSDK_OFFSET(0x1767B8D0)
#define CLASS_1_FA4F4A67B1C04320_279__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1767B590)
#define CLASS_1_FA4F4A67B1C04320_279__CTOR_OFFSET UNITYSDK_OFFSET(0x1767B580)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_279_TypeDefinitionIndex = 23830;

class Class_1_FA4F4A67B1C04320_279 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::UInt32 Field_1_10; // 0x1C
	::System::Int32 Field_1_6; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_279* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_279*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_279* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_279*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_279* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_279*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_279* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_279*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_279_MERGEFROM_1_OFFSET))(this, a1);
	}
};
