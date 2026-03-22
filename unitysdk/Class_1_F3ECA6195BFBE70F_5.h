#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3ECA6195BFBE70F_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175010A0)
#define CLASS_1_F3ECA6195BFBE70F_5_CLONE_OFFSET UNITYSDK_OFFSET(0x17500D00)
#define CLASS_1_F3ECA6195BFBE70F_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17500E90)
#define CLASS_1_F3ECA6195BFBE70F_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17500DD0)
#define CLASS_1_F3ECA6195BFBE70F_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17500F20)
#define CLASS_1_F3ECA6195BFBE70F_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17501200)
#define CLASS_1_F3ECA6195BFBE70F_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175011C0)
#define CLASS_1_F3ECA6195BFBE70F_5_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17500D80)
#define CLASS_1_F3ECA6195BFBE70F_5_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17500D70)
#define CLASS_1_F3ECA6195BFBE70F_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17500CA0)
#define CLASS_1_F3ECA6195BFBE70F_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17500FE0)
#define CLASS_1_F3ECA6195BFBE70F_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17501040)
#define CLASS_1_F3ECA6195BFBE70F_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17500CC0)
#define CLASS_1_F3ECA6195BFBE70F_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17500CB0)

inline static constexpr unsigned int Class_1_F3ECA6195BFBE70F_5_TypeDefinitionIndex = 22598;

class Class_1_F3ECA6195BFBE70F_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3ECA6195BFBE70F_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_5*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3ECA6195BFBE70F_5* Clone()
	{
		return ((::Class_1_F3ECA6195BFBE70F_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3ECA6195BFBE70F_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_5*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3ECA6195BFBE70F_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_5*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
