#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_434341DAC51FD4BD_170_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x178A4FE0)
#define CLASS_1_434341DAC51FD4BD_170_CLONE_OFFSET UNITYSDK_OFFSET(0x178A4E50)
#define CLASS_1_434341DAC51FD4BD_170_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178A4EF0)
#define CLASS_1_434341DAC51FD4BD_170_EQUALS_OFFSET UNITYSDK_OFFSET(0x178A4E90)
#define CLASS_1_434341DAC51FD4BD_170_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178A4F40)
#define CLASS_1_434341DAC51FD4BD_170_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x178A5030)
#define CLASS_1_434341DAC51FD4BD_170_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x178A5000)
#define CLASS_1_434341DAC51FD4BD_170_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178A4E00)
#define CLASS_1_434341DAC51FD4BD_170_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178A4F70)
#define CLASS_1_434341DAC51FD4BD_170_WRITETO_OFFSET UNITYSDK_OFFSET(0x178A4FD0)
#define CLASS_1_434341DAC51FD4BD_170__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178A4E20)
#define CLASS_1_434341DAC51FD4BD_170__CTOR_OFFSET UNITYSDK_OFFSET(0x178A4E10)

inline static constexpr unsigned int Class_1_434341DAC51FD4BD_170_TypeDefinitionIndex = 24653;

class Class_1_434341DAC51FD4BD_170 : public ::System::Object
{
public:
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_434341DAC51FD4BD_170* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_170*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_434341DAC51FD4BD_170* Clone()
	{
		return ((::Class_1_434341DAC51FD4BD_170*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_434341DAC51FD4BD_170* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_434341DAC51FD4BD_170*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_434341DAC51FD4BD_170* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_170*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_170_MERGEFROM_1_OFFSET))(this, a1);
	}
};
