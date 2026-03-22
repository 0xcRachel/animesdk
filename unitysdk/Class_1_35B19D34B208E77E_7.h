#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_36.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_35B19D34B208E77E_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173ED400)
#define CLASS_1_35B19D34B208E77E_7_CLONE_OFFSET UNITYSDK_OFFSET(0x173ED0B0)
#define CLASS_1_35B19D34B208E77E_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173ED240)
#define CLASS_1_35B19D34B208E77E_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x173ED190)
#define CLASS_1_35B19D34B208E77E_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173ED2B0)
#define CLASS_1_35B19D34B208E77E_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x173ED620)
#define CLASS_1_35B19D34B208E77E_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173ED5D0)
#define CLASS_1_35B19D34B208E77E_7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x173ED170)
#define CLASS_1_35B19D34B208E77E_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x173ED130)
#define CLASS_1_35B19D34B208E77E_7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x173ED160)
#define CLASS_1_35B19D34B208E77E_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x173ED180)
#define CLASS_1_35B19D34B208E77E_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x173ED140)
#define CLASS_1_35B19D34B208E77E_7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x173ED150)
#define CLASS_1_35B19D34B208E77E_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173ED050)
#define CLASS_1_35B19D34B208E77E_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173ED2E0)
#define CLASS_1_35B19D34B208E77E_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x173ED340)
#define CLASS_1_35B19D34B208E77E_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173ED070)
#define CLASS_1_35B19D34B208E77E_7__CTOR_OFFSET UNITYSDK_OFFSET(0x173ED060)

inline static constexpr unsigned int Class_1_35B19D34B208E77E_7_TypeDefinitionIndex = 24165;

class Class_1_35B19D34B208E77E_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::Enum_3_0A3761FE34514D6C_36 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_35B19D34B208E77E_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_7*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_35B19D34B208E77E_7* Clone()
	{
		return ((::Class_1_35B19D34B208E77E_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_36 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_36(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_36 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_36))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_35B19D34B208E77E_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_35B19D34B208E77E_7*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_35B19D34B208E77E_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_7*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
