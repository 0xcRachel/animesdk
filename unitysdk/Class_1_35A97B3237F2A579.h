#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_35A97B3237F2A579_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x178F7900)
#define CLASS_1_35A97B3237F2A579_CLONE_OFFSET UNITYSDK_OFFSET(0x178F74A0)
#define CLASS_1_35A97B3237F2A579_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178F75B0)
#define CLASS_1_35A97B3237F2A579_EQUALS_OFFSET UNITYSDK_OFFSET(0x178F7580)
#define CLASS_1_35A97B3237F2A579_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178F76D0)
#define CLASS_1_35A97B3237F2A579_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x178F7A80)
#define CLASS_1_35A97B3237F2A579_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x178F7A20)
#define CLASS_1_35A97B3237F2A579_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x178F7510)
#define CLASS_1_35A97B3237F2A579_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x178F7500)
#define CLASS_1_35A97B3237F2A579_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x178F7560)
#define CLASS_1_35A97B3237F2A579_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x178F7570)
#define CLASS_1_35A97B3237F2A579_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178F7430)
#define CLASS_1_35A97B3237F2A579_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178F7800)
#define CLASS_1_35A97B3237F2A579_WRITETO_OFFSET UNITYSDK_OFFSET(0x178F7860)
#define CLASS_1_35A97B3237F2A579__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178F7450)
#define CLASS_1_35A97B3237F2A579__CTOR_OFFSET UNITYSDK_OFFSET(0x178F7440)

inline static constexpr unsigned int Class_1_35A97B3237F2A579_TypeDefinitionIndex = 26305;

class Class_1_35A97B3237F2A579 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Single Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_35A97B3237F2A579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35A97B3237F2A579*))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_35A97B3237F2A579* Clone()
	{
		return ((::Class_1_35A97B3237F2A579*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_35A97B3237F2A579* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_35A97B3237F2A579*))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_35A97B3237F2A579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35A97B3237F2A579*))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35A97B3237F2A579_MERGEFROM_1_OFFSET))(this, a1);
	}
};
