#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5CC0A77A3BBC2D41_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173D9B80)
#define CLASS_1_5CC0A77A3BBC2D41_CLONE_OFFSET UNITYSDK_OFFSET(0x173D9740)
#define CLASS_1_5CC0A77A3BBC2D41_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173D9810)
#define CLASS_1_5CC0A77A3BBC2D41_EQUALS_OFFSET UNITYSDK_OFFSET(0x173D97B0)
#define CLASS_1_5CC0A77A3BBC2D41_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173D98F0)
#define CLASS_1_5CC0A77A3BBC2D41_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x173D9D10)
#define CLASS_1_5CC0A77A3BBC2D41_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173D9C60)
#define CLASS_1_5CC0A77A3BBC2D41_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x173D97A0)
#define CLASS_1_5CC0A77A3BBC2D41_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x173D9790)
#define CLASS_1_5CC0A77A3BBC2D41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173D9580)
#define CLASS_1_5CC0A77A3BBC2D41_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173D9A40)
#define CLASS_1_5CC0A77A3BBC2D41_WRITETO_OFFSET UNITYSDK_OFFSET(0x173D9AA0)
#define CLASS_1_5CC0A77A3BBC2D41__CCTOR_OFFSET UNITYSDK_OFFSET(0x173D9E30)
#define CLASS_1_5CC0A77A3BBC2D41__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173D9620)
#define CLASS_1_5CC0A77A3BBC2D41__CTOR_OFFSET UNITYSDK_OFFSET(0x173D9590)

inline static constexpr unsigned int Class_1_5CC0A77A3BBC2D41_TypeDefinitionIndex = 22352;

class Class_1_5CC0A77A3BBC2D41 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_4608E37A1B3D374A>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_4608E37A1B3D374A>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC0A77A3BBC2D41_TypeDefinitionIndex)->GetStaticField(0x2C210);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC0A77A3BBC2D41_TypeDefinitionIndex)->GetStaticField(0x2C218);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_4608E37A1B3D374A>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5CC0A77A3BBC2D41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CC0A77A3BBC2D41*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5CC0A77A3BBC2D41* Clone()
	{
		return ((::Class_1_5CC0A77A3BBC2D41*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_4608E37A1B3D374A>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_4608E37A1B3D374A>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5CC0A77A3BBC2D41* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5CC0A77A3BBC2D41*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5CC0A77A3BBC2D41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CC0A77A3BBC2D41*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_MERGEFROM_1_OFFSET))(this, a1);
	}
};
