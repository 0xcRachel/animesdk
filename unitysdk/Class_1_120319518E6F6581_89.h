#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_120319518E6F6581_89_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174DC490)
#define CLASS_1_120319518E6F6581_89_CLONE_OFFSET UNITYSDK_OFFSET(0x174DC1D0)
#define CLASS_1_120319518E6F6581_89_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174DC2F0)
#define CLASS_1_120319518E6F6581_89_EQUALS_OFFSET UNITYSDK_OFFSET(0x174DC280)
#define CLASS_1_120319518E6F6581_89_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174DC360)
#define CLASS_1_120319518E6F6581_89_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174DC670)
#define CLASS_1_120319518E6F6581_89_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174DC620)
#define CLASS_1_120319518E6F6581_89_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x174DC240)
#define CLASS_1_120319518E6F6581_89_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x174DC260)
#define CLASS_1_120319518E6F6581_89_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174DC220)
#define CLASS_1_120319518E6F6581_89_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x174DC250)
#define CLASS_1_120319518E6F6581_89_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x174DC270)
#define CLASS_1_120319518E6F6581_89_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174DC230)
#define CLASS_1_120319518E6F6581_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174DC170)
#define CLASS_1_120319518E6F6581_89_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174DC390)
#define CLASS_1_120319518E6F6581_89_WRITETO_OFFSET UNITYSDK_OFFSET(0x174DC3F0)
#define CLASS_1_120319518E6F6581_89__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174DC190)
#define CLASS_1_120319518E6F6581_89__CTOR_OFFSET UNITYSDK_OFFSET(0x174DC180)

inline static constexpr unsigned int Class_1_120319518E6F6581_89_TypeDefinitionIndex = 25465;

class Class_1_120319518E6F6581_89 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_120319518E6F6581_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_89*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_89* Clone()
	{
		return ((::Class_1_120319518E6F6581_89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_120319518E6F6581_89* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_120319518E6F6581_89*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_120319518E6F6581_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_89*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_89_MERGEFROM_1_OFFSET))(this, a1);
	}
};
