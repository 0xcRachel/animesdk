#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3D12E7E3635FE71C_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A429D0)
#define CLASS_1_3D12E7E3635FE71C_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17A42730)
#define CLASS_1_3D12E7E3635FE71C_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A42830)
#define CLASS_1_3D12E7E3635FE71C_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A427C0)
#define CLASS_1_3D12E7E3635FE71C_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A42890)
#define CLASS_1_3D12E7E3635FE71C_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A42BD0)
#define CLASS_1_3D12E7E3635FE71C_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A42B90)
#define CLASS_1_3D12E7E3635FE71C_1_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x17A427B0)
#define CLASS_1_3D12E7E3635FE71C_1_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17A42790)
#define CLASS_1_3D12E7E3635FE71C_1_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x17A427A0)
#define CLASS_1_3D12E7E3635FE71C_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17A42780)
#define CLASS_1_3D12E7E3635FE71C_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A426E0)
#define CLASS_1_3D12E7E3635FE71C_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A428F0)
#define CLASS_1_3D12E7E3635FE71C_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A42950)
#define CLASS_1_3D12E7E3635FE71C_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A42700)
#define CLASS_1_3D12E7E3635FE71C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A426F0)

inline static constexpr unsigned int Class_1_3D12E7E3635FE71C_1_TypeDefinitionIndex = 25301;

class Class_1_3D12E7E3635FE71C_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int64 Field_1_4; // 0x18
	::System::Int64 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3D12E7E3635FE71C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D12E7E3635FE71C_1*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3D12E7E3635FE71C_1* Clone()
	{
		return ((::Class_1_3D12E7E3635FE71C_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3D12E7E3635FE71C_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3D12E7E3635FE71C_1*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3D12E7E3635FE71C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D12E7E3635FE71C_1*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
