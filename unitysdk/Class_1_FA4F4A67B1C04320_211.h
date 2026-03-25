#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_211_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C52650)
#define CLASS_1_FA4F4A67B1C04320_211_CLONE_OFFSET UNITYSDK_OFFSET(0x17C52450)
#define CLASS_1_FA4F4A67B1C04320_211_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C52510)
#define CLASS_1_FA4F4A67B1C04320_211_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C524B0)
#define CLASS_1_FA4F4A67B1C04320_211_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C52560)
#define CLASS_1_FA4F4A67B1C04320_211_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C52710)
#define CLASS_1_FA4F4A67B1C04320_211_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C526E0)
#define CLASS_1_FA4F4A67B1C04320_211_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C52490)
#define CLASS_1_FA4F4A67B1C04320_211_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C524A0)
#define CLASS_1_FA4F4A67B1C04320_211_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C52400)
#define CLASS_1_FA4F4A67B1C04320_211_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C52590)
#define CLASS_1_FA4F4A67B1C04320_211_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C525F0)
#define CLASS_1_FA4F4A67B1C04320_211__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C52420)
#define CLASS_1_FA4F4A67B1C04320_211__CTOR_OFFSET UNITYSDK_OFFSET(0x17C52410)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_211_TypeDefinitionIndex = 23962;

class Class_1_FA4F4A67B1C04320_211 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_211* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_211*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_211* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_211*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_211* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_211*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_211* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_211*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_211_MERGEFROM_1_OFFSET))(this, a1);
	}
};
