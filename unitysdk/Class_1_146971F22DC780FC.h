#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_18;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_146971F22DC780FC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17897910)
#define CLASS_1_146971F22DC780FC_CLONE_OFFSET UNITYSDK_OFFSET(0x17897380)
#define CLASS_1_146971F22DC780FC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17897460)
#define CLASS_1_146971F22DC780FC_EQUALS_OFFSET UNITYSDK_OFFSET(0x17897430)
#define CLASS_1_146971F22DC780FC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17897560)
#define CLASS_1_146971F22DC780FC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17897C20)
#define CLASS_1_146971F22DC780FC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17897B40)
#define CLASS_1_146971F22DC780FC_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x178973F0)
#define CLASS_1_146971F22DC780FC_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17897410)
#define CLASS_1_146971F22DC780FC_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x178973B0)
#define CLASS_1_146971F22DC780FC_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x178973D0)
#define CLASS_1_146971F22DC780FC_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x178973E0)
#define CLASS_1_146971F22DC780FC_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17897400)
#define CLASS_1_146971F22DC780FC_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17897420)
#define CLASS_1_146971F22DC780FC_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x178973C0)
#define CLASS_1_146971F22DC780FC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17897200)
#define CLASS_1_146971F22DC780FC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17897730)
#define CLASS_1_146971F22DC780FC_WRITETO_OFFSET UNITYSDK_OFFSET(0x17897790)
#define CLASS_1_146971F22DC780FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x17897D70)
#define CLASS_1_146971F22DC780FC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17897280)
#define CLASS_1_146971F22DC780FC__CTOR_OFFSET UNITYSDK_OFFSET(0x17897210)

inline static constexpr unsigned int Class_1_146971F22DC780FC_TypeDefinitionIndex = 23805;

class Class_1_146971F22DC780FC : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_18*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_146971F22DC780FC_TypeDefinitionIndex)->GetStaticField(0x30490);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_146971F22DC780FC_TypeDefinitionIndex)->GetStaticField(0x30498);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_18*>* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::UInt32 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_146971F22DC780FC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_146971F22DC780FC*))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_146971F22DC780FC* Clone()
	{
		return ((::Class_1_146971F22DC780FC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_18*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_18*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_146971F22DC780FC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_146971F22DC780FC*))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_146971F22DC780FC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_146971F22DC780FC*))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_146971F22DC780FC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
