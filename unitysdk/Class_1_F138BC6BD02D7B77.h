#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_95;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F138BC6BD02D7B77_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1744EA50)
#define CLASS_1_F138BC6BD02D7B77_CLONE_OFFSET UNITYSDK_OFFSET(0x1744E530)
#define CLASS_1_F138BC6BD02D7B77_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1744E630)
#define CLASS_1_F138BC6BD02D7B77_EQUALS_OFFSET UNITYSDK_OFFSET(0x1744E5D0)
#define CLASS_1_F138BC6BD02D7B77_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1744E770)
#define CLASS_1_F138BC6BD02D7B77_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1744EC30)
#define CLASS_1_F138BC6BD02D7B77_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1744EB70)
#define CLASS_1_F138BC6BD02D7B77_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1744E5A0)
#define CLASS_1_F138BC6BD02D7B77_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1744E580)
#define CLASS_1_F138BC6BD02D7B77_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1744E5C0)
#define CLASS_1_F138BC6BD02D7B77_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1744E5B0)
#define CLASS_1_F138BC6BD02D7B77_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1744E590)
#define CLASS_1_F138BC6BD02D7B77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1744E410)
#define CLASS_1_F138BC6BD02D7B77_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1744E8F0)
#define CLASS_1_F138BC6BD02D7B77_WRITETO_OFFSET UNITYSDK_OFFSET(0x1744E950)
#define CLASS_1_F138BC6BD02D7B77__CCTOR_OFFSET UNITYSDK_OFFSET(0x1744ED30)
#define CLASS_1_F138BC6BD02D7B77__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1744E470)
#define CLASS_1_F138BC6BD02D7B77__CTOR_OFFSET UNITYSDK_OFFSET(0x1744E420)

inline static constexpr unsigned int Class_1_F138BC6BD02D7B77_TypeDefinitionIndex = 25638;

class Class_1_F138BC6BD02D7B77 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_95*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_95*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F138BC6BD02D7B77_TypeDefinitionIndex)->GetStaticField(0x337E0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_95*>* Field_1_7; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F138BC6BD02D7B77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F138BC6BD02D7B77*))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F138BC6BD02D7B77* Clone()
	{
		return ((::Class_1_F138BC6BD02D7B77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_CLONE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_95*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_95*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F138BC6BD02D7B77* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F138BC6BD02D7B77*))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F138BC6BD02D7B77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F138BC6BD02D7B77*))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F138BC6BD02D7B77_MERGEFROM_1_OFFSET))(this, a1);
	}
};
