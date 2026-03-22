#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesGameController_PlanetFesGamePlayDragModeEnum.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }

#define RPG_CLIENT_PLANETFESGAMECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9AD2930)
#define RPG_CLIENT_PLANETFESGAMECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9AD28F0)
#define RPG_CLIENT_PLANETFESGAMECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9AD28B0)
#define RPG_CLIENT_PLANETFESGAMECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2AB0)
#define RPG_CLIENT_PLANETFESGAMECONTROLLER__ONMODECHANGE_OFFSET UNITYSDK_OFFSET(0x9AD2A60)
#define RPG_CLIENT_PLANETFESGAMECONTROLLER__ONPLANETFESGAMEPLAYMODECHANGE_OFFSET UNITYSDK_OFFSET(0x9AD29D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGameController_TypeDefinitionIndex = 52956;

	class PlanetFesGameController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::PlanetFesGameController_PlanetFesGamePlayDragModeEnum _Mode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMECONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void _OnPlanetFesGamePlayModeChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMECONTROLLER__ONPLANETFESGAMEPLAYMODECHANGE_OFFSET))(this, arg);
		}

		::System::Void _OnModeChange(::RPG::Client::PlanetFesGameController_PlanetFesGamePlayDragModeEnum mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesGameController_PlanetFesGamePlayDragModeEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMECONTROLLER__ONMODECHANGE_OFFSET))(this, mode);
		}
	};
}
