#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_52;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_83_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177DE3C0)
#define CLASS_1_5FEFAED860528596_83_CLONE_OFFSET UNITYSDK_OFFSET(0x177DDFA0)
#define CLASS_1_5FEFAED860528596_83_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177DE0F0)
#define CLASS_1_5FEFAED860528596_83_EQUALS_OFFSET UNITYSDK_OFFSET(0x177DE000)
#define CLASS_1_5FEFAED860528596_83_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177DE1A0)
#define CLASS_1_5FEFAED860528596_83_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177DE590)
#define CLASS_1_5FEFAED860528596_83_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177DE4F0)
#define CLASS_1_5FEFAED860528596_83_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x177DDFE0)
#define CLASS_1_5FEFAED860528596_83_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x177DDFD0)
#define CLASS_1_5FEFAED860528596_83_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x177DDFF0)
#define CLASS_1_5FEFAED860528596_83_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177DDEC0)
#define CLASS_1_5FEFAED860528596_83_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177DE290)
#define CLASS_1_5FEFAED860528596_83_WRITETO_OFFSET UNITYSDK_OFFSET(0x177DE2F0)
#define CLASS_1_5FEFAED860528596_83__CCTOR_OFFSET UNITYSDK_OFFSET(0x177DE650)
#define CLASS_1_5FEFAED860528596_83__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177DDF10)
#define CLASS_1_5FEFAED860528596_83__CTOR_OFFSET UNITYSDK_OFFSET(0x177DDED0)

inline static constexpr unsigned int Class_1_5FEFAED860528596_83_TypeDefinitionIndex = 25958;

class Class_1_5FEFAED860528596_83 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_52*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_52*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_83_TypeDefinitionIndex)->GetStaticField(0x3E1D0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_52*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_83*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_83* Clone()
	{
		return ((::Class_1_5FEFAED860528596_83*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_52*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_52*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_83* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_83*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_83*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_83_MERGEFROM_1_OFFSET))(this, a1);
	}
};
