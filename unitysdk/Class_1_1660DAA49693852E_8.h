#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_56;
class Class_1_40A00D6074B2BA8E;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1660DAA49693852E_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1739B950)
#define CLASS_1_1660DAA49693852E_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1739B490)
#define CLASS_1_1660DAA49693852E_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1739B710)
#define CLASS_1_1660DAA49693852E_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1739B600)
#define CLASS_1_1660DAA49693852E_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1739B7F0)
#define CLASS_1_1660DAA49693852E_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1739BB30)
#define CLASS_1_1660DAA49693852E_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1739B9E0)
#define CLASS_1_1660DAA49693852E_8_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1739B5E0)
#define CLASS_1_1660DAA49693852E_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1739B5C0)
#define CLASS_1_1660DAA49693852E_8_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1739B5F0)
#define CLASS_1_1660DAA49693852E_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1739B5D0)
#define CLASS_1_1660DAA49693852E_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1739B390)
#define CLASS_1_1660DAA49693852E_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1739B870)
#define CLASS_1_1660DAA49693852E_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1739B8D0)
#define CLASS_1_1660DAA49693852E_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1739B3B0)
#define CLASS_1_1660DAA49693852E_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1739B3A0)

inline static constexpr unsigned int Class_1_1660DAA49693852E_8_TypeDefinitionIndex = 26480;

class Class_1_1660DAA49693852E_8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Class_1_40A00D6074B2BA8E* Field_1_2; // 0x10
	::Class_1_352A8B3482C80E7D_56* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1660DAA49693852E_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_8*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1660DAA49693852E_8* Clone()
	{
		return ((::Class_1_1660DAA49693852E_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_CLONE_OFFSET))(this);
	}

	::Class_1_40A00D6074B2BA8E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_40A00D6074B2BA8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_40A00D6074B2BA8E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_40A00D6074B2BA8E*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_352A8B3482C80E7D_56* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_352A8B3482C80E7D_56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_352A8B3482C80E7D_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_56*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1660DAA49693852E_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1660DAA49693852E_8*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1660DAA49693852E_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_8*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
