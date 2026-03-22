#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_211AE29E44745C8D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_33106348F1978F5E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1771F070)
#define CLASS_1_33106348F1978F5E_CLONE_OFFSET UNITYSDK_OFFSET(0x1771E9A0)
#define CLASS_1_33106348F1978F5E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1771EB90)
#define CLASS_1_33106348F1978F5E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1771EA50)
#define CLASS_1_33106348F1978F5E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1771ECC0)
#define CLASS_1_33106348F1978F5E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1771F3F0)
#define CLASS_1_33106348F1978F5E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1771F1A0)
#define CLASS_1_33106348F1978F5E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1771E9D0)
#define CLASS_1_33106348F1978F5E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1771EA30)
#define CLASS_1_33106348F1978F5E_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x1771EA20)
#define CLASS_1_33106348F1978F5E_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1771EA00)
#define CLASS_1_33106348F1978F5E_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x1771EA10)
#define CLASS_1_33106348F1978F5E_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1771E9F0)
#define CLASS_1_33106348F1978F5E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1771E9E0)
#define CLASS_1_33106348F1978F5E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1771EA40)
#define CLASS_1_33106348F1978F5E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1771E870)
#define CLASS_1_33106348F1978F5E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1771EF40)
#define CLASS_1_33106348F1978F5E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1771EFA0)
#define CLASS_1_33106348F1978F5E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1771E890)
#define CLASS_1_33106348F1978F5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1771E880)

inline static constexpr unsigned int Class_1_33106348F1978F5E_TypeDefinitionIndex = 26240;

class Class_1_33106348F1978F5E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Proto::ItemList* Field_1_6; // 0x10
	::Proto::ItemList* Field_1_4; // 0x18
	::Class_1_211AE29E44745C8D* Field_1_8; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_33106348F1978F5E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_33106348F1978F5E*))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_33106348F1978F5E* Clone()
	{
		return ((::Class_1_33106348F1978F5E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::Class_1_211AE29E44745C8D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_211AE29E44745C8D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_211AE29E44745C8D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_211AE29E44745C8D*))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_33106348F1978F5E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_33106348F1978F5E*))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_33106348F1978F5E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_33106348F1978F5E*))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_33106348F1978F5E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
