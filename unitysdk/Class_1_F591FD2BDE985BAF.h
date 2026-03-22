#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F591FD2BDE985BAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1767CFC0)
#define CLASS_1_F591FD2BDE985BAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1767CC70)
#define CLASS_1_F591FD2BDE985BAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1767CE10)
#define CLASS_1_F591FD2BDE985BAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1767CD40)
#define CLASS_1_F591FD2BDE985BAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1767CEB0)
#define CLASS_1_F591FD2BDE985BAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1767D100)
#define CLASS_1_F591FD2BDE985BAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1767D020)
#define CLASS_1_F591FD2BDE985BAF_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1767CD20)
#define CLASS_1_F591FD2BDE985BAF_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1767CD30)
#define CLASS_1_F591FD2BDE985BAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1767CBE0)
#define CLASS_1_F591FD2BDE985BAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1767CF00)
#define CLASS_1_F591FD2BDE985BAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1767CF60)
#define CLASS_1_F591FD2BDE985BAF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1767CC00)
#define CLASS_1_F591FD2BDE985BAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1767CBF0)

inline static constexpr unsigned int Class_1_F591FD2BDE985BAF_TypeDefinitionIndex = 22747;

class Class_1_F591FD2BDE985BAF : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Class_1_735612C94F558EAE_4* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F591FD2BDE985BAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F591FD2BDE985BAF*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F591FD2BDE985BAF* Clone()
	{
		return ((::Class_1_F591FD2BDE985BAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_CLONE_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_735612C94F558EAE_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_735612C94F558EAE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_4*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F591FD2BDE985BAF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F591FD2BDE985BAF*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F591FD2BDE985BAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F591FD2BDE985BAF*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
