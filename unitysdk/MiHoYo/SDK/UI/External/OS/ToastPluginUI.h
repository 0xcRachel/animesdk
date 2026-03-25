#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_GET_ONTOASTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x16023950)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_SET_ONTOASTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x16023940)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x16023960)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x16023C40)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x16023C50)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int ToastPluginUI_TypeDefinitionIndex = 7368;

	class ToastPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnToastCompleted_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Void set_OnToastCompleted(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_SET_ONTOASTCOMPLETED_OFFSET))(this, value);
		}

		::System::Action* get_OnToastCompleted()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_GET_ONTOASTCOMPLETED_OFFSET))(this);
		}

		::System::Void Show(::System::String* message, ::System::Single delayTime, ::System::Boolean isPositive)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_SHOW_OFFSET))(this, message, delayTime, isPositive);
		}

		::System::Void _Show_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI__SHOW_B__4_0_OFFSET))(this);
		}
	};
}
