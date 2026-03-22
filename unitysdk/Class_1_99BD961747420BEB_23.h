#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32FA849AD093D43B;
class Class_1_3A7B270FE0BE90AE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176FE6E0)
#define CLASS_1_99BD961747420BEB_23_CLONE_OFFSET UNITYSDK_OFFSET(0x176FE2A0)
#define CLASS_1_99BD961747420BEB_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176FE350)
#define CLASS_1_99BD961747420BEB_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x176FE320)
#define CLASS_1_99BD961747420BEB_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176FE450)
#define CLASS_1_99BD961747420BEB_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176FE960)
#define CLASS_1_99BD961747420BEB_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176FE830)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x176FE2F0)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x176FE2D0)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x176FE310)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x176FE300)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x176FE2E0)
#define CLASS_1_99BD961747420BEB_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176FE120)
#define CLASS_1_99BD961747420BEB_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176FE570)
#define CLASS_1_99BD961747420BEB_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x176FE5D0)
#define CLASS_1_99BD961747420BEB_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x176FEAC0)
#define CLASS_1_99BD961747420BEB_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176FE180)
#define CLASS_1_99BD961747420BEB_23__CTOR_OFFSET UNITYSDK_OFFSET(0x176FE130)

inline static constexpr unsigned int Class_1_99BD961747420BEB_23_TypeDefinitionIndex = 23885;

class Class_1_99BD961747420BEB_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3A7B270FE0BE90AE*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3A7B270FE0BE90AE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_23_TypeDefinitionIndex)->GetStaticField(0x327E0);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3A7B270FE0BE90AE*>* Field_1_7; // 0x18
	::Class_1_32FA849AD093D43B* Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_23*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_23* Clone()
	{
		return ((::Class_1_99BD961747420BEB_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_CLONE_OFFSET))(this);
	}

	::Class_1_32FA849AD093D43B* Method_1_24748FC20F375725()
	{
		return ((::Class_1_32FA849AD093D43B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_32FA849AD093D43B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32FA849AD093D43B*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3A7B270FE0BE90AE*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3A7B270FE0BE90AE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_23*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_23*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
