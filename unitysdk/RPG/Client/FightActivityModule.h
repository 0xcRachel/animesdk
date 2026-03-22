#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LevelDifficulty.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_1_99BD961747420BEB_17;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTACTIVITYMODULE_GETENDLESSMAXWAVEBYGROUPID_OFFSET UNITYSDK_OFFSET(0x92482B0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GETFIGHTACTIVITYGROUPINFO_OFFSET UNITYSDK_OFFSET(0x9248150)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GET_REWARDREDDOTGROUPS_OFFSET UNITYSDK_OFFSET(0x9247590)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9247B90)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9247D20)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_SENDTAKEREWARDCSREQ_OFFSET UNITYSDK_OFFSET(0x9247EA0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0x9248310)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9248460)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x92486E0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9248600)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDTAKENDIFFICULTYLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x9249280)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__CHANGEFIGHTACTIVITYGROUPS_OFFSET UNITYSDK_OFFSET(0x9248BE0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x924A5F0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ISENDLESSREWARDRECEIVEDBYWAVE_OFFSET UNITYSDK_OFFSET(0x9249CD0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDFIGHTACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x924A320)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDGETFIGHTACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9249EB0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDTAKEFIGHTACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x924A420)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONSUBMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x9249610)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9249330)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCFIGHTACTIVITYGROUPS_OFFSET UNITYSDK_OFFSET(0x9248800)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCITEMREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x9249FC0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__TRYSHOWENDLESSREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x9249670)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x924A680)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x924A770)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x924A710)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityModule_TypeDefinitionIndex = 50950;

	class FightActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_99BD961747420BEB_17*>* _FightActivityGroups; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FoodRemainTurn; // 0x18
		::System::UInt32 BattleLevel; // 0x20
		::System::Int32 _AutoShowGroupID; // 0x24
		::System::UInt32 BattleGroupID; // 0x28
		::System::Boolean _AutoShowIsFromActivityPanel; // 0x2C
		::System::Boolean NewRecord; // 0x2D
		::System::Boolean _HasCacheWorldLevel; // 0x2E
		::RPG::Client::TextID BattleTips; // 0x30
		::RPG::GameCore::LevelDifficulty _AutoShowDifficultyLevel; // 0x40
		::System::Int32 UsedDefendFood; // 0x44
		::RPG::Client::TextID BattleTitle; // 0x48
		::System::Int32 UsedAttackFood; // 0x58
		::System::UInt32 _WorldLevel; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_17*>* get_RewardRedDotGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GET_REWARDREDDOTGROUPS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::Void SendTakeRewardCsReq(::System::UInt32 groupID, ::System::UInt32 difficultyLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_SENDTAKEREWARDCSREQ_OFFSET))(this, groupID, difficultyLevel);
		}

		::Class_1_99BD961747420BEB_17* GetFightActivityGroupInfo(::System::UInt32 groupID)
		{
			return ((::Class_1_99BD961747420BEB_17*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GETFIGHTACTIVITYGROUPINFO_OFFSET))(this, groupID);
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

		::System::Void _SyncFightActivityGroups(::System::Collections::Generic::IEnumerable_1<::Class_1_99BD961747420BEB_17*>* groups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_99BD961747420BEB_17*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCFIGHTACTIVITYGROUPS_OFFSET))(this, groups);
		}

		::System::Void _ChangeFightActivityGroups(::System::Collections::Generic::IEnumerable_1<::Class_1_99BD961747420BEB_17*>* groups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_99BD961747420BEB_17*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__CHANGEFIGHTACTIVITYGROUPS_OFFSET))(this, groups);
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
