#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

class Class_1_09F9B94762F07206;
class Class_1_3C58D309C7A040F5_14;
class Class_1_5FEFAED860528596_17;
class Class_1_6CF32442E7A80121;
class Class_1_A662F2CB6C6610D2_1;
class Class_1_AD6EAABC8C018C94;
class Class_1_FA4F4A67B1C04320_156;
class Class_1_FBCD4FF549575A07;
namespace RPG::Client { class ChessRogueBoardChangeData; }
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client { class ChessRogueDimensionData; }
namespace RPG::Client { class ChessRogueExploreFinishInfo; }
namespace RPG::Client { class ChessRogueRewardData; }
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousTalentInfo; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EE0E40)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCHESSBOARDPAGEFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0x8EE1A60)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCURROOMID_OFFSET UNITYSDK_OFFSET(0x8EE1970)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCURSUBMODE_OFFSET UNITYSDK_OFFSET(0x8EE1D90)
#define RPG_CLIENT_CHESSROGUEMODULE_GETGIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0x8EE1A00)
#define RPG_CLIENT_CHESSROGUEMODULE_GETPREAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x8EE2000)
#define RPG_CLIENT_CHESSROGUEMODULE_GET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET UNITYSDK_OFFSET(0x8EE2A90)
#define RPG_CLIENT_CHESSROGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8EE0A60)
#define RPG_CLIENT_CHESSROGUEMODULE_ISINLASTLAYER_OFFSET UNITYSDK_OFFSET(0x8EE20F0)
#define RPG_CLIENT_CHESSROGUEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x8EE1160)
#define RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUEANDSAVE_OFFSET UNITYSDK_OFFSET(0x8EE7F60)
#define RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUE_OFFSET UNITYSDK_OFFSET(0x8EE7E50)
#define RPG_CLIENT_CHESSROGUEMODULE_NEEDSHOWAEONMODIFIERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x8EE1FC0)
#define RPG_CLIENT_CHESSROGUEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x8EE0D00)
#define RPG_CLIENT_CHESSROGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8EE10D0)
#define RPG_CLIENT_CHESSROGUEMODULE_PREPAREALLCHESSROGUEMISSIONS_OFFSET UNITYSDK_OFFSET(0x8EC9520)
#define RPG_CLIENT_CHESSROGUEMODULE_RESETWAITLEAVESTATUS_OFFSET UNITYSDK_OFFSET(0x8EE1F80)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDCHESSROGUESKIPTEACHINGLEVELCSREQ_OFFSET UNITYSDK_OFFSET(0x8EE8530)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDEDITCHESSROGUENOUSBRANCHSURFACECSREQ_OFFSET UNITYSDK_OFFSET(0x8EE8460)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDGETCHESSROGUESTORYINFOCSREQ_OFFSET UNITYSDK_OFFSET(0x8EE8290)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDGIVEUPCHESSROGUEREQ_OFFSET UNITYSDK_OFFSET(0x8EE8180)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDREENTERROGUEREQ_OFFSET UNITYSDK_OFFSET(0x8EE8070)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDRESETCHESSROGUEDICEBRANCHSURFACECSREQ_OFFSET UNITYSDK_OFFSET(0x8EE83A0)
#define RPG_CLIENT_CHESSROGUEMODULE_SETSHOWAEONMODIFIERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x8EE1F40)
#define RPG_CLIENT_CHESSROGUEMODULE_SET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET UNITYSDK_OFFSET(0x8EE2AA0)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x8EE1310)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWAREANAMEAFTERTELEPOT_OFFSET UNITYSDK_OFFSET(0x8EE2040)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0x8EE1900)
#define RPG_CLIENT_CHESSROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EE2390)
#define RPG_CLIENT_CHESSROGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EE2AB0)
#define RPG_CLIENT_CHESSROGUEMODULE__CHANGECHESSROGUEDICEPASSICEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0x8EE6BA0)
#define RPG_CLIENT_CHESSROGUEMODULE__CREATELAYERFINISHINFO_OFFSET UNITYSDK_OFFSET(0x8EE2990)
#define RPG_CLIENT_CHESSROGUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE0740)
#define RPG_CLIENT_CHESSROGUEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x8EE25C0)
#define RPG_CLIENT_CHESSROGUEMODULE__GETMODULESCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x8EE11C0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECELLUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE5AB0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHANGEAEONDIMENSIONNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE6360)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHEATROLLSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE6170)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECONFIRMROLLSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE6210)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERCELLSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE4DA0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERNEXTLAYERSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE52C0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE3E70)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE4800)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELAYERSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x8EE6430)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x8EE4060)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICESURFACEUNLOCKNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE79E0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICEUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE7A70)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSEDITDICESCRSP_OFFSET UNITYSDK_OFFSET(0x8EE7940)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSENABLEROGUETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE7D50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSGETROGUETALENTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE7CD0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE3550)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUESTFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE51C0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUITSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE4340)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEREROLLDICESCRSP_OFFSET UNITYSDK_OFFSET(0x8EE60D0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEROLLDICESCRSP_OFFSET UNITYSDK_OFFSET(0x8EE6030)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESELECTCELLSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE4CA0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESKIPTEACHINGLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE7DD0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE3C00)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEACTIONPOINTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE3B00)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEAEONMODIFIERVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE69D0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEALLOWEDSELECTCELLSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE5F40)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE62C0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEPASSIVEACCUMULATEVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE6B30)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATELEVELBASEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE5730)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEMONEYINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE3870)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEREVIVEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE74A0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEUNLOCKLEVELSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE4C10)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE6E00)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDENTERCHESSROGUEAEONROOMSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE55B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDFINISHCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE7600)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUENOUSSTORYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE7C00)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUESTORYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE7740)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE6D40)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE6F20)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE7250)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERADDNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE6660)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERDELNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE6770)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSELECTCELLSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE6920)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSTAGESTARTNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE6C90)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE6810)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSELECTCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x8EE7540)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUEMAINSTORYFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE7680)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSMAINSTORYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE7B80)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSSUBSTORYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE7B00)
#define RPG_CLIENT_CHESSROGUEMODULE__ONONSYNCROGUEVIRTUALITEM_OFFSET UNITYSDK_OFFSET(0x8EE28D0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x8EE2930)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULESTARTS_OFFSET UNITYSDK_OFFSET(0x8EE2750)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSYNCCHESSROGUENOUSVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EE7860)
#define RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET UNITYSDK_OFFSET(0x8EE50D0)
#define RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET UNITYSDK_OFFSET(0x8EE3DE0)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEBOARDCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x8EE3990)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEINFO_OFFSET UNITYSDK_OFFSET(0x8EE3630)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCDICESELECTABLESTATUS_OFFSET UNITYSDK_OFFSET(0x8EE3A90)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x8EE37C0)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCROGUEVIRTUALITEMS_OFFSET UNITYSDK_OFFSET(0x8EE3930)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYADDSCHEDULECALLBACK_OFFSET UNITYSDK_OFFSET(0x8EE24B0)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x8EE1550)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWFINISHPAGE_OFFSET UNITYSDK_OFFSET(0x8EE1490)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWLAYERSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x8EE14F0)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWNEWLAYERPAGE_OFFSET UNITYSDK_OFFSET(0x8EE1440)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWROGUENOUSENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x8EE1740)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EE8730)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8EE8640)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x8EE86D0)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8EE8740)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EE87A0)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EE8800)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueModule_TypeDefinitionIndex = 53310;

	class ChessRogueModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _ModuleScheduleKey; // 0x0
		// static const ::System::String* _ActivityScheduleKey; // 0x0
		::RPG::Client::ChessRogueRewardData* ChessRogueRewardData; // 0x10
		::RPG::Client::ChessRogueData* ChessRogueData; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _ChessRogueMainMissionKeys; // 0x20
		::RPG::Client::ChessRogueExploreFinishInfo* _FinishInfo; // 0x28
		::RPG::Client::ScheduleTask* _WaitOpenTask; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _ChessRogueSubMissionKeys; // 0x38
		::RPG::Client::ChessRogueDimensionData* ChessRogueDimensionData; // 0x40
		::RPG::Client::ChessRogueBoardChangeData* ChessRogueBoardChangeData; // 0x48
		::RPG::Client::RogueNousTalentInfo* NousTalentInfo; // 0x50
		::Class_1_09F9B94762F07206* _NewLayerInfo; // 0x58
		::Class_1_AD6EAABC8C018C94* _LayerFinishInfo; // 0x60
		::System::Int32 _PreAeonModifierValue; // 0x68
		::System::Boolean WaitAutoShowRogueNousEntrancePage; // 0x6C
		::System::Boolean _WaitTriggerLeaveByAeonEffect_k__BackingField; // 0x6D
		::System::Boolean WaitAutoShowEntrancePage; // 0x6E
		::System::Boolean _NeedShowAeonModifierValueChangeEffect; // 0x6F
		::System::Boolean _NeedShowAreaNameAfterTelepot; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void TryShowMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWMAINPAGE_OFFSET))(this);
		}

		::System::UInt32 GetCurRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETCURROOMID_OFFSET))(this);
		}

		::System::UInt32 GetGiveUpObtainCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETGIVEUPOBTAINCOIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetChessBoardPageFuncEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETCHESSBOARDPAGEFUNCENTRANCELIST_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareAllChessRogueMissions()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_PREPAREALLCHESSROGUEMISSIONS_OFFSET))(this);
		}

		::System::Void SetShowAeonModifierChangeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SETSHOWAEONMODIFIERCHANGEEFFECT_OFFSET))(this);
		}

		::System::Void ResetWaitLeaveStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_RESETWAITLEAVESTATUS_OFFSET))(this);
		}

		::System::Boolean NeedShowAeonModifierChangeEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_NEEDSHOWAEONMODIFIERCHANGEEFFECT_OFFSET))(this);
		}

		::System::Int32 GetPreAeonModifierValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETPREAEONMODIFIERVALUE_OFFSET))(this);
		}

		::System::Boolean TryShowAreaNameAfterTelepot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWAREANAMEAFTERTELEPOT_OFFSET))(this);
		}

		::System::Boolean IsInLastLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_ISINLASTLAYER_OFFSET))(this);
		}

		::RPG::GameCore::RogueSubMode GetCurSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETCURSUBMODE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _TryAutoShowFinishPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWFINISHPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowNewLayerPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWNEWLAYERPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowLayerSettlement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWLAYERSETTLEMENT_OFFSET))(this);
		}

		::System::Void _TryAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowRogueNousEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWROGUENOUSENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _TryAddScheduleCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYADDSCHEDULECALLBACK_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* _GetModuleScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__GETMODULESCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* _GetActivityScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET))(this);
		}

		::System::Void _OnScheduleStarts(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULESTARTS_OFFSET))(this, scheduleData);
		}

		::System::Void _OnOnSyncRogueVirtualItem(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONONSYNCROGUEVIRTUALITEM_OFFSET))(this, obj);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, obj);
		}

		::Class_1_AD6EAABC8C018C94* _CreateLayerFinishInfo(::RPG::GameCore::RogueSubMode subMode, ::Class_1_6CF32442E7A80121* proto, ::System::Boolean isReconnect)
		{
			return ((::Class_1_AD6EAABC8C018C94*(*)(::PVOID, ::RPG::GameCore::RogueSubMode, ::Class_1_6CF32442E7A80121*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__CREATELAYERFINISHINFO_OFFSET))(this, subMode, proto, isReconnect);
		}

		::System::Boolean get_WaitTriggerLeaveByAeonEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET))(this);
		}

		::System::Void set_WaitTriggerLeaveByAeonEffect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET))(this, value);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdChessRogueQueryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUERYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateMoneyInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEMONEYINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncChessRogueInfo(::Class_1_A662F2CB6C6610D2_1* chessRogueInfo, ::Class_1_3C58D309C7A040F5_14* beforeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A662F2CB6C6610D2_1*, ::Class_1_3C58D309C7A040F5_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEINFO_OFFSET))(this, chessRogueInfo, beforeInfo);
		}

		::System::Void _SyncChessRogueBoardChangeData(::Class_1_A662F2CB6C6610D2_1* chessRogueInfo, ::Class_1_3C58D309C7A040F5_14* beforeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A662F2CB6C6610D2_1*, ::Class_1_3C58D309C7A040F5_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEBOARDCHANGEDATA_OFFSET))(this, chessRogueInfo, beforeInfo);
		}

		::System::Void _SyncGamePlayInfo(::Class_1_FBCD4FF549575A07* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCGAMEPLAYINFO_OFFSET))(this, info);
		}

		::System::Void _SyncDiceSelectableStatus(::Class_1_5FEFAED860528596_17* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCDICESELECTABLESTATUS_OFFSET))(this, info);
		}

		::System::Void _SyncRogueVirtualItems(::Class_1_FA4F4A67B1C04320_156* moneyInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_156*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCROGUEVIRTUALITEMS_OFFSET))(this, moneyInfo);
		}

		::System::Void _OnCmdChessRogueUpdateActionPointScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEACTIONPOINTSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueStartScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESTARTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueEnterScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueLeaveScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELEAVESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueQuitScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUITSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueGiveUpScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEGIVEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateUnlockLevelScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEUNLOCKLEVELSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueSelectCellScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESELECTCELLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueEnterCellScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERCELLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SetTransitionPerformanceTypeInRogue(::System::Boolean crossMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET))(this, crossMap);
		}

		::System::Void _SetTransitionPerformanceTypeOutOfRogue(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET))(this, isEnter);
		}

		::System::Void _OnCmdChessRogueQuestFinishNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUESTFINISHNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdChessRogueEnterNextLayerScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERNEXTLAYERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnterChessRogueAeonRoomScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDENTERCHESSROGUEAEONROOMSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateLevelBaseInfoScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATELEVELBASEINFOSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdChessRogueCellUpdateNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECELLUPDATENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateAllowedSelectCellScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEALLOWEDSELECTCELLSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueRollDiceScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEROLLDICESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueReRollDiceScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEREROLLDICESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueCheatRollScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHEATROLLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueConfirmRollScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECONFIRMROLLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateDiceInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueChangeAeonDimensionNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHANGEAEONDIMENSIONNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueLayerSettlement(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELAYERSETTLEMENT_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRogueModifierAddNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERADDNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRogueModifierDelNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERDELNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRogueModifierUpdateNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERUPDATENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRogueModifierSelectCellScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSELECTCELLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateAeonModifierValueScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEAEONMODIFIERVALUESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateDicePassiveAccumulateValueScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEPASSIVEACCUMULATEVALUESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _ChangeChessRogueDicePassiceAccumulateValue(::System::Int32 curPassiveAccumulateValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__CHANGECHESSROGUEDICEPASSICEACCUMULATEVALUE_OFFSET))(this, curPassiveAccumulateValue);
		}

		::System::Void _OnCmdRogueModifierStageStartNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSTAGESTARTNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetRogueBuffEnhanceInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnhanceRogueBuffScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPickRogueAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdReviveRogueAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateReviveInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEREVIVEINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSelectChessRogueSubStoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSELECTCHESSROGUESUBSTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdFinishChessRogueSubStoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDFINISHCHESSROGUESUBSTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncChessRogueMainStoryFinishScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUEMAINSTORYFINISHSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdGetChessRogueStoryInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUESTORYINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncChessRogueNousValueScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONSYNCCHESSROGUENOUSVALUESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueNousEditDiceScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSEDITDICESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueNousDiceSurfaceUnlockNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICESURFACEUNLOCKNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdChessRogueNousDiceUpdateNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICEUPDATENOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdSyncChessRogueNousSubStoryScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSSUBSTORYSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncChessRogueNousMainStoryScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSMAINSTORYSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetChessRogueNousStoryInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUENOUSSTORYINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueNousGetRogueTalentInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSGETROGUETALENTINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueNousEnableRogueTalentScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSENABLEROGUETALENTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueSkipTeachingLevelScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESKIPTEACHINGLEVELSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void LeaveChessRogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUE_OFFSET))(this);
		}

		::System::Void LeaveChessRogueAndSave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUEANDSAVE_OFFSET))(this);
		}

		::System::Void SendReEnterRogueReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDREENTERROGUEREQ_OFFSET))(this);
		}

		::System::Void SendGiveUpChessRogueReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDGIVEUPCHESSROGUEREQ_OFFSET))(this);
		}

		::System::Void SendGetChessRogueStoryInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDGETCHESSROGUESTORYINFOCSREQ_OFFSET))(this);
		}

		::System::Void SendResetChessRogueDiceBranchSurfaceCsReq(::RPG::Client::RogueNousDiceBranchDataItem* branch)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDRESETCHESSROGUEDICEBRANCHSURFACECSREQ_OFFSET))(this, branch);
		}

		::System::Void SendEditChessRogueNousBranchSurfaceCsReq(::System::UInt32 branchID, ::System::UInt32 slotID, ::System::UInt32 surfaceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDEDITCHESSROGUENOUSBRANCHSURFACECSREQ_OFFSET))(this, branchID, slotID, surfaceID);
		}

		::System::Void SendChessRogueSkipTeachingLevelCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDCHESSROGUESKIPTEACHINGLEVELCSREQ_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
