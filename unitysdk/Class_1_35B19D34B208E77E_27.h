#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_30.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_35B19D34B208E77E_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174DD870)
#define CLASS_1_35B19D34B208E77E_27_CLONE_OFFSET UNITYSDK_OFFSET(0x174DD520)
#define CLASS_1_35B19D34B208E77E_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174DD6B0)
#define CLASS_1_35B19D34B208E77E_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x174DD600)
#define CLASS_1_35B19D34B208E77E_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174DD720)
#define CLASS_1_35B19D34B208E77E_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174DDA90)
#define CLASS_1_35B19D34B208E77E_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174DDA40)
#define CLASS_1_35B19D34B208E77E_27_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x174DD5C0)
#define CLASS_1_35B19D34B208E77E_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174DD5A0)
#define CLASS_1_35B19D34B208E77E_27_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x174DD5F0)
#define CLASS_1_35B19D34B208E77E_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x174DD5D0)
#define CLASS_1_35B19D34B208E77E_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174DD5B0)
#define CLASS_1_35B19D34B208E77E_27_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x174DD5E0)
#define CLASS_1_35B19D34B208E77E_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174DD4C0)
#define CLASS_1_35B19D34B208E77E_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174DD750)
#define CLASS_1_35B19D34B208E77E_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x174DD7B0)
#define CLASS_1_35B19D34B208E77E_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174DD4E0)
#define CLASS_1_35B19D34B208E77E_27__CTOR_OFFSET UNITYSDK_OFFSET(0x174DD4D0)

inline static constexpr unsigned int Class_1_35B19D34B208E77E_27_TypeDefinitionIndex = 26519;

class Class_1_35B19D34B208E77E_27 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_96F6662CA3713095_30 Field_1_6; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_35B19D34B208E77E_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_27*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_35B19D34B208E77E_27* Clone()
	{
		return ((::Class_1_35B19D34B208E77E_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_30 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_30(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_30 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_30))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_35B19D34B208E77E_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_35B19D34B208E77E_27*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_35B19D34B208E77E_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_27*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
