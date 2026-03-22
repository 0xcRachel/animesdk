#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::GameCore { class Anniversary2NDContentConfigRow; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x8C85EF0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_CONTENTTITLE_OFFSET UNITYSDK_OFFSET(0x8C867E0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x8C868B0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x8C86650)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x8C86520)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x8C86780)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x8C85E80)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C85E70)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__ONACTIVITYENDED_OFFSET UNITYSDK_OFFSET(0x8C864C0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__ONACTIVITYOPENED_OFFSET UNITYSDK_OFFSET(0x8C86460)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__TRYSETSCHEDULEBEGINHANDLER_OFFSET UNITYSDK_OFFSET(0x8C86000)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__TRYSETSCHEDULEENDHANDLER_OFFSET UNITYSDK_OFFSET(0x8C86230)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionContentData_TypeDefinitionIndex = 49564;

	class AnniversaryCollectionContentData : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleTask* _WaitEndTask; // 0x10
		::RPG::Client::ScheduleTask* _WaitOpenTask; // 0x18
		::System::UInt32 _ContentID; // 0x20

		::System::Void _ctor(::System::UInt32 contentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__CTOR_OFFSET))(this, contentID);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Void _TrySetScheduleBeginHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__TRYSETSCHEDULEBEGINHANDLER_OFFSET))(this);
		}

		::System::Void _TrySetScheduleEndHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__TRYSETSCHEDULEENDHANDLER_OFFSET))(this);
		}

		::System::Void _OnActivityOpened(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__ONACTIVITYOPENED_OFFSET))(this, data);
		}

		::System::Void _OnActivityEnded(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__ONACTIVITYENDED_OFFSET))(this, data);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISOPENED_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::RPG::Client::ActivityData* get_ActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::TextID get_ContentTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_CONTENTTITLE_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_GOTOID_OFFSET))(this);
		}

		::RPG::GameCore::Anniversary2NDContentConfigRow* get__Row()
		{
			return ((::RPG::GameCore::Anniversary2NDContentConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET__ROW_OFFSET))(this);
		}
	};
}
