#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4B1934E77D6B8E9B_Enum_3_FCBB2C507E9B21A3_13.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_4B1934E77D6B8E9B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1747A460)
#define CLASS_1_4B1934E77D6B8E9B_CLONE_OFFSET UNITYSDK_OFFSET(0x17479DE0)
#define CLASS_1_4B1934E77D6B8E9B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17479EA0)
#define CLASS_1_4B1934E77D6B8E9B_EQUALS_OFFSET UNITYSDK_OFFSET(0x17479E70)
#define CLASS_1_4B1934E77D6B8E9B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1747A160)
#define CLASS_1_4B1934E77D6B8E9B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1747A930)
#define CLASS_1_4B1934E77D6B8E9B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1747A770)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17479E50)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17479E40)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17479E20)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_6BCB722BBE18B904_1_OFFSET UNITYSDK_OFFSET(0x17479D30)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x17479C80)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17479E10)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17479E30)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17479E60)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_F45A6C563F3DF7EB_1_OFFSET UNITYSDK_OFFSET(0x17479DB0)
#define CLASS_1_4B1934E77D6B8E9B_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x17479D00)
#define CLASS_1_4B1934E77D6B8E9B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17479AC0)
#define CLASS_1_4B1934E77D6B8E9B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1747A240)
#define CLASS_1_4B1934E77D6B8E9B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1747A2A0)
#define CLASS_1_4B1934E77D6B8E9B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17479AE0)
#define CLASS_1_4B1934E77D6B8E9B__CTOR_OFFSET UNITYSDK_OFFSET(0x17479AD0)

inline static constexpr unsigned int Class_1_4B1934E77D6B8E9B_TypeDefinitionIndex = 23445;

class Class_1_4B1934E77D6B8E9B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	::Proto::ItemList* Field_1_4; // 0x10
	::System::Object* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::Int64 Field_1_6; // 0x28
	::Class_1_4B1934E77D6B8E9B_Enum_3_FCBB2C507E9B21A3_13 Field_1_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4B1934E77D6B8E9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B1934E77D6B8E9B*))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4B1934E77D6B8E9B* Clone()
	{
		return ((::Class_1_4B1934E77D6B8E9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_6BCB722BBE18B904_1_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_F45A6C563F3DF7EB_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Class_1_4B1934E77D6B8E9B_Enum_3_FCBB2C507E9B21A3_13 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_4B1934E77D6B8E9B_Enum_3_FCBB2C507E9B21A3_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4B1934E77D6B8E9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4B1934E77D6B8E9B*))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4B1934E77D6B8E9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B1934E77D6B8E9B*))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B1934E77D6B8E9B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
