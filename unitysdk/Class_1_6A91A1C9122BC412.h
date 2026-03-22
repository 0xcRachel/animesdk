#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6A91A1C9122BC412_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175D6E00)
#define CLASS_1_6A91A1C9122BC412_CLONE_OFFSET UNITYSDK_OFFSET(0x175D6740)
#define CLASS_1_6A91A1C9122BC412_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175D6860)
#define CLASS_1_6A91A1C9122BC412_EQUALS_OFFSET UNITYSDK_OFFSET(0x175D6800)
#define CLASS_1_6A91A1C9122BC412_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175D6950)
#define CLASS_1_6A91A1C9122BC412_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175D7020)
#define CLASS_1_6A91A1C9122BC412_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175D6F90)
#define CLASS_1_6A91A1C9122BC412_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x175D67D0)
#define CLASS_1_6A91A1C9122BC412_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x175D67C0)
#define CLASS_1_6A91A1C9122BC412_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x175D67F0)
#define CLASS_1_6A91A1C9122BC412_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x175D67B0)
#define CLASS_1_6A91A1C9122BC412_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x175D67E0)
#define CLASS_1_6A91A1C9122BC412_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x175D67A0)
#define CLASS_1_6A91A1C9122BC412_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x175D6790)
#define CLASS_1_6A91A1C9122BC412_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175D6500)
#define CLASS_1_6A91A1C9122BC412_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175D6C10)
#define CLASS_1_6A91A1C9122BC412_WRITETO_OFFSET UNITYSDK_OFFSET(0x175D6C70)
#define CLASS_1_6A91A1C9122BC412__CCTOR_OFFSET UNITYSDK_OFFSET(0x175D71E0)
#define CLASS_1_6A91A1C9122BC412__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175D65E0)
#define CLASS_1_6A91A1C9122BC412__CTOR_OFFSET UNITYSDK_OFFSET(0x175D6510)

inline static constexpr unsigned int Class_1_6A91A1C9122BC412_TypeDefinitionIndex = 24919;

class Class_1_6A91A1C9122BC412 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A91A1C9122BC412_TypeDefinitionIndex)->GetStaticField(0x192A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A91A1C9122BC412_TypeDefinitionIndex)->GetStaticField(0x192A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A91A1C9122BC412_TypeDefinitionIndex)->GetStaticField(0x192B0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x28
	::System::Boolean Field_1_2; // 0x30
	::System::UInt32 Field_1_10; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6A91A1C9122BC412* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A91A1C9122BC412*))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6A91A1C9122BC412* Clone()
	{
		return ((::Class_1_6A91A1C9122BC412*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6A91A1C9122BC412* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6A91A1C9122BC412*))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6A91A1C9122BC412* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A91A1C9122BC412*))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6A91A1C9122BC412_MERGEFROM_1_OFFSET))(this, a1);
	}
};
