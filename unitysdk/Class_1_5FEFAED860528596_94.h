#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_57;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_94_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173031C0)
#define CLASS_1_5FEFAED860528596_94_CLONE_OFFSET UNITYSDK_OFFSET(0x17302DA0)
#define CLASS_1_5FEFAED860528596_94_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17302EF0)
#define CLASS_1_5FEFAED860528596_94_EQUALS_OFFSET UNITYSDK_OFFSET(0x17302E00)
#define CLASS_1_5FEFAED860528596_94_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17302FA0)
#define CLASS_1_5FEFAED860528596_94_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17303390)
#define CLASS_1_5FEFAED860528596_94_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173032F0)
#define CLASS_1_5FEFAED860528596_94_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17302DE0)
#define CLASS_1_5FEFAED860528596_94_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17302DD0)
#define CLASS_1_5FEFAED860528596_94_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17302DF0)
#define CLASS_1_5FEFAED860528596_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17302C80)
#define CLASS_1_5FEFAED860528596_94_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17303090)
#define CLASS_1_5FEFAED860528596_94_WRITETO_OFFSET UNITYSDK_OFFSET(0x173030F0)
#define CLASS_1_5FEFAED860528596_94__CCTOR_OFFSET UNITYSDK_OFFSET(0x17303470)
#define CLASS_1_5FEFAED860528596_94__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17302CE0)
#define CLASS_1_5FEFAED860528596_94__CTOR_OFFSET UNITYSDK_OFFSET(0x17302C90)

inline static constexpr unsigned int Class_1_5FEFAED860528596_94_TypeDefinitionIndex = 26555;

class Class_1_5FEFAED860528596_94 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_57*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_57*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_94_TypeDefinitionIndex)->GetStaticField(0x2BC60);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_57*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_94*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_94* Clone()
	{
		return ((::Class_1_5FEFAED860528596_94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_57*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_57*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_94* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_94*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_94*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_94_MERGEFROM_1_OFFSET))(this, a1);
	}
};
