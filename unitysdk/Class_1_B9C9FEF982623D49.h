#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_21DCD4640D389503_16;
class Class_1_3AD2528CD53B1639_2;
class Class_1_910AC58BB2D45F21;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B9C9FEF982623D49_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17636F10)
#define CLASS_1_B9C9FEF982623D49_CLONE_OFFSET UNITYSDK_OFFSET(0x17636940)
#define CLASS_1_B9C9FEF982623D49_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17636A30)
#define CLASS_1_B9C9FEF982623D49_EQUALS_OFFSET UNITYSDK_OFFSET(0x17636A00)
#define CLASS_1_B9C9FEF982623D49_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17636BC0)
#define CLASS_1_B9C9FEF982623D49_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17637280)
#define CLASS_1_B9C9FEF982623D49_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176370D0)
#define CLASS_1_B9C9FEF982623D49_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17636990)
#define CLASS_1_B9C9FEF982623D49_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x176369C0)
#define CLASS_1_B9C9FEF982623D49_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x176369E0)
#define CLASS_1_B9C9FEF982623D49_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17636970)
#define CLASS_1_B9C9FEF982623D49_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x176369B0)
#define CLASS_1_B9C9FEF982623D49_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x176369A0)
#define CLASS_1_B9C9FEF982623D49_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x176369D0)
#define CLASS_1_B9C9FEF982623D49_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x176369F0)
#define CLASS_1_B9C9FEF982623D49_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17636980)
#define CLASS_1_B9C9FEF982623D49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17636790)
#define CLASS_1_B9C9FEF982623D49_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17636D60)
#define CLASS_1_B9C9FEF982623D49_WRITETO_OFFSET UNITYSDK_OFFSET(0x17636DC0)
#define CLASS_1_B9C9FEF982623D49__CCTOR_OFFSET UNITYSDK_OFFSET(0x17637450)
#define CLASS_1_B9C9FEF982623D49__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176367E0)
#define CLASS_1_B9C9FEF982623D49__CTOR_OFFSET UNITYSDK_OFFSET(0x176367A0)

inline static constexpr unsigned int Class_1_B9C9FEF982623D49_TypeDefinitionIndex = 23026;

class Class_1_B9C9FEF982623D49 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9C9FEF982623D49_TypeDefinitionIndex)->GetStaticField(0x25170);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	::Class_1_14E02E1F6D70E487_1* Field_1_9; // 0x10
	::Class_1_910AC58BB2D45F21* Field_1_11; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* Field_1_7; // 0x20
	::Class_1_3AD2528CD53B1639_2* Field_1_2; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x30
	::System::UInt32 Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B9C9FEF982623D49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9C9FEF982623D49*))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B9C9FEF982623D49* Clone()
	{
		return ((::Class_1_B9C9FEF982623D49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_CLONE_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3AD2528CD53B1639_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3AD2528CD53B1639_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_910AC58BB2D45F21* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_910AC58BB2D45F21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_910AC58BB2D45F21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_910AC58BB2D45F21*))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B9C9FEF982623D49* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B9C9FEF982623D49*))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B9C9FEF982623D49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9C9FEF982623D49*))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B9C9FEF982623D49_MERGEFROM_1_OFFSET))(this, a1);
	}
};
