#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C00A1FD3670E4E15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AE1FD60)
#define CLASS_1_C00A1FD3670E4E15_CLONE_OFFSET UNITYSDK_OFFSET(0x1AE1F7D0)
#define CLASS_1_C00A1FD3670E4E15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AE1F880)
#define CLASS_1_C00A1FD3670E4E15_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AE1F850)
#define CLASS_1_C00A1FD3670E4E15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AE1F990)
#define CLASS_1_C00A1FD3670E4E15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AE20050)
#define CLASS_1_C00A1FD3670E4E15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AE1FEF0)
#define CLASS_1_C00A1FD3670E4E15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AE1F830)
#define CLASS_1_C00A1FD3670E4E15_METHOD_1_3F08C697E838D55A_1_OFFSET UNITYSDK_OFFSET(0x1AE1F810)
#define CLASS_1_C00A1FD3670E4E15_METHOD_1_3F08C697E838D55A_2_OFFSET UNITYSDK_OFFSET(0x1AE1F820)
#define CLASS_1_C00A1FD3670E4E15_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x1AE1F800)
#define CLASS_1_C00A1FD3670E4E15_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AE1F5F0)
#define CLASS_1_C00A1FD3670E4E15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AE1F840)
#define CLASS_1_C00A1FD3670E4E15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AE1F620)
#define CLASS_1_C00A1FD3670E4E15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE1FBD0)
#define CLASS_1_C00A1FD3670E4E15_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AE1FC30)
#define CLASS_1_C00A1FD3670E4E15__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE201A0)
#define CLASS_1_C00A1FD3670E4E15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE1F6B0)
#define CLASS_1_C00A1FD3670E4E15__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1F630)

inline static constexpr unsigned int Class_1_C00A1FD3670E4E15_TypeDefinitionIndex = 30258;

class Class_1_C00A1FD3670E4E15 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C00A1FD3670E4E15_TypeDefinitionIndex)->GetStaticField(0x78D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C00A1FD3670E4E15_TypeDefinitionIndex)->GetStaticField(0x78D8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C00A1FD3670E4E15_TypeDefinitionIndex)->GetStaticField(0x78E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C00A1FD3670E4E15*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C00A1FD3670E4E15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C00A1FD3670E4E15_TypeDefinitionIndex)->GetStaticField(0x78E8);
	}
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_10; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C00A1FD3670E4E15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C00A1FD3670E4E15*))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C00A1FD3670E4E15*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C00A1FD3670E4E15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C00A1FD3670E4E15* Clone()
	{
		return ((::Class_1_C00A1FD3670E4E15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_METHOD_1_3F08C697E838D55A_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_METHOD_1_3F08C697E838D55A_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C00A1FD3670E4E15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C00A1FD3670E4E15*))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C00A1FD3670E4E15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C00A1FD3670E4E15*))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C00A1FD3670E4E15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
