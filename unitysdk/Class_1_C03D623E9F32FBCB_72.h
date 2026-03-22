#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB0633E85BD6CF8E_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_72_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177F2110)
#define CLASS_1_C03D623E9F32FBCB_72_CLONE_OFFSET UNITYSDK_OFFSET(0x177F1DF0)
#define CLASS_1_C03D623E9F32FBCB_72_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177F1F60)
#define CLASS_1_C03D623E9F32FBCB_72_EQUALS_OFFSET UNITYSDK_OFFSET(0x177F1EB0)
#define CLASS_1_C03D623E9F32FBCB_72_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177F2000)
#define CLASS_1_C03D623E9F32FBCB_72_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177F2200)
#define CLASS_1_C03D623E9F32FBCB_72_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177F2170)
#define CLASS_1_C03D623E9F32FBCB_72_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x177F1E90)
#define CLASS_1_C03D623E9F32FBCB_72_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x177F1EA0)
#define CLASS_1_C03D623E9F32FBCB_72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177F1D40)
#define CLASS_1_C03D623E9F32FBCB_72_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177F2050)
#define CLASS_1_C03D623E9F32FBCB_72_WRITETO_OFFSET UNITYSDK_OFFSET(0x177F20B0)
#define CLASS_1_C03D623E9F32FBCB_72__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177F1D60)
#define CLASS_1_C03D623E9F32FBCB_72__CTOR_OFFSET UNITYSDK_OFFSET(0x177F1D50)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_72_TypeDefinitionIndex = 25656;

class Class_1_C03D623E9F32FBCB_72 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_FB0633E85BD6CF8E_2* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_72*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_72* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_72*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_CLONE_OFFSET))(this);
	}

	::Class_1_FB0633E85BD6CF8E_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FB0633E85BD6CF8E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FB0633E85BD6CF8E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_2*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_72* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_72*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_72*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_72_MERGEFROM_1_OFFSET))(this, a1);
	}
};
