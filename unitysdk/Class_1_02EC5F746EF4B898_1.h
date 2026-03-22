#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_14;
class Class_1_541CE7568126AB53;
class Class_1_A662F2CB6C6610D2_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_02EC5F746EF4B898_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175F7BB0)
#define CLASS_1_02EC5F746EF4B898_1_CLONE_OFFSET UNITYSDK_OFFSET(0x175F76B0)
#define CLASS_1_02EC5F746EF4B898_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175F78A0)
#define CLASS_1_02EC5F746EF4B898_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x175F7760)
#define CLASS_1_02EC5F746EF4B898_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175F79D0)
#define CLASS_1_02EC5F746EF4B898_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175F7E40)
#define CLASS_1_02EC5F746EF4B898_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175F7CF0)
#define CLASS_1_02EC5F746EF4B898_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x175F7720)
#define CLASS_1_02EC5F746EF4B898_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x175F7700)
#define CLASS_1_02EC5F746EF4B898_1_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x175F7740)
#define CLASS_1_02EC5F746EF4B898_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x175F76E0)
#define CLASS_1_02EC5F746EF4B898_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x175F7730)
#define CLASS_1_02EC5F746EF4B898_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x175F7710)
#define CLASS_1_02EC5F746EF4B898_1_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x175F7750)
#define CLASS_1_02EC5F746EF4B898_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x175F76F0)
#define CLASS_1_02EC5F746EF4B898_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175F75B0)
#define CLASS_1_02EC5F746EF4B898_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175F7A80)
#define CLASS_1_02EC5F746EF4B898_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x175F7AE0)
#define CLASS_1_02EC5F746EF4B898_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175F75D0)
#define CLASS_1_02EC5F746EF4B898_1__CTOR_OFFSET UNITYSDK_OFFSET(0x175F75C0)

inline static constexpr unsigned int Class_1_02EC5F746EF4B898_1_TypeDefinitionIndex = 23176;

class Class_1_02EC5F746EF4B898_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	::Class_1_541CE7568126AB53* Field_1_4; // 0x10
	::Class_1_A662F2CB6C6610D2_1* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Class_1_3C58D309C7A040F5_14* Field_1_2; // 0x28
	::System::UInt32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_02EC5F746EF4B898_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02EC5F746EF4B898_1*))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_02EC5F746EF4B898_1* Clone()
	{
		return ((::Class_1_02EC5F746EF4B898_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_CLONE_OFFSET))(this);
	}

	::Class_1_3C58D309C7A040F5_14* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3C58D309C7A040F5_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3C58D309C7A040F5_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_14*))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_541CE7568126AB53* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_541CE7568126AB53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_541CE7568126AB53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_541CE7568126AB53*))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_A662F2CB6C6610D2_1* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_A662F2CB6C6610D2_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_A662F2CB6C6610D2_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A662F2CB6C6610D2_1*))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_02EC5F746EF4B898_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02EC5F746EF4B898_1*))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_02EC5F746EF4B898_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02EC5F746EF4B898_1*))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_02EC5F746EF4B898_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
