#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_28;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1660DAA49693852E_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18119FF0)
#define CLASS_1_1660DAA49693852E_1_CLONE_OFFSET UNITYSDK_OFFSET(0x18119B10)
#define CLASS_1_1660DAA49693852E_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18119DB0)
#define CLASS_1_1660DAA49693852E_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x18119CA0)
#define CLASS_1_1660DAA49693852E_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18119E90)
#define CLASS_1_1660DAA49693852E_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1811A1A0)
#define CLASS_1_1660DAA49693852E_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1811A080)
#define CLASS_1_1660DAA49693852E_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x18119C80)
#define CLASS_1_1660DAA49693852E_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18119C60)
#define CLASS_1_1660DAA49693852E_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x18119C90)
#define CLASS_1_1660DAA49693852E_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18119C70)
#define CLASS_1_1660DAA49693852E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181199F0)
#define CLASS_1_1660DAA49693852E_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18119F10)
#define CLASS_1_1660DAA49693852E_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x18119F70)
#define CLASS_1_1660DAA49693852E_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18119A10)
#define CLASS_1_1660DAA49693852E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18119A00)

inline static constexpr unsigned int Class_1_1660DAA49693852E_1_TypeDefinitionIndex = 24296;

class Class_1_1660DAA49693852E_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_4CF8088A158DCE25_28* Field_1_4; // 0x18
	::Class_1_4CF8088A158DCE25_28* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1660DAA49693852E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_1*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1660DAA49693852E_1* Clone()
	{
		return ((::Class_1_1660DAA49693852E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_CLONE_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_28* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4CF8088A158DCE25_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4CF8088A158DCE25_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_28*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_4CF8088A158DCE25_28* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4CF8088A158DCE25_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4CF8088A158DCE25_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_28*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1660DAA49693852E_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1660DAA49693852E_1*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1660DAA49693852E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_1*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
