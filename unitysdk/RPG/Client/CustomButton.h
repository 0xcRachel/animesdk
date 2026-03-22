#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/UnityEngine/UI/Button.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_CUSTOMBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x8FEE5D0)
#define RPG_CLIENT_CUSTOMBUTTON_GET_ISFORBIDBUTTONCHECK_OFFSET UNITYSDK_OFFSET(0x8FEF570)
#define RPG_CLIENT_CUSTOMBUTTON_GET__CANHOVER_OFFSET UNITYSDK_OFFSET(0x8FEE850)
#define RPG_CLIENT_CUSTOMBUTTON_IGNOREPOINTDISTANCECHECK_OFFSET UNITYSDK_OFFSET(0x8FEE340)
#define RPG_CLIENT_CUSTOMBUTTON_ISPOINTINRECT_OFFSET UNITYSDK_OFFSET(0x8FEDFB0)
#define RPG_CLIENT_CUSTOMBUTTON_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x8FEF330)
#define RPG_CLIENT_CUSTOMBUTTON_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x8FEF010)
#define RPG_CLIENT_CUSTOMBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x8FEE690)
#define RPG_CLIENT_CUSTOMBUTTON_ONSELECT_OFFSET UNITYSDK_OFFSET(0x8FEF190)
#define RPG_CLIENT_CUSTOMBUTTON_POSTBUTTONSOUND_OFFSET UNITYSDK_OFFSET(0x8FEE3B0)
#define RPG_CLIENT_CUSTOMBUTTON_SETMOBILEHOVERENABLE_OFFSET UNITYSDK_OFFSET(0x8FEF440)
#define RPG_CLIENT_CUSTOMBUTTON_SET_ISFORBIDBUTTONCHECK_OFFSET UNITYSDK_OFFSET(0x8FEF580)
#define RPG_CLIENT_CUSTOMBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x8FEF590)
#define RPG_CLIENT_CUSTOMBUTTON__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0x8FEF4E0)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x8FEF5B0)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_IGNOREPOINTDISTANCECHECK_OFFSET UNITYSDK_OFFSET(0x8FEF7A0)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x8FEF6F0)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x8FEF860)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x8FEF7B0)
#define RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0x8FEF640)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomButton_TypeDefinitionIndex = 57799;

	class CustomButton : public ::UnityEngine::UI::Button
	{
	public:
		::System::Boolean _IsFirstSet; // 0x110
		::System::Boolean _IsForbidButtonCheck; // 0x111
		::UnityEngine::RectTransform* _TmpRect; // 0x118
		::System::Boolean _EnableMobileHover; // 0x120
		::System::Boolean IsSelectDisabled; // 0x121
		::RPG::Client::CustomButton_VoidDelegate* onSelectTrigger; // 0x128
		::RPG::Client::CustomButton_VoidDelegate* onDeselectTrigger; // 0x130
		::RPG::Client::CustomButton_VoidDelegate* onPointerEnterTrigger; // 0x138
		::RPG::Client::CustomButton_VoidDelegate* onPointerExitTrigger; // 0x140
		::System::Boolean IsSelectedByController; // 0x148
		::RPG::Client::UIButtonSoundType SoundType; // 0x14C
		::System::String* SpecialSoundEvent; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPointInRect(::UnityEngine::Vector2 point, ::System::Single padding)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ISPOINTINRECT_OFFSET))(this, point, padding);
		}

		::System::Boolean IgnorePointDistanceCheck(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_IGNOREPOINTDISTANCECHECK_OFFSET))(this, pointerEventData);
		}

		::System::Void PostButtonSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_POSTBUTTONSOUND_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_AWAKE_OFFSET))(this);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void SetMobileHoverEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_SETMOBILEHOVERENABLE_OFFSET))(this, enable);
		}

		::System::Void _InitNavigationMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON__INITNAVIGATIONMODE_OFFSET))(this);
		}

		::System::Boolean get__CanHover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_GET__CANHOVER_OFFSET))(this);
		}

		::System::Boolean get_IsForbidButtonCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_GET_ISFORBIDBUTTONCHECK_OFFSET))(this);
		}

		::System::Void set_IsForbidButtonCheck(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_SET_ISFORBIDBUTTONCHECK_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONSELECT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDeselect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONDESELECT_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_IgnorePointDistanceCheck(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_IGNOREPOINTDISTANCECHECK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___IFIXBASEPROXY_ONPOINTERENTER_OFFSET))(this, P0);
		}
	};
}
