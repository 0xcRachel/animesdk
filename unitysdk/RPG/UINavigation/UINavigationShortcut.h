#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationInControlAction.h"

namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine::UI { class Selectable; }

#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x16F25B00)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0x16F262C0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x16F263D0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ISSUBMITACTION_OFFSET UNITYSDK_OFFSET(0x16F26340)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ONINCONTROLACTIONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x16F26420)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_SHOULDSHOWINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0x16F25DD0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_UPDATE_OFFSET UNITYSDK_OFFSET(0x16F25D40)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F264A0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__HASVALIDACTIONNAME_OFFSET UNITYSDK_OFFSET(0x16F25FC0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__ISSHORTCUTINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x16F260F0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__ISSHOWTIP_OFFSET UNITYSDK_OFFSET(0x16F26030)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x16F26510)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0x16F265A0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_ONINCONTROLACTIONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x16F265F0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT___IFIXBASEPROXY_SHOULDSHOWINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0x16F26560)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationShortcut_TypeDefinitionIndex = 47803;

	class UINavigationShortcut : public ::RPG::UINavigation::UINavigationInControlAction
	{
	public:
		// static const ::System::String* SUBMIT_ACTION_NAME; // 0x0
		::RPG::Client::MonoInControlTip* MonoInControlTip; // 0x50
		::RPG::Client::MonoInControlButton* MonoInControlButton; // 0x58
		::UnityEngine::UI::Selectable* _TargetSelectable; // 0x60
		::System::Boolean _LastInteractable; // 0x68

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

		::System::Boolean IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ISINTERACTABLE_OFFSET))(this);
		}

		::System::Void OnInControlActionStatusChange(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ONINCONTROLACTIONSTATUSCHANGE_OFFSET))(this, active);
		}

		::System::Boolean _HasValidActionName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__HASVALIDACTIONNAME_OFFSET))(this);
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
