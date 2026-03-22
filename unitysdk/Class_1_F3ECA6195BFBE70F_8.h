#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3ECA6195BFBE70F_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179588F0)
#define CLASS_1_F3ECA6195BFBE70F_8_CLONE_OFFSET UNITYSDK_OFFSET(0x17958550)
#define CLASS_1_F3ECA6195BFBE70F_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179586E0)
#define CLASS_1_F3ECA6195BFBE70F_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x17958620)
#define CLASS_1_F3ECA6195BFBE70F_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17958770)
#define CLASS_1_F3ECA6195BFBE70F_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17958A50)
#define CLASS_1_F3ECA6195BFBE70F_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17958A10)
#define CLASS_1_F3ECA6195BFBE70F_8_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x179585D0)
#define CLASS_1_F3ECA6195BFBE70F_8_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x179585C0)
#define CLASS_1_F3ECA6195BFBE70F_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179584F0)
#define CLASS_1_F3ECA6195BFBE70F_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17958830)
#define CLASS_1_F3ECA6195BFBE70F_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x17958890)
#define CLASS_1_F3ECA6195BFBE70F_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17958510)
#define CLASS_1_F3ECA6195BFBE70F_8__CTOR_OFFSET UNITYSDK_OFFSET(0x17958500)

inline static constexpr unsigned int Class_1_F3ECA6195BFBE70F_8_TypeDefinitionIndex = 24824;

class Class_1_F3ECA6195BFBE70F_8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3ECA6195BFBE70F_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_8*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3ECA6195BFBE70F_8* Clone()
	{
		return ((::Class_1_F3ECA6195BFBE70F_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3ECA6195BFBE70F_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_8*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3ECA6195BFBE70F_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_8*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
