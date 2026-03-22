#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivitySwordTrainingExamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BC8250)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GETEXAMDATA_OFFSET UNITYSDK_OFFSET(0x8BC82C0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GET_ACTIVEEXAMDATA_OFFSET UNITYSDK_OFFSET(0x8BC8D50)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GET_ACTIVEEXAMID_OFFSET UNITYSDK_OFFSET(0x8BC9310)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x8BC8000)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_ISINSWORDTRAININGBATTLE_OFFSET UNITYSDK_OFFSET(0x8BC8DA0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_ONEXAMBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0x8BC8780)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_SET_ACTIVEEXAMID_OFFSET UNITYSDK_OFFSET(0x8BC9320)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_STARTEXAM_OFFSET UNITYSDK_OFFSET(0x8BC83B0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_UPDATEEXAMPERFORMANCECONTEXT_OFFSET UNITYSDK_OFFSET(0x8BC88F0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC9330)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__INITEXAMDATALIST_OFFSET UNITYSDK_OFFSET(0x8BC8050)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__ONEXAMPERFORMANCEFINISH_OFFSET UNITYSDK_OFFSET(0x8BC8F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingExamInfo_TypeDefinitionIndex = 49143;

	class ActivitySwordTrainingExamInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivitySwordTrainingExamData*>* ExamDataList; // 0x10
		::System::UInt32 _ActiveExamID_k__BackingField; // 0x18
		::System::Boolean IsBattleWin; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivitySwordTrainingExamData* GetExamData(::System::UInt32 examID)
		{
			return ((::RPG::Client::ActivitySwordTrainingExamData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GETEXAMDATA_OFFSET))(this, examID);
		}

		::System::Void _InitExamDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__INITEXAMDATALIST_OFFSET))(this);
		}

		::System::Void StartExam(::System::UInt32 examID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_STARTEXAM_OFFSET))(this, examID);
		}

		::System::Void OnExamBattleFinish(::System::Boolean isExamWin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_ONEXAMBATTLEFINISH_OFFSET))(this, isExamWin);
		}

		::System::Void UpdateExamPerformanceContext(::System::Boolean isExamWin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_UPDATEEXAMPERFORMANCECONTEXT_OFFSET))(this, isExamWin);
		}

		::System::Boolean IsInSwordTrainingBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_ISINSWORDTRAININGBATTLE_OFFSET))(this);
		}

		::System::Void _OnExamPerformanceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO__ONEXAMPERFORMANCEFINISH_OFFSET))(this);
		}

		::RPG::Client::ActivitySwordTrainingExamData* get_ActiveExamData()
		{
			return ((::RPG::Client::ActivitySwordTrainingExamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GET_ACTIVEEXAMDATA_OFFSET))(this);
		}

		::System::UInt32 get_ActiveExamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_GET_ACTIVEEXAMID_OFFSET))(this);
		}

		::System::Void set_ActiveExamID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO_SET_ACTIVEEXAMID_OFFSET))(this, value);
		}
	};
}
