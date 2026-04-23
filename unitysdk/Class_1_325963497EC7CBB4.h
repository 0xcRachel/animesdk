#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_325963497EC7CBB4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A155820)
#define CLASS_1_325963497EC7CBB4_CLONE_OFFSET UNITYSDK_OFFSET(0x1A155150)
#define CLASS_1_325963497EC7CBB4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A155240)
#define CLASS_1_325963497EC7CBB4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A155210)
#define CLASS_1_325963497EC7CBB4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A155370)
#define CLASS_1_325963497EC7CBB4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A155B10)
#define CLASS_1_325963497EC7CBB4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A155A10)
#define CLASS_1_325963497EC7CBB4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A1551D0)
#define CLASS_1_325963497EC7CBB4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A155180)
#define CLASS_1_325963497EC7CBB4_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A1551C0)
#define CLASS_1_325963497EC7CBB4_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A1551A0)
#define CLASS_1_325963497EC7CBB4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A154EF0)
#define CLASS_1_325963497EC7CBB4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A1551B0)
#define CLASS_1_325963497EC7CBB4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A1551E0)
#define CLASS_1_325963497EC7CBB4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A155190)
#define CLASS_1_325963497EC7CBB4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A155200)
#define CLASS_1_325963497EC7CBB4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A1551F0)
#define CLASS_1_325963497EC7CBB4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A154F20)
#define CLASS_1_325963497EC7CBB4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A155620)
#define CLASS_1_325963497EC7CBB4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A155680)
#define CLASS_1_325963497EC7CBB4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A155CE0)
#define CLASS_1_325963497EC7CBB4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A154FE0)
#define CLASS_1_325963497EC7CBB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A154F30)

inline static constexpr unsigned int Class_1_325963497EC7CBB4_TypeDefinitionIndex = 25371;

class Class_1_325963497EC7CBB4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_325963497EC7CBB4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_325963497EC7CBB4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_325963497EC7CBB4_TypeDefinitionIndex)->GetStaticField(0x2D780);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4BC858D7C27E10ED_9*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4BC858D7C27E10ED_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_325963497EC7CBB4_TypeDefinitionIndex)->GetStaticField(0x2D788);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_325963497EC7CBB4_TypeDefinitionIndex)->GetStaticField(0x2D790);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_325963497EC7CBB4_TypeDefinitionIndex)->GetStaticField(0x2D798);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_12; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_9*>* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::System::UInt32 Field_1_3; // 0x30
	::System::Boolean Field_1_16; // 0x34
	::System::UInt32 Field_1_14; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_325963497EC7CBB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_325963497EC7CBB4*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_325963497EC7CBB4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_325963497EC7CBB4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_325963497EC7CBB4* Clone()
	{
		return ((::Class_1_325963497EC7CBB4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_9*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_325963497EC7CBB4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_325963497EC7CBB4*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_325963497EC7CBB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_325963497EC7CBB4*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
