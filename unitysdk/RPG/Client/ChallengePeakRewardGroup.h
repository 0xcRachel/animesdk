#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRewardState.h"
#include "unitysdk/RPG/GameCore/ChallengePeakRewardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakReward; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x92F72F0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETRELATEDBOSSSPECIALREWARDDATABYTYPEVALUE_OFFSET UNITYSDK_OFFSET(0x92FB130)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDBOSSSTARREWARDDATA_OFFSET UNITYSDK_OFFSET(0x92FB5B0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDNORMALPASSREWARDDATA_OFFSET UNITYSDK_OFFSET(0x92FB2F0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDNORMALSTARREWARDDATA_OFFSET UNITYSDK_OFFSET(0x92FB560)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASPASSREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x92F29D0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x92F2780)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASSTARREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x92F28F0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x92FA930)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_PEAKGROUPID_OFFSET UNITYSDK_OFFSET(0x92FA950)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_SET_ID_OFFSET UNITYSDK_OFFSET(0x92FA940)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_TAKEMONSTERANDBOSSSTARREWARD_OFFSET UNITYSDK_OFFSET(0x92FA690)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_TAKEMONSTERPASSREWARD_OFFSET UNITYSDK_OFFSET(0x92FA3F0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x92FAB20)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__GETSORTEDREWARDDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x92FB340)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__HASREWARDCANTAKEOFTYPE_OFFSET UNITYSDK_OFFSET(0x92FA960)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakRewardGroup_TypeDefinitionIndex = 51274;

	class ChallengePeakRewardGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* _Rewards; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengePeakRewardType, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*>* _RewardsDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ChallengePeakRewardState, ::System::Int32>* _ProgressTypeOrder; // 0x20
		::System::UInt32 _PeakGroupID_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 peakGroupID, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* rewards)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__CTOR_OFFSET))(this, id, peakGroupID, rewards);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_PeakGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_PEAKGROUPID_OFFSET))(this);
		}

		::System::Boolean get_HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean get_HasStarRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASSTARREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean get_HasPassRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASPASSREWARDCANTAKE_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakRewardGroup* Create(::System::UInt32 id, ::System::UInt32 peakGroupID, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* rewards)
		{
			return ((::RPG::Client::ChallengePeakRewardGroup*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_CREATE_OFFSET))(id, peakGroupID, rewards);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* GetSortedNormalPassRewardData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDNORMALPASSREWARDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* GetSortedNormalStarRewardData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDNORMALSTARREWARDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* GetSortedBossStarRewardData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDBOSSSTARREWARDDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakReward* GetRelatedBossSpecialRewardDataByTypeValue(::System::UInt32 typeValue)
		{
			return ((::RPG::Client::ChallengePeakReward*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETRELATEDBOSSSPECIALREWARDDATABYTYPEVALUE_OFFSET))(this, typeValue);
		}

		::System::Void TakeMonsterPassReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_TAKEMONSTERPASSREWARD_OFFSET))(this);
		}

		::System::Void TakeMonsterAndBossStarReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_TAKEMONSTERANDBOSSSTARREWARD_OFFSET))(this);
		}

		::System::Boolean _HasRewardCanTakeOfType(::RPG::GameCore::ChallengePeakRewardType rewardTypes)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChallengePeakRewardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__HASREWARDCANTAKEOFTYPE_OFFSET))(this, rewardTypes);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* _GetSortedRewardDataByType(::RPG::GameCore::ChallengePeakRewardType type, ::System::Boolean isIgnoreProgress)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*(*)(::PVOID, ::RPG::GameCore::ChallengePeakRewardType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__GETSORTEDREWARDDATABYTYPE_OFFSET))(this, type, isIgnoreProgress);
		}
	};
}
