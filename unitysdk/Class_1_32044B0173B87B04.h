#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_32044B0173B87B04_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180A35F0)
#define CLASS_1_32044B0173B87B04_CLONE_OFFSET UNITYSDK_OFFSET(0x180A32E0)
#define CLASS_1_32044B0173B87B04_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180A3400)
#define CLASS_1_32044B0173B87B04_EQUALS_OFFSET UNITYSDK_OFFSET(0x180A3390)
#define CLASS_1_32044B0173B87B04_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180A3470)
#define CLASS_1_32044B0173B87B04_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180A3820)
#define CLASS_1_32044B0173B87B04_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180A37D0)
#define CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x180A3360)
#define CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x180A3380)
#define CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x180A3340)
#define CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x180A3350)
#define CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x180A3370)
#define CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x180A3330)
#define CLASS_1_32044B0173B87B04_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180A3280)
#define CLASS_1_32044B0173B87B04_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180A34A0)
#define CLASS_1_32044B0173B87B04_WRITETO_OFFSET UNITYSDK_OFFSET(0x180A3500)
#define CLASS_1_32044B0173B87B04__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180A32A0)
#define CLASS_1_32044B0173B87B04__CTOR_OFFSET UNITYSDK_OFFSET(0x180A3290)

inline static constexpr unsigned int Class_1_32044B0173B87B04_TypeDefinitionIndex = 23058;

class Class_1_32044B0173B87B04 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_4; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_32044B0173B87B04* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_32044B0173B87B04* Clone()
	{
		return ((::Class_1_32044B0173B87B04*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_32044B0173B87B04* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_32044B0173B87B04*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_32044B0173B87B04* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_MERGEFROM_1_OFFSET))(this, a1);
	}
};
