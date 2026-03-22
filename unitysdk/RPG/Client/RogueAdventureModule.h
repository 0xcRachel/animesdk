#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/Proto/RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

class Class_0_16E4307DCC419505_496;
class Class_0_16E4307DCC419505_650;
class Class_1_120319518E6F6581_98;
class Class_1_2250AFBBC876BF24_1;
class Class_1_3BF4D371398AB9DB;
class Class_1_84BF80250A9F5C6A;
class Class_1_8C3F509D34B4C4A1;
class Class_1_9A232D961EB1529E;
class Class_1_9A27691571A52F2A;
class Class_1_9D5608F598A30CAC_8;
class Class_1_A662F2CB6C6610D2_1;
class Class_1_AFA032BCA5DAB27D;
class Class_1_CEC38EC3A51F2C03;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueMedalInfo; }
namespace RPG::Client { class RogueShopInfo; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ROGUEADVENTUREMODULE_CONVERTWOLFGUNTARGETINFO_OFFSET UNITYSDK_OFFSET(0x9DD5100)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_DEQUEUEROGUEACTIONITEM_OFFSET UNITYSDK_OFFSET(0x9DD1FA0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DD01A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISBANAEONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9DD1E80)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISLASTLEGACYROGUESUBMODEDLC_OFFSET UNITYSDK_OFFSET(0x9DD48C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISMIRACLEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9DD1CE0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISSHOWHANDBOOKHINT_OFFSET UNITYSDK_OFFSET(0x9DD1DE0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISTOURNGODMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9DD1F10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUEDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0x9DD4970)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x9DD48A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET UNITYSDK_OFFSET(0x9DD4950)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_MEDALINFO_OFFSET UNITYSDK_OFFSET(0x9DCFE70)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ROGUESHOPINFO_OFFSET UNITYSDK_OFFSET(0x9DD17A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_TIMERATIO_OFFSET UNITYSDK_OFFSET(0x9DD5430)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFGUNEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x9DD5410)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFSHOOTINGSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x9DD5440)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_1_OFFSET UNITYSDK_OFFSET(0x9DD27C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_2_OFFSET UNITYSDK_OFFSET(0x9DD2850)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_3_OFFSET UNITYSDK_OFFSET(0x9DD28C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0x9DD2460)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9DCFF10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEACTIONQUEUELOCKED_OFFSET UNITYSDK_OFFSET(0x9DD38A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEFUNCTIONTYPEUNLOCK_OFFSET UNITYSDK_OFFSET(0x9DD1D70)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_MARKSELECTACTIONACTIVE_OFFSET UNITYSDK_OFFSET(0x9DD2060)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_REMOVETRIGGEREDACTIONID_OFFSET UNITYSDK_OFFSET(0x9DD21C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNDATA_OFFSET UNITYSDK_OFFSET(0x9DD52F0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x9DD5380)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SETROGUEACTIONQUEUELOCKED_OFFSET UNITYSDK_OFFSET(0x9DD3720)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUEDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0x9DD4980)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x9DD48B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET UNITYSDK_OFFSET(0x9DD4960)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_ROGUESHOPINFO_OFFSET UNITYSDK_OFFSET(0x9DD17B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_WOLFGUNEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x9DD5420)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRIGGERROGUESELECTACTIONSHOW_OFFSET UNITYSDK_OFFSET(0x9DD3920)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYADDROOMCHANGEDELAYNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DD3AA0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYINVOKEROGUEACTIONSINLOADING_OFFSET UNITYSDK_OFFSET(0x9DD3C50)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYSTARTACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0x9DD3E50)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYTAKEOVERSWITCHPAGE_OFFSET UNITYSDK_OFFSET(0x9DD3DF0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_UPDATEWOLFGUNINFO_OFFSET UNITYSDK_OFFSET(0x9DD5080)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD0530)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD08B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDGAMBLEFUNCPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD0A40)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD0400)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD05A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_OFFSET UNITYSDK_OFFSET(0x9DD2F10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGSELECTACTION_OFFSET UNITYSDK_OFFSET(0x9DD2A10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDROOMCHANGEDELAYNOTIFYEVENT_OFFSET UNITYSDK_OFFSET(0x9DD39C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDSHOPPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD0730)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWOLFBROGUNPLAYPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD4F70)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWORKBENCHPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD0990)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__CHECKLOCKBYINSTANTKILLTOAST_OFFSET UNITYSDK_OFFSET(0x9DD3400)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DCFE80)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__GETACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0x9DD3250)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__INITROGUEACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0x9DD2640)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD1A10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPFORMULASCRSP_OFFSET UNITYSDK_OFFSET(0x9DD1C20)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPMIRACLESCRSP_OFFSET UNITYSDK_OFFSET(0x9DD1840)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPBUFFINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD18C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPFORMULAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD1AD0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPMIRACLEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD17C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD30A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEDOGAMBLESCRSP_OFFSET UNITYSDK_OFFSET(0x9DD4670)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEGETGAMBLEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD42C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD3EC0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHHANDLEFUNCSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD4230)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DD2D80)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONPENDINGACTIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DD2930)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD0AF0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DD11A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DD12E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONENTERROGUETRACKMISSION_OFFSET UNITYSDK_OFFSET(0x9DD4EB0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONEXCHANGEROGUEREWARDKEYSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD1710)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONINSTANTKILLTOASTLOCK_OFFSET UNITYSDK_OFFSET(0x9DD36B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONINTERACTPROPSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD1630)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONLEAVEROGUETRACKMISSION_OFFSET UNITYSDK_OFFSET(0x9DD4F10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x9DD3B10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONUIWOLFBROSHOOTINGROGUEBONUSTARGETKILLED_OFFSET UNITYSDK_OFFSET(0x9DD4FB0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__PROCESSEVENTS_OFFSET UNITYSDK_OFFSET(0x9DD3BC0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONLASTAREAINFO_OFFSET UNITYSDK_OFFSET(0x9DD4840)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONUNLOCKINFO_OFFSET UNITYSDK_OFFSET(0x9DD0FB0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x9DD2A90)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKLASTMISSION_OFFSET UNITYSDK_OFFSET(0x9DD4D80)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKROGUEMISSION_OFFSET UNITYSDK_OFFSET(0x9DD4990)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DD54E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9DD5450)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD54F0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD5550)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule_TypeDefinitionIndex = 53528;

	class RogueAdventureModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_496*>* _CurActiveSelectActions; // 0x10
		::Class_1_8C3F509D34B4C4A1* _WolfGunInfo; // 0x18
		::RPG::Client::RogueShopInfo* _RogueShopInfo_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::Enum_3_96F6662CA3713095_24>* _UnlockFunctionTypes; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _WolfGunExtraRewards_k__BackingField; // 0x30
		::RPG::Client::RogueMedalInfo* _MedalInfo_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CEC38EC3A51F2C03*>* _ActionQueues; // 0x40
		::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>* _EventHideScreenTransfer; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ActionQueueLocked; // 0x50
		::RPG::Client::LuaUIController* _CacheSwitchPage; // 0x58
		::System::Single _TimeRatio; // 0x60
		::System::UInt32 _LastTrackMissionID; // 0x64
		::System::Boolean IsServerRoomChanging; // 0x68
		::System::Boolean _HasMissionTrackLogicInit; // 0x69
		::System::Boolean IsBossCaseWolfGun; // 0x6A
		::System::UInt32 LockedRogueSubModeByRefreshMap; // 0x6C
		::System::UInt32 _TargetRogueMissionID; // 0x70
		::System::UInt32 _WolfShootingSerialNumber; // 0x74
		::RPG::GameCore::RogueSubMode _LastLegacyRogueSubMode_k__BackingField; // 0x78
		::RPG::GameCore::RogueSubMode _LastLegacyRogueDLCSubMode_k__BackingField; // 0x7C
		::System::UInt32 _LastLegacySimulatedRogueAreaID_k__BackingField; // 0x80
		::System::UInt32 _LockedRogueSubModeByInstantKill; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueMedalInfo* get_MedalInfo()
		{
			return ((::RPG::Client::RogueMedalInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_MEDALINFO_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCommonRogueQueryScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEQUERYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCommonRogueUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCommonRogueVirtualItemInfoScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnInteractPropScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONINTERACTPROPSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnExchangeRogueRewardKeyScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONEXCHANGEROGUEREWARDKEYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::RPG::Client::RogueShopInfo* get_RogueShopInfo()
		{
			return ((::RPG::Client::RogueShopInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ROGUESHOPINFO_OFFSET))(this);
		}

		::System::Void set_RogueShopInfo(::RPG::Client::RogueShopInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueShopInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_ROGUESHOPINFO_OFFSET))(this, value);
		}

		::System::Void _AddShopPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDSHOPPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetRogueShopMiracleInfoScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPMIRACLEINFOSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdBuyRogueShopMiracleScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPMIRACLESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdGetRogueShopBuffInfoScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPBUFFINFOSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdBuyRogueShopBuffScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPBUFFSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdGetRogueShopFormulaInfoScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPFORMULAINFOSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdBuyRogueShopFormulaScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPFORMULASCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Boolean get_IsMiracleUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISMIRACLEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsShowHandbookHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISSHOWHANDBOOKHINT_OFFSET))(this);
		}

		::System::Boolean get_IsBanAeonUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISBANAEONUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsTournGodModeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISTOURNGODMODEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsRogueFunctionTypeUnlock(::Enum_3_96F6662CA3713095_24 functionType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEFUNCTIONTYPEUNLOCK_OFFSET))(this, functionType);
		}

		::System::Void _SyncRogueCommonUnlockInfo(::Class_1_3BF4D371398AB9DB* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3BF4D371398AB9DB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONUNLOCKINFO_OFFSET))(this, info);
		}

		::Class_0_16E4307DCC419505_650* DequeueRogueActionItem(::System::UInt32 rogueSubMode)
		{
			return ((::Class_0_16E4307DCC419505_650*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_DEQUEUEROGUEACTIONITEM_OFFSET))(this, rogueSubMode);
		}

		::System::Void MarkSelectActionActive(::Class_0_16E4307DCC419505_496* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_496*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_MARKSELECTACTIONACTIVE_OFFSET))(this, action);
		}

		::System::Void RemoveTriggeredActionID(::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_REMOVETRIGGEREDACTIONID_OFFSET))(this, actionID);
		}

		::System::Void InitRogueActionQueue(::Class_1_84BF80250A9F5C6A* rogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_84BF80250A9F5C6A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_OFFSET))(this, rogueInfo);
		}

		::System::Void InitRogueActionQueue_1(::Class_1_A662F2CB6C6610D2_1* chessRogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A662F2CB6C6610D2_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_1_OFFSET))(this, chessRogueInfo);
		}

		::System::Void InitRogueActionQueue_2(::Class_1_9A232D961EB1529E* ctrlInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9A232D961EB1529E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_2_OFFSET))(this, ctrlInfo);
		}

		::System::Void InitRogueActionQueue_3(::Class_1_9A27691571A52F2A* ctrlInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9A27691571A52F2A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_3_OFFSET))(this, ctrlInfo);
		}

		::System::Void _InitRogueActionQueue(::System::UInt32 rogueSubMode, ::Class_1_9D5608F598A30CAC_8* actionProto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9D5608F598A30CAC_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__INITROGUEACTIONQUEUE_OFFSET))(this, rogueSubMode, actionProto);
		}

		::System::Void _AddActionPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdSyncRogueCommonPendingActionScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONPENDINGACTIONSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdSyncRogueCommonActionResultScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdHandleRogueCommonPendingActionScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _AddPendingSelectAction(::System::UInt32 rogueSubMode, ::Class_1_9D5608F598A30CAC_8* actionProto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9D5608F598A30CAC_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGSELECTACTION_OFFSET))(this, rogueSubMode, actionProto);
		}

		::System::Void _AddPendingDisplayActions(::System::UInt32 rogueSubMode, ::System::Collections::Generic::List_1<::Class_1_2250AFBBC876BF24_1*>* actions)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_2250AFBBC876BF24_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_OFFSET))(this, rogueSubMode, actions);
		}

		::Class_1_CEC38EC3A51F2C03* _GetActionQueue(::System::UInt32 rogueSubMode)
		{
			return ((::Class_1_CEC38EC3A51F2C03*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__GETACTIONQUEUE_OFFSET))(this, rogueSubMode);
		}

		::System::Void _TriggerAction(::System::UInt32 rogueSubMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__TRIGGERACTION_OFFSET))(this, rogueSubMode);
		}

		::System::Boolean _CheckLockByInstantKillToast(::System::UInt32 rogueSubMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__CHECKLOCKBYINSTANTKILLTOAST_OFFSET))(this, rogueSubMode);
		}

		::System::Void _OnInstantKillToastLock(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONINSTANTKILLTOASTLOCK_OFFSET))(this, isLock);
		}

		::System::Void SetRogueActionQueueLocked(::System::UInt32 rogueSubMode, ::System::Boolean isLocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SETROGUEACTIONQUEUELOCKED_OFFSET))(this, rogueSubMode, isLocked);
		}

		::System::Boolean IsRogueActionQueueLocked(::System::UInt32 rogueSubMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEACTIONQUEUELOCKED_OFFSET))(this, rogueSubMode);
		}

		::System::Void TriggerRogueSelectActionShow(::RPG::Client::UIController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRIGGERROGUESELECTACTIONSHOW_OFFSET))(this, uiController);
		}

		::System::Boolean TryAddRoomChangeDelayNotify(::RPG::Client::NotifyType nt, ::System::Object* arg)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRYADDROOMCHANGEDELAYNOTIFY_OFFSET))(this, nt, arg);
		}

		::System::Void _AddActionNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPlayScreenTransfer(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONPLAYSCREENTRANSFER_OFFSET))(this, param);
		}

		::System::Void _AddRoomChangeDelayNotifyEvent(::RPG::Client::NotifyType nt, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDROOMCHANGEDELAYNOTIFYEVENT_OFFSET))(this, nt, arg);
		}

		::System::Void _ProcessEvents(::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>* events)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__PROCESSEVENTS_OFFSET))(this, events);
		}

		::System::Void TryInvokeRogueActionsInLoading(::System::UInt32 rogueSubMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRYINVOKEROGUEACTIONSINLOADING_OFFSET))(this, rogueSubMode);
		}

		::RPG::Client::LuaUIController* TryTakeOverSwitchPage()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRYTAKEOVERSWITCHPAGE_OFFSET))(this);
		}

		::System::Void TryStartActionQueue(::System::UInt32 rogueSubMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRYSTARTACTIONQUEUE_OFFSET))(this, rogueSubMode);
		}

		::System::Void _AddWorkBenchPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWORKBENCHPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdRogueWorkbenchGetInfoScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHGETINFOSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdRogueWorkbenchHandleFuncScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHHANDLEFUNCSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _AddGambleFuncPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDGAMBLEFUNCPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdRogueGetGambleInfoScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEGETGAMBLEINFOSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdRogueDoGambleScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEDOGAMBLESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _SyncRogueCommonLastAreaInfo(::Class_1_120319518E6F6581_98* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONLASTAREAINFO_OFFSET))(this, info);
		}

		::RPG::GameCore::RogueSubMode get_LastLegacyRogueSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUESUBMODE_OFFSET))(this);
		}

		::System::Void set_LastLegacyRogueSubMode(::RPG::GameCore::RogueSubMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUESUBMODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsLastLegacyRogueSubModeDLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISLASTLEGACYROGUESUBMODEDLC_OFFSET))(this);
		}

		::System::UInt32 get_LastLegacySimulatedRogueAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET))(this);
		}

		::System::Void set_LastLegacySimulatedRogueAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueSubMode get_LastLegacyRogueDLCSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUEDLCSUBMODE_OFFSET))(this);
		}

		::System::Void set_LastLegacyRogueDLCSubMode(::RPG::GameCore::RogueSubMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUEDLCSUBMODE_OFFSET))(this, value);
		}

		::System::Void _TryTrackRogueMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKROGUEMISSION_OFFSET))(this);
		}

		::System::Void _TryTrackLastMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKLASTMISSION_OFFSET))(this);
		}

		::System::Void _OnEnterRogueTrackMission(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONENTERROGUETRACKMISSION_OFFSET))(this, param);
		}

		::System::Void _OnLeaveRogueTrackMission(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONLEAVEROGUETRACKMISSION_OFFSET))(this, param);
		}

		::System::Void _AddWolfBroGunPlayPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWOLFBROGUNPLAYPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUIWolfBroShootingRogueBonusTargetKilled(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONUIWOLFBROSHOOTINGROGUEBONUSTARGETKILLED_OFFSET))(this, param);
		}

		::System::Void UpdateWolfGunInfo(::System::Single timeRatio, ::Class_1_8C3F509D34B4C4A1* gameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_8C3F509D34B4C4A1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_UPDATEWOLFGUNINFO_OFFSET))(this, timeRatio, gameInfo);
		}

		::System::Boolean ConvertWolfGunTargetInfo(::System::Int32 index, ::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase& targetCase, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_CONVERTWOLFGUNTARGETINFO_OFFSET))(this, index, targetCase, value);
		}

		::System::Void ResetWolfGunData(::System::Boolean isBossCase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNDATA_OFFSET))(this, isBossCase);
		}

		::System::Void ResetWolfGunExtraRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNEXTRAREWARDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_WolfGunExtraRewards()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFGUNEXTRAREWARDS_OFFSET))(this);
		}

		::System::Void set_WolfGunExtraRewards(::System::Collections::Generic::List_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_WOLFGUNEXTRAREWARDS_OFFSET))(this, value);
		}

		::System::Single get_TimeRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_TIMERATIO_OFFSET))(this);
		}

		::System::UInt32 get_WolfShootingSerialNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFSHOOTINGSERIALNUMBER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
