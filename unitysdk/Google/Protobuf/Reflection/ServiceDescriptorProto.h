#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class MethodDescriptorProto; }
namespace Google::Protobuf::Reflection { class ServiceOptions; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19798F00)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x19798640)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19798780)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x19798720)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19798990)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197981D0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x197986E0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x197985E0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x197986F0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19797CB0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x19798700)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19798170)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197995D0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19799130)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19798350)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19798690)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x19798710)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19798D30)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x19798D90)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x197997E0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19798400)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x197983B0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptorProto_TypeDefinitionIndex = 6281;

	class ServiceDescriptorProto : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServiceDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x64C0);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(ServiceDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x64C8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>** StaticGet__repeated_method_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(ServiceDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x64D0);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>* method_; // 0x18
		::System::String* name_; // 0x20
		::Google::Protobuf::Reflection::ServiceOptions* options_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::ServiceDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::ServiceDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>* get_Method()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_METHOD_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::ServiceOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::ServiceDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::ServiceDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
