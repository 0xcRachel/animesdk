#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_434341DAC51FD4BD_99_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E0C2B0)
#define CLASS_1_434341DAC51FD4BD_99_CLONE_OFFSET UNITYSDK_OFFSET(0x17E0C0C0)
#define CLASS_1_434341DAC51FD4BD_99_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E0C1C0)
#define CLASS_1_434341DAC51FD4BD_99_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E0C130)
#define CLASS_1_434341DAC51FD4BD_99_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E0C210)
#define CLASS_1_434341DAC51FD4BD_99_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E0C300)
#define CLASS_1_434341DAC51FD4BD_99_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E0C2D0)
#define CLASS_1_434341DAC51FD4BD_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E0C070)
#define CLASS_1_434341DAC51FD4BD_99_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E0C240)
#define CLASS_1_434341DAC51FD4BD_99_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E0C2A0)
#define CLASS_1_434341DAC51FD4BD_99__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E0C090)
#define CLASS_1_434341DAC51FD4BD_99__CTOR_OFFSET UNITYSDK_OFFSET(0x17E0C080)

inline static constexpr unsigned int Class_1_434341DAC51FD4BD_99_TypeDefinitionIndex = 24151;

class Class_1_434341DAC51FD4BD_99 : public ::System::Object
{
public:
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_434341DAC51FD4BD_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_99*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_434341DAC51FD4BD_99* Clone()
	{
		return ((::Class_1_434341DAC51FD4BD_99*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_434341DAC51FD4BD_99* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_434341DAC51FD4BD_99*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_434341DAC51FD4BD_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_99*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_99_MERGEFROM_1_OFFSET))(this, a1);
	}
};
