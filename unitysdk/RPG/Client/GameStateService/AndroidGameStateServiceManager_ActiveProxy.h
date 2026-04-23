#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameStateService/AndroidGameStateServiceManager_GameStateServiceSwitchType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x160387D0)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_REPORTACTIVESTATE_1_OFFSET UNITYSDK_OFFSET(0x1603E0A0)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_REPORTACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x1603ECA0)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_SETSWITCHSTATUS_OFFSET UNITYSDK_OFFSET(0x16037510)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1603D570)

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager_ActiveProxy_TypeDefinitionIndex = 69688;

	class AndroidGameStateServiceManager_ActiveProxy : public ::System::Object
	{
	public:
		::System::Action* _whenActive; // 0x10
		::Il2CppArray<::System::Boolean>* _switchList; // 0x18

		::System::Void _ctor(::System::Action* actionWhenReallyActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY__CTOR_OFFSET))(this, actionWhenReallyActive);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_ISACTIVE_OFFSET))(this);
		}

		::System::Void SetSwitchStatus(::RPG::Client::GameStateService::AndroidGameStateServiceManager_GameStateServiceSwitchType switchType, ::System::Boolean status)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameStateService::AndroidGameStateServiceManager_GameStateServiceSwitchType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_SETSWITCHSTATUS_OFFSET))(this, switchType, status);
		}

		::System::Void ReportActiveState(::RPG::Client::GameStateService::AndroidGameStateServiceManager_GameStateServiceSwitchType switchType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameStateService::AndroidGameStateServiceManager_GameStateServiceSwitchType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_REPORTACTIVESTATE_OFFSET))(this, switchType);
		}

		::System::Void ReportActiveState_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_REPORTACTIVESTATE_1_OFFSET))(this);
		}
	};
}
