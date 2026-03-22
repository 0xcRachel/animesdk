#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_69;
class Class_1_6DF0D90298F36A2E_1;
class Class_1_F1F83A16E5B8B459_1;
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumRandomEvent; }
namespace RPG::GameCore { class MuseumRandomEventConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_CLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0x98E9050)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CURBUFFEVENT_OFFSET UNITYSDK_OFFSET(0x98F0E80)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CUREVENTS_OFFSET UNITYSDK_OFFSET(0x98F0E00)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_HAVENEWEVENT_OFFSET UNITYSDK_OFFSET(0x98E9040)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0x98F0E40)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_NEWEVENT_OFFSET UNITYSDK_OFFSET(0x98F0E20)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_ONTURNEVENTCACHE_OFFSET UNITYSDK_OFFSET(0x98F0E60)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0x98F0DE0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CURBUFFEVENT_OFFSET UNITYSDK_OFFSET(0x98F0E90)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CUREVENTS_OFFSET UNITYSDK_OFFSET(0x98F0E10)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0x98F0E50)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_NEWEVENT_OFFSET UNITYSDK_OFFSET(0x98F0E30)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_ONTURNEVENTCACHE_OFFSET UNITYSDK_OFFSET(0x98F0E70)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0x98F0DF0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCEVENTSINFO_OFFSET UNITYSDK_OFFSET(0x98E2780)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCNEWEVENTINFO_OFFSET UNITYSDK_OFFSET(0x98ED110)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCSELECTRESULT_OFFSET UNITYSDK_OFFSET(0x98EC180)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ADDCUREVENT_OFFSET UNITYSDK_OFFSET(0x98F0BD0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CLEARDATA_OFFSET UNITYSDK_OFFSET(0x98F0A50)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98E12F0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISIMMEDIATELYFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x98F0D20)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISONTURNEVENT_OFFSET UNITYSDK_OFFSET(0x98F0D80)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0x98F0AD0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARONTURNEVENTCACHE_OFFSET UNITYSDK_OFFSET(0x98F0B60)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__UPDATEBUFFDATA_OFFSET UNITYSDK_OFFSET(0x98F0C90)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumRandomEventData_TypeDefinitionIndex = 52829;

	class MuseumRandomEventData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>* _CurEvents_k__BackingField; // 0x10
		::RPG::GameCore::MuseumRandomEventConfigRow* _OnTurnEventCache_k__BackingField; // 0x18
		::RPG::Client::MuseumRandomEvent* _ImmediatelyFinishedNewEventCache_k__BackingField; // 0x20
		::RPG::Client::MuseumData* _OwnerMuseum_k__BackingField; // 0x28
		::RPG::Client::MuseumRandomEvent* _CurBuffEvent_k__BackingField; // 0x30
		::RPG::Client::MuseumRandomEvent* _NewEvent_k__BackingField; // 0x38
		::System::UInt32 _CurBuffEventID; // 0x40
		::System::UInt32 _OnTurnEventBeginTurn; // 0x44

		::System::Void _ctor(::RPG::Client::MuseumData* ownerMuseum)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CTOR_OFFSET))(this, ownerMuseum);
		}

		::System::Void SyncEventsInfo(::Class_1_6DF0D90298F36A2E_1* eventsInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6DF0D90298F36A2E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCEVENTSINFO_OFFSET))(this, eventsInfo);
		}

		::System::Void SyncNewEventInfo(::Class_1_F1F83A16E5B8B459_1* eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCNEWEVENTINFO_OFFSET))(this, eventInfo);
		}

		::System::Void SyncSelectResult(::Class_1_120319518E6F6581_69* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCSELECTRESULT_OFFSET))(this, rsp);
		}

		::System::Void ClearImmediatelyFinishedNewEventCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_CLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this);
		}

		::System::Void _ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CLEARDATA_OFFSET))(this);
		}

		::System::Void _UpdateBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__UPDATEBUFFDATA_OFFSET))(this);
		}

		::System::Void _AddCurEvent(::RPG::Client::MuseumRandomEvent* curEvent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ADDCUREVENT_OFFSET))(this, curEvent);
		}

		::System::Boolean _IsImmediatelyFinishEvent(::RPG::GameCore::MuseumRandomEventConfigRow* eventConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISIMMEDIATELYFINISHEVENT_OFFSET))(this, eventConfig);
		}

		::System::Boolean _IsOnTurnEvent(::RPG::GameCore::MuseumRandomEventConfigRow* eventConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISONTURNEVENT_OFFSET))(this, eventConfig);
		}

		::System::Void _TryClearImmediatelyFinishedNewEventCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this);
		}

		::System::Void _TryClearOnTurnEventCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARONTURNEVENTCACHE_OFFSET))(this);
		}

		::RPG::Client::MuseumData* get_OwnerMuseum()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_OWNERMUSEUM_OFFSET))(this);
		}

		::System::Void set_OwnerMuseum(::RPG::Client::MuseumData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_OWNERMUSEUM_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>* get_CurEvents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CUREVENTS_OFFSET))(this);
		}

		::System::Void set_CurEvents(::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CUREVENTS_OFFSET))(this, value);
		}

		::RPG::Client::MuseumRandomEvent* get_NewEvent()
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_NEWEVENT_OFFSET))(this);
		}

		::System::Void set_NewEvent(::RPG::Client::MuseumRandomEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_NEWEVENT_OFFSET))(this, value);
		}

		::System::Boolean get_HaveNewEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_HAVENEWEVENT_OFFSET))(this);
		}

		::RPG::Client::MuseumRandomEvent* get_ImmediatelyFinishedNewEventCache()
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this);
		}

		::System::Void set_ImmediatelyFinishedNewEventCache(::RPG::Client::MuseumRandomEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumRandomEventConfigRow* get_OnTurnEventCache()
		{
			return ((::RPG::GameCore::MuseumRandomEventConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_ONTURNEVENTCACHE_OFFSET))(this);
		}

		::System::Void set_OnTurnEventCache(::RPG::GameCore::MuseumRandomEventConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_ONTURNEVENTCACHE_OFFSET))(this, value);
		}

		::RPG::Client::MuseumRandomEvent* get_CurBuffEvent()
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CURBUFFEVENT_OFFSET))(this);
		}

		::System::Void set_CurBuffEvent(::RPG::Client::MuseumRandomEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CURBUFFEVENT_OFFSET))(this, value);
		}
	};
}
