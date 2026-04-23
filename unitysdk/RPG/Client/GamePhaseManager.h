#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/PhaseContextType.h"
#include "unitysdk/System/Object.h"

class Class_1_3255B09AEB5A1EF7;
class Class_1_6B41D5D37BA0605F;
class Class_1_F787549F10CA3477;
namespace RPG::Client { class BasePhaseContext; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class RPGProfilerMarker; }

#define RPG_CLIENT_GAMEPHASEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16031660)
#define RPG_CLIENT_GAMEPHASEMANAGER_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x160311E0)
#define RPG_CLIENT_GAMEPHASEMANAGER_GETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x16030710)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_CURRENTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x16032790)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTDIFFERENTPHASETYPE_OFFSET UNITYSDK_OFFSET(0x16032820)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x16032800)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_PHASECONTEXT_OFFSET UNITYSDK_OFFSET(0x160327B0)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_PHASELOADINGMANAGER_OFFSET UNITYSDK_OFFSET(0x160327E0)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_TRANSITIONMGR_OFFSET UNITYSDK_OFFSET(0x160327C0)
#define RPG_CLIENT_GAMEPHASEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x16030C10)
#define RPG_CLIENT_GAMEPHASEMANAGER_ISGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x16031C40)
#define RPG_CLIENT_GAMEPHASEMANAGER_ISLOGINCONTEXT_OFFSET UNITYSDK_OFFSET(0x16031BF0)
#define RPG_CLIENT_GAMEPHASEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16030F50)
#define RPG_CLIENT_GAMEPHASEMANAGER_LEAVECURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x160317A0)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x160312F0)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x16031490)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x160314D0)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x16031450)
#define RPG_CLIENT_GAMEPHASEMANAGER_SETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x16031C90)
#define RPG_CLIENT_GAMEPHASEMANAGER_SETPHASECONTEXT_OFFSET UNITYSDK_OFFSET(0x16031B00)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_CURRENTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x160327A0)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTDIFFERENTPHASETYPE_OFFSET UNITYSDK_OFFSET(0x16032830)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x16032810)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_PHASELOADINGMANAGER_OFFSET UNITYSDK_OFFSET(0x160327F0)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_TRANSITIONMGR_OFFSET UNITYSDK_OFFSET(0x160327D0)
#define RPG_CLIENT_GAMEPHASEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x16030C80)
#define RPG_CLIENT_GAMEPHASEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16032840)
#define RPG_CLIENT_GAMEPHASEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16030C00)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseManager_TypeDefinitionIndex = 56517;

	class GamePhaseManager : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateBattleTransitionManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GamePhaseManager_TypeDefinitionIndex)->GetStaticField(0x14F10);
		}
		static ::System::Boolean* StaticGet_FromGameRestart()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GamePhaseManager_TypeDefinitionIndex)->GetStaticField(0x5F10);
		}
		::RPG::Client::BasePhaseContext* _PhaseContext; // 0x10
		::RPG::Client::IGamePhase* _CurrentPhase; // 0x18
		::Class_1_3255B09AEB5A1EF7* _TransitionMgr_k__BackingField; // 0x20
		::Class_1_F787549F10CA3477* _PhaseLoadingManager_k__BackingField; // 0x28
		::RPG::Client::PhaseContextType _contextType; // 0x30
		::RPG::Client::GamePhaseType _LastGamePhaseType_k__BackingField; // 0x34
		::RPG::Client::GamePhaseType _CurrentGamePhaseType_k__BackingField; // 0x38
		::RPG::Client::GamePhaseType _LastDifferentPhaseType_k__BackingField; // 0x3C

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

		::Class_1_F787549F10CA3477* get_PhaseLoadingManager()
		{
			return ((::Class_1_F787549F10CA3477*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_PHASELOADINGMANAGER_OFFSET))(this);
		}

		::System::Void set_PhaseLoadingManager(::Class_1_F787549F10CA3477* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F787549F10CA3477*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_PHASELOADINGMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::GamePhaseType get_LastGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void set_LastGamePhaseType(::RPG::Client::GamePhaseType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTGAMEPHASETYPE_OFFSET))(this, value);
		}

		::RPG::Client::GamePhaseType get_LastDifferentPhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTDIFFERENTPHASETYPE_OFFSET))(this);
		}

		::System::Void set_LastDifferentPhaseType(::RPG::Client::GamePhaseType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTDIFFERENTPHASETYPE_OFFSET))(this, value);
		}
	};
}
