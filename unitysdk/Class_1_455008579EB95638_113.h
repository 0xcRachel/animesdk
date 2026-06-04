#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB4A4ADDA7338C08_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_113_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AED8790)
#define CLASS_1_455008579EB95638_113_CLONE_OFFSET UNITYSDK_OFFSET(0x1AED8350)
#define CLASS_1_455008579EB95638_113_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AED83D0)
#define CLASS_1_455008579EB95638_113_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AED83A0)
#define CLASS_1_455008579EB95638_113_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AED84B0)
#define CLASS_1_455008579EB95638_113_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AED8920)
#define CLASS_1_455008579EB95638_113_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AED8870)
#define CLASS_1_455008579EB95638_113_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1AED8380)
#define CLASS_1_455008579EB95638_113_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AED81B0)
#define CLASS_1_455008579EB95638_113_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AED8390)
#define CLASS_1_455008579EB95638_113_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AED81E0)
#define CLASS_1_455008579EB95638_113_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AED8650)
#define CLASS_1_455008579EB95638_113_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AED86B0)
#define CLASS_1_455008579EB95638_113__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AED8B20)
#define CLASS_1_455008579EB95638_113__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AED8260)
#define CLASS_1_455008579EB95638_113__CTOR_OFFSET UNITYSDK_OFFSET(0x1AED81F0)

inline static constexpr unsigned int Class_1_455008579EB95638_113_TypeDefinitionIndex = 32915;

class Class_1_455008579EB95638_113 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_113_TypeDefinitionIndex)->GetStaticField(0x652B0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_113*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_113*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_113_TypeDefinitionIndex)->GetStaticField(0x652B8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FB4A4ADDA7338C08_4*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FB4A4ADDA7338C08_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_113_TypeDefinitionIndex)->GetStaticField(0x652C0);
	}
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FB4A4ADDA7338C08_4*>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_113* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_113*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_113*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_113*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_113* Clone()
	{
		return ((::Class_1_455008579EB95638_113*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FB4A4ADDA7338C08_4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FB4A4ADDA7338C08_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_113* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_113*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_113* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_113*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_113_MERGEFROM_1_OFFSET))(this, a1);
	}
};
