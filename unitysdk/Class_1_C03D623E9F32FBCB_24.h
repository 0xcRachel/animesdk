#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_28;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17976330)
#define CLASS_1_C03D623E9F32FBCB_24_CLONE_OFFSET UNITYSDK_OFFSET(0x17975F90)
#define CLASS_1_C03D623E9F32FBCB_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17976170)
#define CLASS_1_C03D623E9F32FBCB_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x179760A0)
#define CLASS_1_C03D623E9F32FBCB_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17976210)
#define CLASS_1_C03D623E9F32FBCB_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17976450)
#define CLASS_1_C03D623E9F32FBCB_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17976390)
#define CLASS_1_C03D623E9F32FBCB_24_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17976080)
#define CLASS_1_C03D623E9F32FBCB_24_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17976090)
#define CLASS_1_C03D623E9F32FBCB_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17975ED0)
#define CLASS_1_C03D623E9F32FBCB_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17976270)
#define CLASS_1_C03D623E9F32FBCB_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x179762D0)
#define CLASS_1_C03D623E9F32FBCB_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17975EF0)
#define CLASS_1_C03D623E9F32FBCB_24__CTOR_OFFSET UNITYSDK_OFFSET(0x17975EE0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_24_TypeDefinitionIndex = 23658;

class Class_1_C03D623E9F32FBCB_24 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Class_1_120319518E6F6581_28* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_24*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_24* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_CLONE_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_28* Method_1_24748FC20F375725()
	{
		return ((::Class_1_120319518E6F6581_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_120319518E6F6581_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_28*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_24*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_24*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
