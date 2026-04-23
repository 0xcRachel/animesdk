#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_INSTANCE_OFFSET UNITYSDK_OFFSET(0x170CDAD0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x170CDDD0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONOPERATION_OFFSET UNITYSDK_OFFSET(0x170CDEB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170CDC00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0x170CDCC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x170CDB80)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonConfirm_TypeDefinitionIndex = 43300;

	class HoYoSDKCommonConfirm : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonConfirm** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonConfirm**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKCommonConfirm_TypeDefinitionIndex)->GetStaticField(0x51070);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonConfirm* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonConfirm*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_SHOW_OFFSET))(this);
		}

		::System::Void OnOperation(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONOPERATION_OFFSET))(this, result);
		}
	};
}
