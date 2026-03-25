#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3DE734113B1E313B_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18004CF0)
#define CLASS_1_3DE734113B1E313B_2_CLONE_OFFSET UNITYSDK_OFFSET(0x180048A0)
#define CLASS_1_3DE734113B1E313B_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18004AA0)
#define CLASS_1_3DE734113B1E313B_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x180049B0)
#define CLASS_1_3DE734113B1E313B_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18004B80)
#define CLASS_1_3DE734113B1E313B_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18004E90)
#define CLASS_1_3DE734113B1E313B_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18004D80)
#define CLASS_1_3DE734113B1E313B_2_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x18004990)
#define CLASS_1_3DE734113B1E313B_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18004970)
#define CLASS_1_3DE734113B1E313B_2_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x180049A0)
#define CLASS_1_3DE734113B1E313B_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18004980)
#define CLASS_1_3DE734113B1E313B_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180047C0)
#define CLASS_1_3DE734113B1E313B_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18004C10)
#define CLASS_1_3DE734113B1E313B_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x18004C70)
#define CLASS_1_3DE734113B1E313B_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180047E0)
#define CLASS_1_3DE734113B1E313B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x180047D0)

inline static constexpr unsigned int Class_1_3DE734113B1E313B_2_TypeDefinitionIndex = 24080;

class Class_1_3DE734113B1E313B_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Class_1_32044B0173B87B04_2* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_32044B0173B87B04_2* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3DE734113B1E313B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_2*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3DE734113B1E313B_2* Clone()
	{
		return ((::Class_1_3DE734113B1E313B_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_CLONE_OFFSET))(this);
	}

	::Class_1_32044B0173B87B04_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_32044B0173B87B04_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_32044B0173B87B04_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_2*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_32044B0173B87B04_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_32044B0173B87B04_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_32044B0173B87B04_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_2*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3DE734113B1E313B_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3DE734113B1E313B_2*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3DE734113B1E313B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_2*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
