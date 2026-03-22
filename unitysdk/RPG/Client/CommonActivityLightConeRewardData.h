#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LightConeRewardGotoStatus.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_502;
class Class_0_16E4307DCC419505_503;
namespace RPG::Client { class ActivityLightConeMissionCondition; }
namespace RPG::Client { class ActivityLightConeQuestCondition; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_ADDREWARDGROUP_OFFSET UNITYSDK_OFFSET(0x8FBC390)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x8FBC130)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOCONFIG_OFFSET UNITYSDK_OFFSET(0x8FBC420)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOSTATUS_OFFSET UNITYSDK_OFFSET(0x8FBC290)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEID_OFFSET UNITYSDK_OFFSET(0x8FBC180)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEMISSION_OFFSET UNITYSDK_OFFSET(0x8FBC140)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEQUEST_OFFSET UNITYSDK_OFFSET(0x8FBC430)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEREWARDGROUPS_OFFSET UNITYSDK_OFFSET(0x8FBC110)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_RELATIVEMAINMISSION_OFFSET UNITYSDK_OFFSET(0x8FBC160)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_UNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x8FBC120)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x8FBB820)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASTAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0x8FBBA70)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SETNOWPROGRESSNUM_OFFSET UNITYSDK_OFFSET(0x8FBBCC0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEMISSION_OFFSET UNITYSDK_OFFSET(0x8FBC150)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEQUEST_OFFSET UNITYSDK_OFFSET(0x8FBC440)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_RELATIVEMAINMISSION_OFFSET UNITYSDK_OFFSET(0x8FBC170)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKEMAINREWARD_OFFSET UNITYSDK_OFFSET(0x8FBC0C0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKESECONDARYREWARDS_OFFSET UNITYSDK_OFFSET(0x8FBBE60)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBB6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityLightConeRewardData_TypeDefinitionIndex = 48903;

	class CommonActivityLightConeRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_502*>* _LightConeRewardGroups; // 0x10
		::Class_0_16E4307DCC419505_503* _GotoConfig_k__BackingField; // 0x18
		::RPG::Client::ActivityLightConeMissionCondition* _LightConeMission_k__BackingField; // 0x20
		::RPG::Client::ScheduleData* _UnlockSchedule_k__BackingField; // 0x28
		::RPG::Client::ActivityLightConeQuestCondition* _LightConeQuest_k__BackingField; // 0x30
		::System::UInt32 _RelativeMainMission_k__BackingField; // 0x38
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 activityModuleID, ::System::UInt32 missionID, ::System::UInt32 questID, ::System::UInt32 gotoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA__CTOR_OFFSET))(this, activityModuleID, missionID, questID, gotoID);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasTakeAllReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASTAKEALLREWARD_OFFSET))(this);
		}

		::System::Void SetNowProgressNum(::System::UInt32 nowProgressNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SETNOWPROGRESSNUM_OFFSET))(this, nowProgressNum);
		}

		::System::Boolean TakeSecondaryRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKESECONDARYREWARDS_OFFSET))(this);
		}

		::System::Void TakeMainReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKEMAINREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_502*>* get_LightConeRewardGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_502*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEREWARDGROUPS_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_UnlockSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_UNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::RPG::Client::ActivityLightConeMissionCondition* get_LightConeMission()
		{
			return ((::RPG::Client::ActivityLightConeMissionCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEMISSION_OFFSET))(this);
		}

		::System::Void set_LightConeMission(::RPG::Client::ActivityLightConeMissionCondition* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityLightConeMissionCondition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEMISSION_OFFSET))(this, value);
		}

		::System::UInt32 get_RelativeMainMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_RELATIVEMAINMISSION_OFFSET))(this);
		}

		::System::Void set_RelativeMainMission(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_RELATIVEMAINMISSION_OFFSET))(this, value);
		}

		::System::UInt32 get_LightConeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEID_OFFSET))(this);
		}

		::RPG::Client::LightConeRewardGotoStatus get_GotoStatus()
		{
			return ((::RPG::Client::LightConeRewardGotoStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOSTATUS_OFFSET))(this);
		}

		::System::Void AddRewardGroup(::Class_0_16E4307DCC419505_502* group)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_502*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_ADDREWARDGROUP_OFFSET))(this, group);
		}

		::Class_0_16E4307DCC419505_503* get_GotoConfig()
		{
			return ((::Class_0_16E4307DCC419505_503*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOCONFIG_OFFSET))(this);
		}

		::RPG::Client::ActivityLightConeQuestCondition* get_LightConeQuest()
		{
			return ((::RPG::Client::ActivityLightConeQuestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEQUEST_OFFSET))(this);
		}

		::System::Void set_LightConeQuest(::RPG::Client::ActivityLightConeQuestCondition* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityLightConeQuestCondition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEQUEST_OFFSET))(this, value);
		}
	};
}
