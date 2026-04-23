#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionContentRegionScope.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class AnniversaryCollectionContentConfigRow; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x16D5C040)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x16D5F190)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_CONTENTTITLE_OFFSET UNITYSDK_OFFSET(0x16D5EF40)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x16D5F010)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x16D5EE70)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISNOTSTART_OFFSET UNITYSDK_OFFSET(0x16D5ED60)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x16D5EDD0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISREGIONSCOPEVALID_OFFSET UNITYSDK_OFFSET(0x16D5F0F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_REGIONSCOPE_OFFSET UNITYSDK_OFFSET(0x16D5F080)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x16D5EEE0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x16D5EB20)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16D5EB10)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__ONACTIVITYENDED_OFFSET UNITYSDK_OFFSET(0x16D5ED00)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__ONACTIVITYOPENED_OFFSET UNITYSDK_OFFSET(0x16D5ECA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionContentData_TypeDefinitionIndex = 57570;

	class AnniversaryCollectionContentData : public ::System::Object
	{
	public:
		::System::UInt32 _ContentID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 contentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__CTOR_OFFSET))(this, contentID);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnActivityOpened(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__ONACTIVITYOPENED_OFFSET))(this, data);
		}

		::System::Void _OnActivityEnded(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA__ONACTIVITYENDED_OFFSET))(this, data);
		}

		::System::Boolean get_IsNotStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISNOTSTART_OFFSET))(this);
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

		::RPG::GameCore::AnniversaryCollectionContentRegionScope get_RegionScope()
		{
			return ((::RPG::GameCore::AnniversaryCollectionContentRegionScope(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_REGIONSCOPE_OFFSET))(this);
		}

		::System::Boolean get_IsRegionScopeValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_ISREGIONSCOPEVALID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::GameCore::AnniversaryCollectionContentConfigRow* get__Row()
		{
			return ((::RPG::GameCore::AnniversaryCollectionContentConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONCONTENTDATA_GET__ROW_OFFSET))(this);
		}
	};
}
