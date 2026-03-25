#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_22;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D76100)
#define CLASS_1_C03D623E9F32FBCB_23_CLONE_OFFSET UNITYSDK_OFFSET(0x17D75D90)
#define CLASS_1_C03D623E9F32FBCB_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D75F50)
#define CLASS_1_C03D623E9F32FBCB_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D75E80)
#define CLASS_1_C03D623E9F32FBCB_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D75FF0)
#define CLASS_1_C03D623E9F32FBCB_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D76280)
#define CLASS_1_C03D623E9F32FBCB_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D76160)
#define CLASS_1_C03D623E9F32FBCB_23_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D75E60)
#define CLASS_1_C03D623E9F32FBCB_23_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D75E70)
#define CLASS_1_C03D623E9F32FBCB_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D75CE0)
#define CLASS_1_C03D623E9F32FBCB_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D76040)
#define CLASS_1_C03D623E9F32FBCB_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D760A0)
#define CLASS_1_C03D623E9F32FBCB_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D75D00)
#define CLASS_1_C03D623E9F32FBCB_23__CTOR_OFFSET UNITYSDK_OFFSET(0x17D75CF0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_23_TypeDefinitionIndex = 24044;

class Class_1_C03D623E9F32FBCB_23 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Class_1_5FEFAED860528596_22* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_23*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_23* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_CLONE_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_22* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FEFAED860528596_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FEFAED860528596_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_22*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_23*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_23*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
