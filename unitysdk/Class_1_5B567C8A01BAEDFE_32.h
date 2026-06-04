#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_32_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B2A3C70)
#define CLASS_1_5B567C8A01BAEDFE_32_CLONE_OFFSET UNITYSDK_OFFSET(0x1B2A3A80)
#define CLASS_1_5B567C8A01BAEDFE_32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B2A3B80)
#define CLASS_1_5B567C8A01BAEDFE_32_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B2A3AF0)
#define CLASS_1_5B567C8A01BAEDFE_32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B2A3BD0)
#define CLASS_1_5B567C8A01BAEDFE_32_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B2A3CC0)
#define CLASS_1_5B567C8A01BAEDFE_32_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B2A3C90)
#define CLASS_1_5B567C8A01BAEDFE_32_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1B2A39D0)
#define CLASS_1_5B567C8A01BAEDFE_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B2A3A30)
#define CLASS_1_5B567C8A01BAEDFE_32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2A3C00)
#define CLASS_1_5B567C8A01BAEDFE_32_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B2A3C60)
#define CLASS_1_5B567C8A01BAEDFE_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2A3D10)
#define CLASS_1_5B567C8A01BAEDFE_32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2A3A50)
#define CLASS_1_5B567C8A01BAEDFE_32__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A3A40)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_32_TypeDefinitionIndex = 25026;

class Class_1_5B567C8A01BAEDFE_32 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_32*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_32*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_32_TypeDefinitionIndex)->GetStaticField(0x2E5A0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_32*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_32*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_32*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_32* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_32*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_32*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_32_MERGEFROM_1_OFFSET))(this, a1);
	}
};
