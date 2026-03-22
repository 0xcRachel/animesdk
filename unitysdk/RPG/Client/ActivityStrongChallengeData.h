#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x8BBBE10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8BBBE00)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x8BBC620)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeData_TypeDefinitionIndex = 49107;

	class ActivityStrongChallengeData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
