#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_FEDDCAB84542D9C0_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17920D30)
#define CLASS_1_FEDDCAB84542D9C0_14_CLONE_OFFSET UNITYSDK_OFFSET(0x17920940)
#define CLASS_1_FEDDCAB84542D9C0_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17920B00)
#define CLASS_1_FEDDCAB84542D9C0_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x17920A40)
#define CLASS_1_FEDDCAB84542D9C0_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17920BC0)
#define CLASS_1_FEDDCAB84542D9C0_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17920FA0)
#define CLASS_1_FEDDCAB84542D9C0_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17920EF0)
#define CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17920A00)
#define CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17920A20)
#define CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x179209C0)
#define CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x179209F0)
#define CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x179209E0)
#define CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17920A10)
#define CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17920A30)
#define CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x179209D0)
#define CLASS_1_FEDDCAB84542D9C0_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179208B0)
#define CLASS_1_FEDDCAB84542D9C0_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17920C00)
#define CLASS_1_FEDDCAB84542D9C0_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x17920C60)
#define CLASS_1_FEDDCAB84542D9C0_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179208D0)
#define CLASS_1_FEDDCAB84542D9C0_14__CTOR_OFFSET UNITYSDK_OFFSET(0x179208C0)

inline static constexpr unsigned int Class_1_FEDDCAB84542D9C0_14_TypeDefinitionIndex = 25680;

class Class_1_FEDDCAB84542D9C0_14 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::ItemList* Field_1_4; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FEDDCAB84542D9C0_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FEDDCAB84542D9C0_14*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FEDDCAB84542D9C0_14* Clone()
	{
		return ((::Class_1_FEDDCAB84542D9C0_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FEDDCAB84542D9C0_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FEDDCAB84542D9C0_14*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FEDDCAB84542D9C0_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FEDDCAB84542D9C0_14*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
