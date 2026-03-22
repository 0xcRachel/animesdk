#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_14.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_D7C2741BD4C51006_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174025F0)
#define CLASS_1_D7C2741BD4C51006_CLONE_OFFSET UNITYSDK_OFFSET(0x174021D0)
#define CLASS_1_D7C2741BD4C51006_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174023A0)
#define CLASS_1_D7C2741BD4C51006_EQUALS_OFFSET UNITYSDK_OFFSET(0x174022D0)
#define CLASS_1_D7C2741BD4C51006_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17402460)
#define CLASS_1_D7C2741BD4C51006_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17402830)
#define CLASS_1_D7C2741BD4C51006_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17402780)
#define CLASS_1_D7C2741BD4C51006_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17402250)
#define CLASS_1_D7C2741BD4C51006_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x174022A0)
#define CLASS_1_D7C2741BD4C51006_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17402280)
#define CLASS_1_D7C2741BD4C51006_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17402270)
#define CLASS_1_D7C2741BD4C51006_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17402260)
#define CLASS_1_D7C2741BD4C51006_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17402290)
#define CLASS_1_D7C2741BD4C51006_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x174022C0)
#define CLASS_1_D7C2741BD4C51006_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x174022B0)
#define CLASS_1_D7C2741BD4C51006_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17402140)
#define CLASS_1_D7C2741BD4C51006_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174024B0)
#define CLASS_1_D7C2741BD4C51006_WRITETO_OFFSET UNITYSDK_OFFSET(0x17402510)
#define CLASS_1_D7C2741BD4C51006__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17402160)
#define CLASS_1_D7C2741BD4C51006__CTOR_OFFSET UNITYSDK_OFFSET(0x17402150)

inline static constexpr unsigned int Class_1_D7C2741BD4C51006_TypeDefinitionIndex = 22869;

class Class_1_D7C2741BD4C51006 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::ItemList* Field_1_4; // 0x18
	::System::Boolean Field_1_8; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::Enum_3_DB663931210BBC27_14 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D7C2741BD4C51006* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7C2741BD4C51006*))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D7C2741BD4C51006* Clone()
	{
		return ((::Class_1_D7C2741BD4C51006*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_14 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_14(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_14 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_14))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D7C2741BD4C51006* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D7C2741BD4C51006*))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D7C2741BD4C51006* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7C2741BD4C51006*))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D7C2741BD4C51006_MERGEFROM_1_OFFSET))(this, a1);
	}
};
