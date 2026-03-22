#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_95;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_96_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17602500)
#define CLASS_1_5FEFAED860528596_96_CLONE_OFFSET UNITYSDK_OFFSET(0x176020D0)
#define CLASS_1_5FEFAED860528596_96_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17602220)
#define CLASS_1_5FEFAED860528596_96_EQUALS_OFFSET UNITYSDK_OFFSET(0x17602130)
#define CLASS_1_5FEFAED860528596_96_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176022D0)
#define CLASS_1_5FEFAED860528596_96_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176026D0)
#define CLASS_1_5FEFAED860528596_96_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17602630)
#define CLASS_1_5FEFAED860528596_96_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17602110)
#define CLASS_1_5FEFAED860528596_96_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17602100)
#define CLASS_1_5FEFAED860528596_96_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17602120)
#define CLASS_1_5FEFAED860528596_96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17601FF0)
#define CLASS_1_5FEFAED860528596_96_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176023C0)
#define CLASS_1_5FEFAED860528596_96_WRITETO_OFFSET UNITYSDK_OFFSET(0x17602420)
#define CLASS_1_5FEFAED860528596_96__CCTOR_OFFSET UNITYSDK_OFFSET(0x17602790)
#define CLASS_1_5FEFAED860528596_96__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17602040)
#define CLASS_1_5FEFAED860528596_96__CTOR_OFFSET UNITYSDK_OFFSET(0x17602000)

inline static constexpr unsigned int Class_1_5FEFAED860528596_96_TypeDefinitionIndex = 26584;

class Class_1_5FEFAED860528596_96 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_95*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_95*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_96_TypeDefinitionIndex)->GetStaticField(0x1AE60);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_95*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_96*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_96* Clone()
	{
		return ((::Class_1_5FEFAED860528596_96*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_95*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_95*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_96* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_96*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_96*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_96_MERGEFROM_1_OFFSET))(this, a1);
	}
};
