#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_513;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182EC2D0)
#define CLASS_1_C03D623E9F32FBCB_44_CLONE_OFFSET UNITYSDK_OFFSET(0x182EBFB0)
#define CLASS_1_C03D623E9F32FBCB_44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182EC110)
#define CLASS_1_C03D623E9F32FBCB_44_EQUALS_OFFSET UNITYSDK_OFFSET(0x182EC060)
#define CLASS_1_C03D623E9F32FBCB_44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182EC1B0)
#define CLASS_1_C03D623E9F32FBCB_44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182EC3C0)
#define CLASS_1_C03D623E9F32FBCB_44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182EC330)
#define CLASS_1_C03D623E9F32FBCB_44_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x182EC040)
#define CLASS_1_C03D623E9F32FBCB_44_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x182EC050)
#define CLASS_1_C03D623E9F32FBCB_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182EBF10)
#define CLASS_1_C03D623E9F32FBCB_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182EC210)
#define CLASS_1_C03D623E9F32FBCB_44_WRITETO_OFFSET UNITYSDK_OFFSET(0x182EC270)
#define CLASS_1_C03D623E9F32FBCB_44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182EBF30)
#define CLASS_1_C03D623E9F32FBCB_44__CTOR_OFFSET UNITYSDK_OFFSET(0x182EBF20)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_44_TypeDefinitionIndex = 25316;

class Class_1_C03D623E9F32FBCB_44 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_FA4F4A67B1C04320_513* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_44*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_44* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_CLONE_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_513* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FA4F4A67B1C04320_513*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FA4F4A67B1C04320_513* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_513*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_44*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_44*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_44_MERGEFROM_1_OFFSET))(this, a1);
	}
};
