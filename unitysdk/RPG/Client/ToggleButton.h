#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomButton.h"
#include "unitysdk/RPG/Client/ToggleButton_InitialMemento.h"

namespace RPG::Client { class ToggleButtonGroup; }
namespace RPG::Client { class ToggleButton_ToggleEvent; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_TOGGLEBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x15167030)
#define RPG_CLIENT_TOGGLEBUTTON_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x151675A0)
#define RPG_CLIENT_TOGGLEBUTTON_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x15167BE0)
#define RPG_CLIENT_TOGGLEBUTTON_GET_ISON_OFFSET UNITYSDK_OFFSET(0x15167C50)
#define RPG_CLIENT_TOGGLEBUTTON_GET_PROTECTEDCD_OFFSET UNITYSDK_OFFSET(0x15167C60)
#define RPG_CLIENT_TOGGLEBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15167340)
#define RPG_CLIENT_TOGGLEBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15167210)
#define RPG_CLIENT_TOGGLEBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x15166920)
#define RPG_CLIENT_TOGGLEBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x15166E90)
#define RPG_CLIENT_TOGGLEBUTTON_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x15166B00)
#define RPG_CLIENT_TOGGLEBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x15166C10)
#define RPG_CLIENT_TOGGLEBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x15166FD0)
#define RPG_CLIENT_TOGGLEBUTTON_SETISONWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x151673D0)
#define RPG_CLIENT_TOGGLEBUTTON_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x15167BF0)
#define RPG_CLIENT_TOGGLEBUTTON_SET_ISON_OFFSET UNITYSDK_OFFSET(0x15167630)
#define RPG_CLIENT_TOGGLEBUTTON_SET_PROTECTEDCD_OFFSET UNITYSDK_OFFSET(0x15167C70)
#define RPG_CLIENT_TOGGLEBUTTON_SPAWNED_OFFSET UNITYSDK_OFFSET(0x15167560)
#define RPG_CLIENT_TOGGLEBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x15167C80)
#define RPG_CLIENT_TOGGLEBUTTON__INTERNALTOGGLE_OFFSET UNITYSDK_OFFSET(0x15166A40)
#define RPG_CLIENT_TOGGLEBUTTON__ISINPROTECTEDCD_OFFSET UNITYSDK_OFFSET(0x151669E0)
#define RPG_CLIENT_TOGGLEBUTTON__PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x15166D70)
#define RPG_CLIENT_TOGGLEBUTTON__RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x15167130)
#define RPG_CLIENT_TOGGLEBUTTON__SETTOGGLEGROUP_OFFSET UNITYSDK_OFFSET(0x15167270)
#define RPG_CLIENT_TOGGLEBUTTON__SET_OFFSET UNITYSDK_OFFSET(0x15167420)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x15167DB0)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15167DD0)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15167DC0)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x15167D60)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x15167D90)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x15167D70)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x15167D80)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x15167DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButton_TypeDefinitionIndex = 66970;

	class ToggleButton : public ::RPG::Client::CustomButton
	{
	public:
		::RPG::Client::ToggleButton_ToggleEvent* onValueChanged; // 0x158
		::System::Single _ProtectedCD_k__BackingField; // 0x160
		::RPG::Client::ToggleButtonGroup* _Group; // 0x168
		::System::Boolean _IsOn; // 0x170
		::System::Single _ProtectedCD; // 0x174
		::System::Single _LastClickTime; // 0x178
		::UnityEngine::Animator* _Animator; // 0x180
		::RPG::Client::ToggleButton_InitialMemento _InitialMemento; // 0x188
		::System::Int32 _HighlightedHash; // 0x18C
		::System::Int32 _PressedHash; // 0x190
		::System::Int32 _SelectedHash; // 0x194
		::System::Int32 _NormalHash; // 0x198
		::System::Int32 _IsSelectedHash; // 0x19C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetIsOnWithoutNotify(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_SETISONWITHOUTNOTIFY_OFFSET))(this, value);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_DESPAWNED_OFFSET))(this);
		}

		::System::Boolean _IsInProtectedCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__ISINPROTECTEDCD_OFFSET))(this);
		}

		::System::Void _InternalToggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__INTERNALTOGGLE_OFFSET))(this);
		}

		::System::Void _Set(::System::Boolean value, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__SET_OFFSET))(this, value, sendCallback);
		}

		::System::Void _ResetTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__RESETTRIGGER_OFFSET))(this);
		}

		::System::Void _PlayEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__PLAYEFFECT_OFFSET))(this);
		}

		::System::Void _SetToggleGroup(::RPG::Client::ToggleButtonGroup* newGroup, ::System::Boolean setMemberValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButtonGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__SETTOGGLEGROUP_OFFSET))(this, newGroup, setMemberValue);
		}

		::RPG::Client::ToggleButtonGroup* get_Group()
		{
			return ((::RPG::Client::ToggleButtonGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::RPG::Client::ToggleButtonGroup* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButtonGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_SET_GROUP_OFFSET))(this, value);
		}

		::System::Boolean get_IsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_GET_ISON_OFFSET))(this);
		}

		::System::Void set_IsOn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_SET_ISON_OFFSET))(this, value);
		}

		::System::Single get_ProtectedCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_GET_PROTECTEDCD_OFFSET))(this);
		}

		::System::Void set_ProtectedCD(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_SET_PROTECTEDCD_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERENTER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSubmit(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}
	};
}
