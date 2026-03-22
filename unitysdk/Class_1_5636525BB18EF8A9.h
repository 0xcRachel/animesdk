#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5998B55BBB06E65E;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_5636525BB18EF8A9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17571DB0)
#define CLASS_1_5636525BB18EF8A9_CLONE_OFFSET UNITYSDK_OFFSET(0x17571970)
#define CLASS_1_5636525BB18EF8A9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17571A20)
#define CLASS_1_5636525BB18EF8A9_EQUALS_OFFSET UNITYSDK_OFFSET(0x175719F0)
#define CLASS_1_5636525BB18EF8A9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17571B20)
#define CLASS_1_5636525BB18EF8A9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17572000)
#define CLASS_1_5636525BB18EF8A9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17571F00)
#define CLASS_1_5636525BB18EF8A9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x175719C0)
#define CLASS_1_5636525BB18EF8A9_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x175719B0)
#define CLASS_1_5636525BB18EF8A9_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x175719A0)
#define CLASS_1_5636525BB18EF8A9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x175719E0)
#define CLASS_1_5636525BB18EF8A9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x175719D0)
#define CLASS_1_5636525BB18EF8A9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17571810)
#define CLASS_1_5636525BB18EF8A9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17571C40)
#define CLASS_1_5636525BB18EF8A9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17571CA0)
#define CLASS_1_5636525BB18EF8A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x17572130)
#define CLASS_1_5636525BB18EF8A9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17571870)
#define CLASS_1_5636525BB18EF8A9__CTOR_OFFSET UNITYSDK_OFFSET(0x17571820)

inline static constexpr unsigned int Class_1_5636525BB18EF8A9_TypeDefinitionIndex = 22953;

class Class_1_5636525BB18EF8A9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5998B55BBB06E65E*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5998B55BBB06E65E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5636525BB18EF8A9_TypeDefinitionIndex)->GetStaticField(0xF5B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5998B55BBB06E65E*>* Field_1_7; // 0x10
	::Proto::ItemList* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5636525BB18EF8A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5636525BB18EF8A9*))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5636525BB18EF8A9* Clone()
	{
		return ((::Class_1_5636525BB18EF8A9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5998B55BBB06E65E*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5998B55BBB06E65E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5636525BB18EF8A9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5636525BB18EF8A9*))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5636525BB18EF8A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5636525BB18EF8A9*))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5636525BB18EF8A9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
