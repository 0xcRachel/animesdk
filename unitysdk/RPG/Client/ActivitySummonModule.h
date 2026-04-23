#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1CBA230307F9C289_61;
class Class_1_D17272E82AE804C2_923;
class Class_1_E69ACE438A1D0786;
namespace RPG::Client { class ActivitySummonBattleResult; }
namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSUMMONMODULE_ALLHARDSTAGECHALLENGED_OFFSET UNITYSDK_OFFSET(0x1709CED0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKACTIVITYSUMMONLEVELHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1709A600)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x1709CE10)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYID_OFFSET UNITYSDK_OFFSET(0x1709A0E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x1709BE30)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETALLSORTEDSTAGES_OFFSET UNITYSDK_OFFSET(0x1709BF10)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETCURRENTSTARS_OFFSET UNITYSDK_OFFSET(0x1709AB40)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x1709C7B0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x1709B5D0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1709B570)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1709B520)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0x1709B5F0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x1709B610)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_HASANYNEWSTAGE_OFFSET UNITYSDK_OFFSET(0x1709CBF0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1709B630)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_MARKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x1709CE70)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_RESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1709C710)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x1709C8D0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x1709BAF0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SETAUTOSHOWSTAGEID_OFFSET UNITYSDK_OFFSET(0x1709CB90)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x1709B5E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0x1709B600)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x1709B620)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_STARTSUMMONACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0x1709C0E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1709CA50)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYCONSUMEUNLOCKFLAG_OFFSET UNITYSDK_OFFSET(0x1709B3E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x1709BFA0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1709BA10)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__CLEARBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1709D760)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1709D9E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONACTIVITYAVATAR_OFFSET UNITYSDK_OFFSET(0x1709C200)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x1709C370)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__INITCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x1709B870)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__INITSTAGES_OFFSET UNITYSDK_OFFSET(0x1709B6D0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x1709D690)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONENTERSUMMONACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x1709D380)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONGETSUMMONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1709D020)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONSUMMONACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1709D450)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__PREPARERELATEDMISSIONS_OFFSET UNITYSDK_OFFSET(0x1709BBC0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__SAVEBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1709C510)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__STARTSUMMONBATTLE_OFFSET UNITYSDK_OFFSET(0x1709C5C0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__UPDATESRVDATA_OFFSET UNITYSDK_OFFSET(0x1709D4E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1709DB20)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1709DBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonModule_TypeDefinitionIndex = 57116;

	class ActivitySummonModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty>>* _UnlockFlags; // 0x10
		::RPG::Client::ActivitySummonBattleResult* _BattleResult; // 0x18
		::Class_1_E69ACE438A1D0786* _BattleInfo; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonStage*>* _Stages; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _StarsCache; // 0x30
		::System::String* _DifficultyLevelTutorialUnlockKey_k__BackingField; // 0x38
		::System::UInt32 _ActivityRewardID_k__BackingField; // 0x40
		::System::Nullable_1<::System::UInt32> _AutoShowStageID; // 0x44
		::System::UInt32 _GuideMissionID_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTSTAGEID_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySummonDifficulty get_CurrentDifficulty()
		{
			return ((::RPG::GameCore::ActivitySummonDifficulty(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTDIFFICULTY_OFFSET))(this);
		}

		::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_ACTIVITYREWARDID_OFFSET))(this);
		}

		::System::Void set_ActivityRewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_ACTIVITYREWARDID_OFFSET))(this, value);
		}

		::System::String* get_DifficultyLevelTutorialUnlockKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET))(this);
		}

		::System::Void set_DifficultyLevelTutorialUnlockKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET))(this, value);
		}

		::System::UInt32 get_GuideMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_GUIDEMISSIONID_OFFSET))(this);
		}

		::System::Void set_GuideMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_GUIDEMISSIONID_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::ActivitySummonStage* GetActivitySummonStageByID(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivitySummonStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYID_OFFSET))(this, id);
		}

		::RPG::Client::ActivitySummonStage* GetActivitySummonStageByMappingInfoID(::System::UInt32 mappingInfoID)
		{
			return ((::RPG::Client::ActivitySummonStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYMAPPINGINFOID_OFFSET))(this, mappingInfoID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonStage*>* GetAllSortedStages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETALLSORTEDSTAGES_OFFSET))(this);
		}

		::System::UInt32 GetCurrentStars(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETCURRENTSTARS_OFFSET))(this, stageID, difficulty);
		}

		::System::Boolean TryShowLevelResultDialog(::RPG::Client::LuaUIController*& controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LuaUIController*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET))(this, controller);
		}

		::System::Boolean CheckActivitySummonLevelHasUnlocked(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKACTIVITYSUMMONLEVELHASUNLOCKED_OFFSET))(this, stageID, difficulty);
		}

		::System::Boolean TryConsumeUnlockFlag(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYCONSUMEUNLOCKFLAG_OFFSET))(this, stageID, difficulty);
		}

		::System::Void StartSummonActivityStage(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty, ::System::UInt32 masterAvatarID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_STARTSUMMONACTIVITYSTAGE_OFFSET))(this, stageID, difficulty, masterAvatarID, avatarIDList);
		}

		::System::Void RestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_RESTARTBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupData(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETLINEUPDATA_OFFSET))(this, stageID, difficulty);
		}

		::System::Void SaveLineupData(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SAVELINEUPDATA_OFFSET))(this, stageID, difficulty, avatarIDList);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowStageID(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SETAUTOSHOWSTAGEID_OFFSET))(this, stageID);
		}

		::System::Boolean HasAnyNewStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_HASANYNEWSTAGE_OFFSET))(this);
		}

		::System::Boolean CheckRewardHasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Void MarkRewardHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_MARKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Boolean AllHardStageChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_ALLHARDSTAGECHALLENGED_OFFSET))(this);
		}

		::System::Void _OnGetSummonActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONGETSUMMONACTIVITYDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnEnterSummonActivityStageScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONENTERSUMMONACTIVITYSTAGESCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnSummonActivityBattleEndScNotify(::System::UInt16 cmd, ::System::Object* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONSUMMONACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, cmd, ntf);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _UpdateSrvData(::Class_1_D17272E82AE804C2_923* scNtf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_923*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__UPDATESRVDATA_OFFSET))(this, scNtf);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>* _GetSummonAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONAVATARLISTFROMIDLIST_OFFSET))(this, avatarIDList);
		}

		::Class_1_1CBA230307F9C289_61* _GetSummonActivityAvatar(::System::UInt32 avatarID)
		{
			return ((::Class_1_1CBA230307F9C289_61*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONACTIVITYAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void _StartSummonBattle(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty, ::Class_1_1CBA230307F9C289_61* masterAvatar, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_1CBA230307F9C289_61*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__STARTSUMMONBATTLE_OFFSET))(this, stageID, difficulty, masterAvatar, avatarList);
		}

		::System::Void _SaveBattleInfo(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty, ::Class_1_1CBA230307F9C289_61* masterAvatar, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_1CBA230307F9C289_61*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__SAVEBATTLEINFO_OFFSET))(this, stageID, difficulty, masterAvatar, avatarList);
		}

		::System::Void _ClearBattleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__CLEARBATTLEINFO_OFFSET))(this);
		}

		::System::Void _InitStages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__INITSTAGES_OFFSET))(this);
		}

		::System::Void _PrepareRelatedMissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__PREPARERELATEDMISSIONS_OFFSET))(this);
		}

		::System::Void _InitConstValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__INITCONSTVALUES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
