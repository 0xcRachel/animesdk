#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_61AB926B0DCFDD4A_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_101_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174D22D0)
#define CLASS_1_5FEFAED860528596_101_CLONE_OFFSET UNITYSDK_OFFSET(0x174D1E70)
#define CLASS_1_5FEFAED860528596_101_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174D1EF0)
#define CLASS_1_5FEFAED860528596_101_EQUALS_OFFSET UNITYSDK_OFFSET(0x174D1EC0)
#define CLASS_1_5FEFAED860528596_101_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174D1FD0)
#define CLASS_1_5FEFAED860528596_101_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174D2460)
#define CLASS_1_5FEFAED860528596_101_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174D23B0)
#define CLASS_1_5FEFAED860528596_101_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x174D1EA0)
#define CLASS_1_5FEFAED860528596_101_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x174D1EB0)
#define CLASS_1_5FEFAED860528596_101_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174D1D00)
#define CLASS_1_5FEFAED860528596_101_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174D2190)
#define CLASS_1_5FEFAED860528596_101_WRITETO_OFFSET UNITYSDK_OFFSET(0x174D21F0)
#define CLASS_1_5FEFAED860528596_101__CCTOR_OFFSET UNITYSDK_OFFSET(0x174D2570)
#define CLASS_1_5FEFAED860528596_101__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174D1D80)
#define CLASS_1_5FEFAED860528596_101__CTOR_OFFSET UNITYSDK_OFFSET(0x174D1D10)

inline static constexpr unsigned int Class_1_5FEFAED860528596_101_TypeDefinitionIndex = 26653;

class Class_1_5FEFAED860528596_101 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_101_TypeDefinitionIndex)->GetStaticField(0x3C460);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_61AB926B0DCFDD4A_5*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_61AB926B0DCFDD4A_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_101_TypeDefinitionIndex)->GetStaticField(0x3C468);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_61AB926B0DCFDD4A_5*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_101*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_101* Clone()
	{
		return ((::Class_1_5FEFAED860528596_101*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_61AB926B0DCFDD4A_5*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_61AB926B0DCFDD4A_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_101* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_101*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_101*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_101_MERGEFROM_1_OFFSET))(this, a1);
	}
};
