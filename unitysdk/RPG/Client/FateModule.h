#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0306FBB84513F0B2_Enum_3_B7038B9B9B1170D8.h"
#include "unitysdk/Class_1_943319D103CADBC3_Enum_3_FCBB2C507E9B21A3_14.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_10.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_1C553A7AF36F9656;
class Class_1_53AFE00DD1E71CE4;
class Class_1_5A55E8BED8FA46A4_1;
class Class_1_61DFA98C734D0B78;
class Class_1_D7F3D169C3137F53;
class Class_1_EA9A86514D37684F;
class Class_1_EA9A86514D37684F_Class_3_93D96BDF1D9E64B8;
class Class_1_EA9A86514D37684F_Class_3_BE27BF221D2C7791_1;
namespace RPG::Client { class FateAreaInfo; }
namespace RPG::Client { class FateBGMState; }
namespace RPG::Client { class FateExpRewardInfo; }
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class FateHandbookInfo; }
namespace RPG::Client { class FateStatisticsInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1791A8D0)
#define RPG_CLIENT_FATEMODULE_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1791AFE0)
#define RPG_CLIENT_FATEMODULE_FINISHFIRSTSYNCPROMISED_OFFSET UNITYSDK_OFFSET(0x1791B420)
#define RPG_CLIENT_FATEMODULE_GET_AREAINFO_OFFSET UNITYSDK_OFFSET(0x1791B8A0)
#define RPG_CLIENT_FATEMODULE_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x1791B8E0)
#define RPG_CLIENT_FATEMODULE_GET_EXPREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1791B8D0)
#define RPG_CLIENT_FATEMODULE_GET_GAMEDATA_OFFSET UNITYSDK_OFFSET(0x1791B890)
#define RPG_CLIENT_FATEMODULE_GET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0x1791B8C0)
#define RPG_CLIENT_FATEMODULE_GET_STATISTICSINFO_OFFSET UNITYSDK_OFFSET(0x1791B8B0)
#define RPG_CLIENT_FATEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1791A450)
#define RPG_CLIENT_FATEMODULE_LEAVEGAME_OFFSET UNITYSDK_OFFSET(0x1791AD90)
#define RPG_CLIENT_FATEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1791A710)
#define RPG_CLIENT_FATEMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1791B360)
#define RPG_CLIENT_FATEMODULE_SETAUTOSHOWROUNDPREPAREPAGE_OFFSET UNITYSDK_OFFSET(0x1791B3A0)
#define RPG_CLIENT_FATEMODULE_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0x1791ADE0)
#define RPG_CLIENT_FATEMODULE_SETWAITSHOWSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1791B3E0)
#define RPG_CLIENT_FATEMODULE_SWITCHGAMESTATEBYSERVERSTATUS_OFFSET UNITYSDK_OFFSET(0x1791AC10)
#define RPG_CLIENT_FATEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1791B040)
#define RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1791C820)
#define RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1791C7B0)
#define RPG_CLIENT_FATEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1791A5F0)
#define RPG_CLIENT_FATEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1791B8F0)
#define RPG_CLIENT_FATEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1791FCA0)
#define RPG_CLIENT_FATEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A330)
#define RPG_CLIENT_FATEMODULE__INITREQ_OFFSET UNITYSDK_OFFSET(0x1791B460)
#define RPG_CLIENT_FATEMODULE__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1791FE60)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDHOUGU_OFFSET UNITYSDK_OFFSET(0x1791EBC0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDREIJU_OFFSET UNITYSDK_OFFSET(0x1791EDA0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTAVAILABLESPECIALAVATARUPDATE_OFFSET UNITYSDK_OFFSET(0x1791D8C0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLEPREPARE_OFFSET UNITYSDK_OFFSET(0x1791DB60)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLESETTLE_OFFSET UNITYSDK_OFFSET(0x1791DC40)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFAMPLIFICATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1791DE30)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x1791DD20)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTCOINCHANGE_OFFSET UNITYSDK_OFFSET(0x1791E3E0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTEXTRABUFFSLOT_OFFSET UNITYSDK_OFFSET(0x1791E290)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELPHASECHANGE_OFFSET UNITYSDK_OFFSET(0x1791D700)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1791D5C0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTMASTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1791D7E0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERREMOVE_OFFSET UNITYSDK_OFFSET(0x1791DA80)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERUPDATE_OFFSET UNITYSDK_OFFSET(0x1791D9A0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTREMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0x1791ECB0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPGOODSLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x1791E5B0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPMGRUPDATE_OFFSET UNITYSDK_OFFSET(0x1791E800)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPREFRESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1791E9E0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x1791E090)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0x1791DF80)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRANSFEREDMAINTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0x1791E1A0)
#define RPG_CLIENT_FATEMODULE__ONFATECHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1791D190)
#define RPG_CLIENT_FATEMODULE__ONFATEHANDLEPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1791D450)
#define RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONHOUGUSELECT_OFFSET UNITYSDK_OFFSET(0x1791EF60)
#define RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONREIJUSELECT_OFFSET UNITYSDK_OFFSET(0x1791F050)
#define RPG_CLIENT_FATEMODULE__ONFATEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x1791C890)
#define RPG_CLIENT_FATEMODULE__ONFATESETTLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1791CF70)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPBUYGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x1791F260)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x1791FA80)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPLOCKGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x1791F8B0)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPREFRESHGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x1791F5D0)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPSELLBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x1791F410)
#define RPG_CLIENT_FATEMODULE__ONFATESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x1791CCF0)
#define RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDPREPARESTATE_OFFSET UNITYSDK_OFFSET(0x1791ABB0)
#define RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDSETTLESTATE_OFFSET UNITYSDK_OFFSET(0x1791AB50)
#define RPG_CLIENT_FATEMODULE__ONFATESYNCACTIONRESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1791D270)
#define RPG_CLIENT_FATEMODULE__ONFATESYNCPENDINGACTIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1791D360)
#define RPG_CLIENT_FATEMODULE__ONFATETAKEEXPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1791FB60)
#define RPG_CLIENT_FATEMODULE__SYNCAREAINFO_OFFSET UNITYSDK_OFFSET(0x1791CBA0)
#define RPG_CLIENT_FATEMODULE__SYNCEXPREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1791CC90)
#define RPG_CLIENT_FATEMODULE__SYNCGAMEDATA_OFFSET UNITYSDK_OFFSET(0x1791CB30)
#define RPG_CLIENT_FATEMODULE__SYNCSTATISTICSINFO_OFFSET UNITYSDK_OFFSET(0x1791CC00)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1791B130)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDPREPAREPAGE_OFFSET UNITYSDK_OFFSET(0x1791B190)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1791B230)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1791B2A0)
#define RPG_CLIENT_FATEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1791FFC0)
#define RPG_CLIENT_FATEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1791FE70)
#define RPG_CLIENT_FATEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1791FF60)
#define RPG_CLIENT_FATEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1791FF00)
#define RPG_CLIENT_FATEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1791FFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateModule_TypeDefinitionIndex = 58892;

	class FateModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_10, ::RPG::Client::FateGameStateType>** StaticGet__ServerStatus2GameState()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_10, ::RPG::Client::FateGameStateType>**)Il2CppClass::FromTypeDefinitionIndex(FateModule_TypeDefinitionIndex)->GetStaticField(0x111C0);
		}
		::RPG::Client::FateAreaInfo* _AreaInfo; // 0x10
		::Class_1_61DFA98C734D0B78* _GameStateMachine; // 0x18
		::RPG::Client::FateGameData* _GameData; // 0x20
		::Class_1_EA9A86514D37684F* _ActionDispatcher; // 0x28
		::RPG::Client::Promises::Promise* _FinishFirstSyncPromise; // 0x30
		::RPG::Client::FateBGMState* _BGMState; // 0x38
		::RPG::Client::FateExpRewardInfo* _ExpRewardInfo; // 0x40
		::RPG::Client::FateStatisticsInfo* _StatisticsInfo; // 0x48
		::RPG::Client::FateHandbookInfo* _HandbookInfo; // 0x50
		::System::Boolean _IsWaitShowEntrancePage; // 0x58
		::System::Boolean _IsWaitShowRoundSettlePage; // 0x59
		::System::UInt32 DebugSpecificTalkID; // 0x5C
		::System::Boolean _IsPendingGameSettleSwitch; // 0x60
		::System::Boolean _IsWaitShowRoundPreparePage; // 0x61
		::System::Boolean _IsManualSettle; // 0x62
		::System::Boolean _IsWaitShowSettlePage; // 0x63
		::Enum_3_71AA90D596A09AC8_10 _ServerGameStatus; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnFateSwitchToRoundSettleState(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDSETTLESTATE_OFFSET))(this, arg);
		}

		::System::Void _OnFateSwitchToRoundPrepareState(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDPREPARESTATE_OFFSET))(this, arg);
		}

		::System::Void SwitchGameStateByServerStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SWITCHGAMESTATEBYSERVERSTATUS_OFFSET))(this);
		}

		::System::Void LeaveGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_LEAVEGAME_OFFSET))(this);
		}

		::System::Void SettleGame(::System::Boolean isManual)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETTLEGAME_OFFSET))(this, isManual);
		}

		::System::Void EnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_ENTERBATTLE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowRoundPreparePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETAUTOSHOWROUNDPREPAREPAGE_OFFSET))(this);
		}

		::System::Void SetWaitShowSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETWAITSHOWSETTLEPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* FinishFirstSyncPromised()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_FINISHFIRSTSYNCPROMISED_OFFSET))(this);
		}

		::System::Void _InitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__INITREQ_OFFSET))(this);
		}

		::System::Void _TryAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowRoundPreparePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDPREPAREPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowRoundSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDSETTLEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET))(this);
		}

		::RPG::Client::FateGameData* get_GameData()
		{
			return ((::RPG::Client::FateGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_GAMEDATA_OFFSET))(this);
		}

		::RPG::Client::FateAreaInfo* get_AreaInfo()
		{
			return ((::RPG::Client::FateAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_AREAINFO_OFFSET))(this);
		}

		::RPG::Client::FateStatisticsInfo* get_StatisticsInfo()
		{
			return ((::RPG::Client::FateStatisticsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_STATISTICSINFO_OFFSET))(this);
		}

		::RPG::Client::FateHandbookInfo* get_HandbookInfo()
		{
			return ((::RPG::Client::FateHandbookInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_HANDBOOKINFO_OFFSET))(this);
		}

		::RPG::Client::FateExpRewardInfo* get_ExpRewardInfo()
		{
			return ((::RPG::Client::FateExpRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_EXPREWARDINFO_OFFSET))(this);
		}

		::RPG::Client::FateBGMState* get_BGMState()
		{
			return ((::RPG::Client::FateBGMState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFateQueryScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEQUERYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateStartScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESTARTSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateSettleScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESETTLESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateChangeLineupScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATECHANGELINEUPSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateSyncActionResultScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESYNCACTIONRESULTSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateSyncPendingActionScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESYNCPENDINGACTIONSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateHandlePendingActionScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEHANDLEPENDINGACTIONSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateActionResultLevelStatusChange(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELSTATUSCHANGE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultLevelPhaseChange(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELPHASECHANGE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultMasterUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTMASTERUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultAvailableSpecialAvatarUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTAVAILABLESPECIALAVATARUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultParamHolderUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultParamHolderRemove(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERREMOVE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultBattlePrepare(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLEPREPARE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultBattleSettle(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLESETTLE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultBuffUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultBuffAmplificationUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFAMPLIFICATIONUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultTraitUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultTraitBuffUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITBUFFUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultTransferedMainTraitUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRANSFEREDMAINTRAITUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultExtraBuffSlot(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTEXTRABUFFSLOT_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultCoinChange(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTCOINCHANGE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultShopGoodsLockUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPGOODSLOCKUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultShopMgrUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPMGRUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultShopRefreshUpdate(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPREFRESHUPDATE_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultAddHougu(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDHOUGU_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultRemoveHougu(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTREMOVEHOUGU_OFFSET))(this, protoObject);
		}

		::System::Void _OnFateActionResultAddReiju(::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDREIJU_OFFSET))(this, protoObject);
		}

		::System::Void _OnFatePendingActionHouguSelect(::System::UInt32 actionID, ::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONHOUGUSELECT_OFFSET))(this, actionID, protoObject);
		}

		::System::Void _OnFatePendingActionReijuSelect(::System::UInt32 actionID, ::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONREIJUSELECT_OFFSET))(this, actionID, protoObject);
		}

		::System::Void _OnFateShopBuyGoodsScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPBUYGOODSSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateShopSellBuffScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPSELLBUFFSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateShopRefreshGoodsScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPREFRESHGOODSSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateShopLockGoodsScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPLOCKGOODSSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateShopLeaveScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPLEAVESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnFateTakeExpRewardScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATETAKEEXPREWARDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _AddActionHandler(::Class_1_0306FBB84513F0B2_Enum_3_B7038B9B9B1170D8 oneofCase, ::Class_1_EA9A86514D37684F_Class_3_BE27BF221D2C7791_1* handler)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0306FBB84513F0B2_Enum_3_B7038B9B9B1170D8, ::Class_1_EA9A86514D37684F_Class_3_BE27BF221D2C7791_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_OFFSET))(this, oneofCase, handler);
		}

		::System::Void _AddActionHandler_1(::Class_1_943319D103CADBC3_Enum_3_FCBB2C507E9B21A3_14 oneofCase, ::Class_1_EA9A86514D37684F_Class_3_93D96BDF1D9E64B8* handler)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_943319D103CADBC3_Enum_3_FCBB2C507E9B21A3_14, ::Class_1_EA9A86514D37684F_Class_3_93D96BDF1D9E64B8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_1_OFFSET))(this, oneofCase, handler);
		}

		::System::Void _SyncGameData(::Class_1_D7F3D169C3137F53* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCGAMEDATA_OFFSET))(this, proto);
		}

		::System::Void _SyncAreaInfo(::Class_1_53AFE00DD1E71CE4* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53AFE00DD1E71CE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCAREAINFO_OFFSET))(this, proto);
		}

		::System::Void _SyncStatisticsInfo(::Class_1_1C553A7AF36F9656* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1C553A7AF36F9656*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCSTATISTICSINFO_OFFSET))(this, proto);
		}

		::System::Void _SyncExpRewardInfo(::Class_1_5A55E8BED8FA46A4_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCEXPREWARDINFO_OFFSET))(this, proto);
		}

		::System::Void _Init_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__INIT_B__1_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
