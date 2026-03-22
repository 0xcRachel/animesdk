#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationInControlAction.h"

namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }

#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA5D6290)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xA5D69D0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ISSUBMITACTION_OFFSET UNITYSDK_OFFSET(0xA5D6A50)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ONINCONTROLACTIONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xA5D6AE0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_SHOULDSHOWINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0xA5D65A0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_UPDATE_OFFSET UNITYSDK_OFFSET(0xA5D64B0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D6B60)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__ISSHORTCUTINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xA5D67F0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__ISSHOWTIP_OFFSET UNITYSDK_OFFSET(0xA5D6730)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xA5D6BD0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xA5D6C60)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_ONINCONTROLACTIONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xA5D6CB0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_SHOULDSHOWINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0xA5D6C20)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationShortcut_TypeDefinitionIndex = 40784;

	class UINavigationShortcut : public ::RPG::UINavigation::UINavigationInControlAction
	{
	public:
		// static const ::System::String* SUBMIT_ACTION_NAME; // 0x0
		::RPG::Client::MonoInControlTip* MonoInControlTip; // 0x48
		::RPG::Client::MonoInControlButton* MonoInControlButton; // 0x50
		::UnityEngine::UI::Button* _Button; // 0x58
		::System::Boolean _IsButtonInteractable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_UPDATE_OFFSET))(this);
		}

		::System::Boolean ShouldShowInControlActionHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_SHOULDSHOWINCONTROLACTIONHINT_OFFSET))(this);
		}

		::System::String* GetActionHintName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_GETACTIONHINTNAME_OFFSET))(this);
		}

		::System::Boolean IsSubmitAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ISSUBMITACTION_OFFSET))(this);
		}

		::System::Void OnInControlActionStatusChange(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ONINCONTROLACTIONSTATUSCHANGE_OFFSET))(this, active);
		}

		::System::Boolean _IsShowTip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__ISSHOWTIP_OFFSET))(this);
		}

		::System::Boolean _IsShortcutInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__ISSHORTCUTINTERACTABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_ShouldShowInControlActionHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_SHOULDSHOWINCONTROLACTIONHINT_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetActionHintName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_GETACTIONHINTNAME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInControlActionStatusChange(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_ONINCONTROLACTIONSTATUSCHANGE_OFFSET))(this, P0);
		}
	};
}
