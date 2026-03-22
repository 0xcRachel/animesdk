#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F18D4FA413AB053C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176D8800)
#define CLASS_1_F18D4FA413AB053C_CLONE_OFFSET UNITYSDK_OFFSET(0x176D82C0)
#define CLASS_1_F18D4FA413AB053C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176D84F0)
#define CLASS_1_F18D4FA413AB053C_EQUALS_OFFSET UNITYSDK_OFFSET(0x176D8410)
#define CLASS_1_F18D4FA413AB053C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176D85C0)
#define CLASS_1_F18D4FA413AB053C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176D8A20)
#define CLASS_1_F18D4FA413AB053C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176D89B0)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x176D8390)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x176D8340)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x176D8330)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x176D83A0)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x176D83E0)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x176D8400)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x176D83C0)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x176D83D0)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x176D83F0)
#define CLASS_1_F18D4FA413AB053C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x176D83B0)
#define CLASS_1_F18D4FA413AB053C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176D8240)
#define CLASS_1_F18D4FA413AB053C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176D8690)
#define CLASS_1_F18D4FA413AB053C_WRITETO_OFFSET UNITYSDK_OFFSET(0x176D86F0)
#define CLASS_1_F18D4FA413AB053C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176D8260)
#define CLASS_1_F18D4FA413AB053C__CTOR_OFFSET UNITYSDK_OFFSET(0x176D8250)

inline static constexpr unsigned int Class_1_F18D4FA413AB053C_TypeDefinitionIndex = 22780;

class Class_1_F18D4FA413AB053C : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Boolean Field_1_10; // 0x20
	::System::Boolean Field_1_6; // 0x21
	::System::Boolean Field_1_8; // 0x22
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F18D4FA413AB053C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F18D4FA413AB053C*))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F18D4FA413AB053C* Clone()
	{
		return ((::Class_1_F18D4FA413AB053C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F18D4FA413AB053C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F18D4FA413AB053C*))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F18D4FA413AB053C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F18D4FA413AB053C*))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F18D4FA413AB053C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
