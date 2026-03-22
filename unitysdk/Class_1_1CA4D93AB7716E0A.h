#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CA4D93AB7716E0A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179E9110)
#define CLASS_1_1CA4D93AB7716E0A_CLONE_OFFSET UNITYSDK_OFFSET(0x179E8C70)
#define CLASS_1_1CA4D93AB7716E0A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179E8EA0)
#define CLASS_1_1CA4D93AB7716E0A_EQUALS_OFFSET UNITYSDK_OFFSET(0x179E8DC0)
#define CLASS_1_1CA4D93AB7716E0A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179E8F40)
#define CLASS_1_1CA4D93AB7716E0A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179E93F0)
#define CLASS_1_1CA4D93AB7716E0A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179E9380)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x179E8D60)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x179E8D80)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x179E8D40)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x179E8DB0)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x179E8D70)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x179E8D90)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x179E8D50)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x179E8DA0)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x179E8D30)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x179E8D10)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x179E8D20)
#define CLASS_1_1CA4D93AB7716E0A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x179E8D00)
#define CLASS_1_1CA4D93AB7716E0A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179E8C00)
#define CLASS_1_1CA4D93AB7716E0A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179E8F90)
#define CLASS_1_1CA4D93AB7716E0A_WRITETO_OFFSET UNITYSDK_OFFSET(0x179E8FF0)
#define CLASS_1_1CA4D93AB7716E0A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179E8C20)
#define CLASS_1_1CA4D93AB7716E0A__CTOR_OFFSET UNITYSDK_OFFSET(0x179E8C10)

inline static constexpr unsigned int Class_1_1CA4D93AB7716E0A_TypeDefinitionIndex = 25221;

class Class_1_1CA4D93AB7716E0A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_8; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_10; // 0x20
	::System::Boolean Field_1_2; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Int64 Field_1_12; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CA4D93AB7716E0A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CA4D93AB7716E0A*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CA4D93AB7716E0A* Clone()
	{
		return ((::Class_1_1CA4D93AB7716E0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CA4D93AB7716E0A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CA4D93AB7716E0A*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CA4D93AB7716E0A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CA4D93AB7716E0A*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
