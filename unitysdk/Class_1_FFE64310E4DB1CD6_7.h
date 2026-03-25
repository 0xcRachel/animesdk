#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6806B887413448C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FFE64310E4DB1CD6_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E4E250)
#define CLASS_1_FFE64310E4DB1CD6_7_CLONE_OFFSET UNITYSDK_OFFSET(0x17E4DF30)
#define CLASS_1_FFE64310E4DB1CD6_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E4E080)
#define CLASS_1_FFE64310E4DB1CD6_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E4DFD0)
#define CLASS_1_FFE64310E4DB1CD6_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E4E130)
#define CLASS_1_FFE64310E4DB1CD6_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E4E3B0)
#define CLASS_1_FFE64310E4DB1CD6_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4E320)
#define CLASS_1_FFE64310E4DB1CD6_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E4DF90)
#define CLASS_1_FFE64310E4DB1CD6_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E4DFB0)
#define CLASS_1_FFE64310E4DB1CD6_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E4DFA0)
#define CLASS_1_FFE64310E4DB1CD6_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E4DFC0)
#define CLASS_1_FFE64310E4DB1CD6_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4DEC0)
#define CLASS_1_FFE64310E4DB1CD6_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E4E170)
#define CLASS_1_FFE64310E4DB1CD6_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E4E1D0)
#define CLASS_1_FFE64310E4DB1CD6_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E4DEE0)
#define CLASS_1_FFE64310E4DB1CD6_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4DED0)

inline static constexpr unsigned int Class_1_FFE64310E4DB1CD6_7_TypeDefinitionIndex = 26476;

class Class_1_FFE64310E4DB1CD6_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Class_1_A6806B887413448C* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FFE64310E4DB1CD6_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6_7*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FFE64310E4DB1CD6_7* Clone()
	{
		return ((::Class_1_FFE64310E4DB1CD6_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_A6806B887413448C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A6806B887413448C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A6806B887413448C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6806B887413448C*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FFE64310E4DB1CD6_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6_7*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FFE64310E4DB1CD6_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6_7*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
