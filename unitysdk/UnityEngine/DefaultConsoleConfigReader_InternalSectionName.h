#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET UNITYSDK_OFFSET(0x18A159E0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A186D0)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex = 3874;

	class DefaultConsoleConfigReader_InternalSectionName : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Import()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x34B00);
		}
		static ::System::String** StaticGet_ModelNameRegEx()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x34B08);
		}
		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x34B10);
		}
		static ::System::String** StaticGet_Condition()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x34B18);
		}
		static ::System::String** StaticGet_IsCloudPlatform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x34B20);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_buildInSectionNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x34B28);
		}
		static ::System::String** StaticGet_CVar()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x34B30);
		}
		static ::System::String** StaticGet_AsComponent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x34B38);
		}
		static ::System::String** StaticGet_IsEditor()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x34B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsBuildIn(::System::String* sectionName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET))(sectionName);
		}
	};
}
