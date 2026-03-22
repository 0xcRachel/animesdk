#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityTelevisionLevelRow; }
namespace RPG::GameCore { class ActivityTelevisionQuestRow; }
namespace RPG::GameCore { class ActivityTelevisionStageRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8BD2CC0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELROW_OFFSET UNITYSDK_OFFSET(0x8BD2E90)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELSCORE_OFFSET UNITYSDK_OFFSET(0x8BD2DF0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x8BD2FC0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8BD3740)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x8BD3860)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXBUFFLAYER_OFFSET UNITYSDK_OFFSET(0x8BD3780)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8BD3760)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x8BD3880)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFMULLIST_OFFSET UNITYSDK_OFFSET(0x8BD3800)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_PROGRESSMISSIONID_OFFSET UNITYSDK_OFFSET(0x8BD2FA0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x8BD37C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTROW_OFFSET UNITYSDK_OFFSET(0x8BD3840)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8BD3820)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x8BD3490)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x8BD37A0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x8BD37E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISDEATH_OFFSET UNITYSDK_OFFSET(0x8BD3310)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISPRELEVELFINISHED_OFFSET UNITYSDK_OFFSET(0x8BD31D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISREVEALED_OFFSET UNITYSDK_OFFSET(0x8BD2EE0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8BD2980)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_NOTCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8BD29F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x8BD3750)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x8BD3870)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXBUFFLAYER_OFFSET UNITYSDK_OFFSET(0x8BD3790)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8BD3770)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_QUESTROW_OFFSET UNITYSDK_OFFSET(0x8BD3850)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x8BD3830)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x8BD37B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SEASON_OFFSET UNITYSDK_OFFSET(0x8BD37F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x8BD2E30)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8BD2D80)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8BD35A0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITLEVELINFO_OFFSET UNITYSDK_OFFSET(0x8BD36D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x8BD3640)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionData_TypeDefinitionIndex = 49197;

	class ActivityTelevisionData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityTelevisionLevelRow* _LevelRow_k__BackingField; // 0x10
		::RPG::GameCore::ActivityTelevisionQuestRow* _QuestRow_k__BackingField; // 0x18
		::RPG::Client::ScheduleData* _ScheduleData; // 0x20
		::RPG::GameCore::ActivityTelevisionStageRow* _Row_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::UInt32 _MaxLevel_k__BackingField; // 0x34
		::System::UInt32 _MaxBuffLayer_k__BackingField; // 0x38
		::System::UInt32 _Score_k__BackingField; // 0x3C
		::System::UInt32 _Season_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void _ctor_1(::System::UInt32 id, ::RPG::GameCore::ActivityTelevisionStageRow* stageRow)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__CTOR_1_OFFSET))(this, id, stageRow);
		}

		static ::RPG::Client::ActivityTelevisionData* Create(::System::UInt32 id, ::RPG::GameCore::ActivityTelevisionStageRow* stageRow)
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::System::UInt32, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_CREATE_OFFSET))(id, stageRow);
		}

		::System::UInt32 GetLevelScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELSCORE_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 score, ::System::UInt32 buffLayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SYNC_OFFSET))(this, score, buffLayer);
		}

		::RPG::GameCore::ActivityTelevisionLevelRow* GetLevelRow(::System::UInt32 hardLevel)
		{
			return ((::RPG::GameCore::ActivityTelevisionLevelRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELROW_OFFSET))(this, hardLevel);
		}

		::System::Boolean IsRevealed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISREVEALED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Boolean IsPreLevelFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISPRELEVELFINISHED_OFFSET))(this);
		}

		::System::Boolean IsDeath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISDEATH_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean NotChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_NOTCHALLENGED_OFFSET))(this);
		}

		::System::Void _InitStageInfo(::RPG::GameCore::ActivityTelevisionStageRow* stageRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITSTAGEINFO_OFFSET))(this, stageRow);
		}

		::System::Void _InitLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITLEVELINFO_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxBuffLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXBUFFLAYER_OFFSET))(this);
		}

		::System::Void set_MaxBuffLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXBUFFLAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SCORE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_Season()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SEASON_OFFSET))(this, value);
		}

		::System::UInt32 get_ProgressMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_PROGRESSMISSIONID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MazeBuffMulList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFMULLIST_OFFSET))(this);
		}

		::RPG::GameCore::ActivityTelevisionStageRow* get_Row()
		{
			return ((::RPG::GameCore::ActivityTelevisionStageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ActivityTelevisionStageRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityTelevisionQuestRow* get_QuestRow()
		{
			return ((::RPG::GameCore::ActivityTelevisionQuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTROW_OFFSET))(this);
		}

		::System::Void set_QuestRow(::RPG::GameCore::ActivityTelevisionQuestRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionQuestRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_QUESTROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityTelevisionLevelRow* get_LevelRow()
		{
			return ((::RPG::GameCore::ActivityTelevisionLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_LEVELROW_OFFSET))(this);
		}

		::System::Void set_LevelRow(::RPG::GameCore::ActivityTelevisionLevelRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_LEVELROW_OFFSET))(this, value);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFID_OFFSET))(this);
		}
	};
}
