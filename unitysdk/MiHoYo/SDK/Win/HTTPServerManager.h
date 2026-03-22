#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class MiHoYoSDKHTTPServer; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x159F8240)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_SETHTTPSERVERENABLE_OFFSET UNITYSDK_OFFSET(0x159F8210)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_START_OFFSET UNITYSDK_OFFSET(0x159F84E0)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_STOP_OFFSET UNITYSDK_OFFSET(0x159F8720)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x159F8A10)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x159F8A00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int HTTPServerManager_TypeDefinitionIndex = 7908;

	class HTTPServerManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::MiHoYoSDKHTTPServer** StaticGet_server()
		{
			return (::MiHoYo::SDK::Win::MiHoYoSDKHTTPServer**)Il2CppClass::FromTypeDefinitionIndex(HTTPServerManager_TypeDefinitionIndex)->GetStaticField(0x1A580);
		}
		static ::MiHoYo::SDK::Win::HTTPServerManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::HTTPServerManager**)Il2CppClass::FromTypeDefinitionIndex(HTTPServerManager_TypeDefinitionIndex)->GetStaticField(0x1A588);
		}
		static ::System::Boolean* StaticGet_isUsingHttpServer()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HTTPServerManager_TypeDefinitionIndex)->GetStaticField(0x6390);
		}
		// static const ::System::String* ServerResourcesPath; // 0x0
		// static const ::System::Int32 Port = 0x4C5; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetHttpServerEnable(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_SETHTTPSERVERENABLE_OFFSET))(this, enabled);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_STOP_OFFSET))(this);
		}
	};
}
