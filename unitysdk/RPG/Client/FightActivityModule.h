#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LevelDifficulty.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_1_7E9AC8675DA072FB;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTACTIVITYMODULE_GETENDLESSMAXWAVEBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1510E0A0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GETFIGHTACTIVITYGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1510DF40)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GET_REWARDREDDOTGROUPS_OFFSET UNITYSDK_OFFSET(0x1510D380)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1510D980)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1510DB10)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_SENDTAKEREWARDCSREQ_OFFSET UNITYSDK_OFFSET(0x1510DC90)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0x1510E100)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1510E250)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1510E4D0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1510E3F0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDTAKENDIFFICULTYLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1510F070)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__CHANGEFIGHTACTIVITYGROUPS_OFFSET UNITYSDK_OFFSET(0x1510E9D0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x151103D0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ISENDLESSREWARDRECEIVEDBYWAVE_OFFSET UNITYSDK_OFFSET(0x1510FAC0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDFIGHTACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x15110120)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDGETFIGHTACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1510FCA0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDTAKEFIGHTACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x15110220)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONSUBMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x1510F400)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0x1510F120)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCFIGHTACTIVITYGROUPS_OFFSET UNITYSDK_OFFSET(0x1510E5F0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCITEMREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x1510FDB0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__TRYSHOWENDLESSREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x1510F460)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x15110480)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x15110570)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15110510)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityModule_TypeDefinitionIndex = 59035;

	class FightActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FoodRemainTurn; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7E9AC8675DA072FB*>* _FightActivityGroups; // 0x18
		::RPG::Client::TextID BattleTitle; // 0x20
		::System::Boolean _AutoShowIsFromActivityPanel; // 0x30
		::System::Boolean _HasCacheWorldLevel; // 0x31
		::System::Boolean NewRecord; // 0x32
		::System::Int32 UsedAttackFood; // 0x34
		::System::Int32 _AutoShowGroupID; // 0x38
		::System::UInt32 BattleGroupID; // 0x3C
		::RPG::Client::TextID BattleTips; // 0x40
		::System::UInt32 BattleLevel; // 0x50
		::System::UInt32 _WorldLevel; // 0x54
		::RPG::GameCore::LevelDifficulty _AutoShowDifficultyLevel; // 0x58
		::System::Int32 UsedDefendFood; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB*>* get_RewardRedDotGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GET_REWARDREDDOTGROUPS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::Void SendTakeRewardCsReq(::System::UInt32 groupID, ::System::UInt32 difficultyLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_SENDTAKEREWARDCSREQ_OFFSET))(this, groupID, difficultyLevel);
		}

		::Class_1_7E9AC8675DA072FB* GetFightActivityGroupInfo(::System::UInt32 groupID)
		{
			return ((::Class_1_7E9AC8675DA072FB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GETFIGHTACTIVITYGROUPINFO_OFFSET))(this, groupID);
		}

		::System::UInt32 GetEndlessMaxWaveByGroupID(::System::UInt32 groupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GETENDLESSMAXWAVEBYGROUPID_OFFSET))(this, groupID);
		}

		::System::Void SetAutoShowOnExitBattle(::System::UInt32 defaultGroupID, ::RPG::GameCore::LevelDifficulty defaultDifficultyLevel, ::System::Boolean isFromActivityPanel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelDifficulty, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, defaultGroupID, defaultDifficultyLevel, isFromActivityPanel);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _SyncFightActivityGroups(::System::Collections::Generic::IEnumerable_1<::Class_1_7E9AC8675DA072FB*>* groups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_7E9AC8675DA072FB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCFIGHTACTIVITYGROUPS_OFFSET))(this, groups);
		}

		::System::Void _ChangeFightActivityGroups(::System::Collections::Generic::IEnumerable_1<::Class_1_7E9AC8675DA072FB*>* groups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_7E9AC8675DA072FB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__CHANGEFIGHTACTIVITYGROUPS_OFFSET))(this, groups);
		}

		::System::Void _AddTakenDifficultyLevelReward(::System::UInt32 groupID, ::System::UInt32 difficultyLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ADDTAKENDIFFICULTYLEVELREWARD_OFFSET))(this, groupID, difficultyLevel);
		}

		::System::Void _SendInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SENDINITREQUEST_OFFSET))(this);
		}

		::System::Void _OnSubMissionDataReady(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONSUBMISSIONDATAREADY_OFFSET))(this, arg);
		}

		::System::Void _TryShowEndlessRewardTips(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__TRYSHOWENDLESSREWARDTIPS_OFFSET))(this, arg);
		}

		::System::Void _OnCmdGetFightActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDGETFIGHTACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdFightActivityDataChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDFIGHTACTIVITYDATACHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncItemRemainCount(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>* iter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCITEMREMAINCOUNT_OFFSET))(this, iter);
		}

		::System::Void _OnCmdTakeFightActivityRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDTAKEFIGHTACTIVITYREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean _IsEndlessRewardReceivedByWave(::System::UInt32 rewardWaveIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ISENDLESSREWARDRECEIVEDBYWAVE_OFFSET))(this, rewardWaveIndex);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
