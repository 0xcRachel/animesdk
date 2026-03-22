#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_20;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6DF0D90298F36A2E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17955C20)
#define CLASS_1_6DF0D90298F36A2E_CLONE_OFFSET UNITYSDK_OFFSET(0x17955720)
#define CLASS_1_6DF0D90298F36A2E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179557C0)
#define CLASS_1_6DF0D90298F36A2E_EQUALS_OFFSET UNITYSDK_OFFSET(0x17955790)
#define CLASS_1_6DF0D90298F36A2E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179558B0)
#define CLASS_1_6DF0D90298F36A2E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17955E40)
#define CLASS_1_6DF0D90298F36A2E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17955D80)
#define CLASS_1_6DF0D90298F36A2E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17955770)
#define CLASS_1_6DF0D90298F36A2E_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17955760)
#define CLASS_1_6DF0D90298F36A2E_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17955750)
#define CLASS_1_6DF0D90298F36A2E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17955780)
#define CLASS_1_6DF0D90298F36A2E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179555B0)
#define CLASS_1_6DF0D90298F36A2E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17955A80)
#define CLASS_1_6DF0D90298F36A2E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17955AE0)
#define CLASS_1_6DF0D90298F36A2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17955F60)
#define CLASS_1_6DF0D90298F36A2E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17955630)
#define CLASS_1_6DF0D90298F36A2E__CTOR_OFFSET UNITYSDK_OFFSET(0x179555C0)

inline static constexpr unsigned int Class_1_6DF0D90298F36A2E_TypeDefinitionIndex = 23438;

class Class_1_6DF0D90298F36A2E : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DF0D90298F36A2E_TypeDefinitionIndex)->GetStaticField(0x3C450);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_20*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DF0D90298F36A2E_TypeDefinitionIndex)->GetStaticField(0x3C458);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_20*>* Field_1_3; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6DF0D90298F36A2E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DF0D90298F36A2E*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6DF0D90298F36A2E* Clone()
	{
		return ((::Class_1_6DF0D90298F36A2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_20*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_20*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6DF0D90298F36A2E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6DF0D90298F36A2E*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6DF0D90298F36A2E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DF0D90298F36A2E*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
