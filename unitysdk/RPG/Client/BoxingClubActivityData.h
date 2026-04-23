#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x16D491F0)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA_ISSHOWMAPGUIDEHINT_OFFSET UNITYSDK_OFFSET(0x16D49150)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x16D48DD0)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x16D48D90)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16D48BE0)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPGUIDEHINT_OFFSET UNITYSDK_OFFSET(0x16D492D0)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x16D49260)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x16D49200)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubActivityData_TypeDefinitionIndex = 56809;

	class BoxingClubActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockMissionList; // 0xA0

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMapGuideHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA_ISSHOWMAPGUIDEHINT_OFFSET))(this);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowMapGuideHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPGUIDEHINT_OFFSET))(this);
		}
	};
}
