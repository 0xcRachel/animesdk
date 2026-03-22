#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A1329B6B19F70B0_4;
class Class_1_C9DFE5EE7107C629_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1660DAA49693852E_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17ACC7E0)
#define CLASS_1_1660DAA49693852E_4_CLONE_OFFSET UNITYSDK_OFFSET(0x17ACC3A0)
#define CLASS_1_1660DAA49693852E_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17ACC5C0)
#define CLASS_1_1660DAA49693852E_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17ACC4D0)
#define CLASS_1_1660DAA49693852E_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17ACC6A0)
#define CLASS_1_1660DAA49693852E_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17ACC9B0)
#define CLASS_1_1660DAA49693852E_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17ACC870)
#define CLASS_1_1660DAA49693852E_4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17ACC4B0)
#define CLASS_1_1660DAA49693852E_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17ACC490)
#define CLASS_1_1660DAA49693852E_4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17ACC4C0)
#define CLASS_1_1660DAA49693852E_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17ACC4A0)
#define CLASS_1_1660DAA49693852E_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ACC2A0)
#define CLASS_1_1660DAA49693852E_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ACC700)
#define CLASS_1_1660DAA49693852E_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17ACC760)
#define CLASS_1_1660DAA49693852E_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ACC2C0)
#define CLASS_1_1660DAA49693852E_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17ACC2B0)

inline static constexpr unsigned int Class_1_1660DAA49693852E_4_TypeDefinitionIndex = 23879;

class Class_1_1660DAA49693852E_4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Class_1_C9DFE5EE7107C629_7* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_0A1329B6B19F70B0_4* Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1660DAA49693852E_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_4*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1660DAA49693852E_4* Clone()
	{
		return ((::Class_1_1660DAA49693852E_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_CLONE_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_0A1329B6B19F70B0_4* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_0A1329B6B19F70B0_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_0A1329B6B19F70B0_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A1329B6B19F70B0_4*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1660DAA49693852E_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1660DAA49693852E_4*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1660DAA49693852E_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_4*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
