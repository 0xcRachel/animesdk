#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_69F06BA11FF28429_3;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class DrinkMakerGuestRow; }
namespace RPG::GameCore { class DrinkMakerTagRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARGUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x905C6D0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GETUNLOCKEDFAVORTAGLIST_OFFSET UNITYSDK_OFFSET(0x905CA50)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_DAYCOUNT_OFFSET UNITYSDK_OFFSET(0x905CFE0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_FAITH_OFFSET UNITYSDK_OFFSET(0x905C8E0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_FINISHQUEST_OFFSET UNITYSDK_OFFSET(0x905D030)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTID_OFFSET UNITYSDK_OFFSET(0x905CFA0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTROW_OFFSET UNITYSDK_OFFSET(0x905CEF0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x905D000)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_LASTFAITH_OFFSET UNITYSDK_OFFSET(0x905D140)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_MAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x905CFC0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_UNLOCKTAGS_OFFSET UNITYSDK_OFFSET(0x905D010)
#define RPG_CLIENT_DRINKMAKERBARGUEST_ISFINISH_OFFSET UNITYSDK_OFFSET(0x905CDB0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_DAYCOUNT_OFFSET UNITYSDK_OFFSET(0x905CFF0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_GUESTID_OFFSET UNITYSDK_OFFSET(0x905CFB0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_LASTFAITH_OFFSET UNITYSDK_OFFSET(0x905D150)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_MAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x905CFD0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_UNLOCKTAGS_OFFSET UNITYSDK_OFFSET(0x905D020)
#define RPG_CLIENT_DRINKMAKERBARGUEST_TRYGETFINISHREWARD_OFFSET UNITYSDK_OFFSET(0x905CF50)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x905C7E0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x905C9B0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEMAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x905CA00)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEREWARD_OFFSET UNITYSDK_OFFSET(0x905C930)
#define RPG_CLIENT_DRINKMAKERBARGUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x905C780)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarGuest_TypeDefinitionIndex = 50506;

	class DrinkMakerBarGuest : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockTags_k__BackingField; // 0x10
		::Class_1_69F06BA11FF28429_3* _ServerData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FinishReward; // 0x20
		::System::UInt32 _DayCount_k__BackingField; // 0x28
		::System::UInt32 _LastFaith_k__BackingField; // 0x2C
		::System::UInt32 _GuestID_k__BackingField; // 0x30
		::System::UInt32 _MaxDayCount_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarGuest* Create(::System::UInt32 guestID)
		{
			return ((::RPG::Client::DrinkMakerBarGuest*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_CREATE_OFFSET))(guestID);
		}

		::System::Void UpdateData(::Class_1_69F06BA11FF28429_3* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69F06BA11FF28429_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDATA_OFFSET))(this, rsp);
		}

		::System::Void UpdateReward(::Proto::ItemList* reward)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEREWARD_OFFSET))(this, reward);
		}

		::System::Void UpdateDayCount(::System::UInt32 dayCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDAYCOUNT_OFFSET))(this, dayCount);
		}

		::System::Void UpdateMaxDayCount(::System::UInt32 maxDayCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEMAXDAYCOUNT_OFFSET))(this, maxDayCount);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerTagRow*>* GetUnlockedFavorTagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerTagRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GETUNLOCKEDFAVORTAGLIST_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_ISFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* TryGetFinishReward()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_TRYGETFINISHREWARD_OFFSET))(this);
		}

		::System::UInt32 get_GuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTID_OFFSET))(this);
		}

		::System::Void set_GuestID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_GUESTID_OFFSET))(this, value);
		}

		::System::UInt32 get_Faith()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_FAITH_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerGuestRow* get_GuestRow()
		{
			return ((::RPG::GameCore::DrinkMakerGuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTROW_OFFSET))(this);
		}

		::System::UInt32 get_MaxDayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_MAXDAYCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxDayCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_MAXDAYCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_DayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_DAYCOUNT_OFFSET))(this);
		}

		::System::Void set_DayCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_DAYCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_ISLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockTags()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_UNLOCKTAGS_OFFSET))(this);
		}

		::System::Void set_UnlockTags(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_UNLOCKTAGS_OFFSET))(this, value);
		}

		::RPG::Client::QuestData* get_FinishQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_FINISHQUEST_OFFSET))(this);
		}

		::System::UInt32 get_LastFaith()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_LASTFAITH_OFFSET))(this);
		}

		::System::Void set_LastFaith(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_LASTFAITH_OFFSET))(this, value);
		}
	};
}
