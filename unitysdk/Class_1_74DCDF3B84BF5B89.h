#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_19.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_74DCDF3B84BF5B89_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DAA080)
#define CLASS_1_74DCDF3B84BF5B89_CLONE_OFFSET UNITYSDK_OFFSET(0x17DA9D20)
#define CLASS_1_74DCDF3B84BF5B89_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DA9EC0)
#define CLASS_1_74DCDF3B84BF5B89_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DA9E00)
#define CLASS_1_74DCDF3B84BF5B89_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DA9F30)
#define CLASS_1_74DCDF3B84BF5B89_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DAA230)
#define CLASS_1_74DCDF3B84BF5B89_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DAA1E0)
#define CLASS_1_74DCDF3B84BF5B89_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DA9DE0)
#define CLASS_1_74DCDF3B84BF5B89_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17DA9DD0)
#define CLASS_1_74DCDF3B84BF5B89_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DA9DF0)
#define CLASS_1_74DCDF3B84BF5B89_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17DA9DC0)
#define CLASS_1_74DCDF3B84BF5B89_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17DA9DB0)
#define CLASS_1_74DCDF3B84BF5B89_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17DA9DA0)
#define CLASS_1_74DCDF3B84BF5B89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DA9CC0)
#define CLASS_1_74DCDF3B84BF5B89_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DA9F60)
#define CLASS_1_74DCDF3B84BF5B89_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DA9FC0)
#define CLASS_1_74DCDF3B84BF5B89__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DA9CE0)
#define CLASS_1_74DCDF3B84BF5B89__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA9CD0)

inline static constexpr unsigned int Class_1_74DCDF3B84BF5B89_TypeDefinitionIndex = 25045;

class Class_1_74DCDF3B84BF5B89 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::Enum_3_96F6662CA3713095_19 Field_1_4; // 0x1C
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_74DCDF3B84BF5B89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_74DCDF3B84BF5B89*))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_74DCDF3B84BF5B89* Clone()
	{
		return ((::Class_1_74DCDF3B84BF5B89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_19 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_19(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_19 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_19))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_74DCDF3B84BF5B89* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_74DCDF3B84BF5B89*))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_74DCDF3B84BF5B89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_74DCDF3B84BF5B89*))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_74DCDF3B84BF5B89_MERGEFROM_1_OFFSET))(this, a1);
	}
};
