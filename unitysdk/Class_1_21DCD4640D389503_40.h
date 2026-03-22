#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_40_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175FB6A0)
#define CLASS_1_21DCD4640D389503_40_CLONE_OFFSET UNITYSDK_OFFSET(0x175FB0A0)
#define CLASS_1_21DCD4640D389503_40_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175FB300)
#define CLASS_1_21DCD4640D389503_40_EQUALS_OFFSET UNITYSDK_OFFSET(0x175FB230)
#define CLASS_1_21DCD4640D389503_40_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175FB3D0)
#define CLASS_1_21DCD4640D389503_40_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175FBB70)
#define CLASS_1_21DCD4640D389503_40_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175FBAF0)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x175FB190)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x175FB1D0)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x175FB1F0)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x175FB170)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x175FB120)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x175FB110)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x175FB1A0)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x175FB1E0)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x175FB200)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x175FB180)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x175FB220)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x175FB1C0)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x175FB210)
#define CLASS_1_21DCD4640D389503_40_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x175FB1B0)
#define CLASS_1_21DCD4640D389503_40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175FB030)
#define CLASS_1_21DCD4640D389503_40_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175FB4A0)
#define CLASS_1_21DCD4640D389503_40_WRITETO_OFFSET UNITYSDK_OFFSET(0x175FB500)
#define CLASS_1_21DCD4640D389503_40__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175FB050)
#define CLASS_1_21DCD4640D389503_40__CTOR_OFFSET UNITYSDK_OFFSET(0x175FB040)

inline static constexpr unsigned int Class_1_21DCD4640D389503_40_TypeDefinitionIndex = 26397;

class Class_1_21DCD4640D389503_40 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_10; // 0x20
	::System::UInt32 Field_1_12; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::System::Int32 Field_1_8; // 0x30
	::System::Int32 Field_1_14; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_40*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_40* Clone()
	{
		return ((::Class_1_21DCD4640D389503_40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_40* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_40*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_40*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40_MERGEFROM_1_OFFSET))(this, a1);
	}
};
