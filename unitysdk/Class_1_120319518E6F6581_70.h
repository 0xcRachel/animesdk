#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_120319518E6F6581_70_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1753EA40)
#define CLASS_1_120319518E6F6581_70_CLONE_OFFSET UNITYSDK_OFFSET(0x1753E780)
#define CLASS_1_120319518E6F6581_70_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1753E8A0)
#define CLASS_1_120319518E6F6581_70_EQUALS_OFFSET UNITYSDK_OFFSET(0x1753E830)
#define CLASS_1_120319518E6F6581_70_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1753E910)
#define CLASS_1_120319518E6F6581_70_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1753EC20)
#define CLASS_1_120319518E6F6581_70_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1753EBD0)
#define CLASS_1_120319518E6F6581_70_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1753E7F0)
#define CLASS_1_120319518E6F6581_70_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1753E810)
#define CLASS_1_120319518E6F6581_70_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1753E7D0)
#define CLASS_1_120319518E6F6581_70_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1753E800)
#define CLASS_1_120319518E6F6581_70_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1753E820)
#define CLASS_1_120319518E6F6581_70_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1753E7E0)
#define CLASS_1_120319518E6F6581_70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1753E720)
#define CLASS_1_120319518E6F6581_70_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1753E940)
#define CLASS_1_120319518E6F6581_70_WRITETO_OFFSET UNITYSDK_OFFSET(0x1753E9A0)
#define CLASS_1_120319518E6F6581_70__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1753E740)
#define CLASS_1_120319518E6F6581_70__CTOR_OFFSET UNITYSDK_OFFSET(0x1753E730)

inline static constexpr unsigned int Class_1_120319518E6F6581_70_TypeDefinitionIndex = 25056;

class Class_1_120319518E6F6581_70 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_120319518E6F6581_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_70*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_70* Clone()
	{
		return ((::Class_1_120319518E6F6581_70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_120319518E6F6581_70* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_120319518E6F6581_70*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_120319518E6F6581_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_70*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_70_MERGEFROM_1_OFFSET))(this, a1);
	}
};
