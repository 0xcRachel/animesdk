#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2786121EC539E542;
class Class_1_D17272E82AE804C2_28;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_69A5DDEA5F31A2DF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19D1DEA0)
#define CLASS_1_69A5DDEA5F31A2DF_CLONE_OFFSET UNITYSDK_OFFSET(0x19D1D9C0)
#define CLASS_1_69A5DDEA5F31A2DF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19D1DB40)
#define CLASS_1_69A5DDEA5F31A2DF_EQUALS_OFFSET UNITYSDK_OFFSET(0x19D1DA20)
#define CLASS_1_69A5DDEA5F31A2DF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19D1DC30)
#define CLASS_1_69A5DDEA5F31A2DF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19D1E0A0)
#define CLASS_1_69A5DDEA5F31A2DF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19D1DF90)
#define CLASS_1_69A5DDEA5F31A2DF_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19D1D9F0)
#define CLASS_1_69A5DDEA5F31A2DF_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19D1D800)
#define CLASS_1_69A5DDEA5F31A2DF_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19D1DA10)
#define CLASS_1_69A5DDEA5F31A2DF_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19D1DA00)
#define CLASS_1_69A5DDEA5F31A2DF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19D1D830)
#define CLASS_1_69A5DDEA5F31A2DF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D1DD70)
#define CLASS_1_69A5DDEA5F31A2DF_WRITETO_OFFSET UNITYSDK_OFFSET(0x19D1DDD0)
#define CLASS_1_69A5DDEA5F31A2DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D1E190)
#define CLASS_1_69A5DDEA5F31A2DF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D1D890)
#define CLASS_1_69A5DDEA5F31A2DF__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1D840)

inline static constexpr unsigned int Class_1_69A5DDEA5F31A2DF_TypeDefinitionIndex = 24293;

class Class_1_69A5DDEA5F31A2DF : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_69A5DDEA5F31A2DF*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_69A5DDEA5F31A2DF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_69A5DDEA5F31A2DF_TypeDefinitionIndex)->GetStaticField(0x60950);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2786121EC539E542*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2786121EC539E542*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_69A5DDEA5F31A2DF_TypeDefinitionIndex)->GetStaticField(0x60958);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Class_1_D17272E82AE804C2_28* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2786121EC539E542*>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_69A5DDEA5F31A2DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_69A5DDEA5F31A2DF*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_69A5DDEA5F31A2DF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_69A5DDEA5F31A2DF* Clone()
	{
		return ((::Class_1_69A5DDEA5F31A2DF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_28* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_28*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2786121EC539E542*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2786121EC539E542*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_69A5DDEA5F31A2DF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_69A5DDEA5F31A2DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
