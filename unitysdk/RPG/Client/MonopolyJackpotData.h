#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_30;
class Class_1_4549397855D7737D;
namespace RPG::Client { class ScheduleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GETCURRENTREWARDS_OFFSET UNITYSDK_OFFSET(0x9892BD0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GETTICKETRESULTINDEX_OFFSET UNITYSDK_OFFSET(0x9892CA0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_CLOSETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9893520)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_GOTTICKETID_OFFSET UNITYSDK_OFFSET(0x9893A90)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASBONUS_OFFSET UNITYSDK_OFFSET(0x9893580)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASRESULT_OFFSET UNITYSDK_OFFSET(0x98937D0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x9893980)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISDRAWN_OFFSET UNITYSDK_OFFSET(0x9893960)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETCASHED_OFFSET UNITYSDK_OFFSET(0x9893AD0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETGOT_OFFSET UNITYSDK_OFFSET(0x9892D40)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETSHOWN_OFFSET UNITYSDK_OFFSET(0x9893AB0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9893640)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_POOLID_OFFSET UNITYSDK_OFFSET(0x9893310)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTNUMBERS_OFFSET UNITYSDK_OFFSET(0x9893AF0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9893490)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x9893330)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_UNLOCKTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9893400)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SAFESYNC_OFFSET UNITYSDK_OFFSET(0x9891B00)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETCASHED_OFFSET UNITYSDK_OFFSET(0x9892B90)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETSHOWN_OFFSET UNITYSDK_OFFSET(0x9892B50)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_GOTTICKETID_OFFSET UNITYSDK_OFFSET(0x9893AA0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISDRAWN_OFFSET UNITYSDK_OFFSET(0x9893970)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETCASHED_OFFSET UNITYSDK_OFFSET(0x9893AE0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETSHOWN_OFFSET UNITYSDK_OFFSET(0x9893AC0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_POOLID_OFFSET UNITYSDK_OFFSET(0x9893320)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_RESULTNUMBERS_OFFSET UNITYSDK_OFFSET(0x9893B00)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCRESULT_OFFSET UNITYSDK_OFFSET(0x9892800)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCTICKET_OFFSET UNITYSDK_OFFSET(0x98929C0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x9892F90)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDRESULTNUMBER_OFFSET UNITYSDK_OFFSET(0x9892A90)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9893B10)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__GETNUMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x98931D0)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__INITREWARD_OFFSET UNITYSDK_OFFSET(0x9891C80)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__INITSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9891C10)
#define RPG_CLIENT_MONOPOLYJACKPOTDATA__ISTICKETMATCHED_OFFSET UNITYSDK_OFFSET(0x9892D50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyJackpotData_TypeDefinitionIndex = 52736;

	class MonopolyJackpotData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt64>* _ResultNumbers_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _LevelToCoinNums; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _ResultFigures; // 0x20
		::System::UInt32 _PoolID_k__BackingField; // 0x28
		::System::UInt32 _ActivityModuleID; // 0x2C
		::System::UInt32 _UnlockOffset; // 0x30
		::System::UInt32 _ResultOffset; // 0x34
		::System::UInt64 _GotTicketID_k__BackingField; // 0x38
		::System::Boolean _IsDrawn_k__BackingField; // 0x40
		::System::Boolean _IsTicketShown_k__BackingField; // 0x41
		::System::Boolean _IsTicketCashed_k__BackingField; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__CTOR_OFFSET))(this);
		}

		::System::Void SafeSync(::Class_1_21DCD4640D389503_30* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SAFESYNC_OFFSET))(this, info);
		}

		::System::Void SyncResult(::Class_1_21DCD4640D389503_30* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCRESULT_OFFSET))(this, info);
		}

		::System::Void SyncTicket(::System::Collections::Generic::List_1<::Class_1_4549397855D7737D*>* tickets, ::System::Boolean isReissued)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4549397855D7737D*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SYNCTICKET_OFFSET))(this, tickets, isReissued);
		}

		::System::Void SetTicketShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETSHOWN_OFFSET))(this);
		}

		::System::Void SetTicketCashed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SETTICKETCASHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentRewards(::System::UInt32 level)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GETCURRENTREWARDS_OFFSET))(this, level);
		}

		::System::Int32 GetTicketResultIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GETTICKETRESULTINDEX_OFFSET))(this);
		}

		::System::Void _InitSchedule(::Class_1_21DCD4640D389503_30* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__INITSCHEDULE_OFFSET))(this, info);
		}

		::System::Void _InitReward(::Class_1_21DCD4640D389503_30* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__INITREWARD_OFFSET))(this, info);
		}

		::System::Void _AddLevelReward(::System::UInt32 progress, ::System::UInt32 coinNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDLEVELREWARD_OFFSET))(this, progress, coinNum);
		}

		::System::Boolean _IsTicketMatched(::System::UInt64 ticketNumber, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__ISTICKETMATCHED_OFFSET))(this, ticketNumber, index);
		}

		::System::Void _AddResultNumber(::System::String* numberString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__ADDRESULTNUMBER_OFFSET))(this, numberString);
		}

		::System::Int32 _GetNumberCount(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA__GETNUMBERCOUNT_OFFSET))(this, str);
		}

		::System::UInt32 get_PoolID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_POOLID_OFFSET))(this);
		}

		::System::Void set_PoolID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_POOLID_OFFSET))(this, value);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_SCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_UnlockTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_UNLOCKTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_ResultTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_CloseTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_CLOSETIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_HasBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASBONUS_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_HasResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_HASRESULT_OFFSET))(this);
		}

		::System::Boolean get_IsDrawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISDRAWN_OFFSET))(this);
		}

		::System::Void set_IsDrawn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISDRAWN_OFFSET))(this, value);
		}

		::System::Boolean get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISCLOSED_OFFSET))(this);
		}

		::System::UInt64 get_GotTicketID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_GOTTICKETID_OFFSET))(this);
		}

		::System::Void set_GotTicketID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_GOTTICKETID_OFFSET))(this, value);
		}

		::System::Boolean get_IsTicketGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETGOT_OFFSET))(this);
		}

		::System::Boolean get_IsTicketShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETSHOWN_OFFSET))(this);
		}

		::System::Void set_IsTicketShown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETSHOWN_OFFSET))(this, value);
		}

		::System::Boolean get_IsTicketCashed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_ISTICKETCASHED_OFFSET))(this);
		}

		::System::Void set_IsTicketCashed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_ISTICKETCASHED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt64>* get_ResultNumbers()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_GET_RESULTNUMBERS_OFFSET))(this);
		}

		::System::Void set_ResultNumbers(::System::Collections::Generic::List_1<::System::UInt64>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTDATA_SET_RESULTNUMBERS_OFFSET))(this, value);
		}
	};
}
