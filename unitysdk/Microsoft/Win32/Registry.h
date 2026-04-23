#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class RegistryKey; }

#define MICROSOFT_WIN32_REGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x166AEE20)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Registry_TypeDefinitionIndex = 102;

	class Registry : public ::System::Object
	{
	public:
		static ::Microsoft::Win32::RegistryKey** StaticGet_ClassesRoot()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x16D0);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_CurrentConfig()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x16D8);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_PerformanceData()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x16E0);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_LocalMachine()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x16E8);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_Users()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x16F0);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_CurrentUser()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x16F8);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_DynData()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x1700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRY__CCTOR_OFFSET))();
		}
	};
}
