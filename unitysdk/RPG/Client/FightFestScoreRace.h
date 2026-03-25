#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ScoreRaceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestPlayerInfo; }
namespace RPG::Client { class FightFestRaceData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class FightFestScoreRaceRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_DETAILIMGPATH_OFFSET UNITYSDK_OFFSET(0x96CFEF0)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x96CA690)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x96CFC70)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_ISSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x96CA900)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x96CFCD0)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEBGFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x96CFE90)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEDATADICT_OFFSET UNITYSDK_OFFSET(0x96CFA50)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEDATA_OFFSET UNITYSDK_OFFSET(0x96CFA70)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEDESC_OFFSET UNITYSDK_OFFSET(0x96D0010)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEID_OFFSET UNITYSDK_OFFSET(0x96CFA30)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_RELATEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x96CFB30)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_RESULTIMGPATH_OFFSET UNITYSDK_OFFSET(0x96CFF50)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x96CFDC0)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_REWARDSCORE_OFFSET UNITYSDK_OFFSET(0x96CFD70)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_RIVALINFO_OFFSET UNITYSDK_OFFSET(0x96CFB10)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_SCORERACETYPE_OFFSET UNITYSDK_OFFSET(0x96C8860)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_SELFINFO_OFFSET UNITYSDK_OFFSET(0x96CFAF0)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x96CFD20)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x96CFE10)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_TAKEMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x96C88B0)
#define RPG_CLIENT_FIGHTFESTSCORERACE_GET_TUTORIALIMGPATH_OFFSET UNITYSDK_OFFSET(0x96CFFB0)
#define RPG_CLIENT_FIGHTFESTSCORERACE_SET_RACEDATADICT_OFFSET UNITYSDK_OFFSET(0x96CFA60)
#define RPG_CLIENT_FIGHTFESTSCORERACE_SET_RACEID_OFFSET UNITYSDK_OFFSET(0x96CFA40)
#define RPG_CLIENT_FIGHTFESTSCORERACE_SET_RIVALINFO_OFFSET UNITYSDK_OFFSET(0x96CFB20)
#define RPG_CLIENT_FIGHTFESTSCORERACE_SET_SELFINFO_OFFSET UNITYSDK_OFFSET(0x96CFB00)
#define RPG_CLIENT_FIGHTFESTSCORERACE__CTOR_OFFSET UNITYSDK_OFFSET(0x96C7900)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestScoreRace_TypeDefinitionIndex = 52097;

	class FightFestScoreRace : public ::System::Object
	{
	public:
		::RPG::Client::FightFestPlayerInfo* _RivalInfo_k__BackingField; // 0x10
		::RPG::Client::FightFestPlayerInfo* _SelfInfo_k__BackingField; // 0x18
		::RPG::GameCore::FightFestScoreRaceRow* _Row; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestRaceData*>* _RaceDataDict_k__BackingField; // 0x28
		::System::UInt32 _RaceID_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::FightFestScoreRaceRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestScoreRaceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_RaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEID_OFFSET))(this);
		}

		::System::Void set_RaceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_SET_RACEID_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestRaceData*>* get_RaceDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestRaceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEDATADICT_OFFSET))(this);
		}

		::System::Void set_RaceDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestRaceData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestRaceData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_SET_RACEDATADICT_OFFSET))(this, value);
		}

		::RPG::Client::FightFestRaceData* get_RaceData()
		{
			return ((::RPG::Client::FightFestRaceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEDATA_OFFSET))(this);
		}

		::RPG::Client::FightFestPlayerInfo* get_SelfInfo()
		{
			return ((::RPG::Client::FightFestPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_SELFINFO_OFFSET))(this);
		}

		::System::Void set_SelfInfo(::RPG::Client::FightFestPlayerInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_SET_SELFINFO_OFFSET))(this, value);
		}

		::RPG::Client::FightFestPlayerInfo* get_RivalInfo()
		{
			return ((::RPG::Client::FightFestPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_RIVALINFO_OFFSET))(this);
		}

		::System::Void set_RivalInfo(::RPG::Client::FightFestPlayerInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_SET_RIVALINFO_OFFSET))(this, value);
		}

		::RPG::Client::MainMissionData* get_RelatedMainMission()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_RELATEDMAINMISSION_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsSeenUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_ISSEENUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_PHASEID_OFFSET))(this);
		}

		::RPG::GameCore::ScoreRaceType get_ScoreRaceType()
		{
			return ((::RPG::GameCore::ScoreRaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_SCORERACETYPE_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_TakeMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_TAKEMAINMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_RewardScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_REWARDSCORE_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_REWARDID_OFFSET))(this);
		}

		::RPG::Client::TextID get_StageName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_STAGENAME_OFFSET))(this);
		}

		::System::String* get_RaceBgFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEBGFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_DetailImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_DETAILIMGPATH_OFFSET))(this);
		}

		::System::String* get_ResultImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_RESULTIMGPATH_OFFSET))(this);
		}

		::System::String* get_TutorialImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_TUTORIALIMGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_RaceDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCORERACE_GET_RACEDESC_OFFSET))(this);
		}
	};
}
