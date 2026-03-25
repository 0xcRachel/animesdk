#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8567D10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x8568DF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x8568920)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x85693E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0x85691B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONFORGETPWD_OFFSET UNITYSDK_OFFSET(0x85693A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONPHONELOGIN_OFFSET UNITYSDK_OFFSET(0x8568FA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONQRCODELOGIN_OFFSET UNITYSDK_OFFSET(0x8569130)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONREGISTER_OFFSET UNITYSDK_OFFSET(0x8569360)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSAVERECORDTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x8568EC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8567E40)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTAPTAPLOGIN_OFFSET UNITYSDK_OFFSET(0x8569170)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x8569050)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x85692E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERPRIVACY_OFFSET UNITYSDK_OFFSET(0x8569320)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_SHOW_OFFSET UNITYSDK_OFFSET(0x8567F00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x8567DC0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountLogin_TypeDefinitionIndex = 37420;

	class HoYoSDKAccountLogin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin_TypeDefinitionIndex)->GetStaticField(0x141A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_SHOW_OFFSET))(this);
		}

		::System::Void OnCloseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSECALLBACK_OFFSET))(this);
		}

		::System::Void OnSaveRecordToggleClicked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSAVERECORDTOGGLECLICKED_OFFSET))(this, value);
		}

		::System::Void OnPhoneLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONPHONELOGIN_OFFSET))(this);
		}

		::System::Void OnToggleClicked(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTOGGLECLICKED_OFFSET))(this, isOn);
		}

		::System::Void OnQRCodeLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONQRCODELOGIN_OFFSET))(this);
		}

		::System::Void OnTapTapLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTAPTAPLOGIN_OFFSET))(this);
		}

		::System::Void OnEnterGame(::System::String* account, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONENTERGAME_OFFSET))(this, account, password);
		}

		::System::Void OnUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void OnUserPrivacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERPRIVACY_OFFSET))(this);
		}

		::System::Void OnRegister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONREGISTER_OFFSET))(this);
		}

		::System::Void OnForgetPwd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONFORGETPWD_OFFSET))(this);
		}

		::System::Void OnElementStatusChanged(::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONELEMENTSTATUSCHANGED_OFFSET))(this, strElementID, strStatusName, strStatusValue);
		}
	};
}
