#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_545_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x172F3D40)
#define CLASS_1_FA4F4A67B1C04320_545_CLONE_OFFSET UNITYSDK_OFFSET(0x172F3AD0)
#define CLASS_1_FA4F4A67B1C04320_545_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x172F3C00)
#define CLASS_1_FA4F4A67B1C04320_545_EQUALS_OFFSET UNITYSDK_OFFSET(0x172F3B60)
#define CLASS_1_FA4F4A67B1C04320_545_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x172F3C50)
#define CLASS_1_FA4F4A67B1C04320_545_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x172F3E00)
#define CLASS_1_FA4F4A67B1C04320_545_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x172F3DD0)
#define CLASS_1_FA4F4A67B1C04320_545_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x172F3B40)
#define CLASS_1_FA4F4A67B1C04320_545_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x172F3B50)
#define CLASS_1_FA4F4A67B1C04320_545_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x172F3A80)
#define CLASS_1_FA4F4A67B1C04320_545_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172F3C80)
#define CLASS_1_FA4F4A67B1C04320_545_WRITETO_OFFSET UNITYSDK_OFFSET(0x172F3CE0)
#define CLASS_1_FA4F4A67B1C04320_545__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172F3AA0)
#define CLASS_1_FA4F4A67B1C04320_545__CTOR_OFFSET UNITYSDK_OFFSET(0x172F3A90)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_545_TypeDefinitionIndex = 24891;

class Class_1_FA4F4A67B1C04320_545 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_545*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_545* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_545* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_545*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_545*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_545_MERGEFROM_1_OFFSET))(this, a1);
	}
};
