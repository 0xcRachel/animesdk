#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3BF4D371398AB9DB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1808ECE0)
#define CLASS_1_3BF4D371398AB9DB_CLONE_OFFSET UNITYSDK_OFFSET(0x1808E990)
#define CLASS_1_3BF4D371398AB9DB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1808EAB0)
#define CLASS_1_3BF4D371398AB9DB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1808E9D0)
#define CLASS_1_3BF4D371398AB9DB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1808EB60)
#define CLASS_1_3BF4D371398AB9DB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1808EE20)
#define CLASS_1_3BF4D371398AB9DB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1808ED80)
#define CLASS_1_3BF4D371398AB9DB_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1808E9C0)
#define CLASS_1_3BF4D371398AB9DB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1808E8B0)
#define CLASS_1_3BF4D371398AB9DB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1808EBD0)
#define CLASS_1_3BF4D371398AB9DB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1808EC30)
#define CLASS_1_3BF4D371398AB9DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1808EED0)
#define CLASS_1_3BF4D371398AB9DB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1808E900)
#define CLASS_1_3BF4D371398AB9DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1808E8C0)

inline static constexpr unsigned int Class_1_3BF4D371398AB9DB_TypeDefinitionIndex = 26640;

class Class_1_3BF4D371398AB9DB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_96F6662CA3713095_24>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_96F6662CA3713095_24>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BF4D371398AB9DB_TypeDefinitionIndex)->GetStaticField(0x395C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_24>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3BF4D371398AB9DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BF4D371398AB9DB*))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3BF4D371398AB9DB* Clone()
	{
		return ((::Class_1_3BF4D371398AB9DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_24>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_24>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3BF4D371398AB9DB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3BF4D371398AB9DB*))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3BF4D371398AB9DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BF4D371398AB9DB*))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
