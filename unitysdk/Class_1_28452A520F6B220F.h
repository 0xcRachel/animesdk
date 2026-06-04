#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_69A5DDEA5F31A2DF_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_28452A520F6B220F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A886A40)
#define CLASS_1_28452A520F6B220F_CLONE_OFFSET UNITYSDK_OFFSET(0x1A8865D0)
#define CLASS_1_28452A520F6B220F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A886730)
#define CLASS_1_28452A520F6B220F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A886650)
#define CLASS_1_28452A520F6B220F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A886800)
#define CLASS_1_28452A520F6B220F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A886C30)
#define CLASS_1_28452A520F6B220F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A886B80)
#define CLASS_1_28452A520F6B220F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A886630)
#define CLASS_1_28452A520F6B220F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A886600)
#define CLASS_1_28452A520F6B220F_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A886620)
#define CLASS_1_28452A520F6B220F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A886470)
#define CLASS_1_28452A520F6B220F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A886640)
#define CLASS_1_28452A520F6B220F_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A886610)
#define CLASS_1_28452A520F6B220F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A8864A0)
#define CLASS_1_28452A520F6B220F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A886910)
#define CLASS_1_28452A520F6B220F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A886970)
#define CLASS_1_28452A520F6B220F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A886D50)
#define CLASS_1_28452A520F6B220F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A886500)
#define CLASS_1_28452A520F6B220F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8864B0)

inline static constexpr unsigned int Class_1_28452A520F6B220F_TypeDefinitionIndex = 25743;

class Class_1_28452A520F6B220F : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28452A520F6B220F_TypeDefinitionIndex)->GetStaticField(0x46700);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_28452A520F6B220F*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_28452A520F6B220F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28452A520F6B220F_TypeDefinitionIndex)->GetStaticField(0x46708);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Class_1_69A5DDEA5F31A2DF_1* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_28452A520F6B220F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28452A520F6B220F*))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_28452A520F6B220F*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_28452A520F6B220F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_28452A520F6B220F* Clone()
	{
		return ((::Class_1_28452A520F6B220F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_CLONE_OFFSET))(this);
	}

	::Class_1_69A5DDEA5F31A2DF_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_69A5DDEA5F31A2DF_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_69A5DDEA5F31A2DF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_1*))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_28452A520F6B220F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_28452A520F6B220F*))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_28452A520F6B220F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28452A520F6B220F*))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28452A520F6B220F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
