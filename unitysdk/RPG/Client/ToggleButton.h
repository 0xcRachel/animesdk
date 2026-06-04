#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomButton.h"
#include "unitysdk/RPG/Client/ToggleButton_InitialMemento.h"

namespace RPG::Client { class ToggleButtonGroup; }
namespace RPG::Client { class ToggleButton_ToggleEvent; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_TOGGLEBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x1644ED50)
#define RPG_CLIENT_TOGGLEBUTTON_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1644F2B0)
#define RPG_CLIENT_TOGGLEBUTTON_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x1644FA40)
#define RPG_CLIENT_TOGGLEBUTTON_GET_ISON_OFFSET UNITYSDK_OFFSET(0x1644FAB0)
#define RPG_CLIENT_TOGGLEBUTTON_GET_PROTECTEDCD_OFFSET UNITYSDK_OFFSET(0x1644FAC0)
#define RPG_CLIENT_TOGGLEBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1644F060)
#define RPG_CLIENT_TOGGLEBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1644EF30)
#define RPG_CLIENT_TOGGLEBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1644E660)
#define RPG_CLIENT_TOGGLEBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1644EBB0)
#define RPG_CLIENT_TOGGLEBUTTON_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1644E840)
#define RPG_CLIENT_TOGGLEBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1644E940)
#define RPG_CLIENT_TOGGLEBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1644ECF0)
#define RPG_CLIENT_TOGGLEBUTTON_SETISONWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1644F0F0)
#define RPG_CLIENT_TOGGLEBUTTON_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x1644FA50)
#define RPG_CLIENT_TOGGLEBUTTON_SET_ISON_OFFSET UNITYSDK_OFFSET(0x1644F340)
#define RPG_CLIENT_TOGGLEBUTTON_SET_PROTECTEDCD_OFFSET UNITYSDK_OFFSET(0x1644FAD0)
#define RPG_CLIENT_TOGGLEBUTTON_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1644F270)
#define RPG_CLIENT_TOGGLEBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1644FAE0)
#define RPG_CLIENT_TOGGLEBUTTON__INTERNALTOGGLE_OFFSET UNITYSDK_OFFSET(0x1644E780)
#define RPG_CLIENT_TOGGLEBUTTON__ISINPROTECTEDCD_OFFSET UNITYSDK_OFFSET(0x1644E720)
#define RPG_CLIENT_TOGGLEBUTTON__PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x1644EAA0)
#define RPG_CLIENT_TOGGLEBUTTON__RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1644EE50)
#define RPG_CLIENT_TOGGLEBUTTON__SETTOGGLEGROUP_OFFSET UNITYSDK_OFFSET(0x1644EF90)
#define RPG_CLIENT_TOGGLEBUTTON__SET_OFFSET UNITYSDK_OFFSET(0x1644F140)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1644FC10)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1644FC30)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1644FC20)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1644FBC0)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1644FBF0)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1644FBD0)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1644FBE0)
#define RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1644FC00)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButton_TypeDefinitionIndex = 67912;

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

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_ONSUBMIT_OFFSET))(this, a1);
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

		::System::Void SetIsOnWithoutNotify(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_SETISONWITHOUTNOTIFY_OFFSET))(this, a1);
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

		::System::Void _Set(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__SET_OFFSET))(this, a1, a2);
		}

		::System::Void _ResetTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__RESETTRIGGER_OFFSET))(this);
		}

		::System::Void _PlayEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__PLAYEFFECT_OFFSET))(this);
		}

		::System::Void _SetToggleGroup(::RPG::Client::ToggleButtonGroup* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButtonGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON__SETTOGGLEGROUP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ToggleButtonGroup* get_Group()
		{
			return ((::RPG::Client::ToggleButtonGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::RPG::Client::ToggleButtonGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButtonGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_SET_GROUP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_GET_ISON_OFFSET))(this);
		}

		::System::Void set_IsOn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_SET_ISON_OFFSET))(this, a1);
		}

		::System::Single get_ProtectedCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_GET_PROTECTEDCD_OFFSET))(this);
		}

		::System::Void set_ProtectedCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_SET_PROTECTEDCD_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET))(this, a1);
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
