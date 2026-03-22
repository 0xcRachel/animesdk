#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_683_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17897030)
#define CLASS_1_FA4F4A67B1C04320_683_CLONE_OFFSET UNITYSDK_OFFSET(0x17896D70)
#define CLASS_1_FA4F4A67B1C04320_683_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17896EC0)
#define CLASS_1_FA4F4A67B1C04320_683_EQUALS_OFFSET UNITYSDK_OFFSET(0x17896E20)
#define CLASS_1_FA4F4A67B1C04320_683_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17896F20)
#define CLASS_1_FA4F4A67B1C04320_683_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17897180)
#define CLASS_1_FA4F4A67B1C04320_683_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17897140)
#define CLASS_1_FA4F4A67B1C04320_683_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17896E00)
#define CLASS_1_FA4F4A67B1C04320_683_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17896DE0)
#define CLASS_1_FA4F4A67B1C04320_683_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17896E10)
#define CLASS_1_FA4F4A67B1C04320_683_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17896DF0)
#define CLASS_1_FA4F4A67B1C04320_683_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17896D20)
#define CLASS_1_FA4F4A67B1C04320_683_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17896F50)
#define CLASS_1_FA4F4A67B1C04320_683_WRITETO_OFFSET UNITYSDK_OFFSET(0x17896FB0)
#define CLASS_1_FA4F4A67B1C04320_683__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17896D40)
#define CLASS_1_FA4F4A67B1C04320_683__CTOR_OFFSET UNITYSDK_OFFSET(0x17896D30)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_683_TypeDefinitionIndex = 25530;

class Class_1_FA4F4A67B1C04320_683 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_683* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_683*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_683* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_683*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_683* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_683*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_683* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_683*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_683_MERGEFROM_1_OFFSET))(this, a1);
	}
};
