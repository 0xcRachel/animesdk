#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_14;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179D4320)
#define CLASS_1_5FEFAED860528596_27_CLONE_OFFSET UNITYSDK_OFFSET(0x179D3EC0)
#define CLASS_1_5FEFAED860528596_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179D3F40)
#define CLASS_1_5FEFAED860528596_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x179D3F10)
#define CLASS_1_5FEFAED860528596_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179D4020)
#define CLASS_1_5FEFAED860528596_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179D44B0)
#define CLASS_1_5FEFAED860528596_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179D4400)
#define CLASS_1_5FEFAED860528596_27_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x179D3EF0)
#define CLASS_1_5FEFAED860528596_27_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x179D3F00)
#define CLASS_1_5FEFAED860528596_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179D3D50)
#define CLASS_1_5FEFAED860528596_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179D41E0)
#define CLASS_1_5FEFAED860528596_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x179D4240)
#define CLASS_1_5FEFAED860528596_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x179D45C0)
#define CLASS_1_5FEFAED860528596_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179D3DD0)
#define CLASS_1_5FEFAED860528596_27__CTOR_OFFSET UNITYSDK_OFFSET(0x179D3D60)

inline static constexpr unsigned int Class_1_5FEFAED860528596_27_TypeDefinitionIndex = 23608;

class Class_1_5FEFAED860528596_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_27_TypeDefinitionIndex)->GetStaticField(0xB270);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_14*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_27_TypeDefinitionIndex)->GetStaticField(0xB278);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_14*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_27*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_27* Clone()
	{
		return ((::Class_1_5FEFAED860528596_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_14*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_14*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_27*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_27*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
