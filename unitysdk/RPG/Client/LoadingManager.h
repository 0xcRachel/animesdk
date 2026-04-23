#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoadingManager_LoadingType.h"
#include "unitysdk/RPG/Client/LoadingManager_VerifyLoadingType.h"
#include "unitysdk/System/Object.h"

class Class_1_0EF666754493EADC;
class Class_1_B3D4E13199540E4F;
class Class_1_F59C8DF29FF9694F;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class LoadingManager_WorkDefCounter; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOADINGMANAGER_GET_ENABLECUSTOMPRELOAD_OFFSET UNITYSDK_OFFSET(0x1653F820)
#define RPG_CLIENT_LOADINGMANAGER_GET_FINISHEDWORKCOUNT_OFFSET UNITYSDK_OFFSET(0x1653F810)
#define RPG_CLIENT_LOADINGMANAGER_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1653F750)
#define RPG_CLIENT_LOADINGMANAGER_GET_SKIPSCENEITEMFADING_OFFSET UNITYSDK_OFFSET(0x1653F840)
#define RPG_CLIENT_LOADINGMANAGER_GET_TOTALWORKCOUNT_OFFSET UNITYSDK_OFFSET(0x1653F800)
#define RPG_CLIENT_LOADINGMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1653C5D0)
#define RPG_CLIENT_LOADINGMANAGER_ISGAMELOADING_OFFSET UNITYSDK_OFFSET(0x1653CD70)
#define RPG_CLIENT_LOADINGMANAGER_LATETICK_OFFSET UNITYSDK_OFFSET(0x1653D010)
#define RPG_CLIENT_LOADINGMANAGER_RECORDPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1653D910)
#define RPG_CLIENT_LOADINGMANAGER_REGISTELOADINGWORKDEFSCOUNTER_OFFSET UNITYSDK_OFFSET(0x1653C760)
#define RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONBEGIN_OFFSET UNITYSDK_OFFSET(0x1653D730)
#define RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x1653D7E0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGADVINITEND_OFFSET UNITYSDK_OFFSET(0x1653D5C0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x1653D960)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x1653DBE0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYFAILCOUNT_OFFSET UNITYSDK_OFFSET(0x1653D2C0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYRESULT_OFFSET UNITYSDK_OFFSET(0x1653D440)
#define RPG_CLIENT_LOADINGMANAGER_REPORTSCREENSTUCKBEGIN_OFFSET UNITYSDK_OFFSET(0x1653D680)
#define RPG_CLIENT_LOADINGMANAGER_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1653CCD0)
#define RPG_CLIENT_LOADINGMANAGER_SETLOADINGCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1653D050)
#define RPG_CLIENT_LOADINGMANAGER_SETPROGRESSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1653CD20)
#define RPG_CLIENT_LOADINGMANAGER_SET_ENABLECUSTOMPRELOAD_OFFSET UNITYSDK_OFFSET(0x1653F830)
#define RPG_CLIENT_LOADINGMANAGER_SET_SKIPSCENEITEMFADING_OFFSET UNITYSDK_OFFSET(0x1653F850)
#define RPG_CLIENT_LOADINGMANAGER_STARTTICK_OFFSET UNITYSDK_OFFSET(0x1653C860)
#define RPG_CLIENT_LOADINGMANAGER_STOPTICK_OFFSET UNITYSDK_OFFSET(0x1653CA40)
#define RPG_CLIENT_LOADINGMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1653CDC0)
#define RPG_CLIENT_LOADINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1653F860)
#define RPG_CLIENT_LOADINGMANAGER__COMPUTEFINISHEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1653F4A0)
#define RPG_CLIENT_LOADINGMANAGER__COMPUTENEXTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1653F7A0)
#define RPG_CLIENT_LOADINGMANAGER__CONVERTTIMETOSECOND_OFFSET UNITYSDK_OFFSET(0x1653EE90)
#define RPG_CLIENT_LOADINGMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1653C240)
#define RPG_CLIENT_LOADINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1653BF40)
#define RPG_CLIENT_LOADINGMANAGER__CUSTOMUPDATEPRELOADMANAGER_OFFSET UNITYSDK_OFFSET(0x1653CE40)
#define RPG_CLIENT_LOADINGMANAGER__GETMAXLOADINGTIME_OFFSET UNITYSDK_OFFSET(0x1653EF10)
#define RPG_CLIENT_LOADINGMANAGER__ISLOADINGTYPEREPORTMATCH_OFFSET UNITYSDK_OFFSET(0x1653EDF0)
#define RPG_CLIENT_LOADINGMANAGER__ONLOADMAPSTUCKSAMPLEPOINT_OFFSET UNITYSDK_OFFSET(0x1653BD40)
#define RPG_CLIENT_LOADINGMANAGER__ONQUEUENEWWORK_OFFSET UNITYSDK_OFFSET(0x1653F350)
#define RPG_CLIENT_LOADINGMANAGER__ONWORKFINISH_OFFSET UNITYSDK_OFFSET(0x1653F4F0)
#define RPG_CLIENT_LOADINGMANAGER__REFRESHWORKDEFCOUNT_OFFSET UNITYSDK_OFFSET(0x1653C7B0)
#define RPG_CLIENT_LOADINGMANAGER__RESETSTUCKCHECKTIMERWHENWORKFINISH_OFFSET UNITYSDK_OFFSET(0x1653BC20)
#define RPG_CLIENT_LOADINGMANAGER__STARTSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0x1653B800)
#define RPG_CLIENT_LOADINGMANAGER__STOPSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0x1653B9C0)
#define RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_LOADMAP_OFFSET UNITYSDK_OFFSET(0x1653BB60)
#define RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0x1653BA70)
#define RPG_CLIENT_LOADINGMANAGER__TRYADDTOWATCH_OFFSET UNITYSDK_OFFSET(0x1653EFD0)
#define RPG_CLIENT_LOADINGMANAGER__UPDATEFINISHPROGRESS_OFFSET UNITYSDK_OFFSET(0x1653F3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingManager_TypeDefinitionIndex = 55853;

	class LoadingManager : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__StopTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LoadingManager_TypeDefinitionIndex)->GetStaticField(0x48900);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__CustomUpdatePreloadManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LoadingManager_TypeDefinitionIndex)->GetStaticField(0x48908);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__StartTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LoadingManager_TypeDefinitionIndex)->GetStaticField(0x48910);
		}
		// static const ::System::Int32 _TARGET_FRAME_RATE_DURING_TICK = 0xF; // 0x0
		// static const ::System::String* _Loading_Max_Time_LoadMapIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_MazeToBattleIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_BattleToMazeIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_DesignLoadDataIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_EnterPerformanceIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_LeavePerformanceIDKey; // 0x0
		// static const ::System::String* _adv_loading_receive_packet_count_key; // 0x0
		// static const ::System::String* _adv_loading_receive_packet_list_key; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* _MonsterWaveList; // 0x10
		::RPG::Client::LoadingManager_WorkDefCounter* _workDefCounter; // 0x18
		::System::Action* _LoadFinishCallback; // 0x20
		::System::Action_1<::System::Single>* _ProgressChangedCallback; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportArguments; // 0x30
		::Class_1_0EF666754493EADC* _LoadMapStuckReportData; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _ReportTryLoadFails; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportNotifyArguments; // 0x48
		::System::Collections::Generic::HashSet_1<::Class_1_F59C8DF29FF9694F*>* _LoadingWorks; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _ReportTryLoadStates; // 0x58
		::Class_1_B3D4E13199540E4F* _AsyncProcessor; // 0x60
		::System::Int32 _LoadingType; // 0x68
		::System::Single _FinishedProgress; // 0x6C
		::System::UInt64 _WorkActionTimeBegin; // 0x70
		::System::Int32 _TargetFrameRateBeforeStartTick; // 0x78
		::System::Boolean _EnableCustomPreload_k__BackingField; // 0x7C
		::System::Boolean _ResetTargetFPSFlag; // 0x7D
		::System::Boolean _StartTick; // 0x7E
		::System::Boolean _ResetMainCameraCullingFlag; // 0x7F
		::System::Single _DesignDataLoadMaxTime; // 0x80
		::System::UInt64 _EffectTransitionExistTime; // 0x88
		::System::Int32 _FinishedWorkCount; // 0x90
		::System::Int32 _WorkActionCallNums; // 0x94
		::System::UInt64 _ScreenStuckTime; // 0x98
		::System::UInt64 _ADVInitTime; // 0xA0
		::System::Boolean _LogReported; // 0xA8
		::System::Boolean _SkipSceneItemFading_k__BackingField; // 0xA9
		::System::UInt32 _LastMapID; // 0xAC
		::System::UInt64 _WorkActionTime; // 0xB0
		::System::UInt64 _EffectTransitionExistTimeBegin; // 0xB8
		::System::Single _BattleToMazeMaxTime; // 0xC0
		::System::Int32 _TotalWorkCount; // 0xC4
		::System::UInt64 _ADVInitTimeBegin; // 0xC8
		::System::Single _LoadMapMaxTime; // 0xD0
		::System::Single _EnterPerformanceMaxTime; // 0xD4
		::System::UInt64 _TotalLoadingTimeBegin; // 0xD8
		::System::Single _LeavePerformanceMaxTime; // 0xE0
		::System::Single _StuckCheckTimer; // 0xE4
		::System::Single _MazeToBattleMaxTime; // 0xE8
		::System::Int32 _MainCameraOriginCullingMask; // 0xEC
		::System::UInt32 _PerformanceID; // 0xF0
		::System::UInt32 _LastStageID; // 0xF4
		::System::UInt64 _ScreenStuckTimeBegin; // 0xF8
		::System::UInt64 _TotalLoadingTime; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_B3D4E13199540E4F* asyncProcessor)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3D4E13199540E4F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CTOR_1_OFFSET))(this, asyncProcessor);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CCTOR_OFFSET))();
		}

		::System::Void _StartStuckCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__STARTSTUCKCHECK_OFFSET))(this);
		}

		::System::Void _StopStuckCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__STOPSTUCKCHECK_OFFSET))(this);
		}

		::System::Void _TickStuckCheck(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_OFFSET))(this, dt);
		}

		::System::Void _ResetStuckCheckTimerWhenWorkFinish(::Class_1_F59C8DF29FF9694F* workDefinition, ::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__RESETSTUCKCHECKTIMERWHENWORKFINISH_OFFSET))(this, workDefinition, success);
		}

		::System::Void _TickStuckCheck_LoadMap(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_LOADMAP_OFFSET))(this, dt);
		}

		::System::Void _OnLoadMapStuckSamplePoint(::System::Single stuckTime, ::System::Boolean upload)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONLOADMAPSTUCKSAMPLEPOINT_OFFSET))(this, stuckTime, upload);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_INITIALIZE_OFFSET))(this);
		}

		::System::Void RegisteLoadingWorkDefsCounter(::RPG::Client::LoadingManager_WorkDefCounter* getWorkDefsFunc)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_WorkDefCounter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REGISTELOADINGWORKDEFSCOUNTER_OFFSET))(this, getWorkDefsFunc);
		}

		::System::Void StartTick(::System::Boolean skipSceneItemFading)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_STARTTICK_OFFSET))(this, skipSceneItemFading);
		}

		::System::Void StopTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_STOPTICK_OFFSET))(this);
		}

		::System::Void SetLoadFinishCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETLOADFINISHCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetProgressChangedCallback(::System::Action_1<::System::Single>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETPROGRESSCHANGEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean IsGameLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_ISGAMELOADING_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void LateTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_LATETICK_OFFSET))(this);
		}

		::System::Void _CustomUpdatePreloadManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CUSTOMUPDATEPRELOADMANAGER_OFFSET))(this);
		}

		::System::Void SetLoadingConfigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETLOADINGCONFIGDATA_OFFSET))(this);
		}

		::System::Void ReportLoadingTryFailCount(::RPG::Client::IAssetOperation* _, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYFAILCOUNT_OFFSET))(this, _, args);
		}

		::System::Void ReportLoadingTryResult(::RPG::Client::IAssetOperation* _, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYRESULT_OFFSET))(this, _, args);
		}

		::System::Void ReportLoadingADVInitEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGADVINITEND_OFFSET))(this);
		}

		::System::Void ReportScreenStuckBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTSCREENSTUCKBEGIN_OFFSET))(this);
		}

		::System::Void ReportEffectTransitionBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONBEGIN_OFFSET))(this);
		}

		::System::Void ReportEffectTransitionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONEND_OFFSET))(this);
		}

		::System::Void RecordPerformanceID(::System::UInt32 performanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_RECORDPERFORMANCEID_OFFSET))(this, performanceID);
		}

		::System::Void ReportLoadingBegin(::RPG::Client::LoadingManager_LoadingType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGBEGIN_OFFSET))(this, type);
		}

		::System::Void ReportLoadingData(::RPG::Client::LoadingManager_VerifyLoadingType verifyLoadingType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_VerifyLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGDATA_OFFSET))(this, verifyLoadingType);
		}

		::System::Boolean _IsLoadingTypeReportMatch(::RPG::Client::LoadingManager_LoadingType startLoadingType, ::RPG::Client::LoadingManager_VerifyLoadingType verifyLoadingType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType, ::RPG::Client::LoadingManager_VerifyLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ISLOADINGTYPEREPORTMATCH_OFFSET))(this, startLoadingType, verifyLoadingType);
		}

		::System::Single _GetMaxLoadingTime(::RPG::Client::LoadingManager_LoadingType type)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__GETMAXLOADINGTIME_OFFSET))(this, type);
		}

		::System::Single _ConvertTimeToSecond(::System::UInt64 ms)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CONVERTTIMETOSECOND_OFFSET))(this, ms);
		}

		::System::Void _TryAddToWatch(::Class_1_F59C8DF29FF9694F* workDefinition)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TRYADDTOWATCH_OFFSET))(this, workDefinition);
		}

		::System::Void _RefreshWorkDefCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__REFRESHWORKDEFCOUNT_OFFSET))(this);
		}

		::System::Void _OnQueueNewWork(::Class_1_F59C8DF29FF9694F* workDefinition)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONQUEUENEWWORK_OFFSET))(this, workDefinition);
		}

		::System::Void _UpdateFinishProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__UPDATEFINISHPROGRESS_OFFSET))(this);
		}

		::System::Void _OnWorkFinish(::Class_1_F59C8DF29FF9694F* workDefinition, ::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONWORKFINISH_OFFSET))(this, workDefinition, success);
		}

		::System::Single _ComputeFinishedProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__COMPUTEFINISHEDPROGRESS_OFFSET))(this);
		}

		::System::Single _ComputeNextProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__COMPUTENEXTPROGRESS_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_PROGRESS_OFFSET))(this);
		}

		::System::Int32 get_TotalWorkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_TOTALWORKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FinishedWorkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_FINISHEDWORKCOUNT_OFFSET))(this);
		}

		::System::Boolean get_EnableCustomPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_ENABLECUSTOMPRELOAD_OFFSET))(this);
		}

		::System::Void set_EnableCustomPreload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SET_ENABLECUSTOMPRELOAD_OFFSET))(this, value);
		}

		::System::Boolean get_SkipSceneItemFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_SKIPSCENEITEMFADING_OFFSET))(this);
		}

		::System::Void set_SkipSceneItemFading(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SET_SKIPSCENEITEMFADING_OFFSET))(this, value);
		}
	};
}
