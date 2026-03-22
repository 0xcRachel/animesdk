#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Recommend/GoodRelicRecommendType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Recommend { class GoodRelicPropertyDataGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9D77FC0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_GETGOODRELICRECOMMENDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9D7A2C0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_GETRELICITEMRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x9D78240)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_ISGOODRELIC_OFFSET UNITYSDK_OFFSET(0x9D782D0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_ISGROWTHTARGETRELIC_OFFSET UNITYSDK_OFFSET(0x9D78690)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_REPORTBATTLERESULTDATA_OFFSET UNITYSDK_OFFSET(0x9D79670)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_REPORTITEMDIALOGDATA_OFFSET UNITYSDK_OFFSET(0x9D79D30)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9D78140)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__FETCHSUBPROPERTYMATCHINFO_OFFSET UNITYSDK_OFFSET(0x9D78FE0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETAVATARLISTBYSETID_OFFSET UNITYSDK_OFFSET(0x9D791D0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETRELICMATCHDATA_OFFSET UNITYSDK_OFFSET(0x9D79540)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETREPORTINFO_OFFSET UNITYSDK_OFFSET(0x9D79A90)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__ISMATCHMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0x9D78C30)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__ISMATCHRELICSET_OFFSET UNITYSDK_OFFSET(0x9D78BC0)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int GoodRelicEvaluator_TypeDefinitionIndex = 59463;

	class GoodRelicEvaluator : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Recommend::GoodRelicPropertyDataGroup*>* _GrowthTargetRecommendDataCacheMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Recommend::GoodRelicPropertyDataGroup*>*>* _RelicRecommendCacheMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Recommend::GoodRelicEvaluator* Create()
		{
			return ((::RPG::Client::Recommend::GoodRelicEvaluator*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_CREATE_OFFSET))();
		}

		::RPG::Client::Recommend::GoodRelicRecommendType GetRelicItemRecommendType(::RPG::Client::RelicItemData* itemData)
		{
			return ((::RPG::Client::Recommend::GoodRelicRecommendType(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_GETRELICITEMRECOMMENDTYPE_OFFSET))(this, itemData);
		}

		::System::Boolean IsGrowthTargetRelic(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_ISGROWTHTARGETRELIC_OFFSET))(this, itemData);
		}

		::System::Boolean IsGoodRelic(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_ISGOODRELIC_OFFSET))(this, itemData);
		}

		::System::Void ReportBattleResultData(::System::UInt32 cocoonType, ::System::UInt32 cocoonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_REPORTBATTLERESULTDATA_OFFSET))(this, cocoonType, cocoonID);
		}

		::System::String* _GetReportInfo(::System::UInt32 uid)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETREPORTINFO_OFFSET))(this, uid);
		}

		::System::Void ReportItemDialogData(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_REPORTITEMDIALOGDATA_OFFSET))(this, itemData);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetAvatarListBySetID(::System::UInt32 setID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETAVATARLISTBYSETID_OFFSET))(this, setID);
		}

		::System::Boolean _IsMatchRelicSet(::RPG::Client::RelicRecommendData* recommendData, ::System::UInt32 setID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicRecommendData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__ISMATCHRELICSET_OFFSET))(this, recommendData, setID);
		}

		::RPG::Client::Recommend::GoodRelicPropertyDataGroup* _GetRelicMatchData(::RPG::Client::RelicItemData* itemData, ::RPG::Client::RelicRecommendData* recommendData)
		{
			return ((::RPG::Client::Recommend::GoodRelicPropertyDataGroup*(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETRELICMATCHDATA_OFFSET))(this, itemData, recommendData);
		}

		::System::Boolean _IsMatchMainProperty(::RPG::Client::RelicItemData* itemData, ::RPG::Client::RelicRecommendData* recommendData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__ISMATCHMAINPROPERTY_OFFSET))(this, itemData, recommendData);
		}

		::System::Void _FetchSubPropertyMatchInfo(::RPG::Client::RelicItemData* itemData, ::RPG::Client::RelicRecommendData* recommendData, ::RPG::Client::Recommend::GoodRelicPropertyDataGroup* matchData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*, ::RPG::Client::Recommend::GoodRelicPropertyDataGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__FETCHSUBPROPERTYMATCHINFO_OFFSET))(this, itemData, recommendData, matchData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Recommend::GoodRelicPropertyDataGroup*>* GetGoodRelicRecommendAvatarList(::System::UInt32 UID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Recommend::GoodRelicPropertyDataGroup*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_GETGOODRELICRECOMMENDAVATARLIST_OFFSET))(this, UID);
		}
	};
}
