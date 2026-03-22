#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_45;
namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ADD_ONPASSEDLEVELSCHANGED_OFFSET UNITYSDK_OFFSET(0x968B3E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_CREATE_OFFSET UNITYSDK_OFFSET(0x968B200)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETDEFEATEDCHALLENGERCOUNTFORCURRENTREPUTATION_OFFSET UNITYSDK_OFFSET(0x968E140)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETSTARTARGETACHIEVEDCOUNTFORCHALLENGER_OFFSET UNITYSDK_OFFSET(0x968E230)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GET_REPUTATION_OFFSET UNITYSDK_OFFSET(0x968C9C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERDEFEATED_OFFSET UNITYSDK_OFFSET(0x968DEB0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERLOCKED_OFFSET UNITYSDK_OFFSET(0x968DB50)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERUNEXPECTEDLYLOCKED_OFFSET UNITYSDK_OFFSET(0x968DCE0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISLEVELPASSED_OFFSET UNITYSDK_OFFSET(0x9685A80)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISSTARTARGETACHIEVED_OFFSET UNITYSDK_OFFSET(0x968E190)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_REMOVE_ONPASSEDLEVELSCHANGED_OFFSET UNITYSDK_OFFSET(0x968A110)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SET_REPUTATION_OFFSET UNITYSDK_OFFSET(0x968C9D0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_1_OFFSET UNITYSDK_OFFSET(0x968D0B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_OFFSET UNITYSDK_OFFSET(0x968A5F0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCNEWLYDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET UNITYSDK_OFFSET(0x96860E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCREPUTATION_OFFSET UNITYSDK_OFFSET(0x9686090)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__CTOR_OFFSET UNITYSDK_OFFSET(0x968C9E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_OFFSET UNITYSDK_OFFSET(0x968DF10)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__RECORDNEWUNLOCKBIRDTOPREF_OFFSET UNITYSDK_OFFSET(0x968D7E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__REGISTERDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET UNITYSDK_OFFSET(0x968CB80)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER___GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_B__22_0_OFFSET UNITYSDK_OFFSET(0x968E2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPveCareer_TypeDefinitionIndex = 52495;

	class MatchThreeV2PlayerPveCareer : public ::System::Object
	{
	public:
		::System::Action* OnPassedLevelsChanged; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _DefeatedChallengers; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PassedLevels; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _AchievedStarTargetsOfChallenger; // 0x28
		::System::UInt32 _Reputation_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Reputation()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GET_REPUTATION_OFFSET))(this);
		}

		::System::Void set_Reputation(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SET_REPUTATION_OFFSET))(this, value);
		}

		::System::Void add_OnPassedLevelsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ADD_ONPASSEDLEVELSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnPassedLevelsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_REMOVE_ONPASSEDLEVELSCHANGED_OFFSET))(this, value);
		}

		static ::RPG::Client::MatchThreeV2PlayerPveCareer* Create()
		{
			return ((::RPG::Client::MatchThreeV2PlayerPveCareer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_CREATE_OFFSET))();
		}

		::System::Void SyncReputation(::System::UInt32 reputation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCREPUTATION_OFFSET))(this, reputation);
		}

		::System::Void SyncDefeatedChallengersAndAchievedStarTargets(::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_45*>* passedLevels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_45*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_OFFSET))(this, passedLevels);
		}

		::System::Void SyncDefeatedChallengersAndAchievedStarTargets_1(::System::Collections::Generic::List_1<::System::UInt32>* challengers, ::System::Collections::Generic::List_1<::System::UInt32>* starTargets)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_1_OFFSET))(this, challengers, starTargets);
		}

		::System::Void SyncNewlyDefeatedChallengerAndAchievedStarTargets(::Class_1_735612C94F558EAE_45* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCNEWLYDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET))(this, levelInfo);
		}

		::System::Void _RecordNewUnlockBirdToPref(::System::UInt32 newlyDefeatedLevelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__RECORDNEWUNLOCKBIRDTOPREF_OFFSET))(this, newlyDefeatedLevelID);
		}

		::System::Void _RegisterDefeatedChallengerAndAchievedStarTargets(::Class_1_735612C94F558EAE_45* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__REGISTERDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET))(this, levelInfo);
		}

		::System::Boolean IsLevelPassed(::System::UInt32 levelID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISLEVELPASSED_OFFSET))(this, levelID);
		}

		::System::Boolean IsChallengerLocked(::System::UInt32 challengerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERLOCKED_OFFSET))(this, challengerID);
		}

		::System::Boolean IsChallengerUnexpectedlyLocked(::System::UInt32 challengerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERUNEXPECTEDLYLOCKED_OFFSET))(this, challengerID);
		}

		::System::Boolean IsChallengerDefeated(::System::UInt32 challengerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERDEFEATED_OFFSET))(this, challengerID);
		}

		::System::Int32 _GetDefeatedChallengerCountForReputation(::System::UInt32 reputation)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_OFFSET))(this, reputation);
		}

		::System::Int32 GetDefeatedChallengerCountForCurrentReputation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETDEFEATEDCHALLENGERCOUNTFORCURRENTREPUTATION_OFFSET))(this);
		}

		::System::Boolean IsStarTargetAchieved(::System::UInt32 challengerID, ::System::UInt32 starTargetID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISSTARTARGETACHIEVED_OFFSET))(this, challengerID, starTargetID);
		}

		::System::Int32 GetStarTargetAchievedCountForChallenger(::System::UInt32 challengerID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETSTARTARGETACHIEVEDCOUNTFORCHALLENGER_OFFSET))(this, challengerID);
		}

		::System::Boolean __GetDefeatedChallengerCountForReputation_b__22_0(::RPG::Client::MatchThreeV2ChallengerData* challenger)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2ChallengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER___GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_B__22_0_OFFSET))(this, challenger);
		}
	};
}
