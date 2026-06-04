#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_886F39594BD4EAF9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B2B1A40)
#define CLASS_1_886F39594BD4EAF9_CLONE_OFFSET UNITYSDK_OFFSET(0x1B2B16F0)
#define CLASS_1_886F39594BD4EAF9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B2B1810)
#define CLASS_1_886F39594BD4EAF9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B2B1730)
#define CLASS_1_886F39594BD4EAF9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B2B18C0)
#define CLASS_1_886F39594BD4EAF9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B2B1B80)
#define CLASS_1_886F39594BD4EAF9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B2B1AE0)
#define CLASS_1_886F39594BD4EAF9_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1B2B1720)
#define CLASS_1_886F39594BD4EAF9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1B2B15E0)
#define CLASS_1_886F39594BD4EAF9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B2B1610)
#define CLASS_1_886F39594BD4EAF9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2B1930)
#define CLASS_1_886F39594BD4EAF9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B2B1990)
#define CLASS_1_886F39594BD4EAF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2B1D30)
#define CLASS_1_886F39594BD4EAF9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2B1660)
#define CLASS_1_886F39594BD4EAF9__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B1620)

inline static constexpr unsigned int Class_1_886F39594BD4EAF9_TypeDefinitionIndex = 31427;

class Class_1_886F39594BD4EAF9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_96F6662CA3713095_24>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_96F6662CA3713095_24>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_886F39594BD4EAF9_TypeDefinitionIndex)->GetStaticField(0x11AB0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_886F39594BD4EAF9*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_886F39594BD4EAF9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_886F39594BD4EAF9_TypeDefinitionIndex)->GetStaticField(0x11AB8);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_24>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_886F39594BD4EAF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_886F39594BD4EAF9*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_886F39594BD4EAF9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_886F39594BD4EAF9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_886F39594BD4EAF9* Clone()
	{
		return ((::Class_1_886F39594BD4EAF9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_24>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_24>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_886F39594BD4EAF9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_886F39594BD4EAF9*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_886F39594BD4EAF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_886F39594BD4EAF9*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
