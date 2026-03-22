#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0358F8A4CB124E8E;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class PlanetFesRegionProgressPhase; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESREGIONPROGRESS_ADDGOTREWARD_OFFSET UNITYSDK_OFFSET(0x9AF04E0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GETCOMBINEDBUFF_OFFSET UNITYSDK_OFFSET(0x9AFED10)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x9AF0720)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GETPHASES_OFFSET UNITYSDK_OFFSET(0x9AEFB20)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_ALLREWARDGOT_OFFSET UNITYSDK_OFFSET(0x9AFE800)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0x9AFE6D0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_ISFINISHALLPROGRESS_OFFSET UNITYSDK_OFFSET(0x9AFE680)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_PHASECOUNT_OFFSET UNITYSDK_OFFSET(0x9AFF340)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_PROGRESSSTEP_OFFSET UNITYSDK_OFFSET(0x9AFE620)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9AFE5D0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9AFE930)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0x9AFEAA0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_INIT_OFFSET UNITYSDK_OFFSET(0x9AEFCF0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_REQUESTGETREWARD_OFFSET UNITYSDK_OFFSET(0x9AFEB40)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_SETGOTREWARDS_OFFSET UNITYSDK_OFFSET(0x9AEFE80)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_SETPROGRESSPERMILLAGE_OFFSET UNITYSDK_OFFSET(0x9AEFE30)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x9AF7D70)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS__REFRESHREGIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x9AFEFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesRegionProgress_TypeDefinitionIndex = 53083;

	class PlanetFesRegionProgress : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _GotRewardPhases; // 0x10
		::Class_1_0358F8A4CB124E8E* _BuffFactory; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRegionProgressPhase*>* _Phases; // 0x20
		::System::UInt32 _ProgressPermillage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_PROGRESS_OFFSET))(this);
		}

		::System::Int32 get_ProgressStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_PROGRESSSTEP_OFFSET))(this);
		}

		::System::Boolean get_IsFinishAllProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_ISFINISHALLPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_CanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_CANGETREWARD_OFFSET))(this);
		}

		::System::Boolean get_AllRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_ALLREWARDGOT_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_REWARDID_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* get_RewardItem()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_REWARDITEM_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_INIT_OFFSET))(this);
		}

		::System::Void RequestGetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_REQUESTGETREWARD_OFFSET))(this);
		}

		::RPG::Client::IPlanetFesBuff* GetCombinedBuff()
		{
			return ((::RPG::Client::IPlanetFesBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GETCOMBINEDBUFF_OFFSET))(this);
		}

		::RPG::Client::PlanetFesRegionProgressPhase* GetCurrentPhase()
		{
			return ((::RPG::Client::PlanetFesRegionProgressPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GETCURRENTPHASE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRegionProgressPhase*>* GetPhases()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRegionProgressPhase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GETPHASES_OFFSET))(this);
		}

		::System::Void SetProgressPermillage(::System::UInt32 progressPermillage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_SETPROGRESSPERMILLAGE_OFFSET))(this, progressPermillage);
		}

		::System::Void SetGotRewards(::System::Collections::Generic::IList_1<::System::UInt32>* phaseIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_SETGOTREWARDS_OFFSET))(this, phaseIDs);
		}

		::System::Void AddGotReward(::System::UInt32 phaseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_ADDGOTREWARD_OFFSET))(this, phaseID);
		}

		::System::Void _RefreshRegionProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS__REFRESHREGIONPROGRESS_OFFSET))(this);
		}

		::System::Int32 get_PhaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_PHASECOUNT_OFFSET))(this);
		}
	};
}
