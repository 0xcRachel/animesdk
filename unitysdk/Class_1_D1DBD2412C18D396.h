#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_D1DBD2412C18D396_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17ADC540)
#define CLASS_1_D1DBD2412C18D396_CLONE_OFFSET UNITYSDK_OFFSET(0x17ADC140)
#define CLASS_1_D1DBD2412C18D396_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17ADC320)
#define CLASS_1_D1DBD2412C18D396_EQUALS_OFFSET UNITYSDK_OFFSET(0x17ADC230)
#define CLASS_1_D1DBD2412C18D396_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17ADC400)
#define CLASS_1_D1DBD2412C18D396_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17ADC6B0)
#define CLASS_1_D1DBD2412C18D396_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17ADC5D0)
#define CLASS_1_D1DBD2412C18D396_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x17ADC220)
#define CLASS_1_D1DBD2412C18D396_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17ADC200)
#define CLASS_1_D1DBD2412C18D396_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x17ADC210)
#define CLASS_1_D1DBD2412C18D396_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17ADC1F0)
#define CLASS_1_D1DBD2412C18D396_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ADC080)
#define CLASS_1_D1DBD2412C18D396_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ADC460)
#define CLASS_1_D1DBD2412C18D396_WRITETO_OFFSET UNITYSDK_OFFSET(0x17ADC4C0)
#define CLASS_1_D1DBD2412C18D396__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ADC0A0)
#define CLASS_1_D1DBD2412C18D396__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADC090)

inline static constexpr unsigned int Class_1_D1DBD2412C18D396_TypeDefinitionIndex = 26347;

class Class_1_D1DBD2412C18D396 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Proto::ItemList* Field_1_4; // 0x10
	::Proto::ItemList* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D1DBD2412C18D396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1DBD2412C18D396*))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D1DBD2412C18D396* Clone()
	{
		return ((::Class_1_D1DBD2412C18D396*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D1DBD2412C18D396* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1DBD2412C18D396*))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D1DBD2412C18D396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1DBD2412C18D396*))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1DBD2412C18D396_MERGEFROM_1_OFFSET))(this, a1);
	}
};
