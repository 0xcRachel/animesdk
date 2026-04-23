#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

class Class_1_09F9B94762F07206;
class Class_1_14E02E1F6D70E487_3;
class Class_1_6CF32442E7A80121;
class Class_1_7FF19F6206AF6DD7_16;
class Class_1_AD6EAABC8C018C94;
class Class_1_D17272E82AE804C2_186;
class Class_1_FBCD4FF549575A07;
class Class_1_FFBE0C992415AD1F_1;
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

#define RPG_CLIENT_CHESSROGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17794240)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCHESSBOARDPAGEFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0x17794E80)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCURROOMID_OFFSET UNITYSDK_OFFSET(0x17794D90)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCURSUBMODE_OFFSET UNITYSDK_OFFSET(0x17795280)
#define RPG_CLIENT_CHESSROGUEMODULE_GETGIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0x17794E20)
#define RPG_CLIENT_CHESSROGUEMODULE_GETPREAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x17795410)
#define RPG_CLIENT_CHESSROGUEMODULE_GET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET UNITYSDK_OFFSET(0x17796100)
#define RPG_CLIENT_CHESSROGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x17793760)
#define RPG_CLIENT_CHESSROGUEMODULE_ISINLASTLAYER_OFFSET UNITYSDK_OFFSET(0x17795500)
#define RPG_CLIENT_CHESSROGUEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x17794570)
#define RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUEANDSAVE_OFFSET UNITYSDK_OFFSET(0x1779B340)
#define RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUE_OFFSET UNITYSDK_OFFSET(0x1779B230)
#define RPG_CLIENT_CHESSROGUEMODULE_NEEDSHOWAEONMODIFIERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x177953D0)
#define RPG_CLIENT_CHESSROGUEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x17793A00)
#define RPG_CLIENT_CHESSROGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x177944E0)
#define RPG_CLIENT_CHESSROGUEMODULE_PREPAREALLCHESSROGUEMISSIONS_OFFSET UNITYSDK_OFFSET(0x17793B40)
#define RPG_CLIENT_CHESSROGUEMODULE_RESETWAITLEAVESTATUS_OFFSET UNITYSDK_OFFSET(0x17795390)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDCHESSROGUESKIPTEACHINGLEVELCSREQ_OFFSET UNITYSDK_OFFSET(0x1779B910)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDEDITCHESSROGUENOUSBRANCHSURFACECSREQ_OFFSET UNITYSDK_OFFSET(0x1779B840)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDGETCHESSROGUESTORYINFOCSREQ_OFFSET UNITYSDK_OFFSET(0x1779B670)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDGIVEUPCHESSROGUEREQ_OFFSET UNITYSDK_OFFSET(0x1779B560)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDREENTERROGUEREQ_OFFSET UNITYSDK_OFFSET(0x1779B450)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDRESETCHESSROGUEDICEBRANCHSURFACECSREQ_OFFSET UNITYSDK_OFFSET(0x1779B780)
#define RPG_CLIENT_CHESSROGUEMODULE_SETSHOWAEONMODIFIERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x17795350)
#define RPG_CLIENT_CHESSROGUEMODULE_SET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET UNITYSDK_OFFSET(0x17796110)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x17794720)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWAREANAMEAFTERTELEPOT_OFFSET UNITYSDK_OFFSET(0x17795450)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0x17794D20)
#define RPG_CLIENT_CHESSROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x17795610)
#define RPG_CLIENT_CHESSROGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x17796120)
#define RPG_CLIENT_CHESSROGUEMODULE__CHANGECHESSROGUEDICEPASSICEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0x17799FD0)
#define RPG_CLIENT_CHESSROGUEMODULE__CREATELAYERFINISHINFO_OFFSET UNITYSDK_OFFSET(0x17796000)
#define RPG_CLIENT_CHESSROGUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x17793440)
#define RPG_CLIENT_CHESSROGUEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x17795C30)
#define RPG_CLIENT_CHESSROGUEMODULE__GETMODULESCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x177945D0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECELLUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x17798E70)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHANGEAEONDIMENSIONNOTIFY_OFFSET UNITYSDK_OFFSET(0x17799720)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHEATROLLSCRSP_OFFSET UNITYSDK_OFFSET(0x17799530)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECONFIRMROLLSCRSP_OFFSET UNITYSDK_OFFSET(0x177995D0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERCELLSCRSP_OFFSET UNITYSDK_OFFSET(0x17798140)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERNEXTLAYERSCRSP_OFFSET UNITYSDK_OFFSET(0x17798730)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERSCRSP_OFFSET UNITYSDK_OFFSET(0x17797500)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x17797CF0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELAYERSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x177997F0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x17797750)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICESURFACEUNLOCKNOTIFY_OFFSET UNITYSDK_OFFSET(0x1779ADC0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICEUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x1779AE50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSEDITDICESCRSP_OFFSET UNITYSDK_OFFSET(0x1779AD20)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSENABLEROGUETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0x1779B130)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSGETROGUETALENTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1779B0B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x17796BC0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUESTFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x17798630)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUITSCRSP_OFFSET UNITYSDK_OFFSET(0x17797970)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEREROLLDICESCRSP_OFFSET UNITYSDK_OFFSET(0x17799490)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEROLLDICESCRSP_OFFSET UNITYSDK_OFFSET(0x177993F0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESELECTCELLSCRSP_OFFSET UNITYSDK_OFFSET(0x17798040)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESKIPTEACHINGLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x1779B1B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x17797220)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEACTIONPOINTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17797120)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEAEONMODIFIERVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17799E00)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEALLOWEDSELECTCELLSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17799300)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17799680)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEPASSIVEACCUMULATEVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17799F60)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATELEVELBASEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17798C70)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEMONEYINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17796E80)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEREVIVEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1779A880)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEUNLOCKLEVELSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17797FB0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x1779A210)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDENTERCHESSROGUEAEONROOMSCRSP_OFFSET UNITYSDK_OFFSET(0x17798AF0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDFINISHCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x1779A9E0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUENOUSSTORYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1779AFE0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUESTORYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1779AB20)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1779A150)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x1779A330)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x1779A660)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERADDNOTIFY_OFFSET UNITYSDK_OFFSET(0x17799AF0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERDELNOTIFY_OFFSET UNITYSDK_OFFSET(0x17799BD0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSELECTCELLSCRSP_OFFSET UNITYSDK_OFFSET(0x17799D50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSTAGESTARTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1779A0C0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x17799C70)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSELECTCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x1779A920)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUEMAINSTORYFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1779AA60)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSMAINSTORYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1779AF60)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSSUBSTORYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1779AEE0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONONSYNCROGUEVIRTUALITEM_OFFSET UNITYSDK_OFFSET(0x17795F40)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x17795FA0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULESTARTS_OFFSET UNITYSDK_OFFSET(0x17795DC0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSYNCCHESSROGUENOUSVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1779AC40)
#define RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET UNITYSDK_OFFSET(0x17798540)
#define RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET UNITYSDK_OFFSET(0x17797470)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEBOARDCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x17796FA0)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEINFO_OFFSET UNITYSDK_OFFSET(0x17796CA0)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCDICESELECTABLESTATUS_OFFSET UNITYSDK_OFFSET(0x177970B0)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x17796DD0)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0x17796F40)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYADDSCHEDULECALLBACK_OFFSET UNITYSDK_OFFSET(0x17795B20)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x17794960)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWFINISHPAGE_OFFSET UNITYSDK_OFFSET(0x177948A0)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWLAYERSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x17794900)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWNEWLAYERPAGE_OFFSET UNITYSDK_OFFSET(0x17794850)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWROGUENOUSENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x17794B60)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1779BB10)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1779BA20)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1779BAB0)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1779BB20)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1779BB80)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1779BBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueModule_TypeDefinitionIndex = 61639;

	class ChessRogueModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _ModuleScheduleKey; // 0x0
		// static const ::System::String* _ActivityScheduleKey; // 0x0
		::RPG::Client::RogueNousTalentInfo* NousTalentInfo; // 0x10
		::Class_1_09F9B94762F07206* _NewLayerInfo; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _ChessRogueMainMissionKeys; // 0x20
		::RPG::Client::ChessRogueData* ChessRogueData; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _ChessRogueSubMissionKeys; // 0x30
		::RPG::Client::ChessRogueExploreFinishInfo* _FinishInfo; // 0x38
		::RPG::Client::ChessRogueDimensionData* ChessRogueDimensionData; // 0x40
		::Class_1_AD6EAABC8C018C94* _LayerFinishInfo; // 0x48
		::RPG::Client::ChessRogueRewardData* ChessRogueRewardData; // 0x50
		::RPG::Client::ScheduleTask* _WaitOpenTask; // 0x58
		::RPG::Client::ChessRogueBoardChangeData* ChessRogueBoardChangeData; // 0x60
		::System::Int32 _PreAeonModifierValue; // 0x68
		::System::Boolean _NeedShowAreaNameAfterTelepot; // 0x6C
		::System::Boolean WaitAutoShowEntrancePage; // 0x6D
		::System::Boolean _WaitTriggerLeaveByAeonEffect_k__BackingField; // 0x6E
		::System::Boolean WaitAutoShowRogueNousEntrancePage; // 0x6F
		::System::Boolean _NeedShowAeonModifierValueChangeEffect; // 0x70

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

		::System::Void _SyncChessRogueInfo(::Class_1_14E02E1F6D70E487_3* chessRogueInfo, ::Class_1_7FF19F6206AF6DD7_16* beforeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*, ::Class_1_7FF19F6206AF6DD7_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEINFO_OFFSET))(this, chessRogueInfo, beforeInfo);
		}

		::System::Void _SyncChessRogueBoardChangeData(::Class_1_14E02E1F6D70E487_3* chessRogueInfo, ::Class_1_7FF19F6206AF6DD7_16* beforeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*, ::Class_1_7FF19F6206AF6DD7_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEBOARDCHANGEDATA_OFFSET))(this, chessRogueInfo, beforeInfo);
		}

		::System::Void _SyncGamePlayInfo(::Class_1_FBCD4FF549575A07* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCGAMEPLAYINFO_OFFSET))(this, info);
		}

		::System::Void _SyncDiceSelectableStatus(::Class_1_FFBE0C992415AD1F_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFBE0C992415AD1F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCDICESELECTABLESTATUS_OFFSET))(this, info);
		}

		::System::Void _SyncRogueCoin(::Class_1_D17272E82AE804C2_186* moneyInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_186*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCROGUECOIN_OFFSET))(this, moneyInfo);
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
