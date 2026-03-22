#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B139B98AF2D803D6_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17738E50)
#define CLASS_1_B139B98AF2D803D6_18_CLONE_OFFSET UNITYSDK_OFFSET(0x17738850)
#define CLASS_1_B139B98AF2D803D6_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17738AA0)
#define CLASS_1_B139B98AF2D803D6_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x177389E0)
#define CLASS_1_B139B98AF2D803D6_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17738B90)
#define CLASS_1_B139B98AF2D803D6_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17739240)
#define CLASS_1_B139B98AF2D803D6_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177391C0)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x177388E0)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x177389C0)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x177388C0)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x17738970)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17738910)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17738960)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17738900)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x177388F0)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x177389D0)
#define CLASS_1_B139B98AF2D803D6_18_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x177388D0)
#define CLASS_1_B139B98AF2D803D6_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177387C0)
#define CLASS_1_B139B98AF2D803D6_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17738CD0)
#define CLASS_1_B139B98AF2D803D6_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x17738D30)
#define CLASS_1_B139B98AF2D803D6_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177387F0)
#define CLASS_1_B139B98AF2D803D6_18__CTOR_OFFSET UNITYSDK_OFFSET(0x177387D0)

inline static constexpr unsigned int Class_1_B139B98AF2D803D6_18_TypeDefinitionIndex = 25300;

class Class_1_B139B98AF2D803D6_18 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xD; // 0x0
	::System::String* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_10; // 0x2C
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B139B98AF2D803D6_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_18*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B139B98AF2D803D6_18* Clone()
	{
		return ((::Class_1_B139B98AF2D803D6_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B139B98AF2D803D6_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B139B98AF2D803D6_18*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B139B98AF2D803D6_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_18*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
