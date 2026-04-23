#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_80;
class Class_1_21C7581DFE99F091_70;
class Class_1_23F67DD15593C8D6;
class Class_1_60E3B7F7BA004DCE_4;
class Class_1_BE729FA1D1A7FEDD;
class Class_1_C2CA2C8C31F52936;
class Class_1_FB0633E85BD6CF8E_8;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace RPG::Client { class PlanetFesBusinessDayHistoryData; }
namespace RPG::Client { class PlanetFesEventDataBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEAREVENTREFRESHTIMERS_OFFSET UNITYSDK_OFFSET(0x174F8CA0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEARTIMERBYTYPE_OFFSET UNITYSDK_OFFSET(0x174F7FF0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x174F9B40)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174F9E50)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GETEVENTBYTYPE_OFFSET UNITYSDK_OFFSET(0x174F6E60)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAYHISTORYDATADICT_OFFSET UNITYSDK_OFFSET(0x174F9B20)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x174FA7B0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_CUREVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x174F8560)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTDATADICT_OFFSET UNITYSDK_OFFSET(0x174F88C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x174F8820)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFILLEDDATA_OFFSET UNITYSDK_OFFSET(0x174FA7D0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHEDALLEVENT_OFFSET UNITYSDK_OFFSET(0x174F8890)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x174FA7F0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0x174FA810)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISTUTORIALBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x174FA870)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ONSTARTGUARD_OFFSET UNITYSDK_OFFSET(0x174FA8A0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x174FA850)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0x174FA830)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x174F86C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONFINISH_OFFSET UNITYSDK_OFFSET(0x174FA130)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONSTART_OFFSET UNITYSDK_OFFSET(0x174FA020)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SETONSTARTGUARD_OFFSET UNITYSDK_OFFSET(0x174F9FD0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAYHISTORYDATADICT_OFFSET UNITYSDK_OFFSET(0x174F9B30)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x174FA7C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_EVENTDATADICT_OFFSET UNITYSDK_OFFSET(0x174F88D0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFILLEDDATA_OFFSET UNITYSDK_OFFSET(0x174FA7E0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x174FA800)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0x174FA820)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ONSTARTGUARD_OFFSET UNITYSDK_OFFSET(0x174FA8B0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x174FA860)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0x174FA840)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTHISTORY_OFFSET UNITYSDK_OFFSET(0x174F6AA0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTINFO_OFFSET UNITYSDK_OFFSET(0x174F6940)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCHISTORYSTATISTICS_OFFSET UNITYSDK_OFFSET(0x174F9520)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCOUTERINFO_OFFSET UNITYSDK_OFFSET(0x174FA670)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCTOTALCOINCHANGE_OFFSET UNITYSDK_OFFSET(0x174FA6E0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x174FA540)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TICKGAMEPLAYEVENTREFRESH_OFFSET UNITYSDK_OFFSET(0x174F8D40)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYADDTIMERBYTYPE_OFFSET UNITYSDK_OFFSET(0x174F81E0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYAPPEAREVENT_OFFSET UNITYSDK_OFFSET(0x174F6FE0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYDISAPPEAREVENT_OFFSET UNITYSDK_OFFSET(0x174F7080)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYENTERNEXTDAY_OFFSET UNITYSDK_OFFSET(0x174FA240)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CHECKANDDISPATCHREFRESH_OFFSET UNITYSDK_OFFSET(0x174F8FE0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CLEAREVENTDATA_OFFSET UNITYSDK_OFFSET(0x174F7470)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CREATETIMER_OFFSET UNITYSDK_OFFSET(0x174F8C20)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x174F9CF0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEEVENTS_OFFSET UNITYSDK_OFFSET(0x174F84B0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEHISTORYINFO_OFFSET UNITYSDK_OFFSET(0x174F9A70)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__FINDEVENTINFO_OFFSET UNITYSDK_OFFSET(0x174F7C20)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__INITEVENTS_OFFSET UNITYSDK_OFFSET(0x174F7120)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCALLEVENTINFO_OFFSET UNITYSDK_OFFSET(0x174F7670)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCSINGLEEVENTINFO_OFFSET UNITYSDK_OFFSET(0x174F69A0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TICKEVENTREFRESHTIMERS_OFFSET UNITYSDK_OFFSET(0x174F8E60)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYAUTOADDEVENTREFRESHTIMERS_OFFSET UNITYSDK_OFFSET(0x174F8DD0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0x174F9480)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBusinessDayData_TypeDefinitionIndex = 61319;

	class PlanetFesBusinessDayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>* _BusinessDayHistoryDataDict_k__BackingField; // 0x10
		::System::Numerics::BigInteger _TotalCoin_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::Class_1_23F67DD15593C8D6*>* _EventRefreshTimer; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>* _EventDataDict_k__BackingField; // 0x30
		::System::Int64 _StartTimeStamp_k__BackingField; // 0x38
		::System::UInt32 _BusinessDay_k__BackingField; // 0x40
		::System::Boolean _IsFilledData_k__BackingField; // 0x44
		::System::Boolean _IsFinished_k__BackingField; // 0x45
		::System::Boolean _IsInfinite_k__BackingField; // 0x46
		::System::Boolean _OnStartGuard_k__BackingField; // 0x47

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncEventInfo(::Class_1_BE729FA1D1A7FEDD* eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE729FA1D1A7FEDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTINFO_OFFSET))(this, eventInfo);
		}

		::System::Void SyncEventHistory(::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_70*>* eventHistories)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_70*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTHISTORY_OFFSET))(this, eventHistories);
		}

		::RPG::Client::PlanetFesEventDataBase* GetEventByType(::RPG::GameCore::PlanetFesEventType type)
		{
			return ((::RPG::Client::PlanetFesEventDataBase*(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GETEVENTBYTYPE_OFFSET))(this, type);
		}

		::System::Void TryAppearEvent(::RPG::GameCore::PlanetFesEventType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYAPPEAREVENT_OFFSET))(this, type);
		}

		::System::Void TryDisappearEvent(::RPG::GameCore::PlanetFesEventType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYDISAPPEAREVENT_OFFSET))(this, type);
		}

		::System::Void _InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__INITEVENTS_OFFSET))(this);
		}

		::System::Void _ClearEventData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CLEAREVENTDATA_OFFSET))(this);
		}

		::System::Void _SyncAllEventInfo(::System::Collections::Generic::IList_1<::Class_1_BE729FA1D1A7FEDD*>* eventInfos, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* eventTargetCounts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_BE729FA1D1A7FEDD*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCALLEVENTINFO_OFFSET))(this, eventInfos, eventTargetCounts);
		}

		::Class_1_BE729FA1D1A7FEDD* _FindEventInfo(::System::Collections::Generic::IEnumerable_1<::Class_1_BE729FA1D1A7FEDD*>* eventInfos, ::System::Int32 type)
		{
			return ((::Class_1_BE729FA1D1A7FEDD*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_BE729FA1D1A7FEDD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__FINDEVENTINFO_OFFSET))(this, eventInfos, type);
		}

		::System::Void _SyncSingleEventInfo(::Class_1_BE729FA1D1A7FEDD* eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE729FA1D1A7FEDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCSINGLEEVENTINFO_OFFSET))(this, eventInfo);
		}

		::System::Void _DisposeEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEEVENTS_OFFSET))(this);
		}

		::System::UInt32 get_CurEventCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_CUREVENTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TotalEventCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALEVENTCOUNT_OFFSET))(this);
		}

		::System::Single get_EventProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsFinishedAllEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHEDALLEVENT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>* get_EventDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTDATADICT_OFFSET))(this);
		}

		::System::Void set_EventDataDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_EVENTDATADICT_OFFSET))(this, value);
		}

		::System::Void TryAddTimerByType(::RPG::GameCore::PlanetFesEventType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYADDTIMERBYTYPE_OFFSET))(this, type);
		}

		::System::Void ClearTimerByType(::RPG::GameCore::PlanetFesEventType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEARTIMERBYTYPE_OFFSET))(this, type);
		}

		::System::Void ClearEventRefreshTimers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEAREVENTREFRESHTIMERS_OFFSET))(this);
		}

		::System::Void TickGamePlayEventRefresh(::System::Single deltaSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TICKGAMEPLAYEVENTREFRESH_OFFSET))(this, deltaSec);
		}

		::System::Void _TryAutoAddEventRefreshTimers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYAUTOADDEVENTREFRESHTIMERS_OFFSET))(this);
		}

		::Class_1_23F67DD15593C8D6* _CreateTimer(::System::Single time)
		{
			return ((::Class_1_23F67DD15593C8D6*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CREATETIMER_OFFSET))(this, time);
		}

		::System::Void _TickEventRefreshTimers(::System::Single deltaSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TICKEVENTREFRESHTIMERS_OFFSET))(this, deltaSec);
		}

		::System::Void _CheckAndDispatchRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CHECKANDDISPATCHREFRESH_OFFSET))(this);
		}

		::System::Boolean _TryRefreshEvent(::RPG::Client::PlanetFesEventDataBase* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesEventDataBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYREFRESHEVENT_OFFSET))(this, eventData);
		}

		::System::Void SyncHistoryStatistics(::System::Collections::Generic::IEnumerable_1<::Class_1_FB0633E85BD6CF8E_8*>* historyStat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_FB0633E85BD6CF8E_8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCHISTORYSTATISTICS_OFFSET))(this, historyStat);
		}

		::System::Void _DisposeHistoryInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEHISTORYINFO_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>* get_BusinessDayHistoryDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAYHISTORYDATADICT_OFFSET))(this);
		}

		::System::Void set_BusinessDayHistoryDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAYHISTORYDATADICT_OFFSET))(this, value);
		}

		static ::RPG::Client::PlanetFesBusinessDayData* CreateEmpty()
		{
			return ((::RPG::Client::PlanetFesBusinessDayData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CREATEEMPTY_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetOnStartGuard(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SETONSTARTGUARD_OFFSET))(this, enable);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONSTART_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONFINISH_OFFSET))(this);
		}

		::System::Void TryEnterNextDay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYENTERNEXTDAY_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_60E3B7F7BA004DCE_4* stat)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNC_OFFSET))(this, stat);
		}

		::System::Void SyncOuterInfo(::Class_1_C2CA2C8C31F52936* outerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C2CA2C8C31F52936*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCOUTERINFO_OFFSET))(this, outerInfo);
		}

		::System::Void SyncTotalCoinChange(::Class_1_075C34D03AFA1215_80* totalCoin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCTOTALCOINCHANGE_OFFSET))(this, totalCoin);
		}

		::System::UInt32 get_BusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_BusinessDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAY_OFFSET))(this, value);
		}

		::System::Boolean get_IsFilledData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFILLEDDATA_OFFSET))(this);
		}

		::System::Void set_IsFilledData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFILLEDDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISINFINITE_OFFSET))(this);
		}

		::System::Void set_IsInfinite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISINFINITE_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_TotalCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALCOIN_OFFSET))(this);
		}

		::System::Void set_TotalCoin(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_TOTALCOIN_OFFSET))(this, value);
		}

		::System::Int64 get_StartTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_STARTTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_StartTimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_STARTTIMESTAMP_OFFSET))(this, value);
		}

		::System::Boolean get_IsTutorialBusinessDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISTUTORIALBUSINESSDAY_OFFSET))(this);
		}

		::System::Boolean get_OnStartGuard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ONSTARTGUARD_OFFSET))(this);
		}

		::System::Void set_OnStartGuard(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ONSTARTGUARD_OFFSET))(this, value);
		}
	};
}
