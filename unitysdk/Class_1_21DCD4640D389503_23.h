#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BB1E40)
#define CLASS_1_21DCD4640D389503_23_CLONE_OFFSET UNITYSDK_OFFSET(0x19BB1760)
#define CLASS_1_21DCD4640D389503_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BB1920)
#define CLASS_1_21DCD4640D389503_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BB18C0)
#define CLASS_1_21DCD4640D389503_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BB1A80)
#define CLASS_1_21DCD4640D389503_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BB2380)
#define CLASS_1_21DCD4640D389503_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BB21E0)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19BB17D0)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19BB1850)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19BB18A0)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19BB17B0)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x19BB1800)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19BB17F0)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x19BB1880)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19BB1570)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19BB1870)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x19BB1890)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19BB17E0)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19BB1860)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19BB18B0)
#define CLASS_1_21DCD4640D389503_23_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19BB17C0)
#define CLASS_1_21DCD4640D389503_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BB15D0)
#define CLASS_1_21DCD4640D389503_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BB1C20)
#define CLASS_1_21DCD4640D389503_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BB1C80)
#define CLASS_1_21DCD4640D389503_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BB25B0)
#define CLASS_1_21DCD4640D389503_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BB1640)
#define CLASS_1_21DCD4640D389503_23__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB15E0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_23_TypeDefinitionIndex = 27192;

class Class_1_21DCD4640D389503_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_23*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_23_TypeDefinitionIndex)->GetStaticField(0x1F310);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D40936EF3BF54118_8*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D40936EF3BF54118_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_23_TypeDefinitionIndex)->GetStaticField(0x1F318);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D40936EF3BF54118_8*>* Field_1_12; // 0x10
	::Proto::PlayerSimpleInfo* Field_1_14; // 0x18
	::System::String* Field_1_7; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::System::UInt32 Field_1_3; // 0x30
	::System::UInt32 Field_1_5; // 0x34
	::System::UInt32 Field_1_16; // 0x38
	::System::UInt32 Field_1_9; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_23*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_23*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_23* Clone()
	{
		return ((::Class_1_21DCD4640D389503_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D40936EF3BF54118_8*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D40936EF3BF54118_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_23*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_23*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
