#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3391C70DC37088D;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MazeChallengeData; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAZECHALLENGESYSTEM_ADDMAZEPUZZLECHALLENGEFINPARAMLISTFINISH_OFFSET UNITYSDK_OFFSET(0x175A1040)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_CANCELMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x175A0830)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_CLEAREXECUTER_OFFSET UNITYSDK_OFFSET(0x1759F8A0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_CREATEMAZECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1759FAB0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1759F4D0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_FAILMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1759EB80)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_FINISHMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1759ED70)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_GETMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x175A0A80)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_GET_CURRENTEVENTDICTIONARY_OFFSET UNITYSDK_OFFSET(0x175A1FE0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_GET_TIMERLOCK_OFFSET UNITYSDK_OFFSET(0x175A1FC0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x1759F3A0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_PREPAREFINISHMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x175A0CA0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_REMOVECHALLENGE_OFFSET UNITYSDK_OFFSET(0x175A0B40)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZECHALLENGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1759FEB0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZEPUZZLECHALLENGEFINPARAMLISTFINISH_OFFSET UNITYSDK_OFFSET(0x175A1190)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZEPUZZLECHALLENGEREMAINSTEP_OFFSET UNITYSDK_OFFSET(0x175A0EF0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SET_TIMERLOCK_OFFSET UNITYSDK_OFFSET(0x175A1FD0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SOLVECALLBACK_OFFSET UNITYSDK_OFFSET(0x175A1BD0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0x175A12E0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_WAITPREPAREENDMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x175A0DE0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__CANCELMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x175A08B0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x175A2270)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1759EF20)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__ONCHALLENGECANCEL_OFFSET UNITYSDK_OFFSET(0x175A2210)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__ONCHALLENGERESET_OFFSET UNITYSDK_OFFSET(0x175A2070)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__ONSPECIALUICLOSE_OFFSET UNITYSDK_OFFSET(0x175A1FF0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__ONUICHALLENGEENTER_OFFSET UNITYSDK_OFFSET(0x175A06F0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__REGEVENT_OFFSET UNITYSDK_OFFSET(0x1759F3F0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__UNREGEVENT_OFFSET UNITYSDK_OFFSET(0x1759F7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeChallengeSystem_TypeDefinitionIndex = 56168;

	class MazeChallengeSystem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DeleteList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MazeChallengeSystem_TypeDefinitionIndex)->GetStaticField(0x56910);
		}
		::RPG::Client::AdventurePhase* _AdventurePhaseRef; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnCancelExecuter; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnUIEnterExecuter; // 0x20
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x28
		::RPG::Client::LuaUIController* _UIController; // 0x30
		::System::Collections::Generic::List_1<::Class_1_F3391C70DC37088D*>* _FinishAndDeleteList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _SuccIdList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnResetExecuter; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _FailIdList; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _CachedRemovingMazeChallenge; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnWaitPrepareEndExecuter; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MazeChallengeData*>* _CurrentMazeChallengeDict; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PropComponent*>* _CurrentPropCmpt; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnFailExecuter; // 0x78
		::System::Boolean _TimerLock; // 0x80

		::System::Void _ctor(::RPG::Client::AdventurePhase* pOwnerPhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__CTOR_OFFSET))(this, pOwnerPhase);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void CreateMazeChallenge(::System::UInt32 mazeChallengeID, ::RPG::GameCore::PropComponent* attachPropCmpt, ::System::UInt32 prepareTime, ::System::UInt32 attachQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PropComponent*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_CREATEMAZECHALLENGE_OFFSET))(this, mazeChallengeID, attachPropCmpt, prepareTime, attachQuestID);
		}

		::System::Void SetMazeChallengeCallback(::System::UInt32 mazeChallengeID, ::RPG::GameCore::TaskContext* taskContxt, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* onUIEnter, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* onFail, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* onCancel, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* onWaitPrepareEnd, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* onReset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZECHALLENGECALLBACK_OFFSET))(this, mazeChallengeID, taskContxt, onUIEnter, onFail, onCancel, onWaitPrepareEnd, onReset);
		}

		::System::Void _OnUIChallengeEnter(::System::UInt32 mazeChallengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__ONUICHALLENGEENTER_OFFSET))(this, mazeChallengeID);
		}

		::System::Void CancelMazePuzzleChallenge(::System::UInt32 mazeChallengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_CANCELMAZEPUZZLECHALLENGE_OFFSET))(this, mazeChallengeID);
		}

		::System::Void _CancelMazePuzzleChallenge(::System::UInt32 mazeChallengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__CANCELMAZEPUZZLECHALLENGE_OFFSET))(this, mazeChallengeID);
		}

		::System::Void FailMazePuzzleChallenge(::System::UInt32 mazeChallengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_FAILMAZEPUZZLECHALLENGE_OFFSET))(this, mazeChallengeID);
		}

		::System::Void FinishMazePuzzleChallenge(::System::UInt32 mazeChallengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_FINISHMAZEPUZZLECHALLENGE_OFFSET))(this, mazeChallengeID);
		}

		::System::Void PrepareFinishMazePuzzleChallenge(::System::UInt32 mazeChallengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_PREPAREFINISHMAZEPUZZLECHALLENGE_OFFSET))(this, mazeChallengeID);
		}

		::System::Void WaitPrepareEndMazePuzzleChallenge(::System::UInt32 mazeChallengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_WAITPREPAREENDMAZEPUZZLECHALLENGE_OFFSET))(this, mazeChallengeID);
		}

		::System::Void SetMazePuzzleChallengeRemainStep(::System::UInt32 mazeChallengeID, ::System::Int32 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZEPUZZLECHALLENGEREMAINSTEP_OFFSET))(this, mazeChallengeID, delta);
		}

		::System::Void AddMazePuzzleChallengeFinParamListFinish(::System::UInt32 mazeChallengeID, ::System::Int32 index, ::System::Int32 cnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_ADDMAZEPUZZLECHALLENGEFINPARAMLISTFINISH_OFFSET))(this, mazeChallengeID, index, cnt);
		}

		::System::Void SetMazePuzzleChallengeFinParamListFinish(::System::UInt32 mazeChallengeID, ::System::Int32 index, ::System::Int32 cnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZEPUZZLECHALLENGEFINPARAMLISTFINISH_OFFSET))(this, mazeChallengeID, index, cnt);
		}

		::RPG::Client::MazeChallengeData* GetMazePuzzleChallenge(::System::UInt32 mazeChallengeID)
		{
			return ((::RPG::Client::MazeChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_GETMAZEPUZZLECHALLENGE_OFFSET))(this, mazeChallengeID);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void SolveCallback(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>*& dict, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>*&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SOLVECALLBACK_OFFSET))(this, dict, fElapsedTimeInSec);
		}

		::System::Boolean get_TimerLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_GET_TIMERLOCK_OFFSET))(this);
		}

		::System::Void set_TimerLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SET_TIMERLOCK_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MazeChallengeData*>* get_CurrentEventDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MazeChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_GET_CURRENTEVENTDICTIONARY_OFFSET))(this);
		}

		::System::Void _RegEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__REGEVENT_OFFSET))(this);
		}

		::System::Void _UnRegEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__UNREGEVENT_OFFSET))(this);
		}

		::System::Void _OnSpecialUIClose(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__ONSPECIALUICLOSE_OFFSET))(this, param);
		}

		::System::Void _OnChallengeReset(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__ONCHALLENGERESET_OFFSET))(this, param);
		}

		::System::Void _OnChallengeCancel(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__ONCHALLENGECANCEL_OFFSET))(this, param);
		}

		::System::Void RemoveChallenge(::System::UInt32 mazeChallengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_REMOVECHALLENGE_OFFSET))(this, mazeChallengeID);
		}

		::System::Void ClearExecuter(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>*& dict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_CLEAREXECUTER_OFFSET))(this, dict);
		}
	};
}
