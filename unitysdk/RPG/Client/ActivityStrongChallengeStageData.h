#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/StrongChallengeBattleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityStrongChallengeBossDetailData; }
namespace RPG::Client { class ActivityStrongChallengeBuffData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class StrongChallengeStageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x170992C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_AVAILABLEBUFFS_OFFSET UNITYSDK_OFFSET(0x17099260)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x17099220)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0x17099270)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_CLEARSCORELINE_OFFSET UNITYSDK_OFFSET(0x17097FA0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_COSTLIMIT_OFFSET UNITYSDK_OFFSET(0x17099240)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_FIGHTEVENTID_OFFSET UNITYSDK_OFFSET(0x170994D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_HISTORYHIGHSCORE_OFFSET UNITYSDK_OFFSET(0x17099840)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISACTIVITYINPROGRESS_OFFSET UNITYSDK_OFFSET(0x17099D10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0x170998C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCLEARED_OFFSET UNITYSDK_OFFSET(0x17095500)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x17099A60)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x17095440)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x17099860)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISVICTORY_OFFSET UNITYSDK_OFFSET(0x17099A00)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_LASTBATTLEAVATARS_OFFSET UNITYSDK_OFFSET(0x17099E20)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_LASTBATTLEBUFFS_OFFSET UNITYSDK_OFFSET(0x17099E30)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERBGFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x170991D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x17099190)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERGRAYFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x170991B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERLIST_OFFSET UNITYSDK_OFFSET(0x17099690)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x170991F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_PRESTAGEID_OFFSET UNITYSDK_OFFSET(0x17098F80)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_PRESTAGE_OFFSET UNITYSDK_OFFSET(0x170990E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_QUESTGROUPID_OFFSET UNITYSDK_OFFSET(0x17098F10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x17095420)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x170995D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_RECOMMENDNATURE_OFFSET UNITYSDK_OFFSET(0x170992A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x170994F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SCOREINTERVAL_OFFSET UNITYSDK_OFFSET(0x17099280)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x17099A20)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOULDPLAYVICTORYANIM_OFFSET UNITYSDK_OFFSET(0x17099A40)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x170953B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x17098B40)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_HISTORYHIGHSCORE_OFFSET UNITYSDK_OFFSET(0x17099850)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x17099B40)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_ISVICTORY_OFFSET UNITYSDK_OFFSET(0x17099A10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x17099A30)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_SHOULDPLAYVICTORYANIM_OFFSET UNITYSDK_OFFSET(0x17099A50)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17098990)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeStageData_TypeDefinitionIndex = 57108;

	class ActivityStrongChallengeStageData : public ::System::Object
	{
	public:
		::RPG::GameCore::StrongChallengeStageRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>* _AvailableBuffs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBossDetailData*>* _BossDetails_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>* _LastBattleBuffs_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _LastBattleAvatars_k__BackingField; // 0x30
		::System::UInt32 _HistoryHighScore_k__BackingField; // 0x38
		::System::Boolean _ShouldPlayVictoryAnim_k__BackingField; // 0x3C
		::System::Boolean _IsVictory_k__BackingField; // 0x3D
		::System::Boolean _ShouldPlayUnlockAnim_k__BackingField; // 0x3E

		::System::Void _ctor(::RPG::GameCore::StrongChallengeStageRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StrongChallengeStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_STAGEID_OFFSET))(this);
		}

		::System::UInt32 get_PreStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_PRESTAGEID_OFFSET))(this);
		}

		::RPG::Client::ActivityStrongChallengeStageData* get_PreStage()
		{
			return ((::RPG::Client::ActivityStrongChallengeStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_PRESTAGE_OFFSET))(this);
		}

		::System::String* get_MonsterFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_MonsterGrayFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERGRAYFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_MonsterBgFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERBGFIGUREPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_QuestGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_QUESTGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::StrongChallengeBattleType get_BattleType()
		{
			return ((::RPG::GameCore::StrongChallengeBattleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_BATTLETYPE_OFFSET))(this);
		}

		::System::UInt32 get_CostLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_COSTLIMIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>* get_AvailableBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_AVAILABLEBUFFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBossDetailData*>* get_BossDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBossDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_BOSSDETAILS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ScoreInterval()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SCOREINTERVAL_OFFSET))(this);
		}

		::System::UInt32 get_ClearScoreLine()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_CLEARSCORELINE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendNature()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_RECOMMENDNATURE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::UInt32 get_FightEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_FIGHTEVENTID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERLIST_OFFSET))(this);
		}

		::System::UInt32 get_HistoryHighScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_HISTORYHIGHSCORE_OFFSET))(this);
		}

		::System::Void set_HistoryHighScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_HISTORYHIGHSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISOPEN_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCHALLENGED_OFFSET))(this);
		}

		::System::Boolean get_IsCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCLEARED_OFFSET))(this);
		}

		::System::Boolean get_IsVictory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISVICTORY_OFFSET))(this);
		}

		::System::Void set_IsVictory(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_ISVICTORY_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOULDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_ShouldPlayUnlockAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_SHOULDPLAYUNLOCKANIM_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldPlayVictoryAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOULDPLAYVICTORYANIM_OFFSET))(this);
		}

		::System::Void set_ShouldPlayVictoryAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_SHOULDPLAYVICTORYANIM_OFFSET))(this, value);
		}

		::System::Boolean get_IsClicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCLICKED_OFFSET))(this);
		}

		::System::Void set_IsClicked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_ISCLICKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsActivityInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISACTIVITYINPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_LastBattleAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_LASTBATTLEAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>* get_LastBattleBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_LASTBATTLEBUFFS_OFFSET))(this);
		}
	};
}
