#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_33_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A30D60)
#define CLASS_1_FA4F4A67B1C04320_33_CLONE_OFFSET UNITYSDK_OFFSET(0x17A30AF0)
#define CLASS_1_FA4F4A67B1C04320_33_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A30C20)
#define CLASS_1_FA4F4A67B1C04320_33_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A30B80)
#define CLASS_1_FA4F4A67B1C04320_33_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A30C70)
#define CLASS_1_FA4F4A67B1C04320_33_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A30E20)
#define CLASS_1_FA4F4A67B1C04320_33_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A30DF0)
#define CLASS_1_FA4F4A67B1C04320_33_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17A30B60)
#define CLASS_1_FA4F4A67B1C04320_33_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17A30B70)
#define CLASS_1_FA4F4A67B1C04320_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A30AA0)
#define CLASS_1_FA4F4A67B1C04320_33_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A30CA0)
#define CLASS_1_FA4F4A67B1C04320_33_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A30D00)
#define CLASS_1_FA4F4A67B1C04320_33__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A30AC0)
#define CLASS_1_FA4F4A67B1C04320_33__CTOR_OFFSET UNITYSDK_OFFSET(0x17A30AB0)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_33_TypeDefinitionIndex = 22567;

class Class_1_FA4F4A67B1C04320_33 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_33*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_33* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_33* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_33*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_33*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_33_MERGEFROM_1_OFFSET))(this, a1);
	}
};
