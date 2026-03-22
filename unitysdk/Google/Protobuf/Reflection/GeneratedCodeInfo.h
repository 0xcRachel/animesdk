#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class GeneratedCodeInfo_Types_Annotation; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1540CC20)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1540C810)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1540C970)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1540C860)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1540CA20)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1540C530)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1540C4D0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1540CD60)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1540CCC0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1540C6B0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1540CB10)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1540CB70)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1540CE40)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1540C760)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1540C710)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_TypeDefinitionIndex = 6208;

	class GeneratedCodeInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>** StaticGet__repeated_annotation_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_TypeDefinitionIndex)->GetStaticField(0x10010);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_TypeDefinitionIndex)->GetStaticField(0x10018);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>* annotation_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::GeneratedCodeInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::GeneratedCodeInfo* Clone()
		{
			return ((::Google::Protobuf::Reflection::GeneratedCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::GeneratedCodeInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::GeneratedCodeInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
