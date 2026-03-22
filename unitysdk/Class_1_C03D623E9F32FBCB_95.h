#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D495C41F8E3EB0F2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_95_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177EEDD0)
#define CLASS_1_C03D623E9F32FBCB_95_CLONE_OFFSET UNITYSDK_OFFSET(0x177EEAD0)
#define CLASS_1_C03D623E9F32FBCB_95_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177EEC20)
#define CLASS_1_C03D623E9F32FBCB_95_EQUALS_OFFSET UNITYSDK_OFFSET(0x177EEB70)
#define CLASS_1_C03D623E9F32FBCB_95_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177EECC0)
#define CLASS_1_C03D623E9F32FBCB_95_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177EEEA0)
#define CLASS_1_C03D623E9F32FBCB_95_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177EEE30)
#define CLASS_1_C03D623E9F32FBCB_95_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x177EEB50)
#define CLASS_1_C03D623E9F32FBCB_95_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x177EEB60)
#define CLASS_1_C03D623E9F32FBCB_95_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177EEA40)
#define CLASS_1_C03D623E9F32FBCB_95_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177EED10)
#define CLASS_1_C03D623E9F32FBCB_95_WRITETO_OFFSET UNITYSDK_OFFSET(0x177EED70)
#define CLASS_1_C03D623E9F32FBCB_95__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177EEA60)
#define CLASS_1_C03D623E9F32FBCB_95__CTOR_OFFSET UNITYSDK_OFFSET(0x177EEA50)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_95_TypeDefinitionIndex = 26122;

class Class_1_C03D623E9F32FBCB_95 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_D495C41F8E3EB0F2* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_95*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_95* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_CLONE_OFFSET))(this);
	}

	::Class_1_D495C41F8E3EB0F2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D495C41F8E3EB0F2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D495C41F8E3EB0F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D495C41F8E3EB0F2*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_95*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_95*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_MERGEFROM_1_OFFSET))(this, a1);
	}
};
