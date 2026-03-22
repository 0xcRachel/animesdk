#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_7.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D3B1B80CABBBA1C5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17698A50)
#define CLASS_1_D3B1B80CABBBA1C5_CLONE_OFFSET UNITYSDK_OFFSET(0x176985C0)
#define CLASS_1_D3B1B80CABBBA1C5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176987C0)
#define CLASS_1_D3B1B80CABBBA1C5_EQUALS_OFFSET UNITYSDK_OFFSET(0x176986E0)
#define CLASS_1_D3B1B80CABBBA1C5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17698870)
#define CLASS_1_D3B1B80CABBBA1C5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17698C80)
#define CLASS_1_D3B1B80CABBBA1C5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17698C20)
#define CLASS_1_D3B1B80CABBBA1C5_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17698670)
#define CLASS_1_D3B1B80CABBBA1C5_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17698660)
#define CLASS_1_D3B1B80CABBBA1C5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x176986D0)
#define CLASS_1_D3B1B80CABBBA1C5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x176986C0)
#define CLASS_1_D3B1B80CABBBA1C5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17698650)
#define CLASS_1_D3B1B80CABBBA1C5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17698640)
#define CLASS_1_D3B1B80CABBBA1C5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17698550)
#define CLASS_1_D3B1B80CABBBA1C5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17698920)
#define CLASS_1_D3B1B80CABBBA1C5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17698980)
#define CLASS_1_D3B1B80CABBBA1C5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17698570)
#define CLASS_1_D3B1B80CABBBA1C5__CTOR_OFFSET UNITYSDK_OFFSET(0x17698560)

inline static constexpr unsigned int Class_1_D3B1B80CABBBA1C5_TypeDefinitionIndex = 25317;

class Class_1_D3B1B80CABBBA1C5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_4; // 0x18
	::Enum_3_0A3761FE34514D6C_7 Field_1_6; // 0x20
	::System::Boolean Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D3B1B80CABBBA1C5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3B1B80CABBBA1C5*))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D3B1B80CABBBA1C5* Clone()
	{
		return ((::Class_1_D3B1B80CABBBA1C5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_7 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_7))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D3B1B80CABBBA1C5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D3B1B80CABBBA1C5*))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D3B1B80CABBBA1C5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3B1B80CABBBA1C5*))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D3B1B80CABBBA1C5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
