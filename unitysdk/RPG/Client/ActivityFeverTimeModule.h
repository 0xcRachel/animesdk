#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_14.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"

class Class_1_352A8B3482C80E7D;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityFeverTimeConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASPLAYLEVELUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x8B14D70)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASSEENLEVEL_OFFSET UNITYSDK_OFFSET(0x8B11C00)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8B15150)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETBATTLERANK_OFFSET UNITYSDK_OFFSET(0x8B12C00)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYBATTLERANK_OFFSET UNITYSDK_OFFSET(0x8B11EF0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYTURN_OFFSET UNITYSDK_OFFSET(0x8B13730)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8B139C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETMONSTERDATALISTBYWAVEID_OFFSET UNITYSDK_OFFSET(0x8B15250)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP1BUFFID_OFFSET UNITYSDK_OFFSET(0x8B13CC0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP2BUFFID_OFFSET UNITYSDK_OFFSET(0x8B13E00)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP3BUFFID_OFFSET UNITYSDK_OFFSET(0x8B13F40)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARSBYFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0x8B14960)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x8B14240)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTUTORIALGROUPIDBYBUFFID_OFFSET UNITYSDK_OFFSET(0x8B14BB0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLECURRENTLEFTROUND_OFFSET UNITYSDK_OFFSET(0x8B154F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0x8B154E0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEHISTORYLEFTROUND_OFFSET UNITYSDK_OFFSET(0x8B15500)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLERANK_OFFSET UNITYSDK_OFFSET(0x8B15510)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_CURRENTFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0x8B154C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_FEVERTIMEBATTLEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x8B15540)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_GUIDEMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x8B15530)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_ISNEWRANK_OFFSET UNITYSDK_OFFSET(0x8B15520)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x8B15560)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_HASLEVELNOTCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8B14FC0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8B12120)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISINACTIVITYFEVERTIMEBATTLE_OFFSET UNITYSDK_OFFSET(0x8B12D20)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISSHOWEVERYDAYREDDOT_OFFSET UNITYSDK_OFFSET(0x8B11680)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_RESTARTFEVERTIMEBATTLE_OFFSET UNITYSDK_OFFSET(0x8B148B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8B13B60)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP1BUFFID_OFFSET UNITYSDK_OFFSET(0x8B13FE0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP2BUFFID_OFFSET UNITYSDK_OFFSET(0x8B14110)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x8B135C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0x8B13940)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASPLAYLEVELUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x8B14E80)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASSEENLEVEL_OFFSET UNITYSDK_OFFSET(0x8B14C30)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_CURRENTFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0x8B154D0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_FEVERTIMEBATTLEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x8B15550)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x8B15570)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_STARTFEVERTIMEBATTLE_OFFSET UNITYSDK_OFFSET(0x8B14480)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x8B137B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8B12560)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8B12410)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARAUTOSHOWPARAM_OFFSET UNITYSDK_OFFSET(0x8B138F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARBATTLETEMPPARAM_OFFSET UNITYSDK_OFFSET(0x8B12FE0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDENTERFEVERTIMEACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x8B12610)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDGETFEVERTIMEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8B12710)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8B15580)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__GETFEVERTIMEAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x8B14650)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x8B122D0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITMODULERELATEDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x8B13690)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x8B12EE0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0x8B12C80)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONFEVERTIMEACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8B12AB0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0x8B13040)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8B15800)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8B158F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8B15890)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeModule_TypeDefinitionIndex = 48775;

	class ActivityFeverTimeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityRank>* _FeverTimeActivityRankDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _FeverTimeBattleRankDict; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _BattleAvatarIDList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotQuestSeries_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _FeverTimeHistoryTurnDict; // 0x30
		::System::Collections::Generic::Dictionary_2<::Enum_3_4608E37A1B3D374A_14, ::RPG::GameCore::ActivityRank>* _FeverTimeBattleRankToActivityRank; // 0x38
		::System::UInt32 _AutoShowFeverTimeID; // 0x40
		::System::Boolean _IsNewRank; // 0x44
		::System::Boolean _ShowMainPage; // 0x45
		::System::UInt32 _FinalQuestID; // 0x48
		::System::UInt32 _P1BuffID; // 0x4C
		::System::UInt32 _CurrentFeverTimeID_k__BackingField; // 0x50
		::System::UInt32 _BattleHistoryLeftRound; // 0x54
		::System::UInt32 _GuideMainMissionID; // 0x58
		::System::UInt32 _P2BuffID; // 0x5C
		::System::UInt32 _BattleFeverTimeID; // 0x60
		::System::UInt32 _BattleCurrentLeftRound; // 0x64
		::RPG::GameCore::FeverTimePeriodType _BattlePeriodType; // 0x68
		::RPG::GameCore::ActivityRank _BattleRank; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdEnterFeverTimeActivityStageScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDENTERFEVERTIMEACTIVITYSTAGESCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _CmdGetFeverTimeActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDGETFEVERTIMEACTIVITYDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnFeverTimeActivityBattleEndScNotify(::System::UInt16 cmd, ::System::Object* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONFEVERTIMEACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, cmd, ntf);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, obj);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, o);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::UInt32 GetHistoryTurn(::System::UInt32 feverTimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYTURN_OFFSET))(this, feverTimeID);
		}

		::RPG::GameCore::ActivityRank GetHistoryBattleRank(::System::UInt32 feverTimeID)
		{
			return ((::RPG::GameCore::ActivityRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYBATTLERANK_OFFSET))(this, feverTimeID);
		}

		::System::Int32 GetBattleRank(::System::UInt32 feverTimeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETBATTLERANK_OFFSET))(this, feverTimeID);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitBattle(::System::Boolean showMainPage, ::System::UInt32 feverTimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, showMainPage, feverTimeID);
		}

		::System::Boolean IsInActivityFeverTimeBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISINACTIVITYFEVERTIMEBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupData(::System::UInt32 feverTimeID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETLINEUPDATA_OFFSET))(this, feverTimeID);
		}

		::System::Void SaveLineupData(::System::UInt32 feverTimeID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVELINEUPDATA_OFFSET))(this, feverTimeID, avatarIDList);
		}

		::System::UInt32 GetP1BuffID(::System::UInt32 feverTimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP1BUFFID_OFFSET))(this, feverTimeID);
		}

		::System::UInt32 GetP2BuffID(::System::UInt32 feverTimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP2BUFFID_OFFSET))(this, feverTimeID);
		}

		::System::UInt32 GetP3BuffID(::System::UInt32 feverTimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP3BUFFID_OFFSET))(this, feverTimeID);
		}

		::System::Void SaveP1BuffID(::System::UInt32 feverTimeID, ::System::UInt32 p1BuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP1BUFFID_OFFSET))(this, feverTimeID, p1BuffID);
		}

		::System::Void SaveP2BuffID(::System::UInt32 feverTimeID, ::System::UInt32 p2BuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP2BUFFID_OFFSET))(this, feverTimeID, p2BuffID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetTrialAvatars(::System::UInt32 feverTimeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARS_OFFSET))(this, feverTimeID);
		}

		::System::Void StartFeverTimeBattle(::System::UInt32 feverTimeID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::UInt32 p1BuffID, ::System::UInt32 p2BuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_STARTFEVERTIMEBATTLE_OFFSET))(this, feverTimeID, avatarIDList, p1BuffID, p2BuffID);
		}

		::System::Void RestartFeverTimeBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_RESTARTFEVERTIMEBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetTrialAvatarsByFeverTimeID(::System::UInt32 feverTimeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARSBYFEVERTIMEID_OFFSET))(this, feverTimeID);
		}

		::System::UInt32 GetTutorialGroupIDByBuffID(::System::UInt32 buffID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTUTORIALGROUPIDBYBUFFID_OFFSET))(this, buffID);
		}

		::System::Boolean CheckHasSeenLevel(::System::UInt32 feverTimeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASSEENLEVEL_OFFSET))(this, feverTimeID);
		}

		::System::Void SetHasSeenLevel(::System::UInt32 feverTimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASSEENLEVEL_OFFSET))(this, feverTimeID);
		}

		::System::Boolean CheckHasPlayLevelUnLockAnimation(::System::UInt32 feverTimeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASPLAYLEVELUNLOCKANIMATION_OFFSET))(this, feverTimeID);
		}

		::System::Void SetHasPlayLevelUnLockAnimation(::System::UInt32 feverTimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASPLAYLEVELUNLOCKANIMATION_OFFSET))(this, feverTimeID);
		}

		::System::Boolean IsShowEveryDayRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISSHOWEVERYDAYREDDOT_OFFSET))(this);
		}

		::System::Boolean HasLevelNotChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_HASLEVELNOTCHALLENGED_OFFSET))(this);
		}

		::System::Boolean CheckIsUnLock(::RPG::GameCore::ActivityFeverTimeConfigRow* configRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFeverTimeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKISUNLOCK_OFFSET))(this, configRow);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataListByWaveID(::System::UInt32 feverTimeID, ::System::UInt32 waveID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETMONSTERDATALISTBYWAVEID_OFFSET))(this, feverTimeID, waveID);
		}

		::System::UInt32 get_CurrentFeverTimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_CURRENTFEVERTIMEID_OFFSET))(this);
		}

		::System::Void set_CurrentFeverTimeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_CURRENTFEVERTIMEID_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleFeverTimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEFEVERTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_BattleCurrentLeftRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLECURRENTLEFTROUND_OFFSET))(this);
		}

		::System::UInt32 get_BattleHistoryLeftRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEHISTORYLEFTROUND_OFFSET))(this);
		}

		::RPG::GameCore::ActivityRank get_BattleRank()
		{
			return ((::RPG::GameCore::ActivityRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLERANK_OFFSET))(this);
		}

		::System::Boolean get_IsNewRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_ISNEWRANK_OFFSET))(this);
		}

		::System::UInt32 get_GuideMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_GUIDEMAINMISSIONID_OFFSET))(this);
		}

		::RPG::GameCore::FeverTimePeriodType get_FeverTimeBattlePeriodType()
		{
			return ((::RPG::GameCore::FeverTimePeriodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_FEVERTIMEBATTLEPERIODTYPE_OFFSET))(this);
		}

		::System::Void set_FeverTimeBattlePeriodType(::RPG::GameCore::FeverTimePeriodType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimePeriodType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_FEVERTIMEBATTLEPERIODTYPE_OFFSET))(this, value);
		}

		::System::Void _ClearBattleTempParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARBATTLETEMPPARAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D*>* _GetFeverTimeAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__GETFEVERTIMEAVATARLISTFROMIDLIST_OFFSET))(this, avatarIDList);
		}

		::System::Void _ClearAutoShowParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARAUTOSHOWPARAM_OFFSET))(this);
		}

		::System::Void _InitConstValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITCONSTVALUE_OFFSET))(this);
		}

		::System::Void _InitModuleRelatedMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITMODULERELATEDMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotQuestSeries()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_REDDOTQUESTSERIES_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeries(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_REDDOTQUESTSERIES_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
