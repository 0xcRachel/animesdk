#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_51.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/RaidConfigExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/RPG/GameCore/RaidEnterType.h"

class Class_1_5A55E8BED8FA46A4_5;
class Class_1_A272ECC07A17819C_2;
class Class_1_BB4B99DE4C2501EC_10;
class Class_1_BB4B99DE4C2501EC_2;
class Class_2_AA9239F66AD90F88_4;
namespace Proto { class ItemList; }
namespace RPG::Client { class BattleResultInfo; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RaidBattleScoringResult; }
namespace RPG::Client { class TreasureChallengeData; }
namespace RPG::Client { class TreasureChallengeInstance; }
namespace RPG::Client { class TreasureChallengeTarget; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RaidConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RAIDMODULE_CANSHOWRAIDTEAMHINT_OFFSET UNITYSDK_OFFSET(0x160060C0)
#define RPG_CLIENT_RAIDMODULE_CHECKISHAVINGSAVE_OFFSET UNITYSDK_OFFSET(0x16002E80)
#define RPG_CLIENT_RAIDMODULE_CHECKRAIDBANWITHHINT_OFFSET UNITYSDK_OFFSET(0x16008410)
#define RPG_CLIENT_RAIDMODULE_CUSTOMADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x160034B0)
#define RPG_CLIENT_RAIDMODULE_CUSTOMDISPOSETREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0x16003AB0)
#define RPG_CLIENT_RAIDMODULE_CUSTOMINITTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0x160030D0)
#define RPG_CLIENT_RAIDMODULE_CUSTOMUINITTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0x16003980)
#define RPG_CLIENT_RAIDMODULE_GETDEFAULTRAIDTEAMWITHTRIAL_OFFSET UNITYSDK_OFFSET(0x16008C80)
#define RPG_CLIENT_RAIDMODULE_GETLASTACTIVERAIDID_OFFSET UNITYSDK_OFFSET(0x16007FF0)
#define RPG_CLIENT_RAIDMODULE_GETRAIDENTERTYPE_OFFSET UNITYSDK_OFFSET(0x16008110)
#define RPG_CLIENT_RAIDMODULE_GETRAIDMINWORLDLV_OFFSET UNITYSDK_OFFSET(0x15FFDA50)
#define RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGESTATUS_OFFSET UNITYSDK_OFFSET(0x16002D50)
#define RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGEVALIDLEVELS_OFFSET UNITYSDK_OFFSET(0x16002110)
#define RPG_CLIENT_RAIDMODULE_GETTREASUREREWARDDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x16002B60)
#define RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDCONFIG_OFFSET UNITYSDK_OFFSET(0x16008A50)
#define RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDINSTANCE_OFFSET UNITYSDK_OFFSET(0x16006AC0)
#define RPG_CLIENT_RAIDMODULE_GET_FINISHTIME_OFFSET UNITYSDK_OFFSET(0x16006A50)
#define RPG_CLIENT_RAIDMODULE_GET_ISINRAID_OFFSET UNITYSDK_OFFSET(0x15FFFD00)
#define RPG_CLIENT_RAIDMODULE_GET_ISINTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0x16006AB0)
#define RPG_CLIENT_RAIDMODULE_GET_ISRAIDLOCKCAPTAIN_OFFSET UNITYSDK_OFFSET(0x1600AD20)
#define RPG_CLIENT_RAIDMODULE_GET__CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x16009C30)
#define RPG_CLIENT_RAIDMODULE_GOTORAID_OFFSET UNITYSDK_OFFSET(0x16006C70)
#define RPG_CLIENT_RAIDMODULE_INITTREASURECHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0x16003300)
#define RPG_CLIENT_RAIDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x16006AD0)
#define RPG_CLIENT_RAIDMODULE_ISCURRENTRAIDNEEDTOHIDESTORYLINETOAST_OFFSET UNITYSDK_OFFSET(0x16008530)
#define RPG_CLIENT_RAIDMODULE_ISNEXTLEVELUNLOCKED_OFFSET UNITYSDK_OFFSET(0x160047F0)
#define RPG_CLIENT_RAIDMODULE_ISRAIDBANNED_OFFSET UNITYSDK_OFFSET(0x16008330)
#define RPG_CLIENT_RAIDMODULE_ISRAIDEXIST_OFFSET UNITYSDK_OFFSET(0x16006F20)
#define RPG_CLIENT_RAIDMODULE_ISRAIDFINISHED_OFFSET UNITYSDK_OFFSET(0x160082D0)
#define RPG_CLIENT_RAIDMODULE_ISRAIDTEAMCANEDIT_OFFSET UNITYSDK_OFFSET(0x160086D0)
#define RPG_CLIENT_RAIDMODULE_ISSAVERAIDTYPE_OFFSET UNITYSDK_OFFSET(0x16003040)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGECOMPLETED_OFFSET UNITYSDK_OFFSET(0x16001EE0)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYNORMAL_OFFSET UNITYSDK_OFFSET(0x160024C0)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYSCHEDULE_OFFSET UNITYSDK_OFFSET(0x16002370)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKED_OFFSET UNITYSDK_OFFSET(0x160022F0)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x16001FF0)
#define RPG_CLIENT_RAIDMODULE_LEAVERAID_OFFSET UNITYSDK_OFFSET(0x160079A0)
#define RPG_CLIENT_RAIDMODULE_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x16005E30)
#define RPG_CLIENT_RAIDMODULE_ONCMDDELSAVERAIDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x160066A0)
#define RPG_CLIENT_RAIDMODULE_ONCMDGETALLSAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x160064C0)
#define RPG_CLIENT_RAIDMODULE_ONCMDGETRAIDINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x160050C0)
#define RPG_CLIENT_RAIDMODULE_ONCMDGETSAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x16006440)
#define RPG_CLIENT_RAIDMODULE_ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x16006310)
#define RPG_CLIENT_RAIDMODULE_ONCMDRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0x16005550)
#define RPG_CLIENT_RAIDMODULE_ONCMDSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x16006260)
#define RPG_CLIENT_RAIDMODULE_ONLEAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x16006150)
#define RPG_CLIENT_RAIDMODULE_RAIDLOGINPROMISE_OFFSET UNITYSDK_OFFSET(0x16007C20)
#define RPG_CLIENT_RAIDMODULE_REGISTERLEAVERAIDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16008030)
#define RPG_CLIENT_RAIDMODULE_RESETTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0x16002E20)
#define RPG_CLIENT_RAIDMODULE_RESTARTRAID_OFFSET UNITYSDK_OFFSET(0x16007CD0)
#define RPG_CLIENT_RAIDMODULE_SENDTREASURECHALLENGESETTLEMENT_OFFSET UNITYSDK_OFFSET(0x16004260)
#define RPG_CLIENT_RAIDMODULE_STARTRAIDBYMESSAGE_OFFSET UNITYSDK_OFFSET(0x160070D0)
#define RPG_CLIENT_RAIDMODULE_STARTRAID_OFFSET UNITYSDK_OFFSET(0x160026A0)
#define RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGEBYHELIOBUS_OFFSET UNITYSDK_OFFSET(0x16002A50)
#define RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0x15FFDD50)
#define RPG_CLIENT_RAIDMODULE_TRACKFIRSTSTARTMISSIONINCURRENTSNAPMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x16005DE0)
#define RPG_CLIENT_RAIDMODULE_TRYRECORDTEAMHINTFLAG_OFFSET UNITYSDK_OFFSET(0x16007420)
#define RPG_CLIENT_RAIDMODULE_TRYSHOWTEAMHINT_OFFSET UNITYSDK_OFFSET(0x16005E80)
#define RPG_CLIENT_RAIDMODULE_TRYSWITCHCLIENTRAIDMAP_OFFSET UNITYSDK_OFFSET(0x16007D40)
#define RPG_CLIENT_RAIDMODULE_TRYSWITCHRAIDMAP_OFFSET UNITYSDK_OFFSET(0x16007DD0)
#define RPG_CLIENT_RAIDMODULE_TRYUPDATETREASURECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x16003B80)
#define RPG_CLIENT_RAIDMODULE_UNREGISTERLEAVERAIDCALLBACK_OFFSET UNITYSDK_OFFSET(0x160080A0)
#define RPG_CLIENT_RAIDMODULE_UPDATECURRENTTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0x16003B10)
#define RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGENEWSTATUS_OFFSET UNITYSDK_OFFSET(0x16004BF0)
#define RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGETARGETONRSP_OFFSET UNITYSDK_OFFSET(0x16003E50)
#define RPG_CLIENT_RAIDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x160098A0)
#define RPG_CLIENT_RAIDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x16009E70)
#define RPG_CLIENT_RAIDMODULE__CACHEREWARD_OFFSET UNITYSDK_OFFSET(0x1600A690)
#define RPG_CLIENT_RAIDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1600B050)
#define RPG_CLIENT_RAIDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1600ADE0)
#define RPG_CLIENT_RAIDMODULE__DISPOSECURRENTRAID_OFFSET UNITYSDK_OFFSET(0x1600ACC0)
#define RPG_CLIENT_RAIDMODULE__DOENTERRAID_OFFSET UNITYSDK_OFFSET(0x1600A060)
#define RPG_CLIENT_RAIDMODULE__ENTERMAP_OFFSET UNITYSDK_OFFSET(0x16005010)
#define RPG_CLIENT_RAIDMODULE__GETCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0x16008AC0)
#define RPG_CLIENT_RAIDMODULE__GETDEFAULTRAIDTEAM_OFFSET UNITYSDK_OFFSET(0x16007500)
#define RPG_CLIENT_RAIDMODULE__INITBATTLESCORINGRESULT_OFFSET UNITYSDK_OFFSET(0x16009C90)
#define RPG_CLIENT_RAIDMODULE__INITRAIDTYPETABLE_OFFSET UNITYSDK_OFFSET(0x16006B70)
#define RPG_CLIENT_RAIDMODULE__NOTIFYBATTLESCORINGRESULT_OFFSET UNITYSDK_OFFSET(0x16009AF0)
#define RPG_CLIENT_RAIDMODULE__NOTIFYFARMREWARD_OFFSET UNITYSDK_OFFSET(0x16009A60)
#define RPG_CLIENT_RAIDMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET UNITYSDK_OFFSET(0x160068E0)
#define RPG_CLIENT_RAIDMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1600A8B0)
#define RPG_CLIENT_RAIDMODULE__ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x1600A430)
#define RPG_CLIENT_RAIDMODULE__ONCMDRAIDCOLLECTIONENTERNEXTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x1600AC00)
#define RPG_CLIENT_RAIDMODULE__ONCMDRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0x1600A540)
#define RPG_CLIENT_RAIDMODULE__ONCMDRAIDKICKBYSERVER_OFFSET UNITYSDK_OFFSET(0x16006720)
#define RPG_CLIENT_RAIDMODULE__ONCMDSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x16009FC0)
#define RPG_CLIENT_RAIDMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x160099C0)
#define RPG_CLIENT_RAIDMODULE__ONRAIDBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0x16009B50)
#define RPG_CLIENT_RAIDMODULE__RAIDLOGINPROMISE_B__62_0_OFFSET UNITYSDK_OFFSET(0x1600B0E0)
#define RPG_CLIENT_RAIDMODULE__SENDGETALLSAVERAIDDATA_OFFSET UNITYSDK_OFFSET(0x16003740)
#define RPG_CLIENT_RAIDMODULE__SENDGETSAVERAIDDATA_OFFSET UNITYSDK_OFFSET(0x16003800)
#define RPG_CLIENT_RAIDMODULE__SENDSTARTRAIDREQ_OFFSET UNITYSDK_OFFSET(0x160075C0)
#define RPG_CLIENT_RAIDMODULE__SETTRACKINGMISSIONWHENLEAVE_OFFSET UNITYSDK_OFFSET(0x160057F0)
#define RPG_CLIENT_RAIDMODULE__SETTRACKMISSIONWHENRELOGIN_OFFSET UNITYSDK_OFFSET(0x16005D70)
#define RPG_CLIENT_RAIDMODULE__TRYUPDATETREASURECHALLENGESAVESTATUS_OFFSET UNITYSDK_OFFSET(0x16003D40)
#define RPG_CLIENT_RAIDMODULE__UPDATERAIDDATA_OFFSET UNITYSDK_OFFSET(0x1600A7D0)
#define RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1600B100)
#define RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1600B190)
#define RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1600B1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule_TypeDefinitionIndex = 61492;

	class RaidModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::RaidConfigType>** StaticGet_TypeNeedShowSettlePage()
		{
			return (::Il2CppArray<::RPG::GameCore::RaidConfigType>**)Il2CppClass::FromTypeDefinitionIndex(RaidModule_TypeDefinitionIndex)->GetStaticField(0x16EC0);
		}
		::System::Action* _LeaveRaidCallback; // 0x10
		::RPG::Client::Promises::Promise* _InitialRaidPromise; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _LastTeamData; // 0x20
		::Class_2_AA9239F66AD90F88_4* _RaidMissionTrackingStrategy; // 0x28
		::RPG::Client::TreasureChallengeInstance* _CurrentRaidInstance; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::Client::TreasureChallengeData*>* _TreasureChallengeStatus; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _CachedRewardItems; // 0x40
		::RPG::Client::Promises::Promise* _InitialNotifyPromise; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::Client::TreasureChallengeTarget*>* _TreasureChallengeTargets; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedRaidIDs; // 0x58
		::RPG::Client::RaidBattleScoringResult* _CacheBattleScoringResult; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RaidConfigType>* _RaidTypeTable; // 0x68
		::System::UInt32 _CurrentRaidID; // 0x70
		::RPG::GameCore::GameModeType _RaidGameMode; // 0x74
		::System::UInt32 _CurrentRaidLevel; // 0x78
		::System::Boolean _WaitMissionInit; // 0x7C
		::System::Boolean NeedAutoTriggerRaidEntrance; // 0x7D
		::System::Boolean ShowTeamHintFlag; // 0x7E
		::System::UInt32 _HeliobusSelectSkillID; // 0x80
		::Enum_3_DB663931210BBC27_51 _CurrentRaidStatus; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__CCTOR_OFFSET))();
		}

		::System::Boolean IsTreasureChallengeCompleted(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGECOMPLETED_OFFSET))(this, raidID, level);
		}

		::System::Boolean IsTreasureChallengeRewardTaken(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGEREWARDTAKEN_OFFSET))(this, raidID, level);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTreasureChallengeValidLevels(::System::UInt32 raidID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGEVALIDLEVELS_OFFSET))(this, raidID);
		}

		::System::Boolean IsTreasureChallengeLevelLocked(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKED_OFFSET))(this, raidID, level);
		}

		::System::Boolean IsTreasureChallengeLevelLockedBySchedule(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYSCHEDULE_OFFSET))(this, raidID, level);
		}

		::System::Boolean IsTreasureChallengeLevelLockedByNormal(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYNORMAL_OFFSET))(this, raidID, level);
		}

		::System::Void StartTreasureChallenge(::System::UInt32 propEntityID, ::System::UInt32 raidID, ::System::UInt32 level, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Boolean isSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGE_OFFSET))(this, propEntityID, raidID, level, avatarIDList, isSave);
		}

		::System::Void StartTreasureChallengeByHeliobus(::System::UInt32 skillID, ::System::UInt32 propEntityID, ::System::UInt32 raidID, ::System::UInt32 level, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Boolean isSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGEBYHELIOBUS_OFFSET))(this, skillID, propEntityID, raidID, level, avatarIDList, isSave);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetTreasureRewardDisplayDatas(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETTREASUREREWARDDISPLAYDATAS_OFFSET))(this, raidID, level);
		}

		::RPG::Client::TreasureChallengeTarget* GetTreasureChallengeStatus(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::RPG::Client::TreasureChallengeTarget*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGESTATUS_OFFSET))(this, raidID, level);
		}

		::System::Void ResetTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_RESETTREASURECHALLENGE_OFFSET))(this);
		}

		::System::Boolean CheckIsHavingSave(::System::UInt32 raidID, ::System::UInt32 hardLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CHECKISHAVINGSAVE_OFFSET))(this, raidID, hardLevel);
		}

		::System::Boolean IsSaveRaidType(::System::UInt32 raidID, ::System::UInt32 hardLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISSAVERAIDTYPE_OFFSET))(this, raidID, hardLevel);
		}

		::System::Void CustomInitTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMINITTREASURECHALLENGE_OFFSET))(this);
		}

		::System::Void CustomAddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMADDHANDLERS_OFFSET))(this);
		}

		::System::Void _SendGetAllSaveRaidData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SENDGETALLSAVERAIDDATA_OFFSET))(this);
		}

		::System::Void _SendGetSaveRaidData(::System::UInt32 raidID, ::System::UInt32 hardLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SENDGETSAVERAIDDATA_OFFSET))(this, raidID, hardLevel);
		}

		::System::Void CustomUinitTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMUINITTREASURECHALLENGE_OFFSET))(this);
		}

		::System::Void CustomDisposeTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMDISPOSETREASURECHALLENGE_OFFSET))(this);
		}

		::System::Void UpdateCurrentTreasureChallenge(::System::UInt32 currentRaidID, ::System::UInt32 currentRaidLevel, ::Enum_3_DB663931210BBC27_51 currentRaidStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Enum_3_DB663931210BBC27_51))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UPDATECURRENTTREASURECHALLENGE_OFFSET))(this, currentRaidID, currentRaidLevel, currentRaidStatus);
		}

		::System::Void TryUpdateTreasureChallengeData(::Class_1_BB4B99DE4C2501EC_10* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYUPDATETREASURECHALLENGEDATA_OFFSET))(this, ntf);
		}

		::System::Void _TryUpdateTreasureChallengeSaveStatus(::System::UInt32 raidID, ::System::UInt32 hardLevel, ::System::Boolean isSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__TRYUPDATETREASURECHALLENGESAVESTATUS_OFFSET))(this, raidID, hardLevel, isSave);
		}

		::System::Void InitTreasureChallengeTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_INITTREASURECHALLENGETARGETS_OFFSET))(this);
		}

		::System::Void UpdateTreasureChallengeTargetOnRsp(::Class_1_5A55E8BED8FA46A4_5* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGETARGETONRSP_OFFSET))(this, info);
		}

		::System::Void SendTreasureChallengeSettlement(::Class_1_BB4B99DE4C2501EC_10* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_SENDTREASURECHALLENGESETTLEMENT_OFFSET))(this, ntf);
		}

		::System::Boolean IsNextLevelUnlocked(::System::UInt32 id, ::System::UInt32 lv)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISNEXTLEVELUNLOCKED_OFFSET))(this, id, lv);
		}

		::System::Void UpdateTreasureChallengeNewStatus(::Class_1_BB4B99DE4C2501EC_10* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGENEWSTATUS_OFFSET))(this, ntf);
		}

		::System::Void _EnterMap(::Class_1_BB4B99DE4C2501EC_2* sceneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ENTERMAP_OFFSET))(this, sceneInfo);
		}

		::System::Void OnCmdGetRaidInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDGETRAIDINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnCmdRaidInfoNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDRAIDINFONOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SetTrackingMissionWhenLeave(::Enum_3_DB663931210BBC27_51 currentStatus, ::System::UInt32 raidID, ::System::UInt32 raidLevel)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_51, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SETTRACKINGMISSIONWHENLEAVE_OFFSET))(this, currentStatus, raidID, raidLevel);
		}

		::System::Void _SetTrackMissionWhenReLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SETTRACKMISSIONWHENRELOGIN_OFFSET))(this);
		}

		::System::Void TrackFirstStartMissionInCurrentSnapMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRACKFIRSTSTARTMISSIONINCURRENTSNAPMISSIONLIST_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseEntered(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONADVENTUREPHASEENTERED_OFFSET))(this, o);
		}

		::System::Void TryShowTeamHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYSHOWTEAMHINT_OFFSET))(this);
		}

		::System::Void OnLeaveRaidScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONLEAVERAIDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void OnCmdStartRaidScRsp(::System::UInt16 cmdid, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDSTARTRAIDSCRSP_OFFSET))(this, cmdid, rspObject);
		}

		::System::Void OnCmdHeliobusStartRaidScRsp(::System::UInt16 cmdid, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET))(this, cmdid, rspObject);
		}

		::System::Void OnCmdGetSaveRaidScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDGETSAVERAIDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void OnCmdGetAllSaveRaidScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDGETALLSAVERAIDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void OnCmdDelSaveRaidScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDDELSAVERAIDSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdRaidKickByServer(::System::UInt16 cmdID, ::System::Object* ntfObejct)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDRAIDKICKBYSERVER_OFFSET))(this, cmdID, ntfObejct);
		}

		::System::Void _OnAdventurePhasePopupFinish(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET))(this, o);
		}

		::System::UInt64 get_FinishTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_FINISHTIME_OFFSET))(this);
		}

		::System::Boolean get_IsInTreasureChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_ISINTREASURECHALLENGE_OFFSET))(this);
		}

		::RPG::Client::TreasureChallengeInstance* get_CurrentRaidInstance()
		{
			return ((::RPG::Client::TreasureChallengeInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDINSTANCE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_INIT_OFFSET))(this);
		}

		::System::Boolean GoToRaid(::System::UInt32 raidID, ::System::UInt32 propEntityID, ::System::Boolean skipUI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GOTORAID_OFFSET))(this, raidID, propEntityID, skipUI);
		}

		::System::Boolean StartRaidByMessage(::System::UInt32 raidID, ::System::Boolean skipUI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTRAIDBYMESSAGE_OFFSET))(this, raidID, skipUI);
		}

		::System::Void StartRaid(::System::UInt32 propEntityID, ::System::UInt32 raidID, ::System::UInt32 worldLevel, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Boolean useSave, ::RPG::GameCore::RaidConfigType raidType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::RPG::GameCore::RaidConfigType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTRAID_OFFSET))(this, propEntityID, raidID, worldLevel, avatarIDList, useSave, raidType);
		}

		::System::Void TryRecordTeamHintFlag(::System::UInt32 raidID, ::System::UInt32 worldLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYRECORDTEAMHINTFLAG_OFFSET))(this, raidID, worldLevel);
		}

		::System::Boolean CanShowRaidTeamHint(::RPG::GameCore::RaidConfigRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CANSHOWRAIDTEAMHINT_OFFSET))(this, row);
		}

		::System::Void LeaveRaid(::System::Boolean isSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_LEAVERAID_OFFSET))(this, isSave);
		}

		::RPG::Client::Promises::Promise* RaidLoginPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_RAIDLOGINPROMISE_OFFSET))(this);
		}

		::System::Void RestartRaid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_RESTARTRAID_OFFSET))(this);
		}

		::System::Boolean TrySwitchClientRaidMap(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYSWITCHCLIENTRAIDMAP_OFFSET))(this, entranceID);
		}

		::System::Boolean TrySwitchRaidMap(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYSWITCHRAIDMAP_OFFSET))(this, entranceID);
		}

		::System::UInt32 GetLastActiveRaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETLASTACTIVERAIDID_OFFSET))(this);
		}

		::System::Void RegisterLeaveRaidCallBack(::System::Action* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_REGISTERLEAVERAIDCALLBACK_OFFSET))(this, callBack);
		}

		::System::Void UnregisterLeaveRaidCallBack(::System::Action* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UNREGISTERLEAVERAIDCALLBACK_OFFSET))(this, callBack);
		}

		::System::Boolean IsRaidExist(::System::UInt32 raidID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDEXIST_OFFSET))(this, raidID);
		}

		::RPG::GameCore::RaidEnterType GetRaidEnterType(::System::UInt32 raidID)
		{
			return ((::RPG::GameCore::RaidEnterType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETRAIDENTERTYPE_OFFSET))(this, raidID);
		}

		::System::Boolean IsRaidFinished(::System::UInt32 raidID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDFINISHED_OFFSET))(this, raidID);
		}

		::System::UInt32 GetRaidMinWorldLv(::System::UInt32 raidID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETRAIDMINWORLDLV_OFFSET))(this, raidID);
		}

		::System::Boolean IsRaidBanned(::System::UInt32 raidID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDBANNED_OFFSET))(this, raidID);
		}

		::System::Boolean CheckRaidBanWithHint(::System::UInt32 raidID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CHECKRAIDBANWITHHINT_OFFSET))(this, raidID);
		}

		::System::Boolean IsCurrentRaidNeedToHideStoryLineToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISCURRENTRAIDNEEDTOHIDESTORYLINETOAST_OFFSET))(this);
		}

		::System::Boolean IsRaidTeamCanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDTEAMCANEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetCurrentTeam()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__GETCURRENTTEAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDefaultRaidTeamWithTrial(::RPG::GameCore::RaidConfigRow* raidRow, ::System::UInt32 worldLevel)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETDEFAULTRAIDTEAMWITHTRIAL_OFFSET))(this, raidRow, worldLevel);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _OnRaidBattleFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONRAIDBATTLEFINISH_OFFSET))(this, arg);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdStartRaidScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDSTARTRAIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _DoEnterRaid(::Class_1_A272ECC07A17819C_2* scene)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A272ECC07A17819C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__DOENTERRAID_OFFSET))(this, scene);
		}

		::System::Void _OnCmdHeliobusStartRaidScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRaidInfoNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDRAIDINFONOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateRaidData(::System::UInt32 raidID, ::Enum_3_DB663931210BBC27_51 status)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_DB663931210BBC27_51))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__UPDATERAIDDATA_OFFSET))(this, raidID, status);
		}

		::System::Void _OnCmdGetRaidInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRaidCollectionEnterNextRaidScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDRAIDCOLLECTIONENTERNEXTRAIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _DisposeCurrentRaid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__DISPOSECURRENTRAID_OFFSET))(this);
		}

		::System::Void _CacheReward(::Proto::ItemList* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__CACHEREWARD_OFFSET))(this, itemList);
		}

		::System::Void _InitRaidTypeTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__INITRAIDTYPETABLE_OFFSET))(this);
		}

		::System::Void _InitBattleScoringResult(::RPG::Client::BattleResultInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__INITBATTLESCORINGRESULT_OFFSET))(this, info);
		}

		::System::Void _NotifyFarmReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__NOTIFYFARMREWARD_OFFSET))(this);
		}

		::System::Void _NotifyBattleScoringResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__NOTIFYBATTLESCORINGRESULT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetDefaultRaidTeam(::System::UInt32 raidID, ::System::UInt32 worldLevel)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__GETDEFAULTRAIDTEAM_OFFSET))(this, raidID, worldLevel);
		}

		::System::Void _SendStartRaidReq(::System::UInt32 propEntityID, ::System::UInt32 raidID, ::System::UInt32 worldLevel, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Boolean useSave, ::RPG::GameCore::RaidConfigType raidType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::RPG::GameCore::RaidConfigType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SENDSTARTRAIDREQ_OFFSET))(this, propEntityID, raidID, worldLevel, avatarIDList, useSave, raidType);
		}

		::System::Boolean get_IsInRaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_ISINRAID_OFFSET))(this);
		}

		::RPG::GameCore::RaidConfigRow* get_CurrentRaidConfig()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsRaidLockCaptain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_ISRAIDLOCKCAPTAIN_OFFSET))(this);
		}

		::RPG::GameCore::RaidConfigType get__CurrentRaidType()
		{
			return ((::RPG::GameCore::RaidConfigType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET__CURRENTRAIDTYPE_OFFSET))(this);
		}

		::System::Void _RaidLoginPromise_b__62_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__RAIDLOGINPROMISE_B__62_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
