#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5E67EEC526D46438;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_43_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A58B40)
#define CLASS_1_C03D623E9F32FBCB_43_CLONE_OFFSET UNITYSDK_OFFSET(0x17A587B0)
#define CLASS_1_C03D623E9F32FBCB_43_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A58990)
#define CLASS_1_C03D623E9F32FBCB_43_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A588C0)
#define CLASS_1_C03D623E9F32FBCB_43_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A58A30)
#define CLASS_1_C03D623E9F32FBCB_43_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A58C70)
#define CLASS_1_C03D623E9F32FBCB_43_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A58BA0)
#define CLASS_1_C03D623E9F32FBCB_43_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17A588A0)
#define CLASS_1_C03D623E9F32FBCB_43_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17A588B0)
#define CLASS_1_C03D623E9F32FBCB_43_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A586F0)
#define CLASS_1_C03D623E9F32FBCB_43_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A58A80)
#define CLASS_1_C03D623E9F32FBCB_43_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A58AE0)
#define CLASS_1_C03D623E9F32FBCB_43__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A58710)
#define CLASS_1_C03D623E9F32FBCB_43__CTOR_OFFSET UNITYSDK_OFFSET(0x17A58700)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_43_TypeDefinitionIndex = 24636;

class Class_1_C03D623E9F32FBCB_43 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	::Class_1_5E67EEC526D46438* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_43*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_43* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_43*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_CLONE_OFFSET))(this);
	}

	::Class_1_5E67EEC526D46438* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5E67EEC526D46438*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5E67EEC526D46438* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E67EEC526D46438*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_43* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_43*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_43*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_43_MERGEFROM_1_OFFSET))(this, a1);
	}
};
