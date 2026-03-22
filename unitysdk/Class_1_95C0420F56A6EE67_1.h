#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_2.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A;
class Class_1_EBB10EC01CCC4716;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_95C0420F56A6EE67_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174E9980)
#define CLASS_1_95C0420F56A6EE67_1_CLONE_OFFSET UNITYSDK_OFFSET(0x174E9400)
#define CLASS_1_95C0420F56A6EE67_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174E9700)
#define CLASS_1_95C0420F56A6EE67_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x174E95D0)
#define CLASS_1_95C0420F56A6EE67_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174E97F0)
#define CLASS_1_95C0420F56A6EE67_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174E9CD0)
#define CLASS_1_95C0420F56A6EE67_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174E9B30)
#define CLASS_1_95C0420F56A6EE67_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174E9590)
#define CLASS_1_95C0420F56A6EE67_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x174E95B0)
#define CLASS_1_95C0420F56A6EE67_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x174E9570)
#define CLASS_1_95C0420F56A6EE67_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x174E9560)
#define CLASS_1_95C0420F56A6EE67_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174E95A0)
#define CLASS_1_95C0420F56A6EE67_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x174E95C0)
#define CLASS_1_95C0420F56A6EE67_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x174E9580)
#define CLASS_1_95C0420F56A6EE67_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x174E9550)
#define CLASS_1_95C0420F56A6EE67_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174E92D0)
#define CLASS_1_95C0420F56A6EE67_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174E9840)
#define CLASS_1_95C0420F56A6EE67_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x174E98A0)
#define CLASS_1_95C0420F56A6EE67_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174E92F0)
#define CLASS_1_95C0420F56A6EE67_1__CTOR_OFFSET UNITYSDK_OFFSET(0x174E92E0)

inline static constexpr unsigned int Class_1_95C0420F56A6EE67_1_TypeDefinitionIndex = 25412;

class Class_1_95C0420F56A6EE67_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_EBB10EC01CCC4716* Field_1_8; // 0x18
	::Class_1_E7C4009BCC22497A* Field_1_4; // 0x20
	::System::UInt32 Field_1_6; // 0x28
	::Enum_3_DB663931210BBC27_2 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_95C0420F56A6EE67_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95C0420F56A6EE67_1*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_95C0420F56A6EE67_1* Clone()
	{
		return ((::Class_1_95C0420F56A6EE67_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_2))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_E7C4009BCC22497A* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7C4009BCC22497A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7C4009BCC22497A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_EBB10EC01CCC4716*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_95C0420F56A6EE67_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95C0420F56A6EE67_1*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_95C0420F56A6EE67_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95C0420F56A6EE67_1*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
