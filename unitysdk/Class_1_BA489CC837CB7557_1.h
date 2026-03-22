#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_29.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BA489CC837CB7557_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179EA4E0)
#define CLASS_1_BA489CC837CB7557_1_CLONE_OFFSET UNITYSDK_OFFSET(0x179E9F60)
#define CLASS_1_BA489CC837CB7557_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179EA200)
#define CLASS_1_BA489CC837CB7557_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x179EA100)
#define CLASS_1_BA489CC837CB7557_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179EA2E0)
#define CLASS_1_BA489CC837CB7557_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179EA8D0)
#define CLASS_1_BA489CC837CB7557_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179EA7D0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x179EA080)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x179EA0A0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x179EA0E0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x179EA060)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x179EA0C0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x179EA050)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x179EA090)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x179EA0B0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x179EA0F0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x179EA070)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x179EA0D0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x179EA040)
#define CLASS_1_BA489CC837CB7557_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179E9EA0)
#define CLASS_1_BA489CC837CB7557_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179EA350)
#define CLASS_1_BA489CC837CB7557_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x179EA3B0)
#define CLASS_1_BA489CC837CB7557_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179E9EC0)
#define CLASS_1_BA489CC837CB7557_1__CTOR_OFFSET UNITYSDK_OFFSET(0x179E9EB0)

inline static constexpr unsigned int Class_1_BA489CC837CB7557_1_TypeDefinitionIndex = 23765;

class Class_1_BA489CC837CB7557_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	::Class_1_32044B0173B87B04_3* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_DB663931210BBC27_29 Field_1_2; // 0x20
	::System::UInt32 Field_1_6; // 0x24
	::System::UInt32 Field_1_8; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BA489CC837CB7557_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BA489CC837CB7557_1*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BA489CC837CB7557_1* Clone()
	{
		return ((::Class_1_BA489CC837CB7557_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_29 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_29(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_29 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_29))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Class_1_32044B0173B87B04_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_32044B0173B87B04_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_32044B0173B87B04_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_3*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BA489CC837CB7557_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BA489CC837CB7557_1*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BA489CC837CB7557_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BA489CC837CB7557_1*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
