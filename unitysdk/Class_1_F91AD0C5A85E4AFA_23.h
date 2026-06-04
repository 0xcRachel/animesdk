#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AEC56D0)
#define CLASS_1_F91AD0C5A85E4AFA_23_CLONE_OFFSET UNITYSDK_OFFSET(0x1AEC50D0)
#define CLASS_1_F91AD0C5A85E4AFA_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AEC5320)
#define CLASS_1_F91AD0C5A85E4AFA_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AEC5260)
#define CLASS_1_F91AD0C5A85E4AFA_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AEC5400)
#define CLASS_1_F91AD0C5A85E4AFA_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AEC5AC0)
#define CLASS_1_F91AD0C5A85E4AFA_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AEC5A40)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1AEC51C0)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1AEC51E0)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AEC51A0)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1AEC5210)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1AEC5150)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1AEC5200)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1AEC5140)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AEC5010)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1AEC51D0)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1AEC51F0)
#define CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AEC51B0)
#define CLASS_1_F91AD0C5A85E4AFA_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AEC5040)
#define CLASS_1_F91AD0C5A85E4AFA_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AEC5550)
#define CLASS_1_F91AD0C5A85E4AFA_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AEC55B0)
#define CLASS_1_F91AD0C5A85E4AFA_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEC5BE0)
#define CLASS_1_F91AD0C5A85E4AFA_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AEC5070)
#define CLASS_1_F91AD0C5A85E4AFA_23__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEC5050)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_23_TypeDefinitionIndex = 30133;

class Class_1_F91AD0C5A85E4AFA_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_23*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_23_TypeDefinitionIndex)->GetStaticField(0x3E0B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	::System::String* Field_1_6; // 0x10
	::System::String* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_10; // 0x2C
	::System::UInt32 Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F91AD0C5A85E4AFA_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_23*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_23*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA_23* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F91AD0C5A85E4AFA_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_23*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F91AD0C5A85E4AFA_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_23*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
