#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_INSTANCE_OFFSET UNITYSDK_OFFSET(0x821ADD0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x821AFC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONSHOW_OFFSET UNITYSDK_OFFSET(0x821AF00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING__CTOR_OFFSET UNITYSDK_OFFSET(0x821AE80)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonLoading_TypeDefinitionIndex = 36488;

	class HoYoSDKCommonLoading : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKCommonLoading_TypeDefinitionIndex)->GetStaticField(0x7890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONCLOSE_OFFSET))(this);
		}
	};
}
