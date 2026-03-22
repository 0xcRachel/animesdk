#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnumEnterPerformanceResult.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_3.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_490;
class Class_1_02986BBFC3ACF3B3;
class Class_1_0986CB4748F2A6F6;
class Class_1_128F506D49FEB31A;
class Class_1_2544F28605D9B855;
class Class_1_2C65363A06719ECB;
class Class_1_3CE489337C8C379C;
class Class_1_4B703F2764047929;
class Class_1_4C418720A5B079EE;
class Class_1_525CE8923EADB3E0;
class Class_1_5F51D4049EA87B7B;
class Class_1_83665B095F1535B5_20;
class Class_1_8DAF14EE9899C886;
class Class_1_CE1C5EC8A2CEE1D3;
class Class_1_D16B8A42F6BB9A9F;
class Class_1_DC7CAF0A5A38BD05;
class Class_1_E6906FDE536EFCD6;
class Class_1_F01FD2FEBF10FE40_1;
class Class_1_F5CD37498DF18F5D;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class CutsceneCacheInitParams; }
namespace RPG::Client { class DebateManager; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace RPG::GameCore { class PerformanceBgImagePanelContainerConfig; }
namespace RPG::GameCore { class PerformanceCommonConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPerformance; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERFORMANCEMANAGER_ADDPERFORMANCEBYINITIALIZETASK_OFFSET UNITYSDK_OFFSET(0x9A5F680)
#define RPG_CLIENT_PERFORMANCEMANAGER_ADDPERFORMANCEBYTRIGGERTASK_OFFSET UNITYSDK_OFFSET(0x9A5F0F0)
#define RPG_CLIENT_PERFORMANCEMANAGER_ADDTIMELINEID_OFFSET UNITYSDK_OFFSET(0x9A60740)
#define RPG_CLIENT_PERFORMANCEMANAGER_BLOCKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9A5FF20)
#define RPG_CLIENT_PERFORMANCEMANAGER_CACHEDATA_OFFSET UNITYSDK_OFFSET(0x9A5E400)
#define RPG_CLIENT_PERFORMANCEMANAGER_CACHENEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0x9A5CC10)
#define RPG_CLIENT_PERFORMANCEMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET UNITYSDK_OFFSET(0x9A5E300)
#define RPG_CLIENT_PERFORMANCEMANAGER_CLEARSPECIALVISIONONEND_OFFSET UNITYSDK_OFFSET(0x9A61080)
#define RPG_CLIENT_PERFORMANCEMANAGER_CLEARSPECIALVISIONONSTART_OFFSET UNITYSDK_OFFSET(0x9A60FF0)
#define RPG_CLIENT_PERFORMANCEMANAGER_CLOSESPECIALVISION_OFFSET UNITYSDK_OFFSET(0x9A60F60)
#define RPG_CLIENT_PERFORMANCEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A5D100)
#define RPG_CLIENT_PERFORMANCEMANAGER_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9A5E240)
#define RPG_CLIENT_PERFORMANCEMANAGER_ENTERGACHA_OFFSET UNITYSDK_OFFSET(0x9A5FF90)
#define RPG_CLIENT_PERFORMANCEMANAGER_ENTERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9A5E6D0)
#define RPG_CLIENT_PERFORMANCEMANAGER_EXITGACHA_OFFSET UNITYSDK_OFFSET(0x9A5FFE0)
#define RPG_CLIENT_PERFORMANCEMANAGER_EXITPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9A5EBB0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETBUBBLENOTIFYPARAM_OFFSET UNITYSDK_OFFSET(0x9A61220)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETCONVINCEMANAGER_OFFSET UNITYSDK_OFFSET(0x9A60390)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETDEBATEMANAGER_OFFSET UNITYSDK_OFFSET(0x9A60350)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCEADVENTITYVISIBLEMANAGER_OFFSET UNITYSDK_OFFSET(0x9A60270)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECAMERAMANAGER_OFFSET UNITYSDK_OFFSET(0x9A60130)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECRPCAMERAMANAGER_OFFSET UNITYSDK_OFFSET(0x9A60170)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCEEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x9A600E0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCELOADER_OFFSET UNITYSDK_OFFSET(0x9A603D0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESHADOWMANAGER_OFFSET UNITYSDK_OFFSET(0x9A601F0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESTENCILMANAGER_OFFSET UNITYSDK_OFFSET(0x9A60230)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESTREAMINGMANAGER_OFFSET UNITYSDK_OFFSET(0x9A601B0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETSKIPPACKMANAGER_OFFSET UNITYSDK_OFFSET(0x9A602C0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETSTORYPLAYERSWITCHER_OFFSET UNITYSDK_OFFSET(0x9A60300)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_BGIMAGEPANELCONTAINERCONFIG_OFFSET UNITYSDK_OFFSET(0x9A61DC0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9A61DA0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEGUID_OFFSET UNITYSDK_OFFSET(0x9A621C0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDBLACKTEXT_OFFSET UNITYSDK_OFFSET(0x9A62020)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDBLACK_OFFSET UNITYSDK_OFFSET(0x9A61FC0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDCRACK_OFFSET UNITYSDK_OFFSET(0x9A62080)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x9A61E60)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEISCHANGEPLAYER_OFFSET UNITYSDK_OFFSET(0x9A61EE0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEOWNERGROUPID_OFFSET UNITYSDK_OFFSET(0x9A620E0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCERESULTVALUE_OFFSET UNITYSDK_OFFSET(0x9A61F60)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0x9A60B20)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_HASWAITINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A61E00)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_ISCURRENT_C_DS_OFFSET UNITYSDK_OFFSET(0x9A62160)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_ISINGACHA_OFFSET UNITYSDK_OFFSET(0x9A61D80)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9A61D60)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_ISWAITINGCLEARAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x9A61DE0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_NEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0x9A62230)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_NEWSKIPEXCLUDEIDS_OFFSET UNITYSDK_OFFSET(0x9A62250)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_RESERVEPARAMETERSCONFIG_OFFSET UNITYSDK_OFFSET(0x9A61D40)
#define RPG_CLIENT_PERFORMANCEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A5E0B0)
#define RPG_CLIENT_PERFORMANCEMANAGER_NEEDSHOWTALKUI_OFFSET UNITYSDK_OFFSET(0x9A5E3B0)
#define RPG_CLIENT_PERFORMANCEMANAGER_ONPLAYSIMPLETALKBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x9A605A0)
#define RPG_CLIENT_PERFORMANCEMANAGER_ON_PERFORMANCETIMESCALELOCKTARGET_LOCK_OFFSET UNITYSDK_OFFSET(0x9A60810)
#define RPG_CLIENT_PERFORMANCEMANAGER_ON_PERFORMANCETIMESCALELOCKTARGET_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9A60BA0)
#define RPG_CLIENT_PERFORMANCEMANAGER_OPENSPECIALVISION_OFFSET UNITYSDK_OFFSET(0x9A60DF0)
#define RPG_CLIENT_PERFORMANCEMANAGER_POSTAUDIOINCURRENTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9A60410)
#define RPG_CLIENT_PERFORMANCEMANAGER_PRELOADCUTSCENE_OFFSET UNITYSDK_OFFSET(0x9A60470)
#define RPG_CLIENT_PERFORMANCEMANAGER_RELEASECUTSCENEPRELOAD_OFFSET UNITYSDK_OFFSET(0x9A60530)
#define RPG_CLIENT_PERFORMANCEMANAGER_REMOVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A5F9C0)
#define RPG_CLIENT_PERFORMANCEMANAGER_REMOVETIMELINEID_OFFSET UNITYSDK_OFFSET(0x9A607B0)
#define RPG_CLIENT_PERFORMANCEMANAGER_SETSIMPLETALKTARGETBEHAVIORMANAGERENABLE_OFFSET UNITYSDK_OFFSET(0x9A60050)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_BGIMAGEPANELCONTAINERCONFIG_OFFSET UNITYSDK_OFFSET(0x9A61DD0)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9A61DB0)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_ISINGACHA_OFFSET UNITYSDK_OFFSET(0x9A61D90)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9A61D70)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_ISWAITINGCLEARAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x9A61DF0)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_NEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0x9A62240)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_NEWSKIPEXCLUDEIDS_OFFSET UNITYSDK_OFFSET(0x9A62260)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_RESERVEPARAMETERSCONFIG_OFFSET UNITYSDK_OFFSET(0x9A61D50)
#define RPG_CLIENT_PERFORMANCEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x9A5DB30)
#define RPG_CLIENT_PERFORMANCEMANAGER_USENEWSKIP_OFFSET UNITYSDK_OFFSET(0x9A611B0)
#define RPG_CLIENT_PERFORMANCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A62270)
#define RPG_CLIENT_PERFORMANCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A5C3B0)
#define RPG_CLIENT_PERFORMANCEMANAGER__DISPOSEPAUSETOAST_OFFSET UNITYSDK_OFFSET(0x9A5D970)
#define RPG_CLIENT_PERFORMANCEMANAGER__GETCURRENTTIMELINETIME_OFFSET UNITYSDK_OFFSET(0x9A605F0)
#define RPG_CLIENT_PERFORMANCEMANAGER__LOADCONFIG_OFFSET UNITYSDK_OFFSET(0x9A5CFF0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x9A61630)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYHIDEALLDSACTORSEXCEPTINLIST_OFFSET UNITYSDK_OFFSET(0x9A61690)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEENDTRANSFERCOLOR_OFFSET UNITYSDK_OFFSET(0x9A61930)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEENDTRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0x9A61990)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDCRACK_OFFSET UNITYSDK_OFFSET(0x9A61870)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDSCREENCUT_OFFSET UNITYSDK_OFFSET(0x9A618D0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPERFORMANCEACTORSFOLLOWPLATFORMMOVE_OFFSET UNITYSDK_OFFSET(0x9A61750)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPERFORMANCEDYNAMICLOADCHARACTER_OFFSET UNITYSDK_OFFSET(0x9A616F0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPLAYERTRANSFERTOFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x9A61B10)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPLAYSCREENTRANSFERFINISH_OFFSET UNITYSDK_OFFSET(0x9A61A50)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSCREENTRANSFERTEXTDISABLE_OFFSET UNITYSDK_OFFSET(0x9A61AB0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCEENDTEXT_OFFSET UNITYSDK_OFFSET(0x9A61810)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCEEXTENDENDBLACK_OFFSET UNITYSDK_OFFSET(0x9A617B0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCERESULT_OFFSET UNITYSDK_OFFSET(0x9A619F0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSHOWTALKUIFINISH_OFFSET UNITYSDK_OFFSET(0x9A61500)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONPRELOADCUTSCENE_OFFSET UNITYSDK_OFFSET(0x9A61480)
#define RPG_CLIENT_PERFORMANCEMANAGER__PAUSETOAST_OFFSET UNITYSDK_OFFSET(0x9A5E9F0)
#define RPG_CLIENT_PERFORMANCEMANAGER__PERFORMANCESTATEEND_OFFSET UNITYSDK_OFFSET(0x9A5EEF0)
#define RPG_CLIENT_PERFORMANCEMANAGER__PERFORMANCESTATESTART_OFFSET UNITYSDK_OFFSET(0x9A5EA70)
#define RPG_CLIENT_PERFORMANCEMANAGER__REGIST_OFFSET UNITYSDK_OFFSET(0x9A5CC80)
#define RPG_CLIENT_PERFORMANCEMANAGER__RESETTIMELINEID_OFFSET UNITYSDK_OFFSET(0x9A5EB10)
#define RPG_CLIENT_PERFORMANCEMANAGER__SENDNOTIFYTOINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A61560)
#define RPG_CLIENT_PERFORMANCEMANAGER__SENDPAUSETOAST_OFFSET UNITYSDK_OFFSET(0x9A61CA0)
#define RPG_CLIENT_PERFORMANCEMANAGER__SETCOLLISIONANDDITHERENABLE_OFFSET UNITYSDK_OFFSET(0x9A5E910)
#define RPG_CLIENT_PERFORMANCEMANAGER__STOPPLAYINGTIMELINE_OFFSET UNITYSDK_OFFSET(0x9A5EF90)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKCACHENEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0x9A5DC90)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKCURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A61B70)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKINSTANCES_OFFSET UNITYSDK_OFFSET(0x9A5DE90)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKNOWAITINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A61BF0)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKPAUSETOAST_OFFSET UNITYSDK_OFFSET(0x9A5DF40)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKWAITINGINSTANCES_OFFSET UNITYSDK_OFFSET(0x9A5F280)
#define RPG_CLIENT_PERFORMANCEMANAGER__UNREGIST_OFFSET UNITYSDK_OFFSET(0x9A5D600)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceManager_TypeDefinitionIndex = 48111;

	class PerformanceManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PERFORMANCE_PAGE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceManager_TypeDefinitionIndex)->GetStaticField(0x3C140);
		}
		static ::System::Boolean* StaticGet__HasInitPrefsTalkAuto()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceManager_TypeDefinitionIndex)->GetStaticField(0xE690);
		}
		::Class_1_4C418720A5B079EE* _ConvinceManager; // 0x10
		::Class_1_128F506D49FEB31A* _SkipPackManager; // 0x18
		::Class_1_D16B8A42F6BB9A9F* _CurrentInstance; // 0x20
		::Class_1_DC7CAF0A5A38BD05* _PerformanceLoader; // 0x28
		::Class_1_02986BBFC3ACF3B3* _StreamingManager; // 0x30
		::RPG::Client::Billboard::BillboardNotifyParam* _BubbleNotifyParam; // 0x38
		::Class_1_E6906FDE536EFCD6* _StencilManager; // 0x40
		::Class_1_83665B095F1535B5_20* _ReserveParametersConfig_k__BackingField; // 0x48
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CacheNewSkipExcludeIds; // 0x50
		::Class_1_2C65363A06719ECB* _CameraManager; // 0x58
		::Il2CppArray<::System::String*>* PERFORMANCE_IGNORE_PAGE_NAMES; // 0x60
		::Class_1_F5CD37498DF18F5D* _CRPCameraManager; // 0x68
		::Class_1_2544F28605D9B855* _ShadowManager; // 0x70
		::RPG::Client::DebateManager* _DebateManager; // 0x78
		::RPG::GameCore::PerformanceBgImagePanelContainerConfig* _BgImagePanelContainerConfig_k__BackingField; // 0x80
		::Class_1_CE1C5EC8A2CEE1D3* _TargetBehaviorManager; // 0x88
		::Class_1_4B703F2764047929* _EffectManager; // 0x90
		::System::Collections::Generic::List_1<::Class_1_D16B8A42F6BB9A9F*>* _NoWaitInstances; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IDisposable*>* _runtimeCaches; // 0xA0
		::Class_1_0986CB4748F2A6F6* _EnterChecker; // 0xA8
		::Class_1_8DAF14EE9899C886* _SpecialVisionEffect; // 0xB0
		::RPG::Client::AdventurePhase* _adventurePhase; // 0xB8
		::System::Collections::Generic::List_1<::Class_1_D16B8A42F6BB9A9F*>* _WaitingInstances; // 0xC0
		::Class_1_F01FD2FEBF10FE40_1* _AdvEntityVisibleManager; // 0xC8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _NewSkipExcludeIds_k__BackingField; // 0xD0
		::RPG::GameCore::PerformanceCommonConfig* _Config_k__BackingField; // 0xD8
		::System::Collections::Generic::HashSet_1<::System::Int32>* _PlayingTimelineID; // 0xE0
		::Class_1_525CE8923EADB3E0* _StoryPlayerSwitcher; // 0xE8
		::System::Int32 _CurrentTimelineID; // 0xF0
		::System::Int32 _CacheCmdWaitTick; // 0xF4
		::RPG::GameCore::ELevelPerformanceType _PauseLockPerformanceType; // 0xF8
		::System::Boolean _IsWaitingClearAudioState_k__BackingField; // 0xFC
		::System::Nullable_1<::System::Boolean> _CacheCmdPauseToast; // 0xFD
		::System::Boolean _IsPauseLock; // 0xFF
		::System::Boolean _NewPerformanceSkip_k__BackingField; // 0x100
		::System::Double _PlaySimpleTalkStartTime; // 0x108
		::System::Nullable_1<::System::Boolean> _CacheNewPerformanceSkip; // 0x110
		::System::Boolean _IsInGacha_k__BackingField; // 0x112
		::System::Boolean _IsInPerformance_k__BackingField; // 0x113

		::System::Void _ctor(::RPG::Client::AdventurePhase* adventurePhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__CTOR_OFFSET))(this, adventurePhase);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void EndOfLateTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ENDOFLATETICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void CheckInPerformanceShowUI(::System::String* UIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET))(this, UIName);
		}

		::System::Boolean NeedShowTalkUI(::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_NEEDSHOWTALKUI_OFFSET))(this, performanceType);
		}

		::System::Void CacheData(::Class_0_16E4307DCC419505_490* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_490*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CACHEDATA_OFFSET))(this, obj);
		}

		::System::Void EnterPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ENTERPERFORMANCE_OFFSET))(this);
		}

		::System::Void ExitPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_EXITPERFORMANCE_OFFSET))(this);
		}

		::System::Void _PerformanceStateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__PERFORMANCESTATESTART_OFFSET))(this);
		}

		::System::Void _PerformanceStateEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__PERFORMANCESTATEEND_OFFSET))(this);
		}

		::System::Guid AddPerformanceByTriggerTask(::RPG::GameCore::TaskContext* triggerTaskContext, ::RPG::GameCore::TriggerPerformance* triggerConfig, ::System::Action_1<::Struct_2_FEFADCB82FEB841E_3>* onEnd, ::System::Action* onFail, ::Class_1_5F51D4049EA87B7B* nextTask)
		{
			return ((::System::Guid(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPerformance*, ::System::Action_1<::Struct_2_FEFADCB82FEB841E_3>*, ::System::Action*, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ADDPERFORMANCEBYTRIGGERTASK_OFFSET))(this, triggerTaskContext, triggerConfig, onEnd, onFail, nextTask);
		}

		::System::Guid AddPerformanceByInitializeTask(::RPG::GameCore::TaskContext* taskContext, ::RPG::GameCore::LevelPerformanceInitialize* initializeConfig, ::System::Action_1<::System::Boolean>* onEnd)
		{
			return ((::System::Guid(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelPerformanceInitialize*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ADDPERFORMANCEBYINITIALIZETASK_OFFSET))(this, taskContext, initializeConfig, onEnd);
		}

		::System::Void RemoveInstance(::System::Guid guid, ::System::Boolean fromTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_REMOVEINSTANCE_OFFSET))(this, guid, fromTrigger);
		}

		::System::Void BlockPerformance(::RPG::Client::EnumEnterPerformanceResult result, ::System::Boolean block)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_BLOCKPERFORMANCE_OFFSET))(this, result, block);
		}

		::System::Void EnterGacha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ENTERGACHA_OFFSET))(this);
		}

		::System::Void ExitGacha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_EXITGACHA_OFFSET))(this);
		}

		::System::Void SetSimpleTalkTargetBehaviorManagerEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SETSIMPLETALKTARGETBEHAVIORMANAGERENABLE_OFFSET))(this, enable);
		}

		::Class_1_4B703F2764047929* GetPerformanceEffectManager()
		{
			return ((::Class_1_4B703F2764047929*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCEEFFECTMANAGER_OFFSET))(this);
		}

		::Class_1_2C65363A06719ECB* GetPerformanceCameraManager()
		{
			return ((::Class_1_2C65363A06719ECB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECAMERAMANAGER_OFFSET))(this);
		}

		::Class_1_F5CD37498DF18F5D* GetPerformanceCRPCameraManager()
		{
			return ((::Class_1_F5CD37498DF18F5D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECRPCAMERAMANAGER_OFFSET))(this);
		}

		::Class_1_02986BBFC3ACF3B3* GetPerformanceStreamingManager()
		{
			return ((::Class_1_02986BBFC3ACF3B3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESTREAMINGMANAGER_OFFSET))(this);
		}

		::Class_1_2544F28605D9B855* GetPerformanceShadowManager()
		{
			return ((::Class_1_2544F28605D9B855*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESHADOWMANAGER_OFFSET))(this);
		}

		::Class_1_E6906FDE536EFCD6* GetPerformanceStencilManager()
		{
			return ((::Class_1_E6906FDE536EFCD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESTENCILMANAGER_OFFSET))(this);
		}

		::Class_1_F01FD2FEBF10FE40_1* GetPerformanceAdvEntityVisibleManager()
		{
			return ((::Class_1_F01FD2FEBF10FE40_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCEADVENTITYVISIBLEMANAGER_OFFSET))(this);
		}

		::Class_1_128F506D49FEB31A* GetSkipPackManager()
		{
			return ((::Class_1_128F506D49FEB31A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETSKIPPACKMANAGER_OFFSET))(this);
		}

		::Class_1_525CE8923EADB3E0* GetStoryPlayerSwitcher()
		{
			return ((::Class_1_525CE8923EADB3E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETSTORYPLAYERSWITCHER_OFFSET))(this);
		}

		::RPG::Client::DebateManager* GetDebateManager()
		{
			return ((::RPG::Client::DebateManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETDEBATEMANAGER_OFFSET))(this);
		}

		::Class_1_4C418720A5B079EE* GetConvinceManager()
		{
			return ((::Class_1_4C418720A5B079EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETCONVINCEMANAGER_OFFSET))(this);
		}

		::Class_1_DC7CAF0A5A38BD05* GetPerformanceLoader()
		{
			return ((::Class_1_DC7CAF0A5A38BD05*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCELOADER_OFFSET))(this);
		}

		::System::Void PostAudioInCurrentPerformance(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_POSTAUDIOINCURRENTPERFORMANCE_OFFSET))(this, eventName);
		}

		::Class_1_3CE489337C8C379C* PreLoadCutscene(::RPG::Client::CutsceneCacheInitParams* initParams)
		{
			return ((::Class_1_3CE489337C8C379C*(*)(::PVOID, ::RPG::Client::CutsceneCacheInitParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_PRELOADCUTSCENE_OFFSET))(this, initParams);
		}

		::System::Void ReleaseCutscenePreload(::System::String* cutsceneName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_RELEASECUTSCENEPRELOAD_OFFSET))(this, cutsceneName);
		}

		::System::Void OnPlaySimpleTalkBehaviourPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ONPLAYSIMPLETALKBEHAVIOURPLAY_OFFSET))(this);
		}

		::System::Void AddTimelineID(::System::Int32 timelineID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ADDTIMELINEID_OFFSET))(this, timelineID);
		}

		::System::Void RemoveTimelineID(::System::Int32 timelineID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_REMOVETIMELINEID_OFFSET))(this, timelineID);
		}

		::System::Void _StopPlayingTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__STOPPLAYINGTIMELINE_OFFSET))(this);
		}

		::System::Void _ResetTimelineID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__RESETTIMELINEID_OFFSET))(this);
		}

		::System::Void On_PerformanceTimeScaleLockTarget_Lock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ON_PERFORMANCETIMESCALELOCKTARGET_LOCK_OFFSET))(this);
		}

		::System::Void On_PerformanceTimeScaleLockTarget_Unlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ON_PERFORMANCETIMESCALELOCKTARGET_UNLOCK_OFFSET))(this);
		}

		::System::Void OpenSpecialVision(::System::String* visionEffectType, ::System::String* cameraEffectType, ::System::Boolean skipFade)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_OPENSPECIALVISION_OFFSET))(this, visionEffectType, cameraEffectType, skipFade);
		}

		::System::Void CloseSpecialVision(::System::Boolean skipFade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CLOSESPECIALVISION_OFFSET))(this, skipFade);
		}

		::System::Void ClearSpecialVisionOnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CLEARSPECIALVISIONONSTART_OFFSET))(this);
		}

		::System::Void ClearSpecialVisionOnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CLEARSPECIALVISIONONEND_OFFSET))(this);
		}

		::System::Boolean UseNewSkip(::System::UInt32 performanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_USENEWSKIP_OFFSET))(this, performanceID);
		}

		::System::Void CacheNewPerformanceSkip(::System::Boolean useNewSkip, ::System::Collections::Generic::HashSet_1<::System::UInt32>* newSkipExcludeIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CACHENEWPERFORMANCESKIP_OFFSET))(this, useNewSkip, newSkipExcludeIds);
		}

		::RPG::Client::Billboard::BillboardNotifyParam* GetBubbleNotifyParam(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETBUBBLENOTIFYPARAM_OFFSET))(this, entity);
		}

		::System::Void _Regist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__REGIST_OFFSET))(this);
		}

		::System::Void _Unregist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__UNREGIST_OFFSET))(this);
		}

		::System::Void _OnPreLoadCutscene(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONPRELOADCUTSCENE_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyShowTalkUIFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSHOWTALKUIFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyAdventurePhaseEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYADVENTUREPHASEEND_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyHideAllDSActorsExceptInList(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYHIDEALLDSACTORSEXCEPTINLIST_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyPerformanceDynamicLoadCharacter(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPERFORMANCEDYNAMICLOADCHARACTER_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyPerformanceActorsFollowPlatformMove(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPERFORMANCEACTORSFOLLOWPLATFORMMOVE_OFFSET))(this, arg);
		}

		::System::Void _OnNotifySetPerformanceExtendEndBlack(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCEEXTENDENDBLACK_OFFSET))(this, arg);
		}

		::System::Void _OnNotifySetPerformanceEndText(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCEENDTEXT_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyOverridePerformanceEndCrack(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDCRACK_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyOverridePerformanceEndScreenCut(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDSCREENCUT_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyOverrideEndTransferColor(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEENDTRANSFERCOLOR_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyOverrideEndTransferType(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEENDTRANSFERTYPE_OFFSET))(this, arg);
		}

		::System::Void _OnNotifySetPerformanceResult(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCERESULT_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyPlayScreenTransferFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPLAYSCREENTRANSFERFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyScreenTransferTextDisable(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSCREENTRANSFERTEXTDISABLE_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyPlayerTransferToFakeAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPLAYERTRANSFERTOFAKEAVATAR_OFFSET))(this, arg);
		}

		::System::Void _SendNotifyToInstance(::RPG::Client::NotifyType notifyType, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__SENDNOTIFYTOINSTANCE_OFFSET))(this, notifyType, arg);
		}

		::System::Void _LoadConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__LOADCONFIG_OFFSET))(this);
		}

		::System::Void _SetCollisionAndDitherEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__SETCOLLISIONANDDITHERENABLE_OFFSET))(this, enable);
		}

		::System::Void _TickInstances(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKINSTANCES_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TickWaitingInstances(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKWAITINGINSTANCES_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TickCurrentInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKCURRENTINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TickNoWaitInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKNOWAITINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Double _GetCurrentTimelineTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__GETCURRENTTIMELINETIME_OFFSET))(this);
		}

		::System::Void _TickCacheNewPerformanceSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKCACHENEWPERFORMANCESKIP_OFFSET))(this);
		}

		::System::Void _PauseToast(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__PAUSETOAST_OFFSET))(this, pause);
		}

		::System::Void _TickPauseToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKPAUSETOAST_OFFSET))(this);
		}

		::System::Void _DisposePauseToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__DISPOSEPAUSETOAST_OFFSET))(this);
		}

		::System::Void _SendPauseToast(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__SENDPAUSETOAST_OFFSET))(this, pause);
		}

		::Class_1_83665B095F1535B5_20* get_ReserveParametersConfig()
		{
			return ((::Class_1_83665B095F1535B5_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_RESERVEPARAMETERSCONFIG_OFFSET))(this);
		}

		::System::Void set_ReserveParametersConfig(::Class_1_83665B095F1535B5_20* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_RESERVEPARAMETERSCONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_IsInPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_ISINPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_IsInPerformance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_ISINPERFORMANCE_OFFSET))(this, value);
		}

		::System::Boolean get_IsInGacha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_ISINGACHA_OFFSET))(this);
		}

		::System::Void set_IsInGacha(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_ISINGACHA_OFFSET))(this, value);
		}

		::RPG::GameCore::PerformanceCommonConfig* get_Config()
		{
			return ((::RPG::GameCore::PerformanceCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::PerformanceCommonConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceCommonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_CONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::PerformanceBgImagePanelContainerConfig* get_BgImagePanelContainerConfig()
		{
			return ((::RPG::GameCore::PerformanceBgImagePanelContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_BGIMAGEPANELCONTAINERCONFIG_OFFSET))(this);
		}

		::System::Void set_BgImagePanelContainerConfig(::RPG::GameCore::PerformanceBgImagePanelContainerConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceBgImagePanelContainerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_BGIMAGEPANELCONTAINERCONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_IsWaitingClearAudioState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_ISWAITINGCLEARAUDIOSTATE_OFFSET))(this);
		}

		::System::Void set_IsWaitingClearAudioState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_ISWAITINGCLEARAUDIOSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_HasWaitingInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_HASWAITINGINSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::ELevelPerformanceType get_CurrentPerformanceType()
		{
			return ((::RPG::GameCore::ELevelPerformanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCETYPE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEID_OFFSET))(this);
		}

		::System::Boolean get_CurrentPerformanceIsChangePlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEISCHANGEPLAYER_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPerformanceResultValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCERESULTVALUE_OFFSET))(this);
		}

		::System::Boolean get_CurrentPerformanceHasEndBlack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDBLACK_OFFSET))(this);
		}

		::System::Boolean get_CurrentPerformanceHasEndBlackText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDBLACKTEXT_OFFSET))(this);
		}

		::System::Boolean get_CurrentPerformanceHasEndCrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDCRACK_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPerformanceOwnerGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEOWNERGROUPID_OFFSET))(this);
		}

		::System::Boolean get_IsCurrent_C_DS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_ISCURRENT_C_DS_OFFSET))(this);
		}

		::System::Guid get_CurrentPerformanceGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEGUID_OFFSET))(this);
		}

		::System::Boolean get_NewPerformanceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_NEWPERFORMANCESKIP_OFFSET))(this);
		}

		::System::Void set_NewPerformanceSkip(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_NEWPERFORMANCESKIP_OFFSET))(this, value);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_NewSkipExcludeIds()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_NEWSKIPEXCLUDEIDS_OFFSET))(this);
		}

		::System::Void set_NewSkipExcludeIds(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_NEWSKIPEXCLUDEIDS_OFFSET))(this, value);
		}
	};
}
