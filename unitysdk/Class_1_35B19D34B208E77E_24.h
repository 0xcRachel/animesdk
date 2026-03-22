#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_21.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_35B19D34B208E77E_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1761E9B0)
#define CLASS_1_35B19D34B208E77E_24_CLONE_OFFSET UNITYSDK_OFFSET(0x1761E660)
#define CLASS_1_35B19D34B208E77E_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1761E7F0)
#define CLASS_1_35B19D34B208E77E_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x1761E740)
#define CLASS_1_35B19D34B208E77E_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1761E860)
#define CLASS_1_35B19D34B208E77E_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1761EBD0)
#define CLASS_1_35B19D34B208E77E_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1761EB80)
#define CLASS_1_35B19D34B208E77E_24_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1761E700)
#define CLASS_1_35B19D34B208E77E_24_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1761E6E0)
#define CLASS_1_35B19D34B208E77E_24_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1761E730)
#define CLASS_1_35B19D34B208E77E_24_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1761E710)
#define CLASS_1_35B19D34B208E77E_24_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1761E6F0)
#define CLASS_1_35B19D34B208E77E_24_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1761E720)
#define CLASS_1_35B19D34B208E77E_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1761E600)
#define CLASS_1_35B19D34B208E77E_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1761E890)
#define CLASS_1_35B19D34B208E77E_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x1761E8F0)
#define CLASS_1_35B19D34B208E77E_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1761E620)
#define CLASS_1_35B19D34B208E77E_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1761E610)

inline static constexpr unsigned int Class_1_35B19D34B208E77E_24_TypeDefinitionIndex = 26115;

class Class_1_35B19D34B208E77E_24 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_ED790DAC948A65A9_21 Field_1_6; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_35B19D34B208E77E_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_24*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_35B19D34B208E77E_24* Clone()
	{
		return ((::Class_1_35B19D34B208E77E_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_21 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_21(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_21 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_21))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_35B19D34B208E77E_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_35B19D34B208E77E_24*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_35B19D34B208E77E_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_24*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
