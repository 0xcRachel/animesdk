#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

class Class_1_FA4F4A67B1C04320_697;
namespace Proto { class GetRaidInfoScRsp; }
namespace RPG::GameCore { class ChallengeActMarkConfigRow; }
namespace RPG::GameCore { class ChallengeActivityConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEARNEWSCORECACHE_OFFSET UNITYSDK_OFFSET(0xA254750)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA254040)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETACTIVITYTOTALSCORE_OFFSET UNITYSDK_OFFSET(0xA2547E0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETCHALLENGEACTMARKROWBYSCORE_OFFSET UNITYSDK_OFFSET(0xA2545F0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETMAXSCOREBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xA254890)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GET_ISCANTAINAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xA254C00)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGEOBTAINNEWSCORE_OFFSET UNITYSDK_OFFSET(0xA2546F0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGERAIDFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0xA254990)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA254930)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ONENTERCHALLENGERAID_OFFSET UNITYSDK_OFFSET(0xA254B30)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SET_ISCANTAINAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xA254C10)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA2541A0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATECHALLENGERAID_OFFSET UNITYSDK_OFFSET(0xA254300)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATETAKENREWARD_OFFSET UNITYSDK_OFFSET(0xA254450)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA253F40)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__REFRESHAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xA2544D0)

namespace RPG::Client
{
	inline static constexpr unsigned int QuestChallengeActivityData_TypeDefinitionIndex = 50015;

	class QuestChallengeActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::GameCore::ChallengeActivityConfigRow* ChallengeRow; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ChallengeNewScoreCache; // 0xA8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _TakenRewardIDSet; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ChallengeRaidMaxScore; // 0xB8
		::System::Boolean _IsCantainAvailableReward_k__BackingField; // 0xC0

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Sync(::Proto::GetRaidInfoScRsp* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SYNC_OFFSET))(this, rsp);
		}

		::System::Void UpdateChallengeRaid(::Class_1_FA4F4A67B1C04320_697* raidInfo, ::System::Boolean cacheNewScore)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_697*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATECHALLENGERAID_OFFSET))(this, raidInfo, cacheNewScore);
		}

		::System::Void UpdateTakenReward(::System::UInt32 rewardID, ::System::Boolean refresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATETAKENREWARD_OFFSET))(this, rewardID, refresh);
		}

		::RPG::GameCore::ChallengeActMarkConfigRow* GetChallengeActMarkRowByScore(::System::UInt32 score)
		{
			return ((::RPG::GameCore::ChallengeActMarkConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETCHALLENGEACTMARKROWBYSCORE_OFFSET))(this, score);
		}

		::System::Boolean IsChallengeObtainNewScore(::System::UInt32 challengeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGEOBTAINNEWSCORE_OFFSET))(this, challengeID);
		}

		::System::Void ClearNewScoreCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEARNEWSCORECACHE_OFFSET))(this);
		}

		::System::UInt32 GetActivityTotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETACTIVITYTOTALSCORE_OFFSET))(this);
		}

		::System::UInt32 GetMaxScoreByChallengeID(::System::UInt32 challengeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETMAXSCOREBYCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 rewardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISREWARDTAKEN_OFFSET))(this, rewardID);
		}

		::System::Boolean IsChallengeRaidFirstOpen(::System::UInt32 challengeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGERAIDFIRSTOPEN_OFFSET))(this, challengeID);
		}

		::System::Void OnEnterChallengeRaid(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ONENTERCHALLENGERAID_OFFSET))(this, challengeID);
		}

		::System::Void _RefreshAvailableReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__REFRESHAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsCantainAvailableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GET_ISCANTAINAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Void set_IsCantainAvailableReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SET_ISCANTAINAVAILABLEREWARD_OFFSET))(this, value);
		}
	};
}
