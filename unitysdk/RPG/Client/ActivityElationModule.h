#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_352A8B3482C80E7D_12;
class Class_1_4CF8088A158DCE25_24;
namespace RPG::Client { class ActivityElationBattleInfo; }
namespace RPG::Client { class ActivityElationBattleResult; }
namespace RPG::Client { class ActivityElationStage; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONMODULE_CHECKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x8B0E320)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GETACTIVITYELATIONSTAGEBYID_OFFSET UNITYSDK_OFFSET(0x8B0D1C0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GETALLSORTEDSTAGES_OFFSET UNITYSDK_OFFSET(0x8B0D800)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GETNEWSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x8B0E1D0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x8B0D300)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GET_CURRENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x8B0D2A0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x8B0D320)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_GET_ONGOINGBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8B0D2F0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_HASANYNEWSTAGE_OFFSET UNITYSDK_OFFSET(0x8B0DFC0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8B0D340)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_MARKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x8B0E380)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_RESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x8B0DD80)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_SETAUTOSHOWSTAGEID_OFFSET UNITYSDK_OFFSET(0x8B0DF60)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_SET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x8B0D310)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_SET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x8B0D330)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_STARTACTIVITYELATIONSTAGE_OFFSET UNITYSDK_OFFSET(0x8B0D9D0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x8B0DE20)
#define RPG_CLIENT_ACTIVITYELATIONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x8B0D890)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8B0D700)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__CLEARBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8B0EA80)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8B0F200)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__GETELATIONACTIVITYAVATAR_OFFSET UNITYSDK_OFFSET(0x8B0F0D0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__GETELATIONAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x8B0DAA0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__INITCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x8B0D5A0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__INITREQ_OFFSET UNITYSDK_OFFSET(0x8B0EAD0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__INITSTAGES_OFFSET UNITYSDK_OFFSET(0x8B0D460)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__INIT_B__16_0_OFFSET UNITYSDK_OFFSET(0x8B0F250)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x8B0E9B0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ONELATIONACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8B0E8A0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ONENTERELATIONACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x8B0E7D0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__ONGETELATIONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8B0E3E0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__SETSTAGERESULT_OFFSET UNITYSDK_OFFSET(0x8B0E6C0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE__STARTELATIONBATTLE_OFFSET UNITYSDK_OFFSET(0x8B0DC40)
#define RPG_CLIENT_ACTIVITYELATIONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8B0F260)
#define RPG_CLIENT_ACTIVITYELATIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8B0F2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationModule_TypeDefinitionIndex = 48769;

	class ActivityElationModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationStage*>* _Stages; // 0x10
		::RPG::Client::ActivityElationBattleResult* _BattleResult; // 0x18
		::RPG::Client::ActivityElationBattleInfo* _OnGoingBattleInfo; // 0x20
		::System::UInt32 _GuideMissionID_k__BackingField; // 0x28
		::System::Nullable_1<::System::UInt32> _AutoShowStageID; // 0x2C
		::System::UInt32 _ActivityRewardID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GET_CURRENTSTAGEID_OFFSET))(this);
		}

		::RPG::Client::ActivityElationBattleInfo* get_OnGoingBattleInfo()
		{
			return ((::RPG::Client::ActivityElationBattleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GET_ONGOINGBATTLEINFO_OFFSET))(this);
		}

		::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GET_ACTIVITYREWARDID_OFFSET))(this);
		}

		::System::Void set_ActivityRewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_SET_ACTIVITYREWARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_GuideMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GET_GUIDEMISSIONID_OFFSET))(this);
		}

		::System::Void set_GuideMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_SET_GUIDEMISSIONID_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::ActivityElationStage* GetActivityElationStageByID(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivityElationStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GETACTIVITYELATIONSTAGEBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationStage*>* GetAllSortedStages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityElationStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GETALLSORTEDSTAGES_OFFSET))(this);
		}

		::System::Boolean TryShowLevelResultDialog(::RPG::Client::LuaUIController*& controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LuaUIController*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET))(this, controller);
		}

		::System::Void StartActivityElationStage(::System::UInt32 stageID, ::System::Collections::Generic::List_1<::System::UInt32>* fixedAvatarIDList, ::System::Collections::Generic::List_1<::System::UInt32>* playerSelectedAvatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_STARTACTIVITYELATIONSTAGE_OFFSET))(this, stageID, fixedAvatarIDList, playerSelectedAvatarIDList);
		}

		::System::Void RestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_RESTARTBATTLE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowStageID(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_SETAUTOSHOWSTAGEID_OFFSET))(this, stageID);
		}

		::System::Boolean HasAnyNewStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_HASANYNEWSTAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewStageIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_GETNEWSTAGEIDS_OFFSET))(this);
		}

		::System::Boolean CheckRewardHasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_CHECKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Void MarkRewardHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE_MARKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Void _OnGetElationActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ONGETELATIONACTIVITYDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnEnterElationActivityStageScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ONENTERELATIONACTIVITYSTAGESCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnElationActivityBattleEndScNotify(::System::UInt16 cmd, ::System::Object* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ONELATIONACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, cmd, ntf);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _InitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__INITREQ_OFFSET))(this);
		}

		::System::Void _InitStages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__INITSTAGES_OFFSET))(this);
		}

		::System::Void _InitConstValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__INITCONSTVALUES_OFFSET))(this);
		}

		::System::Void _SetStageResult(::Class_1_4CF8088A158DCE25_24* levelData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__SETSTAGERESULT_OFFSET))(this, levelData);
		}

		::System::Void _StartElationBattle(::System::UInt32 stageID, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>* fixedAvatarList, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>* playerSelectedAvatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>*, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__STARTELATIONBATTLE_OFFSET))(this, stageID, fixedAvatarList, playerSelectedAvatarList);
		}

		::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>* _GetElationAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__GETELATIONAVATARLISTFROMIDLIST_OFFSET))(this, avatarIDList);
		}

		::Class_1_352A8B3482C80E7D_12* _GetElationActivityAvatar(::System::UInt32 avatarID)
		{
			return ((::Class_1_352A8B3482C80E7D_12*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__GETELATIONACTIVITYAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void _ClearBattleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__CLEARBATTLEINFO_OFFSET))(this);
		}

		::System::Void _Init_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE__INIT_B__16_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
