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

#define CLASS_1_D7CAF657452ED1CB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181C2260)
#define CLASS_1_D7CAF657452ED1CB_CLONE_OFFSET UNITYSDK_OFFSET(0x181C1BD0)
#define CLASS_1_D7CAF657452ED1CB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181C1CF0)
#define CLASS_1_D7CAF657452ED1CB_EQUALS_OFFSET UNITYSDK_OFFSET(0x181C1C90)
#define CLASS_1_D7CAF657452ED1CB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181C1DE0)
#define CLASS_1_D7CAF657452ED1CB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181C24A0)
#define CLASS_1_D7CAF657452ED1CB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181C2410)
#define CLASS_1_D7CAF657452ED1CB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181C1C40)
#define CLASS_1_D7CAF657452ED1CB_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x181C1C30)
#define CLASS_1_D7CAF657452ED1CB_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x181C1C80)
#define CLASS_1_D7CAF657452ED1CB_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x181C1C20)
#define CLASS_1_D7CAF657452ED1CB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181C1C50)
#define CLASS_1_D7CAF657452ED1CB_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x181C1C70)
#define CLASS_1_D7CAF657452ED1CB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x181C1C60)
#define CLASS_1_D7CAF657452ED1CB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181C1990)
#define CLASS_1_D7CAF657452ED1CB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181C20A0)
#define CLASS_1_D7CAF657452ED1CB_WRITETO_OFFSET UNITYSDK_OFFSET(0x181C2100)
#define CLASS_1_D7CAF657452ED1CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C2660)
#define CLASS_1_D7CAF657452ED1CB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181C1A70)
#define CLASS_1_D7CAF657452ED1CB__CTOR_OFFSET UNITYSDK_OFFSET(0x181C19A0)

inline static constexpr unsigned int Class_1_D7CAF657452ED1CB_TypeDefinitionIndex = 25588;

class Class_1_D7CAF657452ED1CB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7CAF657452ED1CB_TypeDefinitionIndex)->GetStaticField(0x25580);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7CAF657452ED1CB_TypeDefinitionIndex)->GetStaticField(0x25588);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7CAF657452ED1CB_TypeDefinitionIndex)->GetStaticField(0x25590);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x28
	::System::Boolean Field_1_10; // 0x30
	::System::UInt32 Field_1_8; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D7CAF657452ED1CB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7CAF657452ED1CB*))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D7CAF657452ED1CB* Clone()
	{
		return ((::Class_1_D7CAF657452ED1CB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D7CAF657452ED1CB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D7CAF657452ED1CB*))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D7CAF657452ED1CB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7CAF657452ED1CB*))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D7CAF657452ED1CB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
