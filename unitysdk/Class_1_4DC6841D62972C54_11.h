#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_32.h"
#include "unitysdk/Enum_3_DB663931210BBC27_33.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x172F6820)
#define CLASS_1_4DC6841D62972C54_11_CLONE_OFFSET UNITYSDK_OFFSET(0x172F6530)
#define CLASS_1_4DC6841D62972C54_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x172F6680)
#define CLASS_1_4DC6841D62972C54_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x172F65E0)
#define CLASS_1_4DC6841D62972C54_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x172F66E0)
#define CLASS_1_4DC6841D62972C54_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x172F69F0)
#define CLASS_1_4DC6841D62972C54_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x172F69B0)
#define CLASS_1_4DC6841D62972C54_11_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x172F65D0)
#define CLASS_1_4DC6841D62972C54_11_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x172F65B0)
#define CLASS_1_4DC6841D62972C54_11_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x172F65C0)
#define CLASS_1_4DC6841D62972C54_11_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x172F65A0)
#define CLASS_1_4DC6841D62972C54_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x172F64E0)
#define CLASS_1_4DC6841D62972C54_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172F6710)
#define CLASS_1_4DC6841D62972C54_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x172F6770)
#define CLASS_1_4DC6841D62972C54_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172F6500)
#define CLASS_1_4DC6841D62972C54_11__CTOR_OFFSET UNITYSDK_OFFSET(0x172F64F0)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_11_TypeDefinitionIndex = 24054;

class Class_1_4DC6841D62972C54_11 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_DB663931210BBC27_32 Field_1_2; // 0x18
	::Enum_3_DB663931210BBC27_33 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_11*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_11* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_32 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_32))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_33 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_DB663931210BBC27_33(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_DB663931210BBC27_33 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_11*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_11*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
