#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIntroButton_ActivityIntroButtonConfig.h"
#include "unitysdk/RPG/Client/AnimatorButton.h"

namespace RPG::Client { class ActivityPanelData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_ACTIVITYINTROBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x8F5ADB0)
#define RPG_CLIENT_ACTIVITYINTROBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x8F5B040)
#define RPG_CLIENT_ACTIVITYINTROBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x8F5B160)
#define RPG_CLIENT_ACTIVITYINTROBUTTON__GETAVAILABLEACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x8F5B0A0)
#define RPG_CLIENT_ACTIVITYINTROBUTTON__SHOWINTRO_OFFSET UNITYSDK_OFFSET(0x8F5AE10)
#define RPG_CLIENT_ACTIVITYINTROBUTTON___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x8F5B1F0)
#define RPG_CLIENT_ACTIVITYINTROBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x8F5B200)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIntroButton_TypeDefinitionIndex = 59404;

	class ActivityIntroButton : public ::RPG::Client::AnimatorButton
	{
	public:
		::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig Config; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void _ShowIntro()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON__SHOWINTRO_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* _GetAvailableActivityPanelData()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON__GETAVAILABLEACTIVITYPANELDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSubmit(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINTROBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET))(this, P0);
		}
	};
}
