#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_36_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E06040)
#define CLASS_1_5FEFAED860528596_36_CLONE_OFFSET UNITYSDK_OFFSET(0x17E05AE0)
#define CLASS_1_5FEFAED860528596_36_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E05CC0)
#define CLASS_1_5FEFAED860528596_36_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E05BA0)
#define CLASS_1_5FEFAED860528596_36_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E05DA0)
#define CLASS_1_5FEFAED860528596_36_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E06310)
#define CLASS_1_5FEFAED860528596_36_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E06210)
#define CLASS_1_5FEFAED860528596_36_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E05B80)
#define CLASS_1_5FEFAED860528596_36_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E05B40)
#define CLASS_1_5FEFAED860528596_36_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E05B60)
#define CLASS_1_5FEFAED860528596_36_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17E05B30)
#define CLASS_1_5FEFAED860528596_36_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E05B90)
#define CLASS_1_5FEFAED860528596_36_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E05B50)
#define CLASS_1_5FEFAED860528596_36_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E05B70)
#define CLASS_1_5FEFAED860528596_36_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E059A0)
#define CLASS_1_5FEFAED860528596_36_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E05EB0)
#define CLASS_1_5FEFAED860528596_36_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E05F10)
#define CLASS_1_5FEFAED860528596_36__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E06490)
#define CLASS_1_5FEFAED860528596_36__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E05A00)
#define CLASS_1_5FEFAED860528596_36__CTOR_OFFSET UNITYSDK_OFFSET(0x17E059B0)

inline static constexpr unsigned int Class_1_5FEFAED860528596_36_TypeDefinitionIndex = 24612;

class Class_1_5FEFAED860528596_36 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_36_TypeDefinitionIndex)->GetStaticField(0x1E160);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_E7C4009BCC22497A_3* Field_1_7; // 0x20
	::System::UInt32 Field_1_5; // 0x28
	::System::UInt32 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_36*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_36* Clone()
	{
		return ((::Class_1_5FEFAED860528596_36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_E7C4009BCC22497A_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7C4009BCC22497A_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7C4009BCC22497A_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_3*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_36* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_36*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_36*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_36_MERGEFROM_1_OFFSET))(this, a1);
	}
};
