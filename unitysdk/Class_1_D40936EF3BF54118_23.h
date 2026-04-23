#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0306FBB84513F0B2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x198C0470)
#define CLASS_1_D40936EF3BF54118_23_CLONE_OFFSET UNITYSDK_OFFSET(0x198C00A0)
#define CLASS_1_D40936EF3BF54118_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x198C01C0)
#define CLASS_1_D40936EF3BF54118_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x198C00E0)
#define CLASS_1_D40936EF3BF54118_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x198C0270)
#define CLASS_1_D40936EF3BF54118_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x198C05B0)
#define CLASS_1_D40936EF3BF54118_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x198C0510)
#define CLASS_1_D40936EF3BF54118_23_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x198BFF60)
#define CLASS_1_D40936EF3BF54118_23_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x198C00D0)
#define CLASS_1_D40936EF3BF54118_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x198BFF90)
#define CLASS_1_D40936EF3BF54118_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x198C0360)
#define CLASS_1_D40936EF3BF54118_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x198C03C0)
#define CLASS_1_D40936EF3BF54118_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x198C0690)
#define CLASS_1_D40936EF3BF54118_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x198BFFF0)
#define CLASS_1_D40936EF3BF54118_23__CTOR_OFFSET UNITYSDK_OFFSET(0x198BFFA0)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_23_TypeDefinitionIndex = 26662;

class Class_1_D40936EF3BF54118_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_23*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_23_TypeDefinitionIndex)->GetStaticField(0x4E6A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_0306FBB84513F0B2*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_0306FBB84513F0B2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_23_TypeDefinitionIndex)->GetStaticField(0x4E6A8);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0306FBB84513F0B2*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_23*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_23*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_23* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0306FBB84513F0B2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0306FBB84513F0B2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_23*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_23*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
