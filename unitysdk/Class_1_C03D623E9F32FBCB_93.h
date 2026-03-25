#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_52;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_93_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D99500)
#define CLASS_1_C03D623E9F32FBCB_93_CLONE_OFFSET UNITYSDK_OFFSET(0x17D991E0)
#define CLASS_1_C03D623E9F32FBCB_93_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D99350)
#define CLASS_1_C03D623E9F32FBCB_93_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D992A0)
#define CLASS_1_C03D623E9F32FBCB_93_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D993F0)
#define CLASS_1_C03D623E9F32FBCB_93_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D99680)
#define CLASS_1_C03D623E9F32FBCB_93_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D99560)
#define CLASS_1_C03D623E9F32FBCB_93_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D99280)
#define CLASS_1_C03D623E9F32FBCB_93_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D99290)
#define CLASS_1_C03D623E9F32FBCB_93_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D99130)
#define CLASS_1_C03D623E9F32FBCB_93_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D99440)
#define CLASS_1_C03D623E9F32FBCB_93_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D994A0)
#define CLASS_1_C03D623E9F32FBCB_93__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D99150)
#define CLASS_1_C03D623E9F32FBCB_93__CTOR_OFFSET UNITYSDK_OFFSET(0x17D99140)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_93_TypeDefinitionIndex = 26602;

class Class_1_C03D623E9F32FBCB_93 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_99BD961747420BEB_52* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_93*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_93* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_93*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_CLONE_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_52* Method_1_24748FC20F375725()
	{
		return ((::Class_1_99BD961747420BEB_52*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_99BD961747420BEB_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_52*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_93* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_93*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_93*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_93_MERGEFROM_1_OFFSET))(this, a1);
	}
};
