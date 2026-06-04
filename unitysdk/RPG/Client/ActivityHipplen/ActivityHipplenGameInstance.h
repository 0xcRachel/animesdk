#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_41F3892CC1F01DA0;
class Class_1_A264197332665EF2;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectCalculator; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameCycleData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameStateManager; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMainController; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenRoutineManager; }
namespace RPG::Client::ActivityHipplen { class IActivityHipplenGameState; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186B1700)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x186B22B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_EXITGAME_OFFSET UNITYSDK_OFFSET(0x186B1890)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_FINISHGAMESTATE_OFFSET UNITYSDK_OFFSET(0x186B2CB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_EFFECTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x186B3150)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_GAMECYCLEDATA_OFFSET UNITYSDK_OFFSET(0x186B3170)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0x186B30F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_MAINCTRL_OFFSET UNITYSDK_OFFSET(0x186B3190)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_PERFORMANCEMGR_OFFSET UNITYSDK_OFFSET(0x186B3130)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_ROUTINEMGR_OFFSET UNITYSDK_OFFSET(0x186B3110)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_STARTNEWPHASE_OFFSET UNITYSDK_OFFSET(0x186B31B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x186B12E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ISINTRIAL_OFFSET UNITYSDK_OFFSET(0x186B2B90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x186B2070)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_EFFECTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x186B3160)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_GAMECYCLEDATA_OFFSET UNITYSDK_OFFSET(0x186B3180)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0x186B3100)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_MAINCTRL_OFFSET UNITYSDK_OFFSET(0x186B31A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_PERFORMANCEMGR_OFFSET UNITYSDK_OFFSET(0x186B3140)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_ROUTINEMGR_OFFSET UNITYSDK_OFFSET(0x186B3120)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_STARTNEWPHASE_OFFSET UNITYSDK_OFFSET(0x186B31C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0x186B1A60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x186B12D0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameInstance_TypeDefinitionIndex = 70344;

	class ActivityHipplenGameInstance : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* _RoutineMgr_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* _EffectCalculator_k__BackingField; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* _MainCtrl_k__BackingField; // 0x20
		::Class_1_41F3892CC1F01DA0* _PerformanceMgr_k__BackingField; // 0x28
		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager* _GameStateMgr_k__BackingField; // 0x30
		::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData* _GameCycleData_k__BackingField; // 0x38
		::System::Boolean _Inited; // 0x40
		::System::Boolean _StartNewPhase_k__BackingField; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_A264197332665EF2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A264197332665EF2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SYNC_OFFSET))(this, a1);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void EnterGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ENTERGAME_OFFSET))(this, a1);
		}

		::System::Void ExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_EXITGAME_OFFSET))(this);
		}

		::System::Boolean IsInTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ISINTRIAL_OFFSET))(this);
		}

		::System::Void FinishGameState(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_FINISHGAMESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager* get_GameStateMgr()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET))(this);
		}

		::System::Void set_GameStateMgr(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* get_RoutineMgr()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_ROUTINEMGR_OFFSET))(this);
		}

		::System::Void set_RoutineMgr(::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_ROUTINEMGR_OFFSET))(this, a1);
		}

		::Class_1_41F3892CC1F01DA0* get_PerformanceMgr()
		{
			return ((::Class_1_41F3892CC1F01DA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_PERFORMANCEMGR_OFFSET))(this);
		}

		::System::Void set_PerformanceMgr(::Class_1_41F3892CC1F01DA0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_41F3892CC1F01DA0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_PERFORMANCEMGR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* get_EffectCalculator()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_EFFECTCALCULATOR_OFFSET))(this);
		}

		::System::Void set_EffectCalculator(::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_EFFECTCALCULATOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData* get_GameCycleData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_GAMECYCLEDATA_OFFSET))(this);
		}

		::System::Void set_GameCycleData(::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_GAMECYCLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* get_MainCtrl()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenMainController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_MAINCTRL_OFFSET))(this);
		}

		::System::Void set_MainCtrl(::RPG::Client::ActivityHipplen::ActivityHipplenMainController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenMainController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_MAINCTRL_OFFSET))(this, a1);
		}

		::System::Boolean get_StartNewPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_STARTNEWPHASE_OFFSET))(this);
		}

		::System::Void set_StartNewPhase(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_STARTNEWPHASE_OFFSET))(this, a1);
		}
	};
}
