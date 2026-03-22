#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8FDE0AB539660B06_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173881F0)
#define CLASS_1_8FDE0AB539660B06_CLONE_OFFSET UNITYSDK_OFFSET(0x17387C90)
#define CLASS_1_8FDE0AB539660B06_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17387E90)
#define CLASS_1_8FDE0AB539660B06_EQUALS_OFFSET UNITYSDK_OFFSET(0x17387DD0)
#define CLASS_1_8FDE0AB539660B06_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17387F40)
#define CLASS_1_8FDE0AB539660B06_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x173885E0)
#define CLASS_1_8FDE0AB539660B06_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17388570)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17387D00)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17387CF0)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x17387D80)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x17387DA0)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_C114A1F8E08B6F92_3_OFFSET UNITYSDK_OFFSET(0x17387DC0)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x17387D60)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x17387D70)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x17387D90)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0x17387DB0)
#define CLASS_1_8FDE0AB539660B06_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17387D50)
#define CLASS_1_8FDE0AB539660B06_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17387C20)
#define CLASS_1_8FDE0AB539660B06_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17388020)
#define CLASS_1_8FDE0AB539660B06_WRITETO_OFFSET UNITYSDK_OFFSET(0x17388080)
#define CLASS_1_8FDE0AB539660B06__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17387C40)
#define CLASS_1_8FDE0AB539660B06__CTOR_OFFSET UNITYSDK_OFFSET(0x17387C30)

inline static constexpr unsigned int Class_1_8FDE0AB539660B06_TypeDefinitionIndex = 22415;

class Class_1_8FDE0AB539660B06 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Int32 Field_1_8; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Int32 Field_1_6; // 0x28
	::System::Int32 Field_1_10; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8FDE0AB539660B06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FDE0AB539660B06*))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8FDE0AB539660B06* Clone()
	{
		return ((::Class_1_8FDE0AB539660B06*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_METHOD_1_C114A1F8E08B6F92_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8FDE0AB539660B06* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8FDE0AB539660B06*))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8FDE0AB539660B06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FDE0AB539660B06*))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8FDE0AB539660B06_MERGEFROM_1_OFFSET))(this, a1);
	}
};
