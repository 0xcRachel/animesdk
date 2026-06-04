#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoJoyStickProvider.h"

namespace RPG::Client { class MonoTravelShipJoyStickProvider_TravelShipPressState; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0x187D9BF0)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x187DA000)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x187D9F60)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x187DA070)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x187DA120)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0x187DA240)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x187DA1D0)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x187DA2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipJoyStickProvider_TypeDefinitionIndex = 57325;

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

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER___IFIXBASEPROXY_ONPOINTERUP_OFFSET))(this, a1);
		}
	};
}
