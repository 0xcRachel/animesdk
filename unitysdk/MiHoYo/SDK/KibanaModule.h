#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_KIBANAMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F31300)
#define MIHOYO_SDK_KIBANAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F312F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaModule_TypeDefinitionIndex = 6585;

	class KibanaModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Test()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE770);
		}
		static ::System::String** StaticGet_SecurityServerTCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE778);
		}
		static ::System::String** StaticGet_Cloud()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE780);
		}
		static ::System::String** StaticGet_PSBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE788);
		}
		static ::System::String** StaticGet_NATIVE_TASK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE790);
		}
		static ::System::String** StaticGet_LAUNCH_PROTOCOL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE798);
		}
		static ::System::String** StaticGet_Default()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7A0);
		}
		static ::System::String** StaticGet_Watermark()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7A8);
		}
		static ::System::String** StaticGet_Login()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7B0);
		}
		static ::System::String** StaticGet_Exception()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7B8);
		}
		static ::System::String** StaticGet_AGEGATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7C0);
		}
		static ::System::String** StaticGet_PS()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7C8);
		}
		static ::System::String** StaticGet_Webview()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7D0);
		}
		static ::System::String** StaticGet_Download()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7D8);
		}
		static ::System::String** StaticGet_UGC()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7E0);
		}
		static ::System::String** StaticGet_Epic()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7E8);
		}
		static ::System::String** StaticGet_SecurityServerKCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7F0);
		}
		static ::System::String** StaticGet_CXLogin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE7F8);
		}
		static ::System::String** StaticGet_Pay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE800);
		}
		static ::System::String** StaticGet_SecurityServer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE808);
		}
		static ::System::String** StaticGet_Network()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE810);
		}
		static ::System::String** StaticGet_HttpDns()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE818);
		}
		static ::System::String** StaticGet_Function()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE820);
		}
		static ::System::String** StaticGet_APM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE828);
		}
		static ::System::String** StaticGet_Notify()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE830);
		}
		static ::System::String** StaticGet_CXBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE838);
		}
		static ::System::String** StaticGet_RegionTranslation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE840);
		}
		static ::System::String** StaticGet_Windows()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE848);
		}
		static ::System::String** StaticGet_DeviceFp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE850);
		}
		static ::System::String** StaticGet_BiliBili()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE858);
		}
		static ::System::String** StaticGet_CX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE860);
		}
		static ::System::String** StaticGet_Notice()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE868);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAMODULE__CCTOR_OFFSET))();
		}
	};
}
