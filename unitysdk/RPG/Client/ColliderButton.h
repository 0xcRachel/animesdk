#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ColliderButton_PointerEvent; }
namespace RPG::Client { class ColliderButton_VoidEvent; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_COLLIDERBUTTON_ADDCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x940FF60)
#define RPG_CLIENT_COLLIDERBUTTON_ADDDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x9410020)
#define RPG_CLIENT_COLLIDERBUTTON_ADDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x9410080)
#define RPG_CLIENT_COLLIDERBUTTON_ADDUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x940FFC0)
#define RPG_CLIENT_COLLIDERBUTTON_GET_OFFSET UNITYSDK_OFFSET(0x940FCB0)
#define RPG_CLIENT_COLLIDERBUTTON_ONDRAG_OFFSET UNITYSDK_OFFSET(0x940FED0)
#define RPG_CLIENT_COLLIDERBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x940FD40)
#define RPG_CLIENT_COLLIDERBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x940FE10)
#define RPG_CLIENT_COLLIDERBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x940FDB0)
#define RPG_CLIENT_COLLIDERBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x940FE70)
#define RPG_CLIENT_COLLIDERBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x9410160)

namespace RPG::Client
{
	inline static constexpr unsigned int ColliderButton_TypeDefinitionIndex = 59424;

	class ColliderButton : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ColliderButton_VoidEvent* OnClickEvent; // 0x18
		::RPG::Client::ColliderButton_VoidEvent* UpEvent; // 0x20
		::RPG::Client::ColliderButton_VoidEvent* DownEvent; // 0x28
		::RPG::Client::ColliderButton_PointerEvent* DragEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ColliderButton* Get(::UnityEngine::GameObject* go)
		{
			return ((::RPG::Client::ColliderButton*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_GET_OFFSET))(go);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void AddClickCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ADDCLICKCALLBACK_OFFSET))(this, callback);
		}

		::System::Void AddUpCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ADDUPCALLBACK_OFFSET))(this, callback);
		}

		::System::Void AddDownCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ADDDOWNCALLBACK_OFFSET))(this, callback);
		}

		::System::Void AddDragCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ADDDRAGCALLBACK_OFFSET))(this, callback);
		}
	};
}
