#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_02CB8559BDBEC08D;
class Class_1_5D5F340EEA440344_2;
class Class_1_9A27691571A52F2A;
namespace RPG::Client { class ExprConditionChecker; }
namespace RPG::Client { class IActivityQuestRewardData; }
namespace RPG::Client { class RogueMagicAreaCollection; }
namespace RPG::Client { class RogueMagicGameData; }
namespace RPG::Client { class RogueMagicHandbookInfo; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicSettleData; }
namespace RPG::Client { class RogueMagicStoryArchiveCollection; }
namespace RPG::Client { class RogueMagicStyleTypeCollection; }
namespace RPG::Client { class RogueMagicTalentInfo; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class RogueMagicPowerConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E0C1F0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GETPOWERCONFIG_OFFSET UNITYSDK_OFFSET(0x9E0E410)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x9DFF0D0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_AREACOLLECTION_OFFSET UNITYSDK_OFFSET(0x9E0EE80)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_GAMEDATA_OFFSET UNITYSDK_OFFSET(0x9E0EE70)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0x9E0EEB0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ISENTRANCEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E0EF20)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ISGUIDELOCKENTRANCE_OFFSET UNITYSDK_OFFSET(0x9E0EF80)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ISSKIPSETTLEAUTOSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x9E0EFF0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_QUESTREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9E0EED0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_STORYARCHIVECOLLECTION_OFFSET UNITYSDK_OFFSET(0x9E0EEA0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_STYLETYPECOLLECTION_OFFSET UNITYSDK_OFFSET(0x9E0EEC0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_TALENTINFO_OFFSET UNITYSDK_OFFSET(0x9E0EE90)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_WEBH5URL_OFFSET UNITYSDK_OFFSET(0x9E0F050)
#define RPG_CLIENT_ROGUEMAGICMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9E0B7D0)
#define RPG_CLIENT_ROGUEMAGICMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9E0BF00)
#define RPG_CLIENT_ROGUEMAGICMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9E0CDC0)
#define RPG_CLIENT_ROGUEMAGICMODULE_QUICKSETTLEGAME_OFFSET UNITYSDK_OFFSET(0x9E0DFA0)
#define RPG_CLIENT_ROGUEMAGICMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x9E0DA70)
#define RPG_CLIENT_ROGUEMAGICMODULE_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0x9E0DB40)
#define RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEPROMISED_OFFSET UNITYSDK_OFFSET(0x9E0D590)
#define RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEWITHROGUESELECTMAINPAGEPROMISED_OFFSET UNITYSDK_OFFSET(0x9E0D800)
#define RPG_CLIENT_ROGUEMAGICMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9E0D130)
#define RPG_CLIENT_ROGUEMAGICMODULE_TRYGETNEWUNLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x9E0E2D0)
#define RPG_CLIENT_ROGUEMAGICMODULE_TRYSHOWAREANAMEAFTERTELEPORT_OFFSET UNITYSDK_OFFSET(0x9E0D4E0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E0D080)
#define RPG_CLIENT_ROGUEMAGICMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E0F0E0)
#define RPG_CLIENT_ROGUEMAGICMODULE__BLOCKPERFORMANCEBYSETTLE_OFFSET UNITYSDK_OFFSET(0x9E0E120)
#define RPG_CLIENT_ROGUEMAGICMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E0B380)
#define RPG_CLIENT_ROGUEMAGICMODULE__DISPOSESTORYDATA_OFFSET UNITYSDK_OFFSET(0x9E0CD10)
#define RPG_CLIENT_ROGUEMAGICMODULE__GETMISCREALTIMEDATAPROMISED_OFFSET UNITYSDK_OFFSET(0x9E0DD30)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAREAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9E11ED0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAUTODRESSINMAGICUNITCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9E11E00)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICBATTLEFAILSETTLEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9E113D0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENABLETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0x9E11F50)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERLAYERSCRSP_OFFSET UNITYSDK_OFFSET(0x9E11690)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERROOMSCRSP_OFFSET UNITYSDK_OFFSET(0x9E114A0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERSCRSP_OFFSET UNITYSDK_OFFSET(0x9E10050)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICGETMISCREALTIMEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9E11810)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x9E100E0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEVELINFOUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9E11790)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x9E0F510)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x9E11900)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVECOSTUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9E11B80)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETAUTODRESSINMAGICUNITSCRSP_OFFSET UNITYSDK_OFFSET(0x9E11CC0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETTLESCRSP_OFFSET UNITYSDK_OFFSET(0x9E10230)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x9E0FEE0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYDATADISPOSE_OFFSET UNITYSDK_OFFSET(0x9E0ED20)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYINFOUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9E11FD0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICUNITCOMPOSESCRSP_OFFSET UNITYSDK_OFFSET(0x9E11C40)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9E120D0)
#define RPG_CLIENT_ROGUEMAGICMODULE__SETNEWUNLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x9E0E680)
#define RPG_CLIENT_ROGUEMAGICMODULE__SETTLEGAME_B__11_0_OFFSET UNITYSDK_OFFSET(0x9E12170)
#define RPG_CLIENT_ROGUEMAGICMODULE__SHOWCONFIRMSETTLEDIALOG_OFFSET UNITYSDK_OFFSET(0x9E0E500)
#define RPG_CLIENT_ROGUEMAGICMODULE__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0x9E0F750)
#define RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x9E0D480)
#define RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x9E0D1C0)
#define RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSTORYDATA_OFFSET UNITYSDK_OFFSET(0x9E0D2B0)
#define RPG_CLIENT_ROGUEMAGICMODULE__UNBLOCKPERFORMANCEBYSETTLE_OFFSET UNITYSDK_OFFSET(0x9E0CB20)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E12320)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9E12230)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9E122C0)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9E12330)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E12390)
#define RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E123F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicModule_TypeDefinitionIndex = 53564;

	class RogueMagicModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _PowerConfigPath; // 0x0
		::System::Action* _WaitAutoShowEntrancePageCallback; // 0x10
		::RPG::Client::RogueMagicTalentInfo* _TalentInfo; // 0x18
		::RPG::Client::ExprConditionChecker* _EntranceGuideLockChecker; // 0x20
		::RPG::Client::RogueMagicStoryArchiveCollection* _StoryArchiveCollection; // 0x28
		::RPG::Client::RogueMagicSettleData* _WaitAutoShowSettleData; // 0x30
		::RPG::Client::RogueMagicStyleTypeCollection* _StyleTypeCollection; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _NewUnlockUnits; // 0x40
		::System::Action* _GetMiscRealTimeDataScRspCallback; // 0x48
		::Class_1_02CB8559BDBEC08D* _StoryData; // 0x50
		::RPG::GameCore::RogueMagicPowerConfig* _PowerConfig; // 0x58
		::System::Action* _QueryScRspCallback; // 0x60
		::RPG::Client::ExprConditionChecker* _EntranceUnlockChecker; // 0x68
		::RPG::Client::RogueMagicAreaCollection* _AreaCollection; // 0x70
		::RPG::Client::RogueMagicGameData* _GameData; // 0x78
		::RPG::Client::RogueMagicHandbookInfo* _HandbookInfo; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* _NewUnlockScepters; // 0x88
		::System::Boolean _NeedShowAreaNameAfterTeleport; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Boolean TryShowAreaNameAfterTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_TRYSHOWAREANAMEAFTERTELEPORT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* ShowEntrancePagePromised(::System::UInt32 areaID)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEPROMISED_OFFSET))(this, areaID);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* ShowEntrancePageWithRogueSelectMainPagePromised(::System::UInt32 areaID)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEWITHROGUESELECTMAINPAGEPROMISED_OFFSET))(this, areaID);
		}

		::System::Void SetAutoShowEntrancePage(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET))(this, areaID);
		}

		::RPG::Client::Promises::IPromise* SettleGame()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SETTLEGAME_OFFSET))(this);
		}

		::System::Void QuickSettleGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_QUICKSETTLEGAME_OFFSET))(this);
		}

		::System::Void TryGetNewUnlockItems(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*& unlockScepters, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*& unlockUnits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*&, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_TRYGETNEWUNLOCKITEMS_OFFSET))(this, unlockScepters, unlockUnits);
		}

		::RPG::GameCore::RogueMagicPowerConfig* GetPowerConfig()
		{
			return ((::RPG::GameCore::RogueMagicPowerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GETPOWERCONFIG_OFFSET))(this);
		}

		::System::Void _TryAutoShowSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowStoryData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSTORYDATA_OFFSET))(this);
		}

		::System::Void _TryAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _DisposeStoryData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__DISPOSESTORYDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _GetMiscRealTimeDataPromised()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__GETMISCREALTIMEDATAPROMISED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _ShowConfirmSettleDialog()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SHOWCONFIRMSETTLEDIALOG_OFFSET))(this);
		}

		::System::Void _SetNewUnlockItems(::Class_1_5D5F340EEA440344_2* unlockInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5D5F340EEA440344_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SETNEWUNLOCKITEMS_OFFSET))(this, unlockInfo);
		}

		::System::Void _BlockPerformanceBySettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__BLOCKPERFORMANCEBYSETTLE_OFFSET))(this);
		}

		::System::Void _UnblockPerformanceBySettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__UNBLOCKPERFORMANCEBYSETTLE_OFFSET))(this);
		}

		::System::Void _OnRogueMagicStoryDataDispose(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYDATADISPOSE_OFFSET))(this, arg);
		}

		::RPG::Client::RogueMagicGameData* get_GameData()
		{
			return ((::RPG::Client::RogueMagicGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_GAMEDATA_OFFSET))(this);
		}

		::RPG::Client::RogueMagicAreaCollection* get_AreaCollection()
		{
			return ((::RPG::Client::RogueMagicAreaCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_AREACOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueMagicTalentInfo* get_TalentInfo()
		{
			return ((::RPG::Client::RogueMagicTalentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_TALENTINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicStoryArchiveCollection* get_StoryArchiveCollection()
		{
			return ((::RPG::Client::RogueMagicStoryArchiveCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_STORYARCHIVECOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueMagicHandbookInfo* get_HandbookInfo()
		{
			return ((::RPG::Client::RogueMagicHandbookInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_HANDBOOKINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicStyleTypeCollection* get_StyleTypeCollection()
		{
			return ((::RPG::Client::RogueMagicStyleTypeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_STYLETYPECOLLECTION_OFFSET))(this);
		}

		static ::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ACTIVITYREWARDID_OFFSET))();
		}

		::RPG::Client::IActivityQuestRewardData* get_QuestRewardData()
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_QUESTREWARDDATA_OFFSET))(this);
		}

		::System::Boolean get_IsEntranceUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ISENTRANCEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsGuideLockEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ISGUIDELOCKENTRANCE_OFFSET))(this);
		}

		::System::Boolean get_IsSkipSettleAutoShowEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ISSKIPSETTLEAUTOSHOWENTRANCE_OFFSET))(this);
		}

		::System::String* get_WebH5URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_WEBH5URL_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRogueMagicQueryScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICQUERYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicStartScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTARTSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicEnterScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicLeaveScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEAVESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicSettleScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETTLESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicBattleFailSettleInfoScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICBATTLEFAILSETTLEINFOSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicEnterRoomScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERROOMSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicEnterLayerScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERLAYERSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicLevelInfoUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEVELINFOUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicGetMiscRealTimeDataScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICGETMISCREALTIMEDATASCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _SyncRogueCoin(::Class_1_9A27691571A52F2A* protoCtrl, ::System::Boolean isUIShowDelta)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9A27691571A52F2A*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SYNCROGUECOIN_OFFSET))(this, protoCtrl, isUIShowDelta);
		}

		::System::Void _OnRogueMagicReviveAvatarScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVEAVATARSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicReviveCostUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVECOSTUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicUnitComposeScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICUNITCOMPOSESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicSetAutoDressInMagicUnitScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETAUTODRESSINMAGICUNITSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicAutoDressInMagicUnitChangeScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAUTODRESSINMAGICUNITCHANGESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicAreaUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAREAUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicEnableTalentScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENABLETALENTSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnRogueMagicStoryInfoUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYINFOUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnSyncRogueHandbookDataUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _SettleGame_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SETTLEGAME_B__11_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
