#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_7.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_7.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17778510)
#define CLASS_1_4DC6841D62972C54_7_CLONE_OFFSET UNITYSDK_OFFSET(0x17778270)
#define CLASS_1_4DC6841D62972C54_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17778370)
#define CLASS_1_4DC6841D62972C54_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17778300)
#define CLASS_1_4DC6841D62972C54_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177783D0)
#define CLASS_1_4DC6841D62972C54_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177786E0)
#define CLASS_1_4DC6841D62972C54_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177786A0)
#define CLASS_1_4DC6841D62972C54_7_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x177782F0)
#define CLASS_1_4DC6841D62972C54_7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x177782D0)
#define CLASS_1_4DC6841D62972C54_7_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x177782E0)
#define CLASS_1_4DC6841D62972C54_7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x177782C0)
#define CLASS_1_4DC6841D62972C54_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17778220)
#define CLASS_1_4DC6841D62972C54_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17778400)
#define CLASS_1_4DC6841D62972C54_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17778460)
#define CLASS_1_4DC6841D62972C54_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17778240)
#define CLASS_1_4DC6841D62972C54_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17778230)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_7_TypeDefinitionIndex = 23194;

class Class_1_4DC6841D62972C54_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_ED790DAC948A65A9_7 Field_1_2; // 0x18
	::Enum_3_96F6662CA3713095_7 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_7*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_7* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_CLONE_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_7 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_7))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_7 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_96F6662CA3713095_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_96F6662CA3713095_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_7))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_7*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_7*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
