#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_57_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A64120)
#define CLASS_1_99BD961747420BEB_57_CLONE_OFFSET UNITYSDK_OFFSET(0x17A63C50)
#define CLASS_1_99BD961747420BEB_57_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A63DD0)
#define CLASS_1_99BD961747420BEB_57_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A63CD0)
#define CLASS_1_99BD961747420BEB_57_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A63EA0)
#define CLASS_1_99BD961747420BEB_57_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A642B0)
#define CLASS_1_99BD961747420BEB_57_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A64200)
#define CLASS_1_99BD961747420BEB_57_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17A63CA0)
#define CLASS_1_99BD961747420BEB_57_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17A63CC0)
#define CLASS_1_99BD961747420BEB_57_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17A63CB0)
#define CLASS_1_99BD961747420BEB_57_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A63B10)
#define CLASS_1_99BD961747420BEB_57_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A63FE0)
#define CLASS_1_99BD961747420BEB_57_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A64040)
#define CLASS_1_99BD961747420BEB_57__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A643A0)
#define CLASS_1_99BD961747420BEB_57__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A63B70)
#define CLASS_1_99BD961747420BEB_57__CTOR_OFFSET UNITYSDK_OFFSET(0x17A63B20)

inline static constexpr unsigned int Class_1_99BD961747420BEB_57_TypeDefinitionIndex = 26863;

class Class_1_99BD961747420BEB_57 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_57_TypeDefinitionIndex)->GetStaticField(0x19A80);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x18
	::Class_1_32044B0173B87B04_2* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_57*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_57* Clone()
	{
		return ((::Class_1_99BD961747420BEB_57*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_CLONE_OFFSET))(this);
	}

	::Class_1_32044B0173B87B04_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_32044B0173B87B04_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_32044B0173B87B04_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_2*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_57* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_57*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_57*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_57_MERGEFROM_1_OFFSET))(this, a1);
	}
};
