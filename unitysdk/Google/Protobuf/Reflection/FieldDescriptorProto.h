#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldDescriptorProto_Types_Label.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldDescriptorProto_Types_Type.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class FieldOptions; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17ECC2D0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x17ECAA60)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17ECADB0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17ECAD50)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17ECB2F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x17ECAC00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ECA770)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x17ECA300)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x17ECA2F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASEXTENDEE_OFFSET UNITYSDK_OFFSET(0x17EB72E0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASJSONNAME_OFFSET UNITYSDK_OFFSET(0x17ECAD20)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASLABEL_OFFSET UNITYSDK_OFFSET(0x17ECAB40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x17ECAB00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNUMBER_OFFSET UNITYSDK_OFFSET(0x17ECAB20)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x17EC9F00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x17ECAA00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPENAME_OFFSET UNITYSDK_OFFSET(0x17ECA260)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPE_OFFSET UNITYSDK_OFFSET(0x17ECA2E0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x17EC9FE0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x17ECA060)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17EC9DC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x17ECA0D0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x17EC9F10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x17ECAD30)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17ECA710)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x17ECA270)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17EC9E30)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17ECD810)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17ECCE30)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ECA8F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x17ECAC70)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x17ECABB0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x17ECACD0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_LABEL_OFFSET UNITYSDK_OFFSET(0x17ECAB30)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17ECAAB0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x17ECAB10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x17ECACC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x17ECAD40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x17ECAB60)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x17ECAB50)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ECBD30)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x17ECBD90)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ECDB10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ECA960)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECA950)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptorProto_TypeDefinitionIndex = 6267;

	class FieldDescriptorProto : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DefaultValueDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x5A10);
		}
		static ::System::String** StaticGet_ExtendeeDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x5A18);
		}
		static ::System::String** StaticGet_TypeNameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x5A20);
		}
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x5A28);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x5A30);
		}
		static ::System::String** StaticGet_JsonNameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x5A38);
		}
		static ::System::Int32* StaticGet_OneofIndexDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1C40);
		}
		static ::System::Int32* StaticGet_NumberDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1C44);
		}
		static ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type* StaticGet_TypeDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type*)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1C48);
		}
		static ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label* StaticGet_LabelDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label*)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1C4C);
		}
		::System::String* typeName_; // 0x10
		::System::String* name_; // 0x18
		::System::String* extendee_; // 0x20
		::Google::Protobuf::Reflection::FieldOptions* options_; // 0x28
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x30
		::System::String* jsonName_; // 0x38
		::System::String* defaultValue_; // 0x40
		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label label_; // 0x48
		::System::Int32 oneofIndex_; // 0x4C
		::System::Int32 number_; // 0x50
		::System::Int32 _hasBits0; // 0x54
		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type type_; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::FieldDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NUMBER_OFFSET))(this, value);
		}

		::System::Boolean get_HasNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNUMBER_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label get_Label()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_LABEL_OFFSET))(this);
		}

		::System::Void set_Label(::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_LABEL_OFFSET))(this, value);
		}

		::System::Boolean get_HasLabel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASLABEL_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type get_Type()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean get_HasType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPE_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void set_TypeName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPENAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasTypeName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPENAME_OFFSET))(this);
		}

		::System::String* get_Extendee()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_EXTENDEE_OFFSET))(this);
		}

		::System::Void set_Extendee(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_EXTENDEE_OFFSET))(this, value);
		}

		::System::Boolean get_HasExtendee()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASEXTENDEE_OFFSET))(this);
		}

		::System::String* get_DefaultValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_DEFAULTVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_HasDefaultValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASDEFAULTVALUE_OFFSET))(this);
		}

		::System::Int32 get_OneofIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_ONEOFINDEX_OFFSET))(this);
		}

		::System::Void set_OneofIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_ONEOFINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_HasOneofIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASONEOFINDEX_OFFSET))(this);
		}

		::System::String* get_JsonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_JSONNAME_OFFSET))(this);
		}

		::System::Void set_JsonName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_JSONNAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasJsonName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASJSONNAME_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::FieldOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::FieldDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::FieldDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
