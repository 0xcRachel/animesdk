#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_14.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_5;
class Class_1_C9DFE5EE7107C629_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3AD2528CD53B1639_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179ECA80)
#define CLASS_1_3AD2528CD53B1639_6_CLONE_OFFSET UNITYSDK_OFFSET(0x179EC460)
#define CLASS_1_3AD2528CD53B1639_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179EC5E0)
#define CLASS_1_3AD2528CD53B1639_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x179EC580)
#define CLASS_1_3AD2528CD53B1639_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179EC710)
#define CLASS_1_3AD2528CD53B1639_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179ECFC0)
#define CLASS_1_3AD2528CD53B1639_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179ECE90)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x179EC500)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x179EC4B0)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x179EC540)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x179EC4F0)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x179EC530)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x179EC4D0)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x179EC510)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x179EC4C0)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x179EC550)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x179EC520)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x179EC570)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x179EC560)
#define CLASS_1_3AD2528CD53B1639_6_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x179EC4E0)
#define CLASS_1_3AD2528CD53B1639_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179EC2D0)
#define CLASS_1_3AD2528CD53B1639_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179EC840)
#define CLASS_1_3AD2528CD53B1639_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x179EC8A0)
#define CLASS_1_3AD2528CD53B1639_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x179ED150)
#define CLASS_1_3AD2528CD53B1639_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179EC330)
#define CLASS_1_3AD2528CD53B1639_6__CTOR_OFFSET UNITYSDK_OFFSET(0x179EC2E0)

inline static constexpr unsigned int Class_1_3AD2528CD53B1639_6_TypeDefinitionIndex = 23870;

class Class_1_3AD2528CD53B1639_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3AD2528CD53B1639_5*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3AD2528CD53B1639_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AD2528CD53B1639_6_TypeDefinitionIndex)->GetStaticField(0x10940);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3AD2528CD53B1639_5*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_C9DFE5EE7107C629_7* Field_1_13; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::Int32 Field_1_15; // 0x2C
	::System::UInt64 Field_1_7; // 0x30
	::Enum_3_96F6662CA3713095_14 Field_1_11; // 0x38
	::System::UInt32 Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3AD2528CD53B1639_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_6* Clone()
	{
		return ((::Class_1_3AD2528CD53B1639_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3AD2528CD53B1639_5*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3AD2528CD53B1639_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_14 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_14(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_14 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_14))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_C9DFE5EE7107C629_7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3AD2528CD53B1639_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3AD2528CD53B1639_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
