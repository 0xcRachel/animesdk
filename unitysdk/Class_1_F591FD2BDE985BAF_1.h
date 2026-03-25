#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F591FD2BDE985BAF_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F59AB0)
#define CLASS_1_F591FD2BDE985BAF_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17F597B0)
#define CLASS_1_F591FD2BDE985BAF_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F59900)
#define CLASS_1_F591FD2BDE985BAF_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F59850)
#define CLASS_1_F591FD2BDE985BAF_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F599A0)
#define CLASS_1_F591FD2BDE985BAF_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F59BF0)
#define CLASS_1_F591FD2BDE985BAF_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F59B10)
#define CLASS_1_F591FD2BDE985BAF_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F59830)
#define CLASS_1_F591FD2BDE985BAF_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17F59840)
#define CLASS_1_F591FD2BDE985BAF_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F59720)
#define CLASS_1_F591FD2BDE985BAF_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F599F0)
#define CLASS_1_F591FD2BDE985BAF_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F59A50)
#define CLASS_1_F591FD2BDE985BAF_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F59740)
#define CLASS_1_F591FD2BDE985BAF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F59730)

inline static constexpr unsigned int Class_1_F591FD2BDE985BAF_1_TypeDefinitionIndex = 23330;

class Class_1_F591FD2BDE985BAF_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_735612C94F558EAE_5* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F591FD2BDE985BAF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F591FD2BDE985BAF_1*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F591FD2BDE985BAF_1* Clone()
	{
		return ((::Class_1_F591FD2BDE985BAF_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_CLONE_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_735612C94F558EAE_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_735612C94F558EAE_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_5*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F591FD2BDE985BAF_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F591FD2BDE985BAF_1*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F591FD2BDE985BAF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F591FD2BDE985BAF_1*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
