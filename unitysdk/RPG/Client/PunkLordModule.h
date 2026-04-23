#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ClientPunkLordShareType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D17272E82AE804C2_9;
namespace RPG::Client { class PunkLordData; }
namespace RPG::Client { class PunkLordInstance; }
namespace RPG::Client { class SettledPunkLordData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHRECORDWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x14EAE2E0)
#define RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHRECORD_OFFSET UNITYSDK_OFFSET(0x14EAA170)
#define RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHSETTLEDPUNKLORDDATAWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x14EAE110)
#define RPG_CLIENT_PUNKLORDMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14EAA920)
#define RPG_CLIENT_PUNKLORDMODULE_ENTERRAID_OFFSET UNITYSDK_OFFSET(0x14EADF90)
#define RPG_CLIENT_PUNKLORDMODULE_GETALLPUNKLORDTOTALSCORECANTAKE_OFFSET UNITYSDK_OFFSET(0x14EAE470)
#define RPG_CLIENT_PUNKLORDMODULE_GET_CURPUNKLORDINSTANCE_OFFSET UNITYSDK_OFFSET(0x14EAED50)
#define RPG_CLIENT_PUNKLORDMODULE_GET_PUNKLORDDATAS_OFFSET UNITYSDK_OFFSET(0x14EAE960)
#define RPG_CLIENT_PUNKLORDMODULE_GET_SETTLEDPUNKLORDDATALIST_OFFSET UNITYSDK_OFFSET(0x14EAE9F0)
#define RPG_CLIENT_PUNKLORDMODULE_GET_SHOWREDDOTQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x14EA7CB0)
#define RPG_CLIENT_PUNKLORDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x14EAA400)
#define RPG_CLIENT_PUNKLORDMODULE_REFRESHMONSTERLIST_OFFSET UNITYSDK_OFFSET(0x14EABC10)
#define RPG_CLIENT_PUNKLORDMODULE_REFRESHPUNKLORDPOINT_OFFSET UNITYSDK_OFFSET(0x14EAE360)
#define RPG_CLIENT_PUNKLORDMODULE_SETAUTOSHOWONEXITPUNKLORD_OFFSET UNITYSDK_OFFSET(0x14EAE5E0)
#define RPG_CLIENT_PUNKLORDMODULE_SHARE_OFFSET UNITYSDK_OFFSET(0x14EADED0)
#define RPG_CLIENT_PUNKLORDMODULE_SUMMONMONSTER_OFFSET UNITYSDK_OFFSET(0x14EADDC0)
#define RPG_CLIENT_PUNKLORDMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x14EAE050)
#define RPG_CLIENT_PUNKLORDMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x14EAE7F0)
#define RPG_CLIENT_PUNKLORDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x14EADCC0)
#define RPG_CLIENT_PUNKLORDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x14EAABE0)
#define RPG_CLIENT_PUNKLORDMODULE__ADDPUNKLORDDATA_OFFSET UNITYSDK_OFFSET(0x14EAB330)
#define RPG_CLIENT_PUNKLORDMODULE__ADDSETTLEDPUNKLORDDATA_OFFSET UNITYSDK_OFFSET(0x14EAD040)
#define RPG_CLIENT_PUNKLORDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x14EAED60)
#define RPG_CLIENT_PUNKLORDMODULE__GETPUNKLORDDATA_OFFSET UNITYSDK_OFFSET(0x14EAB230)
#define RPG_CLIENT_PUNKLORDMODULE__GETSETTLEDPUNKLORDDATA_OFFSET UNITYSDK_OFFSET(0x14EAD120)
#define RPG_CLIENT_PUNKLORDMODULE__ISCURINPROGRESSPUNKLORD_OFFSET UNITYSDK_OFFSET(0x14EAC8E0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDGETKILLEDPUNKLORDMONSTERDATASCRSP_OFFSET UNITYSDK_OFFSET(0x14EACDA0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDBATTLERECORDSCRSP_OFFSET UNITYSDK_OFFSET(0x14EAD950)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDDATASCRSP_OFFSET UNITYSDK_OFFSET(0x14EAC560)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDMONSTERDATASCRSP_OFFSET UNITYSDK_OFFSET(0x14EAAF40)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDLEAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x14EACA90)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDBATTLERESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x14EACBB0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x14EAD6B0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDMONSTERINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x14EAC680)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDMONSTERKILLEDNOTIFY_OFFSET UNITYSDK_OFFSET(0x14EAD220)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDSHAREPUNKLORDMONSTERSCRSP_OFFSET UNITYSDK_OFFSET(0x14EABD20)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDSTARTPUNKLORDRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x14EAB740)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDSUMMONPUNKLORDMONSTERSCRSP_OFFSET UNITYSDK_OFFSET(0x14EABE80)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDTAKEKILLEDPUNKLORDMONSTERSCORESCRSP_OFFSET UNITYSDK_OFFSET(0x14EAD580)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDTAKEPUNKLORDPOINTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x14EAC080)
#define RPG_CLIENT_PUNKLORDMODULE__ONGAMECONTEXTSTART_OFFSET UNITYSDK_OFFSET(0x14EADD70)
#define RPG_CLIENT_PUNKLORDMODULE__ONPUNKLORDRAIDTIMEOUTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x14EAC960)
#define RPG_CLIENT_PUNKLORDMODULE__PREPARERELATEDUSERINFO_OFFSET UNITYSDK_OFFSET(0x14EAB410)
#define RPG_CLIENT_PUNKLORDMODULE__REFRESHQUESTREDDOT_OFFSET UNITYSDK_OFFSET(0x14EAEA80)
#define RPG_CLIENT_PUNKLORDMODULE__REFRESHRECORDREDDOT_OFFSET UNITYSDK_OFFSET(0x14EAD420)
#define RPG_CLIENT_PUNKLORDMODULE__REFRESHREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x14EAC220)
#define RPG_CLIENT_PUNKLORDMODULE__REFRESHSUMMONANDSUPPORTREDDOT_OFFSET UNITYSDK_OFFSET(0x14EAD7E0)
#define RPG_CLIENT_PUNKLORDMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14EAEFC0)
#define RPG_CLIENT_PUNKLORDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x14EAEF30)
#define RPG_CLIENT_PUNKLORDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x14EAF030)
#define RPG_CLIENT_PUNKLORDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x14EAEFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordModule_TypeDefinitionIndex = 61471;

	class PunkLordModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::PunkLordInstance* _CurPunkLordInstance; // 0x10
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* AppearedMonsterRecord; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* PunkLordRewardTakenList; // 0x20
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* DeadMonsterRecord; // 0x28
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GetSettledDataPromise; // 0x30
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GetBattleRecordPromise; // 0x38
		::Class_1_D17272E82AE804C2_9* _TempPunkLordMonsterKey; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::SettledPunkLordData*>* _SettledPunkLordDatas; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _ShowRedDotQuestIDList; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::PunkLordData*>* _PunkLordDatas; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* DailyQuestList; // 0x60
		::System::Boolean ShowRecordRedDot; // 0x68
		::System::Boolean SettledPunkLordDataDirty; // 0x69
		::System::Boolean ShowRewardRedDot; // 0x6A
		::System::Boolean _WaitAutoShow; // 0x6B
		::System::UInt32 GMSummonPlayerUID; // 0x6C
		::System::UInt32 _OriginPlaneID; // 0x70
		::System::UInt32 RaidTimeLimit; // 0x74
		::System::UInt32 ConsumeStaminaCount; // 0x78
		::System::UInt32 OverBonusRewardTakenTime; // 0x7C
		::System::Boolean ShowSupportRedDot; // 0x80
		::System::Boolean ShowSummonRedDot; // 0x81
		::System::UInt32 PunkLordSupportRecoverLimit; // 0x84
		::System::UInt32 SupportLeftTimes; // 0x88
		::System::UInt32 _OriginFloorID; // 0x8C
		::System::UInt32 PunkLordSupportItemConfigID; // 0x90
		::System::Int64 SupportRefreshTime; // 0x98
		::System::UInt32 OverBonusRewardPoint; // 0xA0
		::System::UInt32 OverBonusRewardLimit; // 0xA4
		::System::UInt32 PunkLordPoint; // 0xA8
		::System::UInt32 SummonLeftCount; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetPunkLordMonsterDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDMONSTERDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStartPunkLordRaidScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDSTARTPUNKLORDRAIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSharePunkLordMonsterScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDSHAREPUNKLORDMONSTERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSummonPunkLordMonsterScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDSUMMONPUNKLORDMONSTERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakePunkLordPointRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDTAKEPUNKLORDPOINTREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetPunkLordDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPunkLordMonsterInfoScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDMONSTERINFOSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnPunkLordRaidTimeOutScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONPUNKLORDRAIDTIMEOUTSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdLeaveRaidScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDLEAVERAIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPunkLordBattleResultScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDBATTLERESULTSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdGetKilledPunkLordMonsterDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDGETKILLEDPUNKLORDMONSTERDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPunkLordMonsterKilledNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDMONSTERKILLEDNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdTakeKilledPunkLordMonsterScoreScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDTAKEKILLEDPUNKLORDMONSTERSCORESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPunkLordDataChangeNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDDATACHANGENOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdGetPunkLordBattleRecordScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDBATTLERECORDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGameContextStart(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONGAMECONTEXTSTART_OFFSET))(this, arg);
		}

		::System::Void SummonMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_SUMMONMONSTER_OFFSET))(this);
		}

		::System::Void Share(::RPG::Client::PunkLordData* punkLordData, ::RPG::Client::ClientPunkLordShareType shareType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*, ::RPG::Client::ClientPunkLordShareType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_SHARE_OFFSET))(this, punkLordData, shareType);
		}

		::System::Void RefreshMonsterList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_REFRESHMONSTERLIST_OFFSET))(this);
		}

		::System::Void EnterRaid(::RPG::Client::PunkLordData* punkLordData, ::System::Boolean isPowerAttack)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_ENTERRAID_OFFSET))(this, punkLordData, isPowerAttack);
		}

		::System::Void TakeReward(::System::UInt32 level, ::System::Boolean isOverBonusReward)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_TAKEREWARD_OFFSET))(this, level, isOverBonusReward);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AsyncRefreshSettledPunkLordDataWithPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHSETTLEDPUNKLORDDATAWITHPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Boolean>* AsyncRefreshRecordWithPromise(::RPG::Client::PunkLordData* punkLordData)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHRECORDWITHPROMISE_OFFSET))(this, punkLordData);
		}

		::System::Void AsyncRefreshRecord(::RPG::Client::PunkLordData* punkLordData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHRECORD_OFFSET))(this, punkLordData);
		}

		::System::Void RefreshPunkLordPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_REFRESHPUNKLORDPOINT_OFFSET))(this);
		}

		::System::UInt32 GetAllPunkLordTotalScoreCanTake()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GETALLPUNKLORDTOTALSCORECANTAKE_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitPunkLord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_SETAUTOSHOWONEXITPUNKLORD_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::RPG::Client::PunkLordData* _GetPunkLordData(::System::UInt32 serverID, ::System::UInt32 summonUID)
		{
			return ((::RPG::Client::PunkLordData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__GETPUNKLORDDATA_OFFSET))(this, serverID, summonUID);
		}

		::System::Void _AddSettledPunkLordData(::RPG::Client::SettledPunkLordData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ADDSETTLEDPUNKLORDDATA_OFFSET))(this, data);
		}

		::RPG::Client::SettledPunkLordData* _GetSettledPunkLordData(::System::UInt32 serverID, ::System::UInt32 summonUID)
		{
			return ((::RPG::Client::SettledPunkLordData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__GETSETTLEDPUNKLORDDATA_OFFSET))(this, serverID, summonUID);
		}

		::System::Void _AddPunkLordData(::RPG::Client::PunkLordData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ADDPUNKLORDDATA_OFFSET))(this, data);
		}

		::System::Boolean _IsCurInProgressPunkLord(::System::UInt32 serverID, ::System::UInt32 summonUID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ISCURINPROGRESSPUNKLORD_OFFSET))(this, serverID, summonUID);
		}

		::System::Void _PrepareRelatedUserInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__PREPARERELATEDUSERINFO_OFFSET))(this);
		}

		::System::Void _RefreshRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__REFRESHREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshQuestRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__REFRESHQUESTREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshRecordRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__REFRESHRECORDREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshSummonAndSupportRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__REFRESHSUMMONANDSUPPORTREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PunkLordData*>* get_PunkLordDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PunkLordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GET_PUNKLORDDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SettledPunkLordData*>* get_SettledPunkLordDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SettledPunkLordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GET_SETTLEDPUNKLORDDATALIST_OFFSET))(this);
		}

		::RPG::Client::PunkLordInstance* get_CurPunkLordInstance()
		{
			return ((::RPG::Client::PunkLordInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GET_CURPUNKLORDINSTANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ShowRedDotQuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GET_SHOWREDDOTQUESTIDLIST_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
