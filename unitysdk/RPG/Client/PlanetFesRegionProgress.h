#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0358F8A4CB124E8E;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class PlanetFesRegionProgressPhase; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESREGIONPROGRESS_ADDGOTREWARD_OFFSET UNITYSDK_OFFSET(0x17DC3390)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GETCOMBINEDBUFF_OFFSET UNITYSDK_OFFSET(0x17DC27D0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x17DC2A70)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GETPHASES_OFFSET UNITYSDK_OFFSET(0x17DC2BF0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_ALLREWARDGOT_OFFSET UNITYSDK_OFFSET(0x17DC2160)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0x17DC2030)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_ISFINISHALLPROGRESS_OFFSET UNITYSDK_OFFSET(0x17DC1FE0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_PHASECOUNT_OFFSET UNITYSDK_OFFSET(0x17DC3590)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_PROGRESSSTEP_OFFSET UNITYSDK_OFFSET(0x17DC1F80)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x17DC1F30)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x17DC2290)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_GET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0x17DC2400)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_INIT_OFFSET UNITYSDK_OFFSET(0x17DC2490)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_REQUESTGETREWARD_OFFSET UNITYSDK_OFFSET(0x17DC25E0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_SETGOTREWARDS_OFFSET UNITYSDK_OFFSET(0x17DC2F50)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS_SETPROGRESSPERMILLAGE_OFFSET UNITYSDK_OFFSET(0x17DC2C30)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBB1F0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS__REFRESHREGIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x17DC2C80)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesRegionProgress_TypeDefinitionIndex = 61384;

	class PlanetFesRegionProgress : public ::System::Object
	{
	public:
		::Class_1_0358F8A4CB124E8E* _BuffFactory; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRegionProgressPhase*>* _Phases; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* _GotRewardPhases; // 0x20
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
