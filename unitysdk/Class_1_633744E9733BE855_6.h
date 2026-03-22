#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_633744E9733BE855_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1731D200)
#define CLASS_1_633744E9733BE855_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1731CFF0)
#define CLASS_1_633744E9733BE855_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1731D0B0)
#define CLASS_1_633744E9733BE855_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1731D050)
#define CLASS_1_633744E9733BE855_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1731D100)
#define CLASS_1_633744E9733BE855_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1731D2E0)
#define CLASS_1_633744E9733BE855_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1731D2B0)
#define CLASS_1_633744E9733BE855_6_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1731D040)
#define CLASS_1_633744E9733BE855_6_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1731D030)
#define CLASS_1_633744E9733BE855_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1731CFA0)
#define CLASS_1_633744E9733BE855_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1731D130)
#define CLASS_1_633744E9733BE855_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1731D190)
#define CLASS_1_633744E9733BE855_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1731CFC0)
#define CLASS_1_633744E9733BE855_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1731CFB0)

inline static constexpr unsigned int Class_1_633744E9733BE855_6_TypeDefinitionIndex = 24660;

class Class_1_633744E9733BE855_6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_633744E9733BE855_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_6*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_633744E9733BE855_6* Clone()
	{
		return ((::Class_1_633744E9733BE855_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_633744E9733BE855_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_633744E9733BE855_6*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_633744E9733BE855_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_6*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
