#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE_4;
class Class_1_DD449B0795604250;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1660DAA49693852E_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AE3FA0)
#define CLASS_1_1660DAA49693852E_7_CLONE_OFFSET UNITYSDK_OFFSET(0x17AE3B10)
#define CLASS_1_1660DAA49693852E_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AE3D30)
#define CLASS_1_1660DAA49693852E_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AE3C40)
#define CLASS_1_1660DAA49693852E_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AE3E10)
#define CLASS_1_1660DAA49693852E_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AE4100)
#define CLASS_1_1660DAA49693852E_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AE4030)
#define CLASS_1_1660DAA49693852E_7_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17AE3C20)
#define CLASS_1_1660DAA49693852E_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17AE3C00)
#define CLASS_1_1660DAA49693852E_7_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17AE3C30)
#define CLASS_1_1660DAA49693852E_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17AE3C10)
#define CLASS_1_1660DAA49693852E_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AE3A10)
#define CLASS_1_1660DAA49693852E_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AE3EC0)
#define CLASS_1_1660DAA49693852E_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AE3F20)
#define CLASS_1_1660DAA49693852E_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AE3A30)
#define CLASS_1_1660DAA49693852E_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE3A20)

inline static constexpr unsigned int Class_1_1660DAA49693852E_7_TypeDefinitionIndex = 26794;

class Class_1_1660DAA49693852E_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Class_1_DD449B0795604250* Field_1_2; // 0x10
	::Class_1_3A7B270FE0BE90AE_4* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1660DAA49693852E_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_7*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1660DAA49693852E_7* Clone()
	{
		return ((::Class_1_1660DAA49693852E_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_CLONE_OFFSET))(this);
	}

	::Class_1_DD449B0795604250* Method_1_24748FC20F375725()
	{
		return ((::Class_1_DD449B0795604250*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_DD449B0795604250* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD449B0795604250*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_3A7B270FE0BE90AE_4* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_3A7B270FE0BE90AE_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_3A7B270FE0BE90AE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_4*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1660DAA49693852E_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1660DAA49693852E_7*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1660DAA49693852E_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_7*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
