#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C50F5982E5600913;
class Class_1_E7DB216A3FFF6C29_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_752A428518BC8100_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A710360)
#define CLASS_1_752A428518BC8100_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A70FE50)
#define CLASS_1_752A428518BC8100_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A710020)
#define CLASS_1_752A428518BC8100_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A70FED0)
#define CLASS_1_752A428518BC8100_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A710110)
#define CLASS_1_752A428518BC8100_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A710530)
#define CLASS_1_752A428518BC8100_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A710450)
#define CLASS_1_752A428518BC8100_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A70FEA0)
#define CLASS_1_752A428518BC8100_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A70FC70)
#define CLASS_1_752A428518BC8100_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A70FEC0)
#define CLASS_1_752A428518BC8100_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A70FEB0)
#define CLASS_1_752A428518BC8100_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A70FCD0)
#define CLASS_1_752A428518BC8100_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A710230)
#define CLASS_1_752A428518BC8100_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A710290)
#define CLASS_1_752A428518BC8100_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A710710)
#define CLASS_1_752A428518BC8100_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A70FD30)
#define CLASS_1_752A428518BC8100_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70FCE0)

inline static constexpr unsigned int Class_1_752A428518BC8100_1_TypeDefinitionIndex = 26800;

class Class_1_752A428518BC8100_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_1_TypeDefinitionIndex)->GetStaticField(0x29D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C50F5982E5600913*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C50F5982E5600913*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_1_TypeDefinitionIndex)->GetStaticField(0x29D8);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Class_1_E7DB216A3FFF6C29_1* Field_1_5; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C50F5982E5600913*>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_752A428518BC8100_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_1*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_752A428518BC8100_1* Clone()
	{
		return ((::Class_1_752A428518BC8100_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_CLONE_OFFSET))(this);
	}

	::Class_1_E7DB216A3FFF6C29_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7DB216A3FFF6C29_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7DB216A3FFF6C29_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7DB216A3FFF6C29_1*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C50F5982E5600913*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C50F5982E5600913*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_752A428518BC8100_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_752A428518BC8100_1*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_752A428518BC8100_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_1*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
