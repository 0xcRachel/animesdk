#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_19;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175E4250)
#define CLASS_1_C03D623E9F32FBCB_17_CLONE_OFFSET UNITYSDK_OFFSET(0x175E3F30)
#define CLASS_1_C03D623E9F32FBCB_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175E40F0)
#define CLASS_1_C03D623E9F32FBCB_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x175E4020)
#define CLASS_1_C03D623E9F32FBCB_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175DD160)
#define CLASS_1_C03D623E9F32FBCB_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175E42B0)
#define CLASS_1_C03D623E9F32FBCB_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175DE3F0)
#define CLASS_1_C03D623E9F32FBCB_17_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x175E4000)
#define CLASS_1_C03D623E9F32FBCB_17_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x175E4010)
#define CLASS_1_C03D623E9F32FBCB_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175E3E90)
#define CLASS_1_C03D623E9F32FBCB_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175E4190)
#define CLASS_1_C03D623E9F32FBCB_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x175E41F0)
#define CLASS_1_C03D623E9F32FBCB_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175E3EA0)
#define CLASS_1_C03D623E9F32FBCB_17__CTOR_OFFSET UNITYSDK_OFFSET(0x175DE3E0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_17_TypeDefinitionIndex = 23359;

class Class_1_C03D623E9F32FBCB_17 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Class_1_5FEFAED860528596_19* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_17*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_17* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_CLONE_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_19* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FEFAED860528596_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FEFAED860528596_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_19*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_17*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_17*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
