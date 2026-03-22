#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActivityHipplenModule; }

#define RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0x94B9320)
#define RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x94B9710)
#define RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x94B96C0)
#define RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x94B91F0)
#define RPG_CLIENT_HIPPLENACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x94B9180)
#define RPG_CLIENT_HIPPLENACTIVITYDATA__HASRESIDENTREWARDSTOTAKE_OFFSET UNITYSDK_OFFSET(0x94B9430)
#define RPG_CLIENT_HIPPLENACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x94B9830)
#define RPG_CLIENT_HIPPLENACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x94B97C0)
#define RPG_CLIENT_HIPPLENACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x94B9750)

namespace RPG::Client
{
	inline static constexpr unsigned int HipplenActivityData_TypeDefinitionIndex = 48791;

	class HipplenActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::ActivityHipplenModule* _Module; // 0xA0
		::System::UInt32 _LimitedRewardID; // 0xA8

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyGotoRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasResidentRewardsToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA__HASRESIDENTREWARDSTOTAKE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}
	};
}
