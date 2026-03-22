#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B139B98AF2D803D6_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17ABE3F0)
#define CLASS_1_B139B98AF2D803D6_13_CLONE_OFFSET UNITYSDK_OFFSET(0x17ABE040)
#define CLASS_1_B139B98AF2D803D6_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17ABE1C0)
#define CLASS_1_B139B98AF2D803D6_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x17ABE120)
#define CLASS_1_B139B98AF2D803D6_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17ABE250)
#define CLASS_1_B139B98AF2D803D6_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17ABE5D0)
#define CLASS_1_B139B98AF2D803D6_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17ABE580)
#define CLASS_1_B139B98AF2D803D6_13_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17ABE0A0)
#define CLASS_1_B139B98AF2D803D6_13_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17ABE0D0)
#define CLASS_1_B139B98AF2D803D6_13_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17ABE0C0)
#define CLASS_1_B139B98AF2D803D6_13_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17ABE0B0)
#define CLASS_1_B139B98AF2D803D6_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ABDFE0)
#define CLASS_1_B139B98AF2D803D6_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ABE300)
#define CLASS_1_B139B98AF2D803D6_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x17ABE360)
#define CLASS_1_B139B98AF2D803D6_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ABE000)
#define CLASS_1_B139B98AF2D803D6_13__CTOR_OFFSET UNITYSDK_OFFSET(0x17ABDFF0)

inline static constexpr unsigned int Class_1_B139B98AF2D803D6_13_TypeDefinitionIndex = 24825;

class Class_1_B139B98AF2D803D6_13 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::System::String* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B139B98AF2D803D6_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_13*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B139B98AF2D803D6_13* Clone()
	{
		return ((::Class_1_B139B98AF2D803D6_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B139B98AF2D803D6_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B139B98AF2D803D6_13*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B139B98AF2D803D6_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_13*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
