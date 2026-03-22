#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_101_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17428050)
#define CLASS_1_4CF8088A158DCE25_101_CLONE_OFFSET UNITYSDK_OFFSET(0x17427D60)
#define CLASS_1_4CF8088A158DCE25_101_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17427ED0)
#define CLASS_1_4CF8088A158DCE25_101_EQUALS_OFFSET UNITYSDK_OFFSET(0x17427E20)
#define CLASS_1_4CF8088A158DCE25_101_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17427F40)
#define CLASS_1_4CF8088A158DCE25_101_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17428130)
#define CLASS_1_4CF8088A158DCE25_101_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174280F0)
#define CLASS_1_4CF8088A158DCE25_101_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17427E00)
#define CLASS_1_4CF8088A158DCE25_101_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17427E10)
#define CLASS_1_4CF8088A158DCE25_101_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17427DF0)
#define CLASS_1_4CF8088A158DCE25_101_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17427DE0)
#define CLASS_1_4CF8088A158DCE25_101_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17427D00)
#define CLASS_1_4CF8088A158DCE25_101_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17427F70)
#define CLASS_1_4CF8088A158DCE25_101_WRITETO_OFFSET UNITYSDK_OFFSET(0x17427FD0)
#define CLASS_1_4CF8088A158DCE25_101__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17427D20)
#define CLASS_1_4CF8088A158DCE25_101__CTOR_OFFSET UNITYSDK_OFFSET(0x17427D10)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_101_TypeDefinitionIndex = 26747;

class Class_1_4CF8088A158DCE25_101 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_101*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_101* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_101*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_101* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_101*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_101*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_101_MERGEFROM_1_OFFSET))(this, a1);
	}
};
