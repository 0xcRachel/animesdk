#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeFriendRecommendLineupData; }
namespace RPG::Client { class ChallengeStatisticRecommendLineupData; }

#define RPG_CLIENT_CHALLENGERECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8E9D170)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E9D410)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_GET_FRIENDRECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8E9D470)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_GET_STATISTICRECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8E9D490)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_ISCHALLENGERECOMMENDFEATUREOPEN_OFFSET UNITYSDK_OFFSET(0x8E9D230)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_RESETDATA_OFFSET UNITYSDK_OFFSET(0x8E9D310)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_SET_FRIENDRECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8E9D480)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_SET_STATISTICRECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8E9D4A0)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8E9D0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeRecommendData_TypeDefinitionIndex = 50088;

	class ChallengeRecommendData : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeStatisticRecommendLineupData* _StatisticRecommendLineupData_k__BackingField; // 0x10
		::RPG::Client::ChallengeFriendRecommendLineupData* _FriendRecommendLineupData_k__BackingField; // 0x18
		::System::UInt32 _ChallengeID; // 0x20

		::System::Void _ctor(::System::UInt32 challengeID, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA__CTOR_OFFSET))(this, challengeID, groupType);
		}

		static ::RPG::Client::ChallengeRecommendData* Create(::System::UInt32 challengeID, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::RPG::Client::ChallengeRecommendData*(*)(::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_CREATE_OFFSET))(challengeID, groupType);
		}

		static ::System::Boolean IsChallengeRecommendFeatureOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_ISCHALLENGERECOMMENDFEATUREOPEN_OFFSET))();
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_RESETDATA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChallengeFriendRecommendLineupData* get_FriendRecommendLineupData()
		{
			return ((::RPG::Client::ChallengeFriendRecommendLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_GET_FRIENDRECOMMENDLINEUPDATA_OFFSET))(this);
		}

		::System::Void set_FriendRecommendLineupData(::RPG::Client::ChallengeFriendRecommendLineupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeFriendRecommendLineupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_SET_FRIENDRECOMMENDLINEUPDATA_OFFSET))(this, value);
		}

		::RPG::Client::ChallengeStatisticRecommendLineupData* get_StatisticRecommendLineupData()
		{
			return ((::RPG::Client::ChallengeStatisticRecommendLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_GET_STATISTICRECOMMENDLINEUPDATA_OFFSET))(this);
		}

		::System::Void set_StatisticRecommendLineupData(::RPG::Client::ChallengeStatisticRecommendLineupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeStatisticRecommendLineupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_SET_STATISTICRECOMMENDLINEUPDATA_OFFSET))(this, value);
		}
	};
}
