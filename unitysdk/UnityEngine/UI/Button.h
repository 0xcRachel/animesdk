#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define UNITYENGINE_UI_BUTTON_FORBIDCLICK_OFFSET UNITYSDK_OFFSET(0x1823F6A0)
#define UNITYENGINE_UI_BUTTON_GET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1823F2C0)
#define UNITYENGINE_UI_BUTTON_IGNOREPOINTDISTANCECHECK_OFFSET UNITYSDK_OFFSET(0x1823F690)
#define UNITYENGINE_UI_BUTTON_ONFINISHSUBMIT_OFFSET UNITYSDK_OFFSET(0x1823F630)
#define UNITYENGINE_UI_BUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1823F390)
#define UNITYENGINE_UI_BUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1823F4F0)
#define UNITYENGINE_UI_BUTTON_PRESS_OFFSET UNITYSDK_OFFSET(0x1823F2E0)
#define UNITYENGINE_UI_BUTTON_SET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1823F2D0)
#define UNITYENGINE_UI_BUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1823F160)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Button_TypeDefinitionIndex = 5570;

	class Button : public ::UnityEngine::UI::Selectable
	{
	public:
		::UnityEngine::UI::Button_ButtonClickedEvent* m_OnClick; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Button_ButtonClickedEvent* get_onClick()
		{
			return ((::UnityEngine::UI::Button_ButtonClickedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_GET_ONCLICK_OFFSET))(this);
		}

		::System::Void set_onClick(::UnityEngine::UI::Button_ButtonClickedEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button_ButtonClickedEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_SET_ONCLICK_OFFSET))(this, value);
		}

		::System::Void Press()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_PRESS_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Collections::IEnumerator* OnFinishSubmit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_ONFINISHSUBMIT_OFFSET))(this);
		}

		::System::Boolean IgnorePointDistanceCheck(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_IGNOREPOINTDISTANCECHECK_OFFSET))(this, pointerEventData);
		}

		::System::Boolean ForbidClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_FORBIDCLICK_OFFSET))(this);
		}
	};
}
