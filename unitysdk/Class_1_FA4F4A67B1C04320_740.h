#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_740_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176DC1D0)
#define CLASS_1_FA4F4A67B1C04320_740_CLONE_OFFSET UNITYSDK_OFFSET(0x176DBFD0)
#define CLASS_1_FA4F4A67B1C04320_740_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176DC090)
#define CLASS_1_FA4F4A67B1C04320_740_EQUALS_OFFSET UNITYSDK_OFFSET(0x176DC030)
#define CLASS_1_FA4F4A67B1C04320_740_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176DC0E0)
#define CLASS_1_FA4F4A67B1C04320_740_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176DC290)
#define CLASS_1_FA4F4A67B1C04320_740_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176DC260)
#define CLASS_1_FA4F4A67B1C04320_740_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x176DC010)
#define CLASS_1_FA4F4A67B1C04320_740_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x176DC020)
#define CLASS_1_FA4F4A67B1C04320_740_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176DBF80)
#define CLASS_1_FA4F4A67B1C04320_740_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176DC110)
#define CLASS_1_FA4F4A67B1C04320_740_WRITETO_OFFSET UNITYSDK_OFFSET(0x176DC170)
#define CLASS_1_FA4F4A67B1C04320_740__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176DBFA0)
#define CLASS_1_FA4F4A67B1C04320_740__CTOR_OFFSET UNITYSDK_OFFSET(0x176DBF90)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_740_TypeDefinitionIndex = 25894;

class Class_1_FA4F4A67B1C04320_740 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_740* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_740*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_740* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_740*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_740* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_740*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_740* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_740*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_740_MERGEFROM_1_OFFSET))(this, a1);
	}
};
