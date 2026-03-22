#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_434341DAC51FD4BD_216_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179FD9C0)
#define CLASS_1_434341DAC51FD4BD_216_CLONE_OFFSET UNITYSDK_OFFSET(0x179FD7D0)
#define CLASS_1_434341DAC51FD4BD_216_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179FD8D0)
#define CLASS_1_434341DAC51FD4BD_216_EQUALS_OFFSET UNITYSDK_OFFSET(0x179FD840)
#define CLASS_1_434341DAC51FD4BD_216_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179FD920)
#define CLASS_1_434341DAC51FD4BD_216_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179FDA10)
#define CLASS_1_434341DAC51FD4BD_216_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179FD9E0)
#define CLASS_1_434341DAC51FD4BD_216_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179FD780)
#define CLASS_1_434341DAC51FD4BD_216_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179FD950)
#define CLASS_1_434341DAC51FD4BD_216_WRITETO_OFFSET UNITYSDK_OFFSET(0x179FD9B0)
#define CLASS_1_434341DAC51FD4BD_216__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179FD7A0)
#define CLASS_1_434341DAC51FD4BD_216__CTOR_OFFSET UNITYSDK_OFFSET(0x179FD790)

inline static constexpr unsigned int Class_1_434341DAC51FD4BD_216_TypeDefinitionIndex = 25263;

class Class_1_434341DAC51FD4BD_216 : public ::System::Object
{
public:
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_434341DAC51FD4BD_216* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_216*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_434341DAC51FD4BD_216* Clone()
	{
		return ((::Class_1_434341DAC51FD4BD_216*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_434341DAC51FD4BD_216* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_434341DAC51FD4BD_216*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_434341DAC51FD4BD_216* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_216*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_216_MERGEFROM_1_OFFSET))(this, a1);
	}
};
