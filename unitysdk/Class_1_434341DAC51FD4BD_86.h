#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_434341DAC51FD4BD_86_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181B7370)
#define CLASS_1_434341DAC51FD4BD_86_CLONE_OFFSET UNITYSDK_OFFSET(0x181B7180)
#define CLASS_1_434341DAC51FD4BD_86_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181B7280)
#define CLASS_1_434341DAC51FD4BD_86_EQUALS_OFFSET UNITYSDK_OFFSET(0x181B71F0)
#define CLASS_1_434341DAC51FD4BD_86_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181B72D0)
#define CLASS_1_434341DAC51FD4BD_86_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181B73C0)
#define CLASS_1_434341DAC51FD4BD_86_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181B7390)
#define CLASS_1_434341DAC51FD4BD_86_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181B7130)
#define CLASS_1_434341DAC51FD4BD_86_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181B7300)
#define CLASS_1_434341DAC51FD4BD_86_WRITETO_OFFSET UNITYSDK_OFFSET(0x181B7360)
#define CLASS_1_434341DAC51FD4BD_86__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181B7150)
#define CLASS_1_434341DAC51FD4BD_86__CTOR_OFFSET UNITYSDK_OFFSET(0x181B7140)

inline static constexpr unsigned int Class_1_434341DAC51FD4BD_86_TypeDefinitionIndex = 24027;

class Class_1_434341DAC51FD4BD_86 : public ::System::Object
{
public:
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_434341DAC51FD4BD_86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_86*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_434341DAC51FD4BD_86* Clone()
	{
		return ((::Class_1_434341DAC51FD4BD_86*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_434341DAC51FD4BD_86* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_434341DAC51FD4BD_86*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_434341DAC51FD4BD_86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_86*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_86_MERGEFROM_1_OFFSET))(this, a1);
	}
};
