#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFDictionary; }

#define MONO_NET_CFPROXYSETTINGS_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x18671320)
#define MONO_NET_CFPROXYSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18670D40)
#define MONO_NET_CFPROXYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1866DA70)

namespace Mono::Net
{
	inline static constexpr unsigned int CFProxySettings_TypeDefinitionIndex = 2404;

	class CFProxySettings : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPEnable()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0xBAB0);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigJavaScript()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0xBAB8);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPPort()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0xBAC0);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigEnable()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0xBAC8);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPProxy()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0xBAD0);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigURLString()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0xBAD8);
		}
		::Mono::Net::CFDictionary* settings; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Mono::Net::CFDictionary* settings)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::CFDictionary*))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS__CTOR_OFFSET))(this, settings);
		}

		::Mono::Net::CFDictionary* get_Dictionary()
		{
			return ((::Mono::Net::CFDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_DICTIONARY_OFFSET))(this);
		}
	};
}
