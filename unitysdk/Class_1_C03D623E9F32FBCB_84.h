#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7CA0EA4EB9C00A0E_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_84_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175745F0)
#define CLASS_1_C03D623E9F32FBCB_84_CLONE_OFFSET UNITYSDK_OFFSET(0x175742F0)
#define CLASS_1_C03D623E9F32FBCB_84_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17574440)
#define CLASS_1_C03D623E9F32FBCB_84_EQUALS_OFFSET UNITYSDK_OFFSET(0x17574390)
#define CLASS_1_C03D623E9F32FBCB_84_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175744E0)
#define CLASS_1_C03D623E9F32FBCB_84_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175746E0)
#define CLASS_1_C03D623E9F32FBCB_84_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17574650)
#define CLASS_1_C03D623E9F32FBCB_84_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17574370)
#define CLASS_1_C03D623E9F32FBCB_84_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17574380)
#define CLASS_1_C03D623E9F32FBCB_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17574260)
#define CLASS_1_C03D623E9F32FBCB_84_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17574530)
#define CLASS_1_C03D623E9F32FBCB_84_WRITETO_OFFSET UNITYSDK_OFFSET(0x17574590)
#define CLASS_1_C03D623E9F32FBCB_84__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17574280)
#define CLASS_1_C03D623E9F32FBCB_84__CTOR_OFFSET UNITYSDK_OFFSET(0x17574270)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_84_TypeDefinitionIndex = 25840;

class Class_1_C03D623E9F32FBCB_84 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_7CA0EA4EB9C00A0E_2* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_84*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_84* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_CLONE_OFFSET))(this);
	}

	::Class_1_7CA0EA4EB9C00A0E_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7CA0EA4EB9C00A0E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7CA0EA4EB9C00A0E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7CA0EA4EB9C00A0E_2*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_84* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_84*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_84*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_84_MERGEFROM_1_OFFSET))(this, a1);
	}
};
