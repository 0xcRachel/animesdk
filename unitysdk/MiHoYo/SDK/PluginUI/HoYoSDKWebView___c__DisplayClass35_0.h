#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK::PluginUI { class HoYoSDKWebView_CookieInfo; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8228C50)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW___C__DISPLAYCLASS35_0__SETCOOKIES_B__0_OFFSET UNITYSDK_OFFSET(0x8228E90)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKWebView___c__DisplayClass35_0_TypeDefinitionIndex = 36517;

	class HoYoSDKWebView___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKWebView* webview; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetCookies_b__0(::MiHoYo::SDK::PluginUI::HoYoSDKWebView_CookieInfo* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::HoYoSDKWebView_CookieInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW___C__DISPLAYCLASS35_0__SETCOOKIES_B__0_OFFSET))(this, cookie);
		}
	};
}
