#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_81595715048249D2;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERANK_OFFSET UNITYSDK_OFFSET(0x9DA1510)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORCURSET_OFFSET UNITYSDK_OFFSET(0x9DA0AC0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORSPECIFIC_OFFSET UNITYSDK_OFFSET(0x9DA06F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULT_OFFSET UNITYSDK_OFFSET(0x9D9FB20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATEVIRTUALSCOREAFTERFILTER_OFFSET UNITYSDK_OFFSET(0x9DA13D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9D9F960)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_GETRELICCALCULATIONRESULTINFOS_OFFSET UNITYSDK_OFFSET(0x9DA15B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_SETUPPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9FAA0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEFINALSCORE_OFFSET UNITYSDK_OFFSET(0x9DA0C80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEHITCOUNT_OFFSET UNITYSDK_OFFSET(0x9DA12B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEINFO_OFFSET UNITYSDK_OFFSET(0x9D9FFD0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEMAINPROPERTYMATCH_OFFSET UNITYSDK_OFFSET(0x9DA1050)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATERANK_OFFSET UNITYSDK_OFFSET(0x9DA0FE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CONTAINCRITICAL_OFFSET UNITYSDK_OFFSET(0x9DA0130)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9D9FA30)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__ISCRITICALPROPERTY_OFFSET UNITYSDK_OFFSET(0x9DA0690)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCalculator_TypeDefinitionIndex = 59424;

	class RelicSmartSuitCalculator : public ::System::Object
	{
	public:
		::Class_1_81595715048249D2* _DataSource; // 0x10

		::System::Void _ctor(::RPG::Client::IAvatarInfoProvider* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CTOR_OFFSET))(this, avatarData);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculator* Create(::RPG::Client::IAvatarInfoProvider* avatarData)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculator*(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CREATE_OFFSET))(avatarData);
		}

		::System::Void SetupPlanData(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_SETUPPLANDATA_OFFSET))(this, planData);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* CalculateResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULT_OFFSET))(this);
		}

		::System::Boolean _ContainCritical(::RPG::Client::RelicRecommendData* recommendData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CONTAINCRITICAL_OFFSET))(this, recommendData);
		}

		::System::Boolean _IsCriticalProperty(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__ISCRITICALPROPERTY_OFFSET))(this, propertyType);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* CalculateResultForSpecific(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* relicDatas, ::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORSPECIFIC_OFFSET))(relicDatas, avatarData);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* CalculateResultForCurSet()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERESULTFORCURSET_OFFSET))(this);
		}

		::System::Void _CalculateInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* resultData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEINFO_OFFSET))(this, resultData);
		}

		::System::Single CalculateVirtualScoreAfterFilter(::RPG::Client::RelicItemData* relicItemData)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATEVIRTUALSCOREAFTERFILTER_OFFSET))(this, relicItemData);
		}

		::System::Void _CalculateFinalScore(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* resultData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEFINALSCORE_OFFSET))(this, resultData);
		}

		static ::RPG::Client::RelicSmartSuit::RankType CalculateRank(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* relicDatas, ::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_CALCULATERANK_OFFSET))(relicDatas, avatarData);
		}

		static ::RPG::Client::RelicSmartSuit::RankType _CalculateRank(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* resultData, ::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATERANK_OFFSET))(resultData, avatarData);
		}

		::System::Void _CalculateMainPropertyMatch(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* resultData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEMAINPROPERTYMATCH_OFFSET))(this, resultData);
		}

		::System::Void _CalculateHitCount(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* resultData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR__CALCULATEHITCOUNT_OFFSET))(this, resultData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* GetRelicCalculationResultInfos(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* relicItemDatas, ::RPG::GameCore::RelicType relicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* planResult)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::GameCore::RelicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATOR_GETRELICCALCULATIONRESULTINFOS_OFFSET))(this, relicItemDatas, relicType, planResult);
		}
	};
}
