#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_533FCD3487168CEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1737A810)
#define CLASS_1_533FCD3487168CEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1737A1E0)
#define CLASS_1_533FCD3487168CEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1737A440)
#define CLASS_1_533FCD3487168CEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1737A370)
#define CLASS_1_533FCD3487168CEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1737A530)
#define CLASS_1_533FCD3487168CEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1737AC50)
#define CLASS_1_533FCD3487168CEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1737ABD0)
#define CLASS_1_533FCD3487168CEF_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1737A2F0)
#define CLASS_1_533FCD3487168CEF_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1737A2D0)
#define CLASS_1_533FCD3487168CEF_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1737A320)
#define CLASS_1_533FCD3487168CEF_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1737A260)
#define CLASS_1_533FCD3487168CEF_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1737A310)
#define CLASS_1_533FCD3487168CEF_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1737A250)
#define CLASS_1_533FCD3487168CEF_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1737A2C0)
#define CLASS_1_533FCD3487168CEF_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1737A300)
#define CLASS_1_533FCD3487168CEF_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1737A2E0)
#define CLASS_1_533FCD3487168CEF_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1737A2B0)
#define CLASS_1_533FCD3487168CEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1737A150)
#define CLASS_1_533FCD3487168CEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1737A690)
#define CLASS_1_533FCD3487168CEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1737A6F0)
#define CLASS_1_533FCD3487168CEF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1737A180)
#define CLASS_1_533FCD3487168CEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1737A160)

inline static constexpr unsigned int Class_1_533FCD3487168CEF_TypeDefinitionIndex = 24984;

class Class_1_533FCD3487168CEF : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x7; // 0x0
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_10; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt64 Field_1_4; // 0x28
	::System::UInt32 Field_1_6; // 0x30
	::System::UInt32 Field_1_8; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_533FCD3487168CEF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_533FCD3487168CEF*))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_533FCD3487168CEF* Clone()
	{
		return ((::Class_1_533FCD3487168CEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_533FCD3487168CEF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_533FCD3487168CEF*))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_533FCD3487168CEF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_533FCD3487168CEF*))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_533FCD3487168CEF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
