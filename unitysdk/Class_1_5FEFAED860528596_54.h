#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_54;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_54_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A62810)
#define CLASS_1_5FEFAED860528596_54_CLONE_OFFSET UNITYSDK_OFFSET(0x17A623E0)
#define CLASS_1_5FEFAED860528596_54_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A62530)
#define CLASS_1_5FEFAED860528596_54_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A62440)
#define CLASS_1_5FEFAED860528596_54_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A625E0)
#define CLASS_1_5FEFAED860528596_54_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A629E0)
#define CLASS_1_5FEFAED860528596_54_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A62940)
#define CLASS_1_5FEFAED860528596_54_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17A62420)
#define CLASS_1_5FEFAED860528596_54_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17A62410)
#define CLASS_1_5FEFAED860528596_54_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17A62430)
#define CLASS_1_5FEFAED860528596_54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A62300)
#define CLASS_1_5FEFAED860528596_54_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A626D0)
#define CLASS_1_5FEFAED860528596_54_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A62730)
#define CLASS_1_5FEFAED860528596_54__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A62AA0)
#define CLASS_1_5FEFAED860528596_54__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A62350)
#define CLASS_1_5FEFAED860528596_54__CTOR_OFFSET UNITYSDK_OFFSET(0x17A62310)

inline static constexpr unsigned int Class_1_5FEFAED860528596_54_TypeDefinitionIndex = 24785;

class Class_1_5FEFAED860528596_54 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_54*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_54*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_54_TypeDefinitionIndex)->GetStaticField(0x19980);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_54*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_54*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_54* Clone()
	{
		return ((::Class_1_5FEFAED860528596_54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_54*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_54*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_54* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_54*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_54*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_54_MERGEFROM_1_OFFSET))(this, a1);
	}
};
