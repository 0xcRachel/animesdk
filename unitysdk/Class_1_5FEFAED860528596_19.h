#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x178BB2C0)
#define CLASS_1_5FEFAED860528596_19_CLONE_OFFSET UNITYSDK_OFFSET(0x178BAE00)
#define CLASS_1_5FEFAED860528596_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178BAED0)
#define CLASS_1_5FEFAED860528596_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x178BAE70)
#define CLASS_1_5FEFAED860528596_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178BAFB0)
#define CLASS_1_5FEFAED860528596_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x178BB450)
#define CLASS_1_5FEFAED860528596_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x178BB3A0)
#define CLASS_1_5FEFAED860528596_19_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x178BAE60)
#define CLASS_1_5FEFAED860528596_19_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x178BAE50)
#define CLASS_1_5FEFAED860528596_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178BAC40)
#define CLASS_1_5FEFAED860528596_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178BB180)
#define CLASS_1_5FEFAED860528596_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x178BB1E0)
#define CLASS_1_5FEFAED860528596_19__CCTOR_OFFSET UNITYSDK_OFFSET(0x178BB570)
#define CLASS_1_5FEFAED860528596_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178BACE0)
#define CLASS_1_5FEFAED860528596_19__CTOR_OFFSET UNITYSDK_OFFSET(0x178BAC50)

inline static constexpr unsigned int Class_1_5FEFAED860528596_19_TypeDefinitionIndex = 23358;

class Class_1_5FEFAED860528596_19 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_19_TypeDefinitionIndex)->GetStaticField(0x33E60);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_12*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_19_TypeDefinitionIndex)->GetStaticField(0x33E68);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_12*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_19*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_19* Clone()
	{
		return ((::Class_1_5FEFAED860528596_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_12*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_19*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_19*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
