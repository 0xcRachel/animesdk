#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_65.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5CF1DDAFE12F0E87_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180B2450)
#define CLASS_1_5CF1DDAFE12F0E87_4_CLONE_OFFSET UNITYSDK_OFFSET(0x180B1ED0)
#define CLASS_1_5CF1DDAFE12F0E87_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180B1FB0)
#define CLASS_1_5CF1DDAFE12F0E87_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x180B1F50)
#define CLASS_1_5CF1DDAFE12F0E87_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180B20C0)
#define CLASS_1_5CF1DDAFE12F0E87_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180B2630)
#define CLASS_1_5CF1DDAFE12F0E87_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180B2560)
#define CLASS_1_5CF1DDAFE12F0E87_4_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x180B1F40)
#define CLASS_1_5CF1DDAFE12F0E87_4_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x180B1F30)
#define CLASS_1_5CF1DDAFE12F0E87_4_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x180B1F20)
#define CLASS_1_5CF1DDAFE12F0E87_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180B1D40)
#define CLASS_1_5CF1DDAFE12F0E87_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180B22E0)
#define CLASS_1_5CF1DDAFE12F0E87_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x180B2340)
#define CLASS_1_5CF1DDAFE12F0E87_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x180B27D0)
#define CLASS_1_5CF1DDAFE12F0E87_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180B1E20)
#define CLASS_1_5CF1DDAFE12F0E87_4__CTOR_OFFSET UNITYSDK_OFFSET(0x180B1D50)

inline static constexpr unsigned int Class_1_5CF1DDAFE12F0E87_4_TypeDefinitionIndex = 26709;

class Class_1_5CF1DDAFE12F0E87_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_65>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_65>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_4_TypeDefinitionIndex)->GetStaticField(0x25070);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_4_TypeDefinitionIndex)->GetStaticField(0x25078);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_4_TypeDefinitionIndex)->GetStaticField(0x25080);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_65>* Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5CF1DDAFE12F0E87_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_4*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5CF1DDAFE12F0E87_4* Clone()
	{
		return ((::Class_1_5CF1DDAFE12F0E87_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_65>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_65>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5CF1DDAFE12F0E87_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_4*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5CF1DDAFE12F0E87_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_4*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
