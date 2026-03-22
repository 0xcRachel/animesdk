#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_16;
class Class_1_3AD2528CD53B1639_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17500850)
#define CLASS_1_99BD961747420BEB_5_CLONE_OFFSET UNITYSDK_OFFSET(0x17500410)
#define CLASS_1_99BD961747420BEB_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175004C0)
#define CLASS_1_99BD961747420BEB_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17500490)
#define CLASS_1_99BD961747420BEB_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175005C0)
#define CLASS_1_99BD961747420BEB_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17500AE0)
#define CLASS_1_99BD961747420BEB_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175009B0)
#define CLASS_1_99BD961747420BEB_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17500470)
#define CLASS_1_99BD961747420BEB_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17500450)
#define CLASS_1_99BD961747420BEB_5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17500440)
#define CLASS_1_99BD961747420BEB_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17500480)
#define CLASS_1_99BD961747420BEB_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17500460)
#define CLASS_1_99BD961747420BEB_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175002D0)
#define CLASS_1_99BD961747420BEB_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175006E0)
#define CLASS_1_99BD961747420BEB_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17500740)
#define CLASS_1_99BD961747420BEB_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17500C40)
#define CLASS_1_99BD961747420BEB_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17500320)
#define CLASS_1_99BD961747420BEB_5__CTOR_OFFSET UNITYSDK_OFFSET(0x175002E0)

inline static constexpr unsigned int Class_1_99BD961747420BEB_5_TypeDefinitionIndex = 23039;

class Class_1_99BD961747420BEB_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_5_TypeDefinitionIndex)->GetStaticField(0x86D0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	::Class_1_3AD2528CD53B1639_2* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_5*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_5* Clone()
	{
		return ((::Class_1_99BD961747420BEB_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3AD2528CD53B1639_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3AD2528CD53B1639_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_5*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_5*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
