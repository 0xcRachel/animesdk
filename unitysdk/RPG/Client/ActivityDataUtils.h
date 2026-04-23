#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivityRewardItem; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYDATAUTILS_GETACTIVITYDISPLAYARRAYBYITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0x171D22F0)
#define RPG_CLIENT_ACTIVITYDATAUTILS_GETSORTEDDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x171D2480)
#define RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWDAILYGOTOCLICKREDDOTTODAY_1_OFFSET UNITYSDK_OFFSET(0x171D25B0)
#define RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWDAILYGOTOCLICKREDDOTTODAY_OFFSET UNITYSDK_OFFSET(0x171D2510)
#define RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWEARLYACCESSCLICKREDDOTTODAY_OFFSET UNITYSDK_OFFSET(0x171D2A80)
#define RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYGOTOCLICKREDDOT_1_OFFSET UNITYSDK_OFFSET(0x171D2820)
#define RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYGOTOCLICKREDDOT_OFFSET UNITYSDK_OFFSET(0x171D2780)
#define RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYTABCLICKREDDOT_OFFSET UNITYSDK_OFFSET(0x171D2C40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityDataUtils_TypeDefinitionIndex = 56797;

	class ActivityDataUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::ActivityRewardItem*>* GetActivityDisplayArrayByItemConfigs(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* data)
		{
			return ((::Il2CppArray<::RPG::Client::ActivityRewardItem*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_GETACTIVITYDISPLAYARRAYBYITEMCONFIGS_OFFSET))(data);
		}

		static ::Il2CppArray<::RPG::Client::ActivityRewardItem*>* GetSortedDisplayItemList(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* configs)
		{
			return ((::Il2CppArray<::RPG::Client::ActivityRewardItem*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_GETSORTEDDISPLAYITEMLIST_OFFSET))(configs);
		}

		static ::System::Boolean IsShowDailyGotoClickRedDotToday(::System::UInt32 panelID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWDAILYGOTOCLICKREDDOTTODAY_OFFSET))(panelID);
		}

		static ::System::Boolean IsShowDailyGotoClickRedDotToday_1(::RPG::Client::ActivityPanelData* activityPanelData)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWDAILYGOTOCLICKREDDOTTODAY_1_OFFSET))(activityPanelData);
		}

		static ::System::Void UpdateDailyGotoClickRedDot(::System::UInt32 panelID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYGOTOCLICKREDDOT_OFFSET))(panelID);
		}

		static ::System::Void UpdateDailyGotoClickRedDot_1(::RPG::Client::ActivityPanelData* activityPanelData)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYGOTOCLICKREDDOT_1_OFFSET))(activityPanelData);
		}

		static ::System::Boolean IsShowEarlyAccessClickRedDotToday(::RPG::Client::ActivityPanelData* activityPanelData)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWEARLYACCESSCLICKREDDOTTODAY_OFFSET))(activityPanelData);
		}

		static ::System::Void UpdateDailyTabClickRedDot(::RPG::Client::ActivityPanelData* activityPanelData)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYTABCLICKREDDOT_OFFSET))(activityPanelData);
		}
	};
}
