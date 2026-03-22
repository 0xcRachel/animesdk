#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_52;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_45_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17393530)
#define CLASS_1_5FEFAED860528596_45_CLONE_OFFSET UNITYSDK_OFFSET(0x17393110)
#define CLASS_1_5FEFAED860528596_45_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17393260)
#define CLASS_1_5FEFAED860528596_45_EQUALS_OFFSET UNITYSDK_OFFSET(0x17393170)
#define CLASS_1_5FEFAED860528596_45_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17393310)
#define CLASS_1_5FEFAED860528596_45_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17393700)
#define CLASS_1_5FEFAED860528596_45_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17393660)
#define CLASS_1_5FEFAED860528596_45_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17393150)
#define CLASS_1_5FEFAED860528596_45_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17393140)
#define CLASS_1_5FEFAED860528596_45_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17393160)
#define CLASS_1_5FEFAED860528596_45_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17393030)
#define CLASS_1_5FEFAED860528596_45_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17393400)
#define CLASS_1_5FEFAED860528596_45_WRITETO_OFFSET UNITYSDK_OFFSET(0x17393460)
#define CLASS_1_5FEFAED860528596_45__CCTOR_OFFSET UNITYSDK_OFFSET(0x173937E0)
#define CLASS_1_5FEFAED860528596_45__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17393080)
#define CLASS_1_5FEFAED860528596_45__CTOR_OFFSET UNITYSDK_OFFSET(0x17393040)

inline static constexpr unsigned int Class_1_5FEFAED860528596_45_TypeDefinitionIndex = 24608;

class Class_1_5FEFAED860528596_45 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_52*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_52*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_45_TypeDefinitionIndex)->GetStaticField(0x36380);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_52*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_45* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_45*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_45* Clone()
	{
		return ((::Class_1_5FEFAED860528596_45*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_52*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_52*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_45* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_45*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_45* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_45*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_45_MERGEFROM_1_OFFSET))(this, a1);
	}
};
