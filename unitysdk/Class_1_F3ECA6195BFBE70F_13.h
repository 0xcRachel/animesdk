#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3ECA6195BFBE70F_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1785F2D0)
#define CLASS_1_F3ECA6195BFBE70F_13_CLONE_OFFSET UNITYSDK_OFFSET(0x1785EE40)
#define CLASS_1_F3ECA6195BFBE70F_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1785F030)
#define CLASS_1_F3ECA6195BFBE70F_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x1785EF60)
#define CLASS_1_F3ECA6195BFBE70F_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1785F0D0)
#define CLASS_1_F3ECA6195BFBE70F_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1785F570)
#define CLASS_1_F3ECA6195BFBE70F_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1785F510)
#define CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1785EF10)
#define CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1785EF00)
#define CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1785EEF0)
#define CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1785EED0)
#define CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1785EEE0)
#define CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1785EEC0)
#define CLASS_1_F3ECA6195BFBE70F_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1785EDD0)
#define CLASS_1_F3ECA6195BFBE70F_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1785F180)
#define CLASS_1_F3ECA6195BFBE70F_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x1785F1E0)
#define CLASS_1_F3ECA6195BFBE70F_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1785EDF0)
#define CLASS_1_F3ECA6195BFBE70F_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1785EDE0)

inline static constexpr unsigned int Class_1_F3ECA6195BFBE70F_13_TypeDefinitionIndex = 26378;

class Class_1_F3ECA6195BFBE70F_13 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3ECA6195BFBE70F_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_13*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3ECA6195BFBE70F_13* Clone()
	{
		return ((::Class_1_F3ECA6195BFBE70F_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3ECA6195BFBE70F_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_13*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3ECA6195BFBE70F_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_13*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
