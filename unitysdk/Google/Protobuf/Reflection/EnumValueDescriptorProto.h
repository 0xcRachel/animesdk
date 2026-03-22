#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class EnumValueOptions; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x153F64D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x153F5BC0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x153F5D90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x153F5D30)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x153F5FF0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x153F58E0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x153F5CE0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASNUMBER_OFFSET UNITYSDK_OFFSET(0x153F5D00)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x153F5B60)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x153F5720)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x153F5810)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x153F5D10)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x153F5880)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x153F6AE0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x153F67A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x153F5A60)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x153F5C90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x153F5CF0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x153F5D20)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x153F6310)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x153F6370)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x153F6CB0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x153F5AD0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x153F5AC0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueDescriptorProto_TypeDefinitionIndex = 6169;

	class EnumValueDescriptorProto : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnumValueDescriptorProto_TypeDefinitionIndex)->GetStaticField(0xF440);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(EnumValueDescriptorProto_TypeDefinitionIndex)->GetStaticField(0xF448);
		}
		static ::System::Int32* StaticGet_NumberDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumValueDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x4360);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Reflection::EnumValueOptions* options_; // 0x18
		::System::String* name_; // 0x20
		::System::Int32 number_; // 0x28
		::System::Int32 _hasBits0; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumValueDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::EnumValueDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NUMBER_OFFSET))(this, value);
		}

		::System::Boolean get_HasNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASNUMBER_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::EnumValueOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::EnumValueOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumValueDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumValueDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
