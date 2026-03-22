#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B139B98AF2D803D6_29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17902E10)
#define CLASS_1_B139B98AF2D803D6_29_CLONE_OFFSET UNITYSDK_OFFSET(0x17902A00)
#define CLASS_1_B139B98AF2D803D6_29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17902BC0)
#define CLASS_1_B139B98AF2D803D6_29_EQUALS_OFFSET UNITYSDK_OFFSET(0x17902AF0)
#define CLASS_1_B139B98AF2D803D6_29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17902C50)
#define CLASS_1_B139B98AF2D803D6_29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17902FF0)
#define CLASS_1_B139B98AF2D803D6_29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17902FA0)
#define CLASS_1_B139B98AF2D803D6_29_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17902AD0)
#define CLASS_1_B139B98AF2D803D6_29_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17902A80)
#define CLASS_1_B139B98AF2D803D6_29_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17902A70)
#define CLASS_1_B139B98AF2D803D6_29_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17902AE0)
#define CLASS_1_B139B98AF2D803D6_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179029A0)
#define CLASS_1_B139B98AF2D803D6_29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17902D20)
#define CLASS_1_B139B98AF2D803D6_29_WRITETO_OFFSET UNITYSDK_OFFSET(0x17902D80)
#define CLASS_1_B139B98AF2D803D6_29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179029C0)
#define CLASS_1_B139B98AF2D803D6_29__CTOR_OFFSET UNITYSDK_OFFSET(0x179029B0)

inline static constexpr unsigned int Class_1_B139B98AF2D803D6_29_TypeDefinitionIndex = 26288;

class Class_1_B139B98AF2D803D6_29 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B139B98AF2D803D6_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_29*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B139B98AF2D803D6_29* Clone()
	{
		return ((::Class_1_B139B98AF2D803D6_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B139B98AF2D803D6_29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B139B98AF2D803D6_29*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B139B98AF2D803D6_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_29*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
