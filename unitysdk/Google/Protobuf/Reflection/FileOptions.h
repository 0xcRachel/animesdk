#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FileOptions_Types_OptimizeMode.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class ExtensionSet_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1540AC40)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x15403680)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15409920)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x154098C0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15404690)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCENABLEARENAS_OFFSET UNITYSDK_OFFSET(0x15409290)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409010)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CSHARPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x154093E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x15409210)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15408860)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_GOPACKAGE_OFFSET UNITYSDK_OFFSET(0x15408F40)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCCENABLEARENAS_OFFSET UNITYSDK_OFFSET(0x15409300)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCCGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409080)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCSHARPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x154094A0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x15409280)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASGOPACKAGE_OFFSET UNITYSDK_OFFSET(0x15409000)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAGENERATEEQUALSANDHASH_OFFSET UNITYSDK_OFFSET(0x15408E30)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409100)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAMULTIPLEFILES_OFFSET UNITYSDK_OFFSET(0x15408DB0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAOUTERCLASSNAME_OFFSET UNITYSDK_OFFSET(0x15408D30)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAPACKAGE_OFFSET UNITYSDK_OFFSET(0x15408C60)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVASTRINGCHECKUTF8_OFFSET UNITYSDK_OFFSET(0x15408EB0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASOBJCCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x154093D0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASOPTIMIZEFOR_OFFSET UNITYSDK_OFFSET(0x15408F30)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x15409640)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409200)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPMETADATANAMESPACE_OFFSET UNITYSDK_OFFSET(0x154097E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x15409710)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPYGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409180)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASRUBYPACKAGE_OFFSET UNITYSDK_OFFSET(0x154098B0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASSWIFTPREFIX_OFFSET UNITYSDK_OFFSET(0x15409570)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERATEEQUALSANDHASH_OFFSET UNITYSDK_OFFSET(0x15408DC0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409090)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAMULTIPLEFILES_OFFSET UNITYSDK_OFFSET(0x15408D40)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAOUTERCLASSNAME_OFFSET UNITYSDK_OFFSET(0x15408C70)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAPACKAGE_OFFSET UNITYSDK_OFFSET(0x15408BA0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVASTRINGCHECKUTF8_OFFSET UNITYSDK_OFFSET(0x15408E40)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OBJCCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x15409310)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OPTIMIZEFOR_OFFSET UNITYSDK_OFFSET(0x15408EC0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15408800)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x15409580)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409190)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPMETADATANAMESPACE_OFFSET UNITYSDK_OFFSET(0x15409720)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x15409650)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PYGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409110)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_RUBYPACKAGE_OFFSET UNITYSDK_OFFSET(0x154097F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_SWIFTPREFIX_OFFSET UNITYSDK_OFFSET(0x154094B0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1540BAD0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15406570)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x154089E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCENABLEARENAS_OFFSET UNITYSDK_OFFSET(0x154092F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409070)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CSHARPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x15409450)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x15409270)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_GOPACKAGE_OFFSET UNITYSDK_OFFSET(0x15408FB0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERATEEQUALSANDHASH_OFFSET UNITYSDK_OFFSET(0x15408E20)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x154090F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAMULTIPLEFILES_OFFSET UNITYSDK_OFFSET(0x15408DA0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAOUTERCLASSNAME_OFFSET UNITYSDK_OFFSET(0x15408CE0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAPACKAGE_OFFSET UNITYSDK_OFFSET(0x15408C10)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVASTRINGCHECKUTF8_OFFSET UNITYSDK_OFFSET(0x15408EA0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OBJCCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x15409380)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OPTIMIZEFOR_OFFSET UNITYSDK_OFFSET(0x15408F20)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPCLASSPREFIX_OFFSET UNITYSDK_OFFSET(0x154095F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x154091F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPMETADATANAMESPACE_OFFSET UNITYSDK_OFFSET(0x15409790)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x154096C0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PYGENERICSERVICES_OFFSET UNITYSDK_OFFSET(0x15409170)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_RUBYPACKAGE_OFFSET UNITYSDK_OFFSET(0x15409860)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_SWIFTPREFIX_OFFSET UNITYSDK_OFFSET(0x15409520)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1540A070)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1540A0D0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1540C0E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15408A40)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x15406520)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileOptions_TypeDefinitionIndex = 6175;

	class FileOptions : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_JavaPackageDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFD70);
		}
		static ::System::String** StaticGet_GoPackageDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFD78);
		}
		static ::System::String** StaticGet_PhpClassPrefixDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFD80);
		}
		static ::System::String** StaticGet_PhpMetadataNamespaceDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFD88);
		}
		static ::System::String** StaticGet_CsharpNamespaceDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFD90);
		}
		static ::System::String** StaticGet_RubyPackageDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFD98);
		}
		static ::System::String** StaticGet_PhpNamespaceDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFDA0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFDA8);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileOptions*>**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFDB0);
		}
		static ::System::String** StaticGet_SwiftPrefixDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFDB8);
		}
		static ::System::String** StaticGet_JavaOuterClassnameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFDC0);
		}
		static ::System::String** StaticGet_ObjcClassPrefixDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0xFDC8);
		}
		static ::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode* StaticGet_OptimizeForDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44C0);
		}
		static ::System::Boolean* StaticGet_CcEnableArenasDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44C4);
		}
		static ::System::Boolean* StaticGet_JavaGenericServicesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44C5);
		}
		static ::System::Boolean* StaticGet_JavaGenerateEqualsAndHashDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44C6);
		}
		static ::System::Boolean* StaticGet_CcGenericServicesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44C7);
		}
		static ::System::Boolean* StaticGet_PhpGenericServicesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44C8);
		}
		static ::System::Boolean* StaticGet_JavaMultipleFilesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44C9);
		}
		static ::System::Boolean* StaticGet_JavaStringCheckUtf8DefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44CA);
		}
		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44CB);
		}
		static ::System::Boolean* StaticGet_PyGenericServicesDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FileOptions_TypeDefinitionIndex)->GetStaticField(0x44CC);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::String* javaOuterClassname_; // 0x18
		::System::String* phpMetadataNamespace_; // 0x20
		::System::String* rubyPackage_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x30
		::System::String* csharpNamespace_; // 0x38
		::System::String* phpNamespace_; // 0x40
		::System::String* objcClassPrefix_; // 0x48
		::System::String* javaPackage_; // 0x50
		::System::String* goPackage_; // 0x58
		::System::String* phpClassPrefix_; // 0x60
		::System::String* swiftPrefix_; // 0x68
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::FileOptions*>* _extensions; // 0x70
		::System::Int32 _hasBits0; // 0x78
		::System::Boolean javaStringCheckUtf8_; // 0x7C
		::System::Boolean phpGenericServices_; // 0x7D
		::System::Boolean ccGenericServices_; // 0x7E
		::System::Boolean javaGenerateEqualsAndHash_; // 0x7F
		::System::Boolean javaMultipleFiles_; // 0x80
		::System::Boolean deprecated_; // 0x81
		::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode optimizeFor_; // 0x84
		::System::Boolean ccEnableArenas_; // 0x88
		::System::Boolean javaGenericServices_; // 0x89
		::System::Boolean pyGenericServices_; // 0x8A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::FileOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::FileOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::String* get_JavaPackage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAPACKAGE_OFFSET))(this);
		}

		::System::Void set_JavaPackage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAPACKAGE_OFFSET))(this, value);
		}

		::System::Boolean get_HasJavaPackage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAPACKAGE_OFFSET))(this);
		}

		::System::String* get_JavaOuterClassname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAOUTERCLASSNAME_OFFSET))(this);
		}

		::System::Void set_JavaOuterClassname(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAOUTERCLASSNAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasJavaOuterClassname()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAOUTERCLASSNAME_OFFSET))(this);
		}

		::System::Boolean get_JavaMultipleFiles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAMULTIPLEFILES_OFFSET))(this);
		}

		::System::Void set_JavaMultipleFiles(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAMULTIPLEFILES_OFFSET))(this, value);
		}

		::System::Boolean get_HasJavaMultipleFiles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAMULTIPLEFILES_OFFSET))(this);
		}

		::System::Boolean get_JavaGenerateEqualsAndHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERATEEQUALSANDHASH_OFFSET))(this);
		}

		::System::Void set_JavaGenerateEqualsAndHash(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERATEEQUALSANDHASH_OFFSET))(this, value);
		}

		::System::Boolean get_HasJavaGenerateEqualsAndHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAGENERATEEQUALSANDHASH_OFFSET))(this);
		}

		::System::Boolean get_JavaStringCheckUtf8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVASTRINGCHECKUTF8_OFFSET))(this);
		}

		::System::Void set_JavaStringCheckUtf8(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVASTRINGCHECKUTF8_OFFSET))(this, value);
		}

		::System::Boolean get_HasJavaStringCheckUtf8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVASTRINGCHECKUTF8_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode get_OptimizeFor()
		{
			return ((::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OPTIMIZEFOR_OFFSET))(this);
		}

		::System::Void set_OptimizeFor(::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileOptions_Types_OptimizeMode))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OPTIMIZEFOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasOptimizeFor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASOPTIMIZEFOR_OFFSET))(this);
		}

		::System::String* get_GoPackage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_GOPACKAGE_OFFSET))(this);
		}

		::System::Void set_GoPackage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_GOPACKAGE_OFFSET))(this, value);
		}

		::System::Boolean get_HasGoPackage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASGOPACKAGE_OFFSET))(this);
		}

		::System::Boolean get_CcGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_CcGenericServices(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCGENERICSERVICES_OFFSET))(this, value);
		}

		::System::Boolean get_HasCcGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCCGENERICSERVICES_OFFSET))(this);
		}

		::System::Boolean get_JavaGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_JAVAGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_JavaGenericServices(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_JAVAGENERICSERVICES_OFFSET))(this, value);
		}

		::System::Boolean get_HasJavaGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASJAVAGENERICSERVICES_OFFSET))(this);
		}

		::System::Boolean get_PyGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PYGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_PyGenericServices(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PYGENERICSERVICES_OFFSET))(this, value);
		}

		::System::Boolean get_HasPyGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPYGENERICSERVICES_OFFSET))(this);
		}

		::System::Boolean get_PhpGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPGENERICSERVICES_OFFSET))(this);
		}

		::System::Void set_PhpGenericServices(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPGENERICSERVICES_OFFSET))(this, value);
		}

		::System::Boolean get_HasPhpGenericServices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPGENERICSERVICES_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean get_CcEnableArenas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CCENABLEARENAS_OFFSET))(this);
		}

		::System::Void set_CcEnableArenas(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CCENABLEARENAS_OFFSET))(this, value);
		}

		::System::Boolean get_HasCcEnableArenas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCCENABLEARENAS_OFFSET))(this);
		}

		::System::String* get_ObjcClassPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_OBJCCLASSPREFIX_OFFSET))(this);
		}

		::System::Void set_ObjcClassPrefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_OBJCCLASSPREFIX_OFFSET))(this, value);
		}

		::System::Boolean get_HasObjcClassPrefix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASOBJCCLASSPREFIX_OFFSET))(this);
		}

		::System::String* get_CsharpNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_CSHARPNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CsharpNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_CSHARPNAMESPACE_OFFSET))(this, value);
		}

		::System::Boolean get_HasCsharpNamespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASCSHARPNAMESPACE_OFFSET))(this);
		}

		::System::String* get_SwiftPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_SWIFTPREFIX_OFFSET))(this);
		}

		::System::Void set_SwiftPrefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_SWIFTPREFIX_OFFSET))(this, value);
		}

		::System::Boolean get_HasSwiftPrefix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASSWIFTPREFIX_OFFSET))(this);
		}

		::System::String* get_PhpClassPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPCLASSPREFIX_OFFSET))(this);
		}

		::System::Void set_PhpClassPrefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPCLASSPREFIX_OFFSET))(this, value);
		}

		::System::Boolean get_HasPhpClassPrefix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPCLASSPREFIX_OFFSET))(this);
		}

		::System::String* get_PhpNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPNAMESPACE_OFFSET))(this);
		}

		::System::Void set_PhpNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPNAMESPACE_OFFSET))(this, value);
		}

		::System::Boolean get_HasPhpNamespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPNAMESPACE_OFFSET))(this);
		}

		::System::String* get_PhpMetadataNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_PHPMETADATANAMESPACE_OFFSET))(this);
		}

		::System::Void set_PhpMetadataNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_PHPMETADATANAMESPACE_OFFSET))(this, value);
		}

		::System::Boolean get_HasPhpMetadataNamespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASPHPMETADATANAMESPACE_OFFSET))(this);
		}

		::System::String* get_RubyPackage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_RUBYPACKAGE_OFFSET))(this);
		}

		::System::Void set_RubyPackage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_SET_RUBYPACKAGE_OFFSET))(this, value);
		}

		::System::Boolean get_HasRubyPackage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GET_HASRUBYPACKAGE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::FileOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::FileOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
