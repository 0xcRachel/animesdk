#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_158_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19F7B320)
#define CLASS_1_5B567C8A01BAEDFE_158_CLONE_OFFSET UNITYSDK_OFFSET(0x19F7B190)
#define CLASS_1_5B567C8A01BAEDFE_158_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19F7B230)
#define CLASS_1_5B567C8A01BAEDFE_158_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F7B1D0)
#define CLASS_1_5B567C8A01BAEDFE_158_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F7B280)
#define CLASS_1_5B567C8A01BAEDFE_158_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19F7B370)
#define CLASS_1_5B567C8A01BAEDFE_158_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19F7B340)
#define CLASS_1_5B567C8A01BAEDFE_158_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19F7B110)
#define CLASS_1_5B567C8A01BAEDFE_158_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19F7B140)
#define CLASS_1_5B567C8A01BAEDFE_158_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F7B2B0)
#define CLASS_1_5B567C8A01BAEDFE_158_WRITETO_OFFSET UNITYSDK_OFFSET(0x19F7B310)
#define CLASS_1_5B567C8A01BAEDFE_158__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F7B3C0)
#define CLASS_1_5B567C8A01BAEDFE_158__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F7B160)
#define CLASS_1_5B567C8A01BAEDFE_158__CTOR_OFFSET UNITYSDK_OFFSET(0x19F7B150)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_158_TypeDefinitionIndex = 27989;

class Class_1_5B567C8A01BAEDFE_158 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_158*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_158*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_158_TypeDefinitionIndex)->GetStaticField(0xE890);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_158* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_158*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_158*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_158*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_158* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_158*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_158* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_158*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_158* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_158*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_158_MERGEFROM_1_OFFSET))(this, a1);
	}
};
