#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_868_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DCC850)
#define CLASS_1_FA4F4A67B1C04320_868_CLONE_OFFSET UNITYSDK_OFFSET(0x17DCC650)
#define CLASS_1_FA4F4A67B1C04320_868_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DCC710)
#define CLASS_1_FA4F4A67B1C04320_868_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DCC6B0)
#define CLASS_1_FA4F4A67B1C04320_868_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DCC760)
#define CLASS_1_FA4F4A67B1C04320_868_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DCC910)
#define CLASS_1_FA4F4A67B1C04320_868_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DCC8E0)
#define CLASS_1_FA4F4A67B1C04320_868_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DCC690)
#define CLASS_1_FA4F4A67B1C04320_868_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DCC6A0)
#define CLASS_1_FA4F4A67B1C04320_868_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DCC600)
#define CLASS_1_FA4F4A67B1C04320_868_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DCC790)
#define CLASS_1_FA4F4A67B1C04320_868_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DCC7F0)
#define CLASS_1_FA4F4A67B1C04320_868__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DCC620)
#define CLASS_1_FA4F4A67B1C04320_868__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCC610)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_868_TypeDefinitionIndex = 27111;

class Class_1_FA4F4A67B1C04320_868 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_868* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_868*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_868* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_868*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_868* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_868*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_868* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_868*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_868_MERGEFROM_1_OFFSET))(this, a1);
	}
};
