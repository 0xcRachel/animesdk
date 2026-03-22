#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A4E2764947F50E01;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4B08D4038B7B0CEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174DCDA0)
#define CLASS_1_4B08D4038B7B0CEE_CLONE_OFFSET UNITYSDK_OFFSET(0x174DC790)
#define CLASS_1_4B08D4038B7B0CEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174DCA40)
#define CLASS_1_4B08D4038B7B0CEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x174DC910)
#define CLASS_1_4B08D4038B7B0CEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174DCB40)
#define CLASS_1_4B08D4038B7B0CEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174DCFD0)
#define CLASS_1_4B08D4038B7B0CEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174DCF00)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x174DC8C0)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x174DC8B0)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x174DC850)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x174DC860)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x174DC880)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x174DC8A0)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x174DC840)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x174DC870)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x174DC890)
#define CLASS_1_4B08D4038B7B0CEE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x174DC830)
#define CLASS_1_4B08D4038B7B0CEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174DC700)
#define CLASS_1_4B08D4038B7B0CEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174DCC30)
#define CLASS_1_4B08D4038B7B0CEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x174DCC90)
#define CLASS_1_4B08D4038B7B0CEE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174DC720)
#define CLASS_1_4B08D4038B7B0CEE__CTOR_OFFSET UNITYSDK_OFFSET(0x174DC710)

inline static constexpr unsigned int Class_1_4B08D4038B7B0CEE_TypeDefinitionIndex = 22772;

class Class_1_4B08D4038B7B0CEE : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	::System::String* Field_1_10; // 0x10
	::Class_1_A4E2764947F50E01* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::System::Boolean Field_1_8; // 0x29
	::System::Boolean Field_1_6; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4B08D4038B7B0CEE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B08D4038B7B0CEE*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4B08D4038B7B0CEE* Clone()
	{
		return ((::Class_1_4B08D4038B7B0CEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_A4E2764947F50E01* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A4E2764947F50E01*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A4E2764947F50E01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4B08D4038B7B0CEE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4B08D4038B7B0CEE*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4B08D4038B7B0CEE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B08D4038B7B0CEE*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B08D4038B7B0CEE_MERGEFROM_1_OFFSET))(this, a1);
	}
};
