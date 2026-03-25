#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_14.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_35B19D34B208E77E_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180B4BC0)
#define CLASS_1_35B19D34B208E77E_5_CLONE_OFFSET UNITYSDK_OFFSET(0x180B4870)
#define CLASS_1_35B19D34B208E77E_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180B4A00)
#define CLASS_1_35B19D34B208E77E_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x180B4950)
#define CLASS_1_35B19D34B208E77E_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180B4A70)
#define CLASS_1_35B19D34B208E77E_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180B4DE0)
#define CLASS_1_35B19D34B208E77E_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180B4D90)
#define CLASS_1_35B19D34B208E77E_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180B4910)
#define CLASS_1_35B19D34B208E77E_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180B48F0)
#define CLASS_1_35B19D34B208E77E_5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x180B4940)
#define CLASS_1_35B19D34B208E77E_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180B4920)
#define CLASS_1_35B19D34B208E77E_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180B4900)
#define CLASS_1_35B19D34B208E77E_5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x180B4930)
#define CLASS_1_35B19D34B208E77E_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180B4810)
#define CLASS_1_35B19D34B208E77E_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180B4AA0)
#define CLASS_1_35B19D34B208E77E_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x180B4B00)
#define CLASS_1_35B19D34B208E77E_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180B4830)
#define CLASS_1_35B19D34B208E77E_5__CTOR_OFFSET UNITYSDK_OFFSET(0x180B4820)

inline static constexpr unsigned int Class_1_35B19D34B208E77E_5_TypeDefinitionIndex = 24382;

class Class_1_35B19D34B208E77E_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::Enum_3_4608E37A1B3D374A_14 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_35B19D34B208E77E_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_5*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_35B19D34B208E77E_5* Clone()
	{
		return ((::Class_1_35B19D34B208E77E_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_14 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_14(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_14 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_14))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_35B19D34B208E77E_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_35B19D34B208E77E_5*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_35B19D34B208E77E_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_5*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
