#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DE734113B1E313B_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FE6CCAE5BEF32AA5_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1778F930)
#define CLASS_1_FE6CCAE5BEF32AA5_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1778F320)
#define CLASS_1_FE6CCAE5BEF32AA5_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1778F480)
#define CLASS_1_FE6CCAE5BEF32AA5_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1778F420)
#define CLASS_1_FE6CCAE5BEF32AA5_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1778F590)
#define CLASS_1_FE6CCAE5BEF32AA5_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1778FBF0)
#define CLASS_1_FE6CCAE5BEF32AA5_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1778FB50)
#define CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1778F370)
#define CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1778F3C0)
#define CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1778F3B0)
#define CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1778F390)
#define CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1778F410)
#define CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1778F380)
#define CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1778F3A0)
#define CLASS_1_FE6CCAE5BEF32AA5_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1778F1F0)
#define CLASS_1_FE6CCAE5BEF32AA5_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1778F790)
#define CLASS_1_FE6CCAE5BEF32AA5_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1778F7F0)
#define CLASS_1_FE6CCAE5BEF32AA5_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1778FD50)
#define CLASS_1_FE6CCAE5BEF32AA5_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1778F260)
#define CLASS_1_FE6CCAE5BEF32AA5_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1778F200)

inline static constexpr unsigned int Class_1_FE6CCAE5BEF32AA5_6_TypeDefinitionIndex = 26389;

class Class_1_FE6CCAE5BEF32AA5_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE6CCAE5BEF32AA5_6_TypeDefinitionIndex)->GetStaticField(0x395A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	::Class_1_3DE734113B1E313B_1* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FE6CCAE5BEF32AA5_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE6CCAE5BEF32AA5_6*))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FE6CCAE5BEF32AA5_6* Clone()
	{
		return ((::Class_1_FE6CCAE5BEF32AA5_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_3DE734113B1E313B_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3DE734113B1E313B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3DE734113B1E313B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_1*))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FE6CCAE5BEF32AA5_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FE6CCAE5BEF32AA5_6*))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FE6CCAE5BEF32AA5_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE6CCAE5BEF32AA5_6*))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FE6CCAE5BEF32AA5_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
