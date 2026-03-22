#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_17;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_28EA26D762F0B3FB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177F3DB0)
#define CLASS_1_28EA26D762F0B3FB_CLONE_OFFSET UNITYSDK_OFFSET(0x177F3A00)
#define CLASS_1_28EA26D762F0B3FB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177F3A80)
#define CLASS_1_28EA26D762F0B3FB_EQUALS_OFFSET UNITYSDK_OFFSET(0x177F3A50)
#define CLASS_1_28EA26D762F0B3FB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177F3B60)
#define CLASS_1_28EA26D762F0B3FB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177F3F40)
#define CLASS_1_28EA26D762F0B3FB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177F3E90)
#define CLASS_1_28EA26D762F0B3FB_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x177F3A40)
#define CLASS_1_28EA26D762F0B3FB_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x177F3A30)
#define CLASS_1_28EA26D762F0B3FB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177F38D0)
#define CLASS_1_28EA26D762F0B3FB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177F3C70)
#define CLASS_1_28EA26D762F0B3FB_WRITETO_OFFSET UNITYSDK_OFFSET(0x177F3CD0)
#define CLASS_1_28EA26D762F0B3FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x177F4070)
#define CLASS_1_28EA26D762F0B3FB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177F3930)
#define CLASS_1_28EA26D762F0B3FB__CTOR_OFFSET UNITYSDK_OFFSET(0x177F38E0)

inline static constexpr unsigned int Class_1_28EA26D762F0B3FB_TypeDefinitionIndex = 23735;

class Class_1_28EA26D762F0B3FB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_17*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28EA26D762F0B3FB_TypeDefinitionIndex)->GetStaticField(0x40C20);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28EA26D762F0B3FB_TypeDefinitionIndex)->GetStaticField(0x40C28);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_17*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_28EA26D762F0B3FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28EA26D762F0B3FB*))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_28EA26D762F0B3FB* Clone()
	{
		return ((::Class_1_28EA26D762F0B3FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_17*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_28EA26D762F0B3FB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_28EA26D762F0B3FB*))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_28EA26D762F0B3FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28EA26D762F0B3FB*))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28EA26D762F0B3FB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
