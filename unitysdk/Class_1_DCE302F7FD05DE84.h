#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_DCE302F7FD05DE84_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179565F0)
#define CLASS_1_DCE302F7FD05DE84_CLONE_OFFSET UNITYSDK_OFFSET(0x17956070)
#define CLASS_1_DCE302F7FD05DE84_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17956310)
#define CLASS_1_DCE302F7FD05DE84_EQUALS_OFFSET UNITYSDK_OFFSET(0x17956200)
#define CLASS_1_DCE302F7FD05DE84_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179563F0)
#define CLASS_1_DCE302F7FD05DE84_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179569F0)
#define CLASS_1_DCE302F7FD05DE84_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17956920)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17956140)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17956160)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17956180)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x179561A0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x179561E0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17956120)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x179561D0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x179561C0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17956150)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17956170)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17956190)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x179561B0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x179561F0)
#define CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17956130)
#define CLASS_1_DCE302F7FD05DE84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17955FD0)
#define CLASS_1_DCE302F7FD05DE84_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17956440)
#define CLASS_1_DCE302F7FD05DE84_WRITETO_OFFSET UNITYSDK_OFFSET(0x179564A0)
#define CLASS_1_DCE302F7FD05DE84__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17955FF0)
#define CLASS_1_DCE302F7FD05DE84__CTOR_OFFSET UNITYSDK_OFFSET(0x17955FE0)

inline static constexpr unsigned int Class_1_DCE302F7FD05DE84_TypeDefinitionIndex = 22812;

class Class_1_DCE302F7FD05DE84 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xC; // 0x0
	::Proto::ItemList* Field_1_12; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_8; // 0x2C
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DCE302F7FD05DE84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DCE302F7FD05DE84* Clone()
	{
		return ((::Class_1_DCE302F7FD05DE84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DCE302F7FD05DE84* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DCE302F7FD05DE84*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DCE302F7FD05DE84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DCE302F7FD05DE84_MERGEFROM_1_OFFSET))(this, a1);
	}
};
