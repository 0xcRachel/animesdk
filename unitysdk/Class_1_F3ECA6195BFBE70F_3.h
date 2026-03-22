#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3ECA6195BFBE70F_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AB6E30)
#define CLASS_1_F3ECA6195BFBE70F_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17AB6420)
#define CLASS_1_F3ECA6195BFBE70F_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AB6780)
#define CLASS_1_F3ECA6195BFBE70F_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AB6720)
#define CLASS_1_F3ECA6195BFBE70F_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AB68F0)
#define CLASS_1_F3ECA6195BFBE70F_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AB74A0)
#define CLASS_1_F3ECA6195BFBE70F_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AB73E0)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x17AB6550)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x17AB65B0)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_3_OFFSET UNITYSDK_OFFSET(0x17AB6610)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_4_OFFSET UNITYSDK_OFFSET(0x17AB6670)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_5_OFFSET UNITYSDK_OFFSET(0x17AB66D0)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17AB64F0)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17AB6540)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x17AB65A0)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x17AB6600)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_4_OFFSET UNITYSDK_OFFSET(0x17AB6660)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_5_OFFSET UNITYSDK_OFFSET(0x17AB66C0)
#define CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17AB64E0)
#define CLASS_1_F3ECA6195BFBE70F_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AB6330)
#define CLASS_1_F3ECA6195BFBE70F_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AB6C40)
#define CLASS_1_F3ECA6195BFBE70F_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AB6CA0)
#define CLASS_1_F3ECA6195BFBE70F_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AB6390)
#define CLASS_1_F3ECA6195BFBE70F_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB6340)

inline static constexpr unsigned int Class_1_F3ECA6195BFBE70F_3_TypeDefinitionIndex = 22423;

class Class_1_F3ECA6195BFBE70F_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x6; // 0x0
	::System::String* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::String* Field_1_2; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_8; // 0x38
	::System::String* Field_1_12; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3ECA6195BFBE70F_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_3*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3ECA6195BFBE70F_3* Clone()
	{
		return ((::Class_1_F3ECA6195BFBE70F_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_4_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_4_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_126AB3935214AA22_5_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_METHOD_1_050E70FEDB783306_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3ECA6195BFBE70F_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_3*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3ECA6195BFBE70F_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_3*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
