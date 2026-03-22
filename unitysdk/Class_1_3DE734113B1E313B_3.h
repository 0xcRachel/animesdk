#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_123C88940E7A8432_1;
class Class_1_6E708EAB438EC183_37;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3DE734113B1E313B_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1747F930)
#define CLASS_1_3DE734113B1E313B_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1747F530)
#define CLASS_1_3DE734113B1E313B_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1747F710)
#define CLASS_1_3DE734113B1E313B_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1747F620)
#define CLASS_1_3DE734113B1E313B_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1747F7F0)
#define CLASS_1_3DE734113B1E313B_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1747FB60)
#define CLASS_1_3DE734113B1E313B_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1747F9C0)
#define CLASS_1_3DE734113B1E313B_3_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1747F600)
#define CLASS_1_3DE734113B1E313B_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1747F5E0)
#define CLASS_1_3DE734113B1E313B_3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1747F610)
#define CLASS_1_3DE734113B1E313B_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1747F5F0)
#define CLASS_1_3DE734113B1E313B_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1747F470)
#define CLASS_1_3DE734113B1E313B_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1747F850)
#define CLASS_1_3DE734113B1E313B_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1747F8B0)
#define CLASS_1_3DE734113B1E313B_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1747F490)
#define CLASS_1_3DE734113B1E313B_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1747F480)

inline static constexpr unsigned int Class_1_3DE734113B1E313B_3_TypeDefinitionIndex = 24273;

class Class_1_3DE734113B1E313B_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Class_1_6E708EAB438EC183_37* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_123C88940E7A8432_1* Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3DE734113B1E313B_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_3*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3DE734113B1E313B_3* Clone()
	{
		return ((::Class_1_3DE734113B1E313B_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_CLONE_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_37* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6E708EAB438EC183_37*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6E708EAB438EC183_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_37*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_123C88940E7A8432_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_123C88940E7A8432_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_123C88940E7A8432_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_123C88940E7A8432_1*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3DE734113B1E313B_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3DE734113B1E313B_3*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3DE734113B1E313B_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_3*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
