#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"
#include "unitysdk/System/Object.h"

class Class_1_D2C0A39018B2EAE4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_443A92A86A85B606_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181E2A80)
#define CLASS_1_443A92A86A85B606_1_CLONE_OFFSET UNITYSDK_OFFSET(0x181E2580)
#define CLASS_1_443A92A86A85B606_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181E2620)
#define CLASS_1_443A92A86A85B606_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x181E25F0)
#define CLASS_1_443A92A86A85B606_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181E2710)
#define CLASS_1_443A92A86A85B606_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181E2CC0)
#define CLASS_1_443A92A86A85B606_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181E2C00)
#define CLASS_1_443A92A86A85B606_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x181E25C0)
#define CLASS_1_443A92A86A85B606_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x181E25D0)
#define CLASS_1_443A92A86A85B606_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x181E25E0)
#define CLASS_1_443A92A86A85B606_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x181E25B0)
#define CLASS_1_443A92A86A85B606_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181E23B0)
#define CLASS_1_443A92A86A85B606_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181E28D0)
#define CLASS_1_443A92A86A85B606_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x181E2930)
#define CLASS_1_443A92A86A85B606_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x181E2E00)
#define CLASS_1_443A92A86A85B606_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181E2450)
#define CLASS_1_443A92A86A85B606_1__CTOR_OFFSET UNITYSDK_OFFSET(0x181E23C0)

inline static constexpr unsigned int Class_1_443A92A86A85B606_1_TypeDefinitionIndex = 24826;

class Class_1_443A92A86A85B606_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_443A92A86A85B606_1_TypeDefinitionIndex)->GetStaticField(0xD540);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D2C0A39018B2EAE4*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D2C0A39018B2EAE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_443A92A86A85B606_1_TypeDefinitionIndex)->GetStaticField(0xD548);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D2C0A39018B2EAE4*>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x20
	::Enum_3_75A5C8C4100A8E33_1 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_443A92A86A85B606_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606_1*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_443A92A86A85B606_1* Clone()
	{
		return ((::Class_1_443A92A86A85B606_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_CLONE_OFFSET))(this);
	}

	::Enum_3_75A5C8C4100A8E33_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_75A5C8C4100A8E33_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D2C0A39018B2EAE4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D2C0A39018B2EAE4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_443A92A86A85B606_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_443A92A86A85B606_1*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_443A92A86A85B606_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606_1*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
