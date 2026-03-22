#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3ECA6195BFBE70F_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17514A40)
#define CLASS_1_F3ECA6195BFBE70F_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17514510)
#define CLASS_1_F3ECA6195BFBE70F_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17514740)
#define CLASS_1_F3ECA6195BFBE70F_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17514650)
#define CLASS_1_F3ECA6195BFBE70F_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17514800)
#define CLASS_1_F3ECA6195BFBE70F_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17514CB0)
#define CLASS_1_F3ECA6195BFBE70F_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17514C50)
#define CLASS_1_F3ECA6195BFBE70F_1_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x17514600)
#define CLASS_1_F3ECA6195BFBE70F_1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x175145A0)
#define CLASS_1_F3ECA6195BFBE70F_1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x175145F0)
#define CLASS_1_F3ECA6195BFBE70F_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17514590)
#define CLASS_1_F3ECA6195BFBE70F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17514490)
#define CLASS_1_F3ECA6195BFBE70F_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17514940)
#define CLASS_1_F3ECA6195BFBE70F_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x175149A0)
#define CLASS_1_F3ECA6195BFBE70F_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175144C0)
#define CLASS_1_F3ECA6195BFBE70F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x175144A0)

inline static constexpr unsigned int Class_1_F3ECA6195BFBE70F_1_TypeDefinitionIndex = 22411;

class Class_1_F3ECA6195BFBE70F_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::String* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3ECA6195BFBE70F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_1*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3ECA6195BFBE70F_1* Clone()
	{
		return ((::Class_1_F3ECA6195BFBE70F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3ECA6195BFBE70F_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_1*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3ECA6195BFBE70F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_1*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
