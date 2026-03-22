#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityQuestTimeLimitRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_CHECKHASFINISHQUEST_OFFSET UNITYSDK_OFFSET(0x8BB4DE0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_CHECKISALLQUESTAWARDGOT_OFFSET UNITYSDK_OFFSET(0x8BB4FF0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETACTIVITYQUESTTIMELIMITGROUPS_OFFSET UNITYSDK_OFFSET(0x8BB57E0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETCLOSEQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x8BB59F0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETFINISHEDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x8BB58C0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x8BB5820)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETTORWARDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x8BB5AC0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETTOTALHCOINREWARD_OFFSET UNITYSDK_OFFSET(0x8BB5B90)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB4A00)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityQuestTimeLimitModuleData_TypeDefinitionIndex = 49102;

	class ActivityQuestTimeLimitModuleData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityQuestTimeLimitRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestTimeLimitGroupID; // 0x18

		::System::Void _ctor(::RPG::GameCore::ActivityQuestTimeLimitRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityQuestTimeLimitRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA__CTOR_OFFSET))(this, row);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetActivityQuestTimeLimitGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETACTIVITYQUESTTIMELIMITGROUPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGroupIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETGROUPIDLIST_OFFSET))(this);
		}

		::System::UInt32 GetFinishedQuestCount(::System::UInt32 questGroupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETFINISHEDQUESTCOUNT_OFFSET))(this, questGroupID);
		}

		::System::UInt32 GetCloseQuestCount(::System::UInt32 questGroupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETCLOSEQUESTCOUNT_OFFSET))(this, questGroupID);
		}

		::System::UInt32 GetToRwardQuestCount(::System::UInt32 questGroupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETTORWARDQUESTCOUNT_OFFSET))(this, questGroupID);
		}

		::System::UInt32 GetTotalHcoinReward(::System::UInt32 questGroupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETTOTALHCOINREWARD_OFFSET))(this, questGroupID);
		}

		::System::Boolean CheckHasFinishQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_CHECKHASFINISHQUEST_OFFSET))(this);
		}

		::System::Boolean CheckIsAllQuestAwardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_CHECKISALLQUESTAWARDGOT_OFFSET))(this);
		}
	};
}
