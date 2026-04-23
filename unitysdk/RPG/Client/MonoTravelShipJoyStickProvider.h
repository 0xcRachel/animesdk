#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoJoyStickProvider.h"

namespace RPG::Client { class MonoTravelShipJoyStickProvider_TravelShipPressState; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0x162F8980)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x162F8D90)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x162F8CF0)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x162F8E00)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x162F8EB0)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0x162F8FD0)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x162F8F60)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x162F9040)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipJoyStickProvider_TypeDefinitionIndex = 56548;

	class MonoTravelShipJoyStickProvider : public ::RPG::Client::MonoJoyStickProvider
	{
	public:
		::RPG::Client::MonoTravelShipJoyStickProvider_TravelShipPressState* _TraveShipState; // 0xC0
		::UnityEngine::RectTransform* _AnalogTransform; // 0xC8
		::UnityEngine::RectTransform* _BoundaryTransform; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_INIT_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void __iFixBaseProxy_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONPOINTERUP_OFFSET))(this, P0);
		}
	};
}
