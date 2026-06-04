#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_3;
class Class_1_D17272E82AE804C2_52;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_412B349691B63094_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B1B9CD0)
#define CLASS_1_412B349691B63094_CLONE_OFFSET UNITYSDK_OFFSET(0x1B1B97A0)
#define CLASS_1_412B349691B63094_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B1B9840)
#define CLASS_1_412B349691B63094_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B1B9810)
#define CLASS_1_412B349691B63094_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B1B9960)
#define CLASS_1_412B349691B63094_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B1B9F20)
#define CLASS_1_412B349691B63094_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B1B9E00)
#define CLASS_1_412B349691B63094_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1B1B97D0)
#define CLASS_1_412B349691B63094_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1B1B9800)
#define CLASS_1_412B349691B63094_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1B1B95B0)
#define CLASS_1_412B349691B63094_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1B1B97F0)
#define CLASS_1_412B349691B63094_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1B1B97E0)
#define CLASS_1_412B349691B63094_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B1B95E0)
#define CLASS_1_412B349691B63094_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B1B9B60)
#define CLASS_1_412B349691B63094_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B1B9BC0)
#define CLASS_1_412B349691B63094__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1BA060)
#define CLASS_1_412B349691B63094__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1B9660)
#define CLASS_1_412B349691B63094__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B95F0)

inline static constexpr unsigned int Class_1_412B349691B63094_TypeDefinitionIndex = 24497;

class Class_1_412B349691B63094 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412B349691B63094_TypeDefinitionIndex)->GetStaticField(0x56E90);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_412B349691B63094*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_412B349691B63094*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412B349691B63094_TypeDefinitionIndex)->GetStaticField(0x56E98);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_52*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_52*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412B349691B63094_TypeDefinitionIndex)->GetStaticField(0x56EA0);
	}
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_52*>* Field_1_8; // 0x20
	::Class_1_21C7581DFE99F091_3* Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_412B349691B63094* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_412B349691B63094*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_412B349691B63094*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_412B349691B63094*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_412B349691B63094* Clone()
	{
		return ((::Class_1_412B349691B63094*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_CLONE_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_3*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_52*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_52*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_412B349691B63094* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_412B349691B63094*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_412B349691B63094* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_412B349691B63094*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_MERGEFROM_1_OFFSET))(this, a1);
	}
};
