#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_230_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AC0C000)
#define CLASS_1_5B567C8A01BAEDFE_230_CLONE_OFFSET UNITYSDK_OFFSET(0x1AC0BE70)
#define CLASS_1_5B567C8A01BAEDFE_230_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AC0BF10)
#define CLASS_1_5B567C8A01BAEDFE_230_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AC0BEB0)
#define CLASS_1_5B567C8A01BAEDFE_230_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AC0BF60)
#define CLASS_1_5B567C8A01BAEDFE_230_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AC0C050)
#define CLASS_1_5B567C8A01BAEDFE_230_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AC0C020)
#define CLASS_1_5B567C8A01BAEDFE_230_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AC0BDF0)
#define CLASS_1_5B567C8A01BAEDFE_230_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AC0BE20)
#define CLASS_1_5B567C8A01BAEDFE_230_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC0BF90)
#define CLASS_1_5B567C8A01BAEDFE_230_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AC0BFF0)
#define CLASS_1_5B567C8A01BAEDFE_230__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC0C0A0)
#define CLASS_1_5B567C8A01BAEDFE_230__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC0BE40)
#define CLASS_1_5B567C8A01BAEDFE_230__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC0BE30)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_230_TypeDefinitionIndex = 29495;

class Class_1_5B567C8A01BAEDFE_230 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_230*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_230*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_230_TypeDefinitionIndex)->GetStaticField(0x13C80);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_230*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_230*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_230*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_230* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_230*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_230*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_230*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_230_MERGEFROM_1_OFFSET))(this, a1);
	}
};
