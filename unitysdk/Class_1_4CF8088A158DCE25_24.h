#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E31A80)
#define CLASS_1_4CF8088A158DCE25_24_CLONE_OFFSET UNITYSDK_OFFSET(0x17E316C0)
#define CLASS_1_4CF8088A158DCE25_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E31890)
#define CLASS_1_4CF8088A158DCE25_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E317C0)
#define CLASS_1_4CF8088A158DCE25_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E31920)
#define CLASS_1_4CF8088A158DCE25_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E31C00)
#define CLASS_1_4CF8088A158DCE25_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E31BB0)
#define CLASS_1_4CF8088A158DCE25_24_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E31780)
#define CLASS_1_4CF8088A158DCE25_24_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E31760)
#define CLASS_1_4CF8088A158DCE25_24_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E31790)
#define CLASS_1_4CF8088A158DCE25_24_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E31770)
#define CLASS_1_4CF8088A158DCE25_24_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17E317B0)
#define CLASS_1_4CF8088A158DCE25_24_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17E31750)
#define CLASS_1_4CF8088A158DCE25_24_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17E317A0)
#define CLASS_1_4CF8088A158DCE25_24_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E31740)
#define CLASS_1_4CF8088A158DCE25_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E31660)
#define CLASS_1_4CF8088A158DCE25_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E31950)
#define CLASS_1_4CF8088A158DCE25_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E319B0)
#define CLASS_1_4CF8088A158DCE25_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E31680)
#define CLASS_1_4CF8088A158DCE25_24__CTOR_OFFSET UNITYSDK_OFFSET(0x17E31670)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_24_TypeDefinitionIndex = 24131;

class Class_1_4CF8088A158DCE25_24 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_8; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_24*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_24* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_24*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_24*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
