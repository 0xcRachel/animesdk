#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/PhaseContextType.h"
#include "unitysdk/System/Object.h"

class Class_1_3255B09AEB5A1EF7;
class Class_1_6B41D5D37BA0605F;
namespace RPG::Client { class BasePhaseContext; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class RPGProfilerMarker; }

#define RPG_CLIENT_GAMEPHASEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92F8D10)
#define RPG_CLIENT_GAMEPHASEMANAGER_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x92F88C0)
#define RPG_CLIENT_GAMEPHASEMANAGER_GETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x92F2CA0)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_CURRENTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x92F9DF0)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x92F9E40)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_PHASECONTEXT_OFFSET UNITYSDK_OFFSET(0x92F9E10)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_TRANSITIONMGR_OFFSET UNITYSDK_OFFSET(0x92F9E20)
#define RPG_CLIENT_GAMEPHASEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x92F8300)
#define RPG_CLIENT_GAMEPHASEMANAGER_ISGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x92F9290)
#define RPG_CLIENT_GAMEPHASEMANAGER_ISLOGINCONTEXT_OFFSET UNITYSDK_OFFSET(0x92F9240)
#define RPG_CLIENT_GAMEPHASEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x92F8620)
#define RPG_CLIENT_GAMEPHASEMANAGER_LEAVECURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x92F8E20)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x92F89D0)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x92F8B40)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x92F8B80)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x92F8B00)
#define RPG_CLIENT_GAMEPHASEMANAGER_SETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x92F92E0)
#define RPG_CLIENT_GAMEPHASEMANAGER_SETPHASECONTEXT_OFFSET UNITYSDK_OFFSET(0x92F9150)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_CURRENTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x92F9E00)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x92F9E50)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_TRANSITIONMGR_OFFSET UNITYSDK_OFFSET(0x92F9E30)
#define RPG_CLIENT_GAMEPHASEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x92F8360)
#define RPG_CLIENT_GAMEPHASEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x92F9E60)
#define RPG_CLIENT_GAMEPHASEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x92F82F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseManager_TypeDefinitionIndex = 48602;

	class GamePhaseManager : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateBattleTransitionManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GamePhaseManager_TypeDefinitionIndex)->GetStaticField(0x42C00);
		}
		static ::System::Boolean* StaticGet_FromGameRestart()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GamePhaseManager_TypeDefinitionIndex)->GetStaticField(0xF6A0);
		}
		::Class_1_3255B09AEB5A1EF7* _TransitionMgr_k__BackingField; // 0x10
		::RPG::Client::IGamePhase* _CurrentPhase; // 0x18
		::RPG::Client::BasePhaseContext* _PhaseContext; // 0x20
		::RPG::Client::GamePhaseType _CurrentGamePhaseType_k__BackingField; // 0x28
		::RPG::Client::PhaseContextType _contextType; // 0x2C
		::RPG::Client::GamePhaseType _LastGamePhaseType_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void EndOfLateTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ENDOFLATETICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnNetworkDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKDISCONNECTED_OFFSET))(this);
		}

		::System::Void OnPlayerLoginSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINSUCCESS_OFFSET))(this);
		}

		::System::Void OnNetworkReconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKRECONNECTED_OFFSET))(this);
		}

		::System::Void OnPlayerLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetPhaseContext(::RPG::Client::PhaseContextType contextType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhaseContextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SETPHASECONTEXT_OFFSET))(this, contextType);
		}

		::System::Boolean IsLoginContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ISLOGINCONTEXT_OFFSET))(this);
		}

		::System::Boolean IsGameContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ISGAMECONTEXT_OFFSET))(this);
		}

		::System::Void SetCurrentPhase(::RPG::Client::GamePhaseType type, ::System::Object* initParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SETCURRENTPHASE_OFFSET))(this, type, initParam);
		}

		::RPG::Client::IGamePhase* GetCurrentPhase()
		{
			return ((::RPG::Client::IGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GETCURRENTPHASE_OFFSET))(this);
		}

		::System::Void LeaveCurrentPhase(::Class_1_6B41D5D37BA0605F* nextPhaseInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_LEAVECURRENTPHASE_OFFSET))(this, nextPhaseInfo);
		}

		::RPG::Client::GamePhaseType get_CurrentGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_CURRENTGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void set_CurrentGamePhaseType(::RPG::Client::GamePhaseType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_CURRENTGAMEPHASETYPE_OFFSET))(this, value);
		}

		::RPG::Client::BasePhaseContext* get_PhaseContext()
		{
			return ((::RPG::Client::BasePhaseContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_PHASECONTEXT_OFFSET))(this);
		}

		::Class_1_3255B09AEB5A1EF7* get_TransitionMgr()
		{
			return ((::Class_1_3255B09AEB5A1EF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_TRANSITIONMGR_OFFSET))(this);
		}

		::System::Void set_TransitionMgr(::Class_1_3255B09AEB5A1EF7* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3255B09AEB5A1EF7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_TRANSITIONMGR_OFFSET))(this, value);
		}

		::RPG::Client::GamePhaseType get_LastGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void set_LastGamePhaseType(::RPG::Client::GamePhaseType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTGAMEPHASETYPE_OFFSET))(this, value);
		}
	};
}
