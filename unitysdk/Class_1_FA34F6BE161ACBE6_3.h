#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_FA34F6BE161ACBE6_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E6CCF0)
#define CLASS_1_FA34F6BE161ACBE6_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17E6C8D0)
#define CLASS_1_FA34F6BE161ACBE6_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E6CA20)
#define CLASS_1_FA34F6BE161ACBE6_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E6C930)
#define CLASS_1_FA34F6BE161ACBE6_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E6CAD0)
#define CLASS_1_FA34F6BE161ACBE6_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E6CEC0)
#define CLASS_1_FA34F6BE161ACBE6_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E6CE20)
#define CLASS_1_FA34F6BE161ACBE6_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E6C910)
#define CLASS_1_FA34F6BE161ACBE6_3_METHOD_1_6E8EADC4D1FD06E5_OFFSET UNITYSDK_OFFSET(0x17E6C900)
#define CLASS_1_FA34F6BE161ACBE6_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E6C920)
#define CLASS_1_FA34F6BE161ACBE6_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E6C7F0)
#define CLASS_1_FA34F6BE161ACBE6_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E6CBC0)
#define CLASS_1_FA34F6BE161ACBE6_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E6CC20)
#define CLASS_1_FA34F6BE161ACBE6_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E6CF80)
#define CLASS_1_FA34F6BE161ACBE6_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E6C840)
#define CLASS_1_FA34F6BE161ACBE6_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6C800)

inline static constexpr unsigned int Class_1_FA34F6BE161ACBE6_3_TypeDefinitionIndex = 25464;

class Class_1_FA34F6BE161ACBE6_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA34F6BE161ACBE6_3_TypeDefinitionIndex)->GetStaticField(0x26B40);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA34F6BE161ACBE6_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA34F6BE161ACBE6_3*))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA34F6BE161ACBE6_3* Clone()
	{
		return ((::Class_1_FA34F6BE161ACBE6_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Method_1_6E8EADC4D1FD06E5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_METHOD_1_6E8EADC4D1FD06E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA34F6BE161ACBE6_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA34F6BE161ACBE6_3*))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA34F6BE161ACBE6_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA34F6BE161ACBE6_3*))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA34F6BE161ACBE6_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
