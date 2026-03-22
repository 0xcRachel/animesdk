#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4B08D4038B7B0CEE_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175D25D0)
#define CLASS_1_4B08D4038B7B0CEE_1_CLONE_OFFSET UNITYSDK_OFFSET(0x175D21C0)
#define CLASS_1_4B08D4038B7B0CEE_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175D2390)
#define CLASS_1_4B08D4038B7B0CEE_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x175D22B0)
#define CLASS_1_4B08D4038B7B0CEE_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175D2430)
#define CLASS_1_4B08D4038B7B0CEE_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175D2740)
#define CLASS_1_4B08D4038B7B0CEE_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175D26F0)
#define CLASS_1_4B08D4038B7B0CEE_1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x175D2260)
#define CLASS_1_4B08D4038B7B0CEE_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x175D2250)
#define CLASS_1_4B08D4038B7B0CEE_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x175D2240)
#define CLASS_1_4B08D4038B7B0CEE_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x175D2230)
#define CLASS_1_4B08D4038B7B0CEE_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175D2160)
#define CLASS_1_4B08D4038B7B0CEE_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175D24E0)
#define CLASS_1_4B08D4038B7B0CEE_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x175D2540)
#define CLASS_1_4B08D4038B7B0CEE_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175D2180)
#define CLASS_1_4B08D4038B7B0CEE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x175D2170)

inline static constexpr unsigned int Class_1_4B08D4038B7B0CEE_1_TypeDefinitionIndex = 25303;

class Class_1_4B08D4038B7B0CEE_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::System::String* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4B08D4038B7B0CEE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B08D4038B7B0CEE_1*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4B08D4038B7B0CEE_1* Clone()
	{
		return ((::Class_1_4B08D4038B7B0CEE_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4B08D4038B7B0CEE_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4B08D4038B7B0CEE_1*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4B08D4038B7B0CEE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B08D4038B7B0CEE_1*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
