#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_96_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BF0BB0)
#define CLASS_1_C03D623E9F32FBCB_96_CLONE_OFFSET UNITYSDK_OFFSET(0x17BF08B0)
#define CLASS_1_C03D623E9F32FBCB_96_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BF0A00)
#define CLASS_1_C03D623E9F32FBCB_96_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BF0950)
#define CLASS_1_C03D623E9F32FBCB_96_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BF0AA0)
#define CLASS_1_C03D623E9F32FBCB_96_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BF0CA0)
#define CLASS_1_C03D623E9F32FBCB_96_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BF0C10)
#define CLASS_1_C03D623E9F32FBCB_96_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17BF0930)
#define CLASS_1_C03D623E9F32FBCB_96_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17BF0940)
#define CLASS_1_C03D623E9F32FBCB_96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BF0820)
#define CLASS_1_C03D623E9F32FBCB_96_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BF0AF0)
#define CLASS_1_C03D623E9F32FBCB_96_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BF0B50)
#define CLASS_1_C03D623E9F32FBCB_96__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BF0840)
#define CLASS_1_C03D623E9F32FBCB_96__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF0830)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_96_TypeDefinitionIndex = 26797;

class Class_1_C03D623E9F32FBCB_96 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Class_1_4D5D53619B020DDD* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_96*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_96* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_96*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_CLONE_OFFSET))(this);
	}

	::Class_1_4D5D53619B020DDD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_96* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_96*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_96*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_96_MERGEFROM_1_OFFSET))(this, a1);
	}
};
