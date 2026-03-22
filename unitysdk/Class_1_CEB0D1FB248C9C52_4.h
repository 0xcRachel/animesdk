#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_55;
class Class_1_81EEA3F759B06252;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_CEB0D1FB248C9C52_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1765DFE0)
#define CLASS_1_CEB0D1FB248C9C52_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1765DAF0)
#define CLASS_1_CEB0D1FB248C9C52_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1765DBF0)
#define CLASS_1_CEB0D1FB248C9C52_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1765DB90)
#define CLASS_1_CEB0D1FB248C9C52_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1765DD30)
#define CLASS_1_CEB0D1FB248C9C52_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1765E220)
#define CLASS_1_CEB0D1FB248C9C52_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1765E0E0)
#define CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1765DB60)
#define CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1765DB40)
#define CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1765DB80)
#define CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1765DB70)
#define CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1765DB50)
#define CLASS_1_CEB0D1FB248C9C52_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1765D900)
#define CLASS_1_CEB0D1FB248C9C52_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1765DE70)
#define CLASS_1_CEB0D1FB248C9C52_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1765DED0)
#define CLASS_1_CEB0D1FB248C9C52_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1765E340)
#define CLASS_1_CEB0D1FB248C9C52_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1765D960)
#define CLASS_1_CEB0D1FB248C9C52_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1765D910)

inline static constexpr unsigned int Class_1_CEB0D1FB248C9C52_4_TypeDefinitionIndex = 24910;

class Class_1_CEB0D1FB248C9C52_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_81EEA3F759B06252*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_81EEA3F759B06252*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEB0D1FB248C9C52_4_TypeDefinitionIndex)->GetStaticField(0x28B60);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_81EEA3F759B06252*>* Field_1_7; // 0x18
	::Class_1_81EEA3F759B06252* Field_1_2; // 0x20
	::Class_1_4CF8088A158DCE25_55* Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CEB0D1FB248C9C52_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_4*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CEB0D1FB248C9C52_4* Clone()
	{
		return ((::Class_1_CEB0D1FB248C9C52_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_CLONE_OFFSET))(this);
	}

	::Class_1_81EEA3F759B06252* Method_1_24748FC20F375725()
	{
		return ((::Class_1_81EEA3F759B06252*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_81EEA3F759B06252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_81EEA3F759B06252*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_4CF8088A158DCE25_55* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4CF8088A158DCE25_55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4CF8088A158DCE25_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_55*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_81EEA3F759B06252*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_81EEA3F759B06252*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CEB0D1FB248C9C52_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_4*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CEB0D1FB248C9C52_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_4*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
