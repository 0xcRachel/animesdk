#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E6F8A90B7052D53E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17862AB0)
#define CLASS_1_E6F8A90B7052D53E_CLONE_OFFSET UNITYSDK_OFFSET(0x17862290)
#define CLASS_1_E6F8A90B7052D53E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17862420)
#define CLASS_1_E6F8A90B7052D53E_EQUALS_OFFSET UNITYSDK_OFFSET(0x178623C0)
#define CLASS_1_E6F8A90B7052D53E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17862690)
#define CLASS_1_E6F8A90B7052D53E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17862C90)
#define CLASS_1_E6F8A90B7052D53E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17862BF0)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17862350)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x17862360)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x17862380)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x178623A0)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x17862320)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17862340)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x17862370)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0x17862390)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET UNITYSDK_OFFSET(0x178623B0)
#define CLASS_1_E6F8A90B7052D53E_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x17862330)
#define CLASS_1_E6F8A90B7052D53E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17862220)
#define CLASS_1_E6F8A90B7052D53E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17862900)
#define CLASS_1_E6F8A90B7052D53E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17862960)
#define CLASS_1_E6F8A90B7052D53E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17862240)
#define CLASS_1_E6F8A90B7052D53E__CTOR_OFFSET UNITYSDK_OFFSET(0x17862230)

inline static constexpr unsigned int Class_1_E6F8A90B7052D53E_TypeDefinitionIndex = 23745;

class Class_1_E6F8A90B7052D53E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Single Field_1_8; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::UInt64 Field_1_4; // 0x20
	::System::Single Field_1_10; // 0x28
	::System::Single Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E6F8A90B7052D53E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E6F8A90B7052D53E*))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E6F8A90B7052D53E* Clone()
	{
		return ((::Class_1_E6F8A90B7052D53E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_CLONE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E6F8A90B7052D53E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E6F8A90B7052D53E*))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E6F8A90B7052D53E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E6F8A90B7052D53E*))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E6F8A90B7052D53E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
