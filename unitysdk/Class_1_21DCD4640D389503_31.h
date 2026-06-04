#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_31_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ADAA810)
#define CLASS_1_21DCD4640D389503_31_CLONE_OFFSET UNITYSDK_OFFSET(0x1ADAA030)
#define CLASS_1_21DCD4640D389503_31_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ADAA2D0)
#define CLASS_1_21DCD4640D389503_31_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ADAA270)
#define CLASS_1_21DCD4640D389503_31_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ADAA450)
#define CLASS_1_21DCD4640D389503_31_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ADAAE20)
#define CLASS_1_21DCD4640D389503_31_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ADAAD70)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1ADAA0F0)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1ADAA170)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1ADAA190)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1ADAA1D0)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1ADAA1F0)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1ADAA210)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1ADAA230)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1ADAA250)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ADAA0D0)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1ADAA120)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1ADAA110)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1ADA9F40)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1ADAA1B0)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1ADAA100)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1ADAA180)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1ADAA1A0)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1ADAA1E0)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1ADAA200)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1ADAA220)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1ADAA240)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1ADAA260)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ADAA0E0)
#define CLASS_1_21DCD4640D389503_31_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1ADAA1C0)
#define CLASS_1_21DCD4640D389503_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ADA9FA0)
#define CLASS_1_21DCD4640D389503_31_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ADAA590)
#define CLASS_1_21DCD4640D389503_31_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ADAA5F0)
#define CLASS_1_21DCD4640D389503_31__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADAAFD0)
#define CLASS_1_21DCD4640D389503_31__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADA9FC0)
#define CLASS_1_21DCD4640D389503_31__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA9FB0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_31_TypeDefinitionIndex = 28895;

class Class_1_21DCD4640D389503_31 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_31*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_31*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_31_TypeDefinitionIndex)->GetStaticField(0x25810);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_12; // 0x10
	::System::String* Field_1_13; // 0x18
	::System::UInt32 Field_1_14; // 0x20
	::System::UInt32 Field_1_15; // 0x24
	::System::Single Field_1_16; // 0x28
	::System::UInt32 Field_1_17; // 0x2C
	::System::UInt32 Field_1_18; // 0x30
	::System::UInt32 Field_1_19; // 0x34
	::System::UInt32 Field_1_20; // 0x38
	::System::UInt32 Field_1_21; // 0x3C
	::System::UInt32 Field_1_22; // 0x40
	::System::UInt32 Field_1_23; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_31*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_31*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_31*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_31* Clone()
	{
		return ((::Class_1_21DCD4640D389503_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_31* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_31*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_31*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_31_MERGEFROM_1_OFFSET))(this, a1);
	}
};
