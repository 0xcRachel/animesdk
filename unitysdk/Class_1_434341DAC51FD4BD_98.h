#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_434341DAC51FD4BD_98_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AFA740)
#define CLASS_1_434341DAC51FD4BD_98_CLONE_OFFSET UNITYSDK_OFFSET(0x17AFA550)
#define CLASS_1_434341DAC51FD4BD_98_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AFA650)
#define CLASS_1_434341DAC51FD4BD_98_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AFA5C0)
#define CLASS_1_434341DAC51FD4BD_98_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AFA6A0)
#define CLASS_1_434341DAC51FD4BD_98_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AFA790)
#define CLASS_1_434341DAC51FD4BD_98_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AFA760)
#define CLASS_1_434341DAC51FD4BD_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AFA500)
#define CLASS_1_434341DAC51FD4BD_98_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AFA6D0)
#define CLASS_1_434341DAC51FD4BD_98_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AFA730)
#define CLASS_1_434341DAC51FD4BD_98__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AFA520)
#define CLASS_1_434341DAC51FD4BD_98__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFA510)

inline static constexpr unsigned int Class_1_434341DAC51FD4BD_98_TypeDefinitionIndex = 24142;

class Class_1_434341DAC51FD4BD_98 : public ::System::Object
{
public:
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_434341DAC51FD4BD_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_98*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_434341DAC51FD4BD_98* Clone()
	{
		return ((::Class_1_434341DAC51FD4BD_98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_434341DAC51FD4BD_98* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_434341DAC51FD4BD_98*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_434341DAC51FD4BD_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_98*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_98_MERGEFROM_1_OFFSET))(this, a1);
	}
};
