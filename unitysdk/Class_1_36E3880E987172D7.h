#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_36E3880E987172D7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7D9CF0)
#define CLASS_1_36E3880E987172D7_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7D97D0)
#define CLASS_1_36E3880E987172D7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7D98D0)
#define CLASS_1_36E3880E987172D7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7D98A0)
#define CLASS_1_36E3880E987172D7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7D99E0)
#define CLASS_1_36E3880E987172D7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7DA010)
#define CLASS_1_36E3880E987172D7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7D9F80)
#define CLASS_1_36E3880E987172D7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A7D9820)
#define CLASS_1_36E3880E987172D7_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A7D9840)
#define CLASS_1_36E3880E987172D7_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A7D9860)
#define CLASS_1_36E3880E987172D7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7D9800)
#define CLASS_1_36E3880E987172D7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A7D9880)
#define CLASS_1_36E3880E987172D7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A7D9620)
#define CLASS_1_36E3880E987172D7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A7D9830)
#define CLASS_1_36E3880E987172D7_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A7D9850)
#define CLASS_1_36E3880E987172D7_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A7D9870)
#define CLASS_1_36E3880E987172D7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7D9810)
#define CLASS_1_36E3880E987172D7_METHOD_1_AF0DEDC0F76C8BDF_OFFSET UNITYSDK_OFFSET(0x1A7D9890)
#define CLASS_1_36E3880E987172D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7D9650)
#define CLASS_1_36E3880E987172D7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7D9B40)
#define CLASS_1_36E3880E987172D7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7D9BA0)
#define CLASS_1_36E3880E987172D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7DA190)
#define CLASS_1_36E3880E987172D7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7D96D0)
#define CLASS_1_36E3880E987172D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D9660)

inline static constexpr unsigned int Class_1_36E3880E987172D7_TypeDefinitionIndex = 23994;

class Class_1_36E3880E987172D7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36E3880E987172D7_TypeDefinitionIndex)->GetStaticField(0xE070);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Single>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36E3880E987172D7_TypeDefinitionIndex)->GetStaticField(0xE078);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_36E3880E987172D7*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_36E3880E987172D7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36E3880E987172D7_TypeDefinitionIndex)->GetStaticField(0xE080);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>* Field_1_10; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x20
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_13; // 0x2C
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_15; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_36E3880E987172D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7*))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_36E3880E987172D7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_36E3880E987172D7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_36E3880E987172D7* Clone()
	{
		return ((::Class_1_36E3880E987172D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>* Method_1_AF0DEDC0F76C8BDF()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_METHOD_1_AF0DEDC0F76C8BDF_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_36E3880E987172D7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36E3880E987172D7*))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_36E3880E987172D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7*))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_36E3880E987172D7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
