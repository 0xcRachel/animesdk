#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDmgStatisticsUiData; }
namespace RPG::GameCore { class RtBattleMode; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1733B5B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL_GET_DMGSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1733AAA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL_GET_STATISTICSCOUNT_OFFSET UNITYSDK_OFFSET(0x1733AAB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1733AB00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__GETBATTLEMODE_OFFSET UNITYSDK_OFFSET(0x1733B240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__ONDMGSTATISTICREFRESHED_OFFSET UNITYSDK_OFFSET(0x1733B1F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__REFRESHDMGSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1733AEC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__REFRESHRATIOTOHIGHESTDMGVALUE_OFFSET UNITYSDK_OFFSET(0x1733B3F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int DmgStatisticViewModel_TypeDefinitionIndex = 69476;

	class DmgStatisticViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*>* _DmgStatistics; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* avatarIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__CTOR_OFFSET))(this, avatarIds);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*>* get_DmgStatistics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL_GET_DMGSTATISTICS_OFFSET))(this);
		}

		::System::Int32 get_StatisticsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL_GET_STATISTICSCOUNT_OFFSET))(this);
		}

		::System::Void _OnDmgStatisticRefreshed(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__ONDMGSTATISTICREFRESHED_OFFSET))(this, param);
		}

		::System::Void _RefreshDmgStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__REFRESHDMGSTATISTICS_OFFSET))(this);
		}

		::System::Void _RefreshRatioToHighestDmgValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__REFRESHRATIOTOHIGHESTDMGVALUE_OFFSET))(this);
		}

		::RPG::GameCore::RtBattleMode* _GetBattleMode()
		{
			return ((::RPG::GameCore::RtBattleMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL__GETBATTLEMODE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL_DISPOSE_OFFSET))(this);
		}
	};
}
