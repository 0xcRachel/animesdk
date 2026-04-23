#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_17.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_2;
class Class_1_D17272E82AE804C2_147;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeInstance_ChallengeProgress; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEINSTANCE_CACHECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x15F8D5F0)
#define RPG_CLIENT_CHALLENGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F8F140)
#define RPG_CLIENT_CHALLENGEINSTANCE_GETCHALLENGEAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x15F8EDB0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0x15F8F390)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x15F8E730)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTSTAGENUM_OFFSET UNITYSDK_OFFSET(0x15F8F400)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15F8F530)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x15F8F510)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x15F8F3E0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x15F8F2F0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x15F8F350)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x15F8F370)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_LASTPROGRESSBEFORE_OFFSET UNITYSDK_OFFSET(0x15F8E740)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x15F8F3B0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x15F80B10)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x15F8F4F0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0x15F8E710)
#define RPG_CLIENT_CHALLENGEINSTANCE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x15F8CD80)
#define RPG_CLIENT_CHALLENGEINSTANCE_REFRESHCHALLENGETARGET_OFFSET UNITYSDK_OFFSET(0x15F8DAA0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SAVEPROGRESSBEFOREENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x15F8D850)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETBUFF_OFFSET UNITYSDK_OFFSET(0x15F8ED60)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETERROREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x15F8E620)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETTLE_OFFSET UNITYSDK_OFFSET(0x15F8EBD0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x15F815B0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0x15F8F3A0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x15F8F360)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x15F8F380)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x15F8F500)
#define RPG_CLIENT_CHALLENGEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0x15F8E750)
#define RPG_CLIENT_CHALLENGEINSTANCE_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x15F81150)
#define RPG_CLIENT_CHALLENGEINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x15F80800)
#define RPG_CLIENT_CHALLENGEINSTANCE__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x15F81530)
#define RPG_CLIENT_CHALLENGEINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F8F560)
#define RPG_CLIENT_CHALLENGEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F80290)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGEKILLEDMONSTER_OFFSET UNITYSDK_OFFSET(0x15F8E1D0)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGETURNCOST_OFFSET UNITYSDK_OFFSET(0x15F8E070)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETTOTALSCORE_OFFSET UNITYSDK_OFFSET(0x15F8E4B0)
#define RPG_CLIENT_CHALLENGEINSTANCE__ISALLMONSTERCLEARED_OFFSET UNITYSDK_OFFSET(0x15F8F1A0)
#define RPG_CLIENT_CHALLENGEINSTANCE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x15F8CDC0)
#define RPG_CLIENT_CHALLENGEINSTANCE__ONTEAMDATAREFRESH_OFFSET UNITYSDK_OFFSET(0x15F8D240)
#define RPG_CLIENT_CHALLENGEINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x15F80970)
#define RPG_CLIENT_CHALLENGEINSTANCE__SHOWCHALLENGEMAZEHINT_OFFSET UNITYSDK_OFFSET(0x15F8D410)
#define RPG_CLIENT_CHALLENGEINSTANCE__SHOWENVIRONMENTHINT_OFFSET UNITYSDK_OFFSET(0x15F8D360)
#define RPG_CLIENT_CHALLENGEINSTANCE__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x15F81480)
#define RPG_CLIENT_CHALLENGEINSTANCE__SYNCPROGRESS_OFFSET UNITYSDK_OFFSET(0x15F8E510)
#define RPG_CLIENT_CHALLENGEINSTANCE__TRYRESETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x15F8D490)
#define RPG_CLIENT_CHALLENGEINSTANCE___ONHIDELOADINGPAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0x15F8F680)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance_TypeDefinitionIndex = 58114;

	class ChallengeInstance : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__TextID_First_Team_Challenge_Start()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0xFB50);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Second_Team_Challenge_Start()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0xFB60);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Buff_Hint()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0xFB70);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Switched_To_Second_Team()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0xFB80);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_One_Team_Challenge_Start()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0xFB90);
		}
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeTargetState>* CachedTargetStatesBeforeChallenge; // 0x10
		::RPG::Client::ChallengeInstance_ChallengeProgress* _LastProgressBeforeEnterBattle; // 0x18
		::RPG::Client::ChallengeData* _ChallengeDataRef_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _MonsterIDs; // 0x28
		::System::Action* _ErrorExitCallback; // 0x30
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_147*>* KillMonsters; // 0x38
		::RPG::Client::ChallengeInstance_ChallengeProgress* _CurrentProgress; // 0x40
		::System::Boolean IsNewRecord; // 0x48
		::System::Boolean _IsFirstEnterChallenge; // 0x49
		::System::Boolean _IsSettled_k__BackingField; // 0x4A
		::System::Boolean CachedChallengeIsFinish; // 0x4B
		::System::Boolean _IsUsingFirstTeam; // 0x4C
		::System::Boolean _IsWin_k__BackingField; // 0x4D
		::System::Boolean _IsSecondTeamStart; // 0x4E
		::System::Boolean _NeedShowSecondEnvironmentDialog; // 0x4F
		::System::UInt32 DeadAvatarNum; // 0x50
		::System::UInt32 ScoreSecond; // 0x54
		::Enum_3_DB663931210BBC27_17 _Status_k__BackingField; // 0x58
		::System::UInt32 ScoreFirst; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__CCTOR_OFFSET))();
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _OnTeamDataRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ONTEAMDATAREFRESH_OFFSET))(this, arg);
		}

		::System::Void SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}

		::System::Void _ShowEnvironmentHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SHOWENVIRONMENTHINT_OFFSET))(this);
		}

		::System::Void _ShowChallengeMazeHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SHOWCHALLENGEMAZEHINT_OFFSET))(this);
		}

		::System::Void _TryReSettleChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__TRYRESETTLECHALLENGE_OFFSET))(this);
		}

		::System::Void CacheChallengeTargetState(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CACHECHALLENGETARGETSTATE_OFFSET))(this, challengeID);
		}

		::System::Void SaveProgressBeforeEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SAVEPROGRESSBEFOREENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshChallengeTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_REFRESHCHALLENGETARGET_OFFSET))(this);
		}

		::System::Void SetErrorExitCallback(::System::Action* errorExitCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETERROREXITCALLBACK_OFFSET))(this, errorExitCallback);
		}

		::System::Void _SyncProgress(::System::UInt32 turnCost, ::System::UInt32 avatarDeadNum, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_147*>* killMonsters, ::System::UInt32 currentScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_147*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SYNCPROGRESS_OFFSET))(this, turnCost, avatarDeadNum, killMonsters, currentScore);
		}

		::System::UInt32 get_TurnCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_TURNCOST_OFFSET))(this);
		}

		::RPG::Client::ChallengeInstance_ChallengeProgress* get_CurrentProgress()
		{
			return ((::RPG::Client::ChallengeInstance_ChallengeProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::RPG::Client::ChallengeInstance_ChallengeProgress* get_LastProgressBefore()
		{
			return ((::RPG::Client::ChallengeInstance_ChallengeProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_LASTPROGRESSBEFORE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_3AD2528CD53B1639_2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SYNC_OFFSET))(this, data);
		}

		::System::Void _SyncExtraInfo(::Class_1_3AD2528CD53B1639_2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SYNCEXTRAINFO_OFFSET))(this, data);
		}

		::System::Void Settle(::System::Boolean isWin, ::System::UInt32 stars, ::System::UInt32 score1, ::System::UInt32 score2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETTLE_OFFSET))(this, isWin, stars, score1, score2);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 stars)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_UPDATETARGETSTATUS_OFFSET))(this, stars);
		}

		::System::Void _CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void SetBuff(::Il2CppArray<::System::UInt32>* buffID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETBUFF_OFFSET))(this, buffID);
		}

		::Il2CppArray<::RPG::Client::IAvatarInfoProvider*>* GetChallengeAvatarDatas()
		{
			return ((::Il2CppArray<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GETCHALLENGEAVATARDATAS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 _GetTotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETTOTALSCORE_OFFSET))(this);
		}

		::System::UInt32 _GetCurStageTurnCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGETURNCOST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_147*>* _GetCurStageKilledMonster()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_147*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGEKILLEDMONSTER_OFFSET))(this);
		}

		::System::Boolean _IsAllMonsterCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ISALLMONSTERCLEARED_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Void set_IsSettled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_ISSETTLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_ISWIN_OFFSET))(this, value);
		}

		::RPG::Client::ChallengeData* get_ChallengeDataRef()
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CHALLENGEDATAREF_OFFSET))(this);
		}

		::System::Void set_ChallengeDataRef(::RPG::Client::ChallengeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_CHALLENGEDATAREF_OFFSET))(this, value);
		}

		::System::UInt32 get_MapEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_MAPENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTSTAGENUM_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_17 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_17(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_17 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_17))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPID_OFFSET))(this);
		}

		::System::Void __OnHideLoadingPage_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___ONHIDELOADINGPAGE_B__3_0_OFFSET))(this);
		}
	};
}
