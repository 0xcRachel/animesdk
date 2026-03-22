#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_34.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1753A1F0)
#define CLASS_1_4DC6841D62972C54_21_CLONE_OFFSET UNITYSDK_OFFSET(0x17539F70)
#define CLASS_1_4DC6841D62972C54_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1753A0A0)
#define CLASS_1_4DC6841D62972C54_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x1753A000)
#define CLASS_1_4DC6841D62972C54_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1753A0F0)
#define CLASS_1_4DC6841D62972C54_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1753A2F0)
#define CLASS_1_4DC6841D62972C54_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1753A2C0)
#define CLASS_1_4DC6841D62972C54_21_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17539FF0)
#define CLASS_1_4DC6841D62972C54_21_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17539FE0)
#define CLASS_1_4DC6841D62972C54_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17539F20)
#define CLASS_1_4DC6841D62972C54_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1753A120)
#define CLASS_1_4DC6841D62972C54_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x1753A180)
#define CLASS_1_4DC6841D62972C54_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17539F40)
#define CLASS_1_4DC6841D62972C54_21__CTOR_OFFSET UNITYSDK_OFFSET(0x17539F30)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_21_TypeDefinitionIndex = 26531;

class Class_1_4DC6841D62972C54_21 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_4608E37A1B3D374A_34 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_21*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_21* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_CLONE_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_34 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_34(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_34 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_34))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_21*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_21*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
