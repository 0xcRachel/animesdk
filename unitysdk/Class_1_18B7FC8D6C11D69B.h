#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_18B7FC8D6C11D69B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x172E72E0)
#define CLASS_1_18B7FC8D6C11D69B_CLONE_OFFSET UNITYSDK_OFFSET(0x172E6DC0)
#define CLASS_1_18B7FC8D6C11D69B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x172E6FC0)
#define CLASS_1_18B7FC8D6C11D69B_EQUALS_OFFSET UNITYSDK_OFFSET(0x172E6F00)
#define CLASS_1_18B7FC8D6C11D69B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x172E7070)
#define CLASS_1_18B7FC8D6C11D69B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x172E7680)
#define CLASS_1_18B7FC8D6C11D69B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x172E7610)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x172E6EA0)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x172E6EC0)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x172E6E80)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x172E6E30)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x172E6E20)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x172E6EB0)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x172E6ED0)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x172E6E90)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x172E6EF0)
#define CLASS_1_18B7FC8D6C11D69B_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x172E6EE0)
#define CLASS_1_18B7FC8D6C11D69B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x172E6D50)
#define CLASS_1_18B7FC8D6C11D69B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172E7150)
#define CLASS_1_18B7FC8D6C11D69B_WRITETO_OFFSET UNITYSDK_OFFSET(0x172E71B0)
#define CLASS_1_18B7FC8D6C11D69B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172E6D70)
#define CLASS_1_18B7FC8D6C11D69B__CTOR_OFFSET UNITYSDK_OFFSET(0x172E6D60)

inline static constexpr unsigned int Class_1_18B7FC8D6C11D69B_TypeDefinitionIndex = 26396;

class Class_1_18B7FC8D6C11D69B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x6; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Int32 Field_1_10; // 0x20
	::System::UInt32 Field_1_6; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_8; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_18B7FC8D6C11D69B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_18B7FC8D6C11D69B*))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_18B7FC8D6C11D69B* Clone()
	{
		return ((::Class_1_18B7FC8D6C11D69B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_18B7FC8D6C11D69B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_18B7FC8D6C11D69B*))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_18B7FC8D6C11D69B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_18B7FC8D6C11D69B*))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_18B7FC8D6C11D69B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
