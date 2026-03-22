#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B139B98AF2D803D6_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17318280)
#define CLASS_1_B139B98AF2D803D6_27_CLONE_OFFSET UNITYSDK_OFFSET(0x17317E70)
#define CLASS_1_B139B98AF2D803D6_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17318020)
#define CLASS_1_B139B98AF2D803D6_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x17317F70)
#define CLASS_1_B139B98AF2D803D6_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173180C0)
#define CLASS_1_B139B98AF2D803D6_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x173184E0)
#define CLASS_1_B139B98AF2D803D6_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17318480)
#define CLASS_1_B139B98AF2D803D6_27_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17317EF0)
#define CLASS_1_B139B98AF2D803D6_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17317ED0)
#define CLASS_1_B139B98AF2D803D6_27_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17317F20)
#define CLASS_1_B139B98AF2D803D6_27_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17317F10)
#define CLASS_1_B139B98AF2D803D6_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17317F00)
#define CLASS_1_B139B98AF2D803D6_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17317EE0)
#define CLASS_1_B139B98AF2D803D6_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17317E00)
#define CLASS_1_B139B98AF2D803D6_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17318170)
#define CLASS_1_B139B98AF2D803D6_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x173181D0)
#define CLASS_1_B139B98AF2D803D6_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17317E20)
#define CLASS_1_B139B98AF2D803D6_27__CTOR_OFFSET UNITYSDK_OFFSET(0x17317E10)

inline static constexpr unsigned int Class_1_B139B98AF2D803D6_27_TypeDefinitionIndex = 26196;

class Class_1_B139B98AF2D803D6_27 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B139B98AF2D803D6_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_27*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B139B98AF2D803D6_27* Clone()
	{
		return ((::Class_1_B139B98AF2D803D6_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B139B98AF2D803D6_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B139B98AF2D803D6_27*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B139B98AF2D803D6_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_27*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
