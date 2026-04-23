#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_25.h"
#include "unitysdk/Proto/RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

class Class_0_16E4307DCC419505_611;
class Class_0_16E4307DCC419505_788;
class Class_0_16E4307DCC419505_791;
class Class_1_08093FBB447FB7BD_8;
class Class_1_14E02E1F6D70E487_3;
class Class_1_2250AFBBC876BF24_1;
class Class_1_5F7C2EDC42F3AA1C;
class Class_1_886F39594BD4EAF9;
class Class_1_AFA032BCA5DAB27D;
class Class_1_BDE0598EF34BE45E;
class Class_1_BF2908093F14DD44;
class Class_1_C1A562AF201E3725_7;
class Class_1_CEC38EC3A51F2C03;
class Class_1_D1E0AD3915BCCF29_107;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueMedalInfo; }
namespace RPG::Client { class RogueShopInfo; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ROGUEADVENTUREMODULE_CONVERTWOLFGUNTARGETINFO_OFFSET UNITYSDK_OFFSET(0x177231B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_DEQUEUEROGUEACTIONITEM_OFFSET UNITYSDK_OFFSET(0x1771FC70)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1771DCD0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISBANAEONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1771FB50)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISLASTLEGACYROGUESUBMODEDLC_OFFSET UNITYSDK_OFFSET(0x17722990)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISMIRACLEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1771F9B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISSHOWHANDBOOKHINT_OFFSET UNITYSDK_OFFSET(0x1771FAB0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISTOURNGODMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1771FBE0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUEDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0x17722A40)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x17722970)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET UNITYSDK_OFFSET(0x17722A20)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_MEDALINFO_OFFSET UNITYSDK_OFFSET(0x1771D970)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ROGUESHOPINFO_OFFSET UNITYSDK_OFFSET(0x1771F470)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_TIMERATIO_OFFSET UNITYSDK_OFFSET(0x17723520)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFGUNEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x17723500)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFSHOOTINGSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x17723530)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_1_OFFSET UNITYSDK_OFFSET(0x177204E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_2_OFFSET UNITYSDK_OFFSET(0x17720570)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_3_OFFSET UNITYSDK_OFFSET(0x177205E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0x17720150)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1771DA20)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEACTIONQUEUELOCKED_OFFSET UNITYSDK_OFFSET(0x17721D00)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEFUNCTIONTYPEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1771FA40)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_MARKSELECTACTIONACTIVE_OFFSET UNITYSDK_OFFSET(0x1771FD30)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1771DF40)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_REMOVETRIGGEREDACTIONID_OFFSET UNITYSDK_OFFSET(0x1771FEA0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNDATA_OFFSET UNITYSDK_OFFSET(0x177233E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x17723470)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SETROGUEACTIONQUEUELOCKED_OFFSET UNITYSDK_OFFSET(0x17721B60)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUEDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0x17722A50)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x17722980)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET UNITYSDK_OFFSET(0x17722A30)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_ROGUESHOPINFO_OFFSET UNITYSDK_OFFSET(0x1771F480)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_WOLFGUNEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x17723510)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRIGGERROGUESELECTACTIONSHOW_OFFSET UNITYSDK_OFFSET(0x17721D80)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYADDROOMCHANGEDELAYNOTIFY_OFFSET UNITYSDK_OFFSET(0x17721F00)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYINVOKEROGUEACTIONSINLOADING_OFFSET UNITYSDK_OFFSET(0x177220B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYSTARTACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0x177222A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYTAKEOVERSWITCHPAGE_OFFSET UNITYSDK_OFFSET(0x17722240)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_UPDATEWOLFGUNINFO_OFFSET UNITYSDK_OFFSET(0x17723130)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1771E110)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1771E490)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDGAMBLEFUNCPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1771E620)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1771DFE0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1771E180)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_1_OFFSET UNITYSDK_OFFSET(0x17721040)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_OFFSET UNITYSDK_OFFSET(0x17720E90)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGSELECTACTION_OFFSET UNITYSDK_OFFSET(0x17720730)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDROOMCHANGEDELAYNOTIFYEVENT_OFFSET UNITYSDK_OFFSET(0x17721E20)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDSHOPPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1771E310)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWOLFBROGUNPLAYPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1771E6D0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWORKBENCHPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1771E570)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__CHECKLOCKBYINSTANTKILLTOAST_OFFSET UNITYSDK_OFFSET(0x17721850)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1771D980)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__GETACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0x17721670)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__INITROGUEACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0x17720330)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ISMODEUSINGLEGACYACTIONRESULTEXECUTOR_OFFSET UNITYSDK_OFFSET(0x17720E40)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x1771F6E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPFORMULASCRSP_OFFSET UNITYSDK_OFFSET(0x1771F8F0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPMIRACLESCRSP_OFFSET UNITYSDK_OFFSET(0x1771F510)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPBUFFINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1771F590)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPFORMULAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1771F7A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPMIRACLEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1771F490)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x17721450)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEDOGAMBLESCRSP_OFFSET UNITYSDK_OFFSET(0x177227A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEGETGAMBLEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x17722710)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x17722310)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHHANDLEFUNCSCRSP_OFFSET UNITYSDK_OFFSET(0x17722680)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17720B70)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONPENDINGACTIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17720650)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x1771E710)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1771EE50)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1771EFA0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONENTERROGUETRACKMISSION_OFFSET UNITYSDK_OFFSET(0x17722FA0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONEXCHANGEROGUEREWARDKEYSCRSP_OFFSET UNITYSDK_OFFSET(0x1771F3E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONINSTANTKILLTOASTLOCK_OFFSET UNITYSDK_OFFSET(0x17721B00)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONINTERACTPROPSCRSP_OFFSET UNITYSDK_OFFSET(0x1771F2F0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONLEAVEROGUETRACKMISSION_OFFSET UNITYSDK_OFFSET(0x17723000)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x17721F70)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONUIWOLFBROSHOOTINGROGUEBONUSTARGETKILLED_OFFSET UNITYSDK_OFFSET(0x17723060)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__PROCESSEVENTS_OFFSET UNITYSDK_OFFSET(0x17722020)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONLASTAREAINFO_OFFSET UNITYSDK_OFFSET(0x1771EDF0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONUNLOCKINFO_OFFSET UNITYSDK_OFFSET(0x1771EC00)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x177207B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKLASTMISSION_OFFSET UNITYSDK_OFFSET(0x17722E60)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKROGUEMISSION_OFFSET UNITYSDK_OFFSET(0x17722A60)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177235D0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x17723540)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x177235E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x17723640)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x177236A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule_TypeDefinitionIndex = 62063;

	class RogueAdventureModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::LuaUIController* _CacheSwitchPage; // 0x10
		::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>* _EventHideScreenTransfer; // 0x18
		::System::Collections::Generic::HashSet_1<::Enum_3_96F6662CA3713095_25>* _UnlockFunctionTypes; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CEC38EC3A51F2C03*>* _ActionQueues; // 0x28
		::RPG::Client::RogueMedalInfo* _MedalInfo_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_611*>* _CurActiveSelectActions; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ActionQueueLocked; // 0x40
		::Class_1_5F7C2EDC42F3AA1C* _WolfGunInfo; // 0x48
		::RPG::Client::RogueShopInfo* _RogueShopInfo_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* _WolfGunExtraRewards_k__BackingField; // 0x58
		::RPG::GameCore::RogueSubMode _LastLegacyRogueSubMode_k__BackingField; // 0x60
		::System::UInt32 _WolfShootingSerialNumber; // 0x64
		::System::UInt32 _LockedRogueSubModeByInstantKill; // 0x68
		::RPG::GameCore::RogueSubMode _LastLegacyRogueDLCSubMode_k__BackingField; // 0x6C
		::System::Boolean IsServerRoomChanging; // 0x70
		::System::Boolean _HasMissionTrackLogicInit; // 0x71
		::System::Boolean IsBossCaseWolfGun; // 0x72
		::System::UInt32 _LastLegacySimulatedRogueAreaID_k__BackingField; // 0x74
		::System::UInt32 _TargetRogueMissionID; // 0x78
		::System::UInt32 LockedRogueSubModeByRefreshMap; // 0x7C
		::System::Single _TimeRatio; // 0x80
		::System::UInt32 _LastTrackMissionID; // 0x84

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

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_ONRECONNECT_OFFSET))(this);
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

		::System::Boolean IsRogueFunctionTypeUnlock(::Enum_3_96F6662CA3713095_25 functionType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_96F6662CA3713095_25))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEFUNCTIONTYPEUNLOCK_OFFSET))(this, functionType);
		}

		::System::Void _SyncRogueCommonUnlockInfo(::Class_1_886F39594BD4EAF9* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_886F39594BD4EAF9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONUNLOCKINFO_OFFSET))(this, info);
		}

		::Class_0_16E4307DCC419505_788* DequeueRogueActionItem(::System::UInt32 rogueSubMode)
		{
			return ((::Class_0_16E4307DCC419505_788*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_DEQUEUEROGUEACTIONITEM_OFFSET))(this, rogueSubMode);
		}

		::System::Void MarkSelectActionActive(::Class_0_16E4307DCC419505_611* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_611*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_MARKSELECTACTIONACTIVE_OFFSET))(this, action);
		}

		::System::Void RemoveTriggeredActionID(::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_REMOVETRIGGEREDACTIONID_OFFSET))(this, actionID);
		}

		::System::Void InitRogueActionQueue(::Class_1_BDE0598EF34BE45E* rogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_OFFSET))(this, rogueInfo);
		}

		::System::Void InitRogueActionQueue_1(::Class_1_14E02E1F6D70E487_3* chessRogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_1_OFFSET))(this, chessRogueInfo);
		}

		::System::Void InitRogueActionQueue_2(::Class_1_C1A562AF201E3725_7* ctrlInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C1A562AF201E3725_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_2_OFFSET))(this, ctrlInfo);
		}

		::System::Void InitRogueActionQueue_3(::Class_1_BF2908093F14DD44* ctrlInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF2908093F14DD44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_3_OFFSET))(this, ctrlInfo);
		}

		::System::Void _InitRogueActionQueue(::System::UInt32 rogueSubMode, ::Class_1_08093FBB447FB7BD_8* actionProto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_08093FBB447FB7BD_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__INITROGUEACTIONQUEUE_OFFSET))(this, rogueSubMode, actionProto);
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

		static ::System::Boolean _IsModeUsingLegacyActionResultExecutor(::RPG::GameCore::RogueSubMode subMode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ISMODEUSINGLEGACYACTIONRESULTEXECUTOR_OFFSET))(subMode);
		}

		::System::Void _OnCmdHandleRogueCommonPendingActionScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _AddPendingSelectAction(::System::UInt32 rogueSubMode, ::Class_1_08093FBB447FB7BD_8* actionProto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_08093FBB447FB7BD_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGSELECTACTION_OFFSET))(this, rogueSubMode, actionProto);
		}

		::System::Void _AddPendingDisplayActions(::System::UInt32 rogueSubMode, ::System::Collections::Generic::List_1<::Class_1_2250AFBBC876BF24_1*>* actions)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_2250AFBBC876BF24_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_OFFSET))(this, rogueSubMode, actions);
		}

		::System::Void _AddPendingDisplayActions_1(::System::UInt32 rogueSubMode, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_791*>* actions)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_791*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_1_OFFSET))(this, rogueSubMode, actions);
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

		::System::Void _SyncRogueCommonLastAreaInfo(::Class_1_D1E0AD3915BCCF29_107* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_107*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONLASTAREAINFO_OFFSET))(this, info);
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

		::System::Void UpdateWolfGunInfo(::System::Single timeRatio, ::Class_1_5F7C2EDC42F3AA1C* gameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_5F7C2EDC42F3AA1C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_UPDATEWOLFGUNINFO_OFFSET))(this, timeRatio, gameInfo);
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

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
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
