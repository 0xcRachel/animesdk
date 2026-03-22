#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_3.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_6;
class Class_1_EBB10EC01CCC4716;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_443A92A86A85B606_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173FAF80)
#define CLASS_1_443A92A86A85B606_3_CLONE_OFFSET UNITYSDK_OFFSET(0x173FAAF0)
#define CLASS_1_443A92A86A85B606_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173FABC0)
#define CLASS_1_443A92A86A85B606_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x173FAB90)
#define CLASS_1_443A92A86A85B606_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173FACD0)
#define CLASS_1_443A92A86A85B606_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x173FB2D0)
#define CLASS_1_443A92A86A85B606_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173FB120)
#define CLASS_1_443A92A86A85B606_3_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x173FAB40)
#define CLASS_1_443A92A86A85B606_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x173FAB20)
#define CLASS_1_443A92A86A85B606_3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x173FAB80)
#define CLASS_1_443A92A86A85B606_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x173FAB60)
#define CLASS_1_443A92A86A85B606_3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x173FAB50)
#define CLASS_1_443A92A86A85B606_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x173FAB30)
#define CLASS_1_443A92A86A85B606_3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x173FAB70)
#define CLASS_1_443A92A86A85B606_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173FA910)
#define CLASS_1_443A92A86A85B606_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173FAE10)
#define CLASS_1_443A92A86A85B606_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x173FAE70)
#define CLASS_1_443A92A86A85B606_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x173FB470)
#define CLASS_1_443A92A86A85B606_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173FA970)
#define CLASS_1_443A92A86A85B606_3__CTOR_OFFSET UNITYSDK_OFFSET(0x173FA920)

inline static constexpr unsigned int Class_1_443A92A86A85B606_3_TypeDefinitionIndex = 25423;

class Class_1_443A92A86A85B606_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_443A92A86A85B606_3_TypeDefinitionIndex)->GetStaticField(0x2E8B0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Class_1_21DCD4640D389503_6* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Class_1_EBB10EC01CCC4716* Field_1_2; // 0x28
	::Enum_3_DB663931210BBC27_3 Field_1_9; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_443A92A86A85B606_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606_3*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_443A92A86A85B606_3* Clone()
	{
		return ((::Class_1_443A92A86A85B606_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_CLONE_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_6* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21DCD4640D389503_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21DCD4640D389503_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_6*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_3 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_3))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_443A92A86A85B606_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_443A92A86A85B606_3*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_443A92A86A85B606_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606_3*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
