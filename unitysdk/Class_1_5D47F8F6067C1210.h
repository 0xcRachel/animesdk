#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BF8FDF00F218876_12;
class Class_1_D17272E82AE804C2_237;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_5D47F8F6067C1210_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A17B700)
#define CLASS_1_5D47F8F6067C1210_CLONE_OFFSET UNITYSDK_OFFSET(0x1A17B140)
#define CLASS_1_5D47F8F6067C1210_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A17B220)
#define CLASS_1_5D47F8F6067C1210_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A17B1F0)
#define CLASS_1_5D47F8F6067C1210_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A17B360)
#define CLASS_1_5D47F8F6067C1210_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A17BAC0)
#define CLASS_1_5D47F8F6067C1210_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A17B920)
#define CLASS_1_5D47F8F6067C1210_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A17B1A0)
#define CLASS_1_5D47F8F6067C1210_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A17B170)
#define CLASS_1_5D47F8F6067C1210_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A17B1D0)
#define CLASS_1_5D47F8F6067C1210_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A17AF70)
#define CLASS_1_5D47F8F6067C1210_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A17B190)
#define CLASS_1_5D47F8F6067C1210_METHOD_1_6E8EADC4D1FD06E5_OFFSET UNITYSDK_OFFSET(0x1A17B1C0)
#define CLASS_1_5D47F8F6067C1210_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A17B1B0)
#define CLASS_1_5D47F8F6067C1210_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A17B180)
#define CLASS_1_5D47F8F6067C1210_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A17B1E0)
#define CLASS_1_5D47F8F6067C1210_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A17AFA0)
#define CLASS_1_5D47F8F6067C1210_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A17B540)
#define CLASS_1_5D47F8F6067C1210_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A17B5A0)
#define CLASS_1_5D47F8F6067C1210__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A17BC20)
#define CLASS_1_5D47F8F6067C1210__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A17B010)
#define CLASS_1_5D47F8F6067C1210__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17AFB0)

inline static constexpr unsigned int Class_1_5D47F8F6067C1210_TypeDefinitionIndex = 26202;

class Class_1_5D47F8F6067C1210 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5D47F8F6067C1210*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5D47F8F6067C1210*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D47F8F6067C1210_TypeDefinitionIndex)->GetStaticField(0x16C60);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D47F8F6067C1210_TypeDefinitionIndex)->GetStaticField(0x16C68);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7BF8FDF00F218876_12*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7BF8FDF00F218876_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D47F8F6067C1210_TypeDefinitionIndex)->GetStaticField(0x16C70);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Field_1_11; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BF8FDF00F218876_12*>* Field_1_6; // 0x20
	::Class_1_D17272E82AE804C2_237* Field_1_13; // 0x28
	::System::UInt32 Field_1_3; // 0x30
	::System::UInt32 Field_1_8; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5D47F8F6067C1210* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D47F8F6067C1210*))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5D47F8F6067C1210*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5D47F8F6067C1210*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5D47F8F6067C1210* Clone()
	{
		return ((::Class_1_5D47F8F6067C1210*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BF8FDF00F218876_12*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BF8FDF00F218876_12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Method_1_6E8EADC4D1FD06E5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_METHOD_1_6E8EADC4D1FD06E5_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_237* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_237*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_237* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_237*))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5D47F8F6067C1210* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5D47F8F6067C1210*))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5D47F8F6067C1210* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D47F8F6067C1210*))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5D47F8F6067C1210_MERGEFROM_1_OFFSET))(this, a1);
	}
};
