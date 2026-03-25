#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2827A08E633A7795_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_47D9638E2308F48C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18093290)
#define CLASS_1_47D9638E2308F48C_CLONE_OFFSET UNITYSDK_OFFSET(0x18092DC0)
#define CLASS_1_47D9638E2308F48C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18092ED0)
#define CLASS_1_47D9638E2308F48C_EQUALS_OFFSET UNITYSDK_OFFSET(0x18092EA0)
#define CLASS_1_47D9638E2308F48C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18092FC0)
#define CLASS_1_47D9638E2308F48C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18093580)
#define CLASS_1_47D9638E2308F48C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180934A0)
#define CLASS_1_47D9638E2308F48C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18092E80)
#define CLASS_1_47D9638E2308F48C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18092E00)
#define CLASS_1_47D9638E2308F48C_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x18092E10)
#define CLASS_1_47D9638E2308F48C_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18092DF0)
#define CLASS_1_47D9638E2308F48C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18092E90)
#define CLASS_1_47D9638E2308F48C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18092CC0)
#define CLASS_1_47D9638E2308F48C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18093150)
#define CLASS_1_47D9638E2308F48C_WRITETO_OFFSET UNITYSDK_OFFSET(0x180931B0)
#define CLASS_1_47D9638E2308F48C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180936D0)
#define CLASS_1_47D9638E2308F48C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18092D10)
#define CLASS_1_47D9638E2308F48C__CTOR_OFFSET UNITYSDK_OFFSET(0x18092CD0)

inline static constexpr unsigned int Class_1_47D9638E2308F48C_TypeDefinitionIndex = 25489;

class Class_1_47D9638E2308F48C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2827A08E633A7795_11*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2827A08E633A7795_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47D9638E2308F48C_TypeDefinitionIndex)->GetStaticField(0x39F10);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::System::String* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2827A08E633A7795_11*>* Field_1_3; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_47D9638E2308F48C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47D9638E2308F48C*))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_47D9638E2308F48C* Clone()
	{
		return ((::Class_1_47D9638E2308F48C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2827A08E633A7795_11*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2827A08E633A7795_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_47D9638E2308F48C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_47D9638E2308F48C*))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_47D9638E2308F48C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47D9638E2308F48C*))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_47D9638E2308F48C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
