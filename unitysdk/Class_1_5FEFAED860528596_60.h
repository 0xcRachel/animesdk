#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9F1B299E86EE49AF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_60_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179BE8A0)
#define CLASS_1_5FEFAED860528596_60_CLONE_OFFSET UNITYSDK_OFFSET(0x179BE470)
#define CLASS_1_5FEFAED860528596_60_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179BE5C0)
#define CLASS_1_5FEFAED860528596_60_EQUALS_OFFSET UNITYSDK_OFFSET(0x179BE4D0)
#define CLASS_1_5FEFAED860528596_60_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179BE670)
#define CLASS_1_5FEFAED860528596_60_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179BEA50)
#define CLASS_1_5FEFAED860528596_60_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179BE9B0)
#define CLASS_1_5FEFAED860528596_60_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x179BE4A0)
#define CLASS_1_5FEFAED860528596_60_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x179BE4C0)
#define CLASS_1_5FEFAED860528596_60_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x179BE4B0)
#define CLASS_1_5FEFAED860528596_60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179BE390)
#define CLASS_1_5FEFAED860528596_60_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179BE760)
#define CLASS_1_5FEFAED860528596_60_WRITETO_OFFSET UNITYSDK_OFFSET(0x179BE7C0)
#define CLASS_1_5FEFAED860528596_60__CCTOR_OFFSET UNITYSDK_OFFSET(0x179BEB10)
#define CLASS_1_5FEFAED860528596_60__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179BE3E0)
#define CLASS_1_5FEFAED860528596_60__CTOR_OFFSET UNITYSDK_OFFSET(0x179BE3A0)

inline static constexpr unsigned int Class_1_5FEFAED860528596_60_TypeDefinitionIndex = 25079;

class Class_1_5FEFAED860528596_60 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9F1B299E86EE49AF*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9F1B299E86EE49AF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_60_TypeDefinitionIndex)->GetStaticField(0x9B80);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F1B299E86EE49AF*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_60*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_60* Clone()
	{
		return ((::Class_1_5FEFAED860528596_60*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F1B299E86EE49AF*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F1B299E86EE49AF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_60* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_60*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_60*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_60_MERGEFROM_1_OFFSET))(this, a1);
	}
};
