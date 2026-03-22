#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompetitiveGamePlaySystemPriority.h"
#include "unitysdk/RPG/Client/PlayerIgnoreTimeRewindHitReason.h"
#include "unitysdk/RPG/Client/TimeRewindControlManagerActiveReason.h"
#include "unitysdk/RPG/Client/TimeRewindControlManager_ExitControlModeStep.h"
#include "unitysdk/RPG/Client/TimeRewindGlobalUnselectableReason.h"
#include "unitysdk/RPG/GameCore/BindTimeRewindMultiControlType.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/ForbidSelectTimeRewindReason.h"
#include "unitysdk/RPG/GameCore/TimeRewindEntityControlType.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_347;
class Class_1_09216AC83FE49B91;
class Class_1_22DFC3839E157DF2;
class Class_1_4A90D78D94DB1347;
class Class_1_5863CECBF1A58D06;
class Class_1_89CF3D7005785E86;
class Class_2_7E6F98A8FA0DAC16;
class Class_3_BCCE950C2E8DF1F0;
namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEntityPreload; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEntityPreloadEffItem; }
namespace RPG::Client { class TimeRewindItemSingleClipData; }
namespace RPG::Client { class TimelineItemSingleData; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client { template <typename T> class TimeRewindObjLitePool_1; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OpenTimeRewindSnapPageParam; }
namespace RPG::GameCore { class ToastPile; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDREWINDBTNCD_OFFSET UNITYSDK_OFFSET(0xA093C90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDTIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xA091FF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CALCTIMEREWINDTARGETSELECTABLE_OFFSET UNITYSDK_OFFSET(0xA0929A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CLOSETIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xA08EC30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xA093BF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECTIVETIMEREWINDMANAGER_OFFSET UNITYSDK_OFFSET(0xA08E610)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0905E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA0917F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA08F430)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_FIREBACKWARDEFFASYNC_OFFSET UNITYSDK_OFFSET(0xA08A670)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETCOMPETITIVEPRIORITY_OFFSET UNITYSDK_OFFSET(0xA090D60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETENTITYTIMELINETRACKINFO_OFFSET UNITYSDK_OFFSET(0xA08AF80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETTIMEREWINDVIEWMAT_OFFSET UNITYSDK_OFFSET(0xA08BE70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_CURRENTSELECTTARGETTIMEREWINDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA094540)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_IGNOREHITPLAYER_OFFSET UNITYSDK_OFFSET(0xA094560)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA094550)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INPERFORMANCEMODE_OFFSET UNITYSDK_OFFSET(0xA08FD20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_LOCKPERFORMANCETARGET_OFFSET UNITYSDK_OFFSET(0xA08FD10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_MANAGERACTIVE_OFFSET UNITYSDK_OFFSET(0xA0918D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_TIMEREWINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xA094530)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_INCREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xA093B50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ISHITPLAYERSEQEXECUTION_OFFSET UNITYSDK_OFFSET(0xA0918E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADOVERRIDECLIPASSET_OFFSET UNITYSDK_OFFSET(0xA08B2A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADSINGLECLIPINFOASSET_OFFSET UNITYSDK_OFFSET(0xA08B470)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADTIMEREWINDENTITYANIMEVENTCONFIGS_OFFSET UNITYSDK_OFFSET(0xA08B700)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONENTERTOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xA090CC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONLEAVETOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xA090D10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONTIMEREWINDENTITYCONTROLOVERTIME_OFFSET UNITYSDK_OFFSET(0xA093E40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_PRELOADTIMEREWINDENTITYEFF_OFFSET UNITYSDK_OFFSET(0xA089160)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xA0925A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xA0915C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_RELEASETIMEREWINDENTITYPRELOADEFF_OFFSET UNITYSDK_OFFSET(0xA089DD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REMOVETIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xA091D30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETBACKWARDEFFFINISH_OFFSET UNITYSDK_OFFSET(0xA08A9C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETENABLETIMEREWINDSELECT_OFFSET UNITYSDK_OFFSET(0xA093D40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALOVERRIDESPECIALCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA092A10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0xA08E3F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETPLAYERIGNORETIMEREWINDHIT_OFFSET UNITYSDK_OFFSET(0xA093DD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA08EC90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xA08EB40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDSNAPPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA08F160)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xA090DB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xA091970)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYONHITPLAYER_OFFSET UNITYSDK_OFFSET(0xA091C90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYATTACHSWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xA092710)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYCONTROLTIMEREWINDENTITYBYTASK_OFFSET UNITYSDK_OFFSET(0xA08D880)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYFINISHQUEST_OFFSET UNITYSDK_OFFSET(0xA08FD30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYGETBACKWARDPARTICLESINFOSO_OFFSET UNITYSDK_OFFSET(0xA08ACD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYREMOVESWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xA0928E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYUNSELECTCURRENTTARGET_OFFSET UNITYSDK_OFFSET(0xA091700)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_UNREGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xA091670)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ADDPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xA089950)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__BTNINCD_OFFSET UNITYSDK_OFFSET(0xA093CF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CACHEBACKWARDEFFSOASSETASYNC_OFFSET UNITYSDK_OFFSET(0xA089F40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKCANCLICKREWINDBUTTON_OFFSET UNITYSDK_OFFSET(0xA093F20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKSPECIALCONTROLTYPECANCONTROL_OFFSET UNITYSDK_OFFSET(0xA094140)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA090110)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xA093110)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISPOSETIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA08F710)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DOINIT_OFFSET UNITYSDK_OFFSET(0xA092250)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xA092BC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLESWITCHCAMERACONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA092B00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXECUTEHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xA0919E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP1_OFFSET UNITYSDK_OFFSET(0xA093AD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP2_OFFSET UNITYSDK_OFFSET(0xA093550)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__FIRESTARTCONTROLMODEEFF_OFFSET UNITYSDK_OFFSET(0xA093310)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xA08E060)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITQUEST_OFFSET UNITYSDK_OFFSET(0xA08FEC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONGROUPLOADEND_OFFSET UNITYSDK_OFFSET(0xA090B80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONOPENMOBILEPHONE_OFFSET UNITYSDK_OFFSET(0xA08E9F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONPERFORMANCEREWINDCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA08FBA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTEND_OFFSET UNITYSDK_OFFSET(0xA08E550)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTSTART_OFFSET UNITYSDK_OFFSET(0xA08E390)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xA08E5B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWREALAVATAR_OFFSET UNITYSDK_OFFSET(0xA08E730)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET UNITYSDK_OFFSET(0xA08FC00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDPERFORMANCEPAGEENTER_OFFSET UNITYSDK_OFFSET(0xA08F9F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA093F80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0xA0941D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONRELEASE_OFFSET UNITYSDK_OFFSET(0xA0944E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPLAYERLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xA08F4B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xA089440)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHSPECIALCONTROLMODEBALLEFFSTATE_OFFSET UNITYSDK_OFFSET(0xA092870)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__RELEASEALLASSETS_OFFSET UNITYSDK_OFFSET(0xA08CA10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVECACHEDBACKWARDEFFSO_OFFSET UNITYSDK_OFFSET(0xA08A410)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVEPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xA089B50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA08EF60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWSNAPPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA08F210)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTCONTROLTIMELINEENTITY_OFFSET UNITYSDK_OFFSET(0xA08D970)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA08ED30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKBTNCD_OFFSET UNITYSDK_OFFSET(0xA091120)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKCACHEDASSET_OFFSET UNITYSDK_OFFSET(0xA08A390)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKEXITCONTROL_OFFSET UNITYSDK_OFFSET(0xA091530)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKLOOPREWINDUIAUDIO_OFFSET UNITYSDK_OFFSET(0xA08E790)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPERFORMANCECONTROL_OFFSET UNITYSDK_OFFSET(0xA08F900)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPLAYERSTEER_OFFSET UNITYSDK_OFFSET(0xA091190)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNPRESSDOWN_OFFSET UNITYSDK_OFFSET(0xA08FA40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNRELEASE_OFFSET UNITYSDK_OFFSET(0xA08FAF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYEXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA08EA90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYUNREGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xA091E70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__UNINITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xA08E1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TypeDefinitionIndex = 48194;

	class TimeRewindControlManager : public ::System::Object
	{
	public:
		// static const ::System::String* StopLoopRewindAudio; // 0x0
		// static const ::System::String* RestartLoopRewindAudio; // 0x0
		// static const ::System::String* TimeRewindControlSwitcherTag; // 0x0
		// static const ::System::String* TimeRewindEntityTag; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_22DFC3839E157DF2*>* _TimeRewindAnimConfigs; // 0x10
		::RPG::Client::TwoKeyDictionary_3<::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType, ::System::String*>* _TimeRewindViewAttachMat; // 0x18
		::RPG::GameCore::ToastPile* TimeRewindHitPlayerWhenRewindToast; // 0x20
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloadPool; // 0x28
		::RPG::GameCore::GameEntity* _CurrentSelectTarget; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _PreloadEffInstCnt; // 0x38
		::System::Collections::Generic::List_1<::Class_2_7E6F98A8FA0DAC16*>* _TimeRewindControlSwitcherComponents; // 0x40
		::RPG::Client::UIController* _RecreateWorldPageController; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* _TimeRewindViewAttachMatAsset; // 0x50
		::Class_1_09216AC83FE49B91* _SwitchOpenAttachPlayerBallEff; // 0x58
		::Il2CppArray<::Class_1_09216AC83FE49B91*>* _SwitchOpenAttachPlayerEff; // 0x60
		::RPG::GameCore::ToastPile* InteractSwitcherWhenOpen; // 0x68
		::Class_1_4A90D78D94DB1347* _GamePlayAssetLoader; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloads; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* _RewindEntityClips; // 0x80
		::System::Collections::Generic::List_1<::Class_1_89CF3D7005785E86*>* _MultiControllerRegisterInfos; // 0x88
		::RPG::GameCore::ToastPile* TimeRewindFailToast; // 0x90
		::RPG::Client::AdventurePhase* _Phase; // 0x98
		::RPG::GameCore::ToastPile* TimeRewindEntityStrikeToast; // 0xA0
		::Class_3_BCCE950C2E8DF1F0* _OnHitPlayerSeq; // 0xA8
		::UnityEngine::Coroutine* _FrameAssetAsyncLoadCoroutine; // 0xB0
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>* _TimeRewindEntityPreloadEffItemPool; // 0xB8
		::System::Collections::Generic::List_1<::System::UInt32>* _ToFinishQuestIDs; // 0xC0
		::RPG::Client::UIController* _PerformancePageController; // 0xC8
		::System::Collections::Generic::List_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _ToAsyncLoadBackwardSoAssets; // 0xD0
		::RPG::GameCore::EntityTimeRewindComponent* _PerformanceTargetTimeRewindComponent; // 0xD8
		::RPG::GameCore::EntityTimeRewindComponent* _CurrentSelectTargetTimeRewindComponent; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _LoadBackwardSoAssets; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimelineItemSingleData*>* _TrackInfoDict; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindItemSingleClipData*>* _RewindEntityClipInfos; // 0xF8
		::Class_1_5863CECBF1A58D06* _TimeRewindLockTarget; // 0x100
		::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>* _AllTimeRewindComponents; // 0x108
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _TimeRewindEffBackwardSOAssetInfoPool; // 0x110
		::System::Action* _PerformanceFinishCallback; // 0x118
		::Il2CppArray<::Class_1_09216AC83FE49B91*>* _AttachPlayerEffs; // 0x120
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LoopRewindSelectableTarget; // 0x128
		::System::Boolean _GamePlayBtnEnable; // 0x130
		::System::Boolean _LockPerformanceTarget; // 0x131
		::System::Boolean _HasLoopRewindUI; // 0x132
		::System::Boolean _PerformancePageEnter; // 0x133
		::System::Int32 _SpecialControlTypeBallEffControlParam; // 0x134
		::System::Int32 _IgnoreHitPlayerCount; // 0x138
		::System::Single _TimeRewindCompletePerformTimer; // 0x13C
		::System::Int32 _TimeRewindDisableSelectCount; // 0x140
		::System::Boolean _InControlMode; // 0x144
		::System::Boolean _GlobalOverrideSpecialControlMode; // 0x145
		::System::UInt32 _LastOvertimeRuntimeID; // 0x148
		::System::Int32 _ContinuousTimeout; // 0x14C
		::System::Int32 _SwitchAttachPlayerEffCount; // 0x150
		::UnityEngine::Vector3 _PlayerTurnToForward; // 0x154
		::System::Boolean _IsCachedAssetAsyncLoading; // 0x160
		::System::Boolean _InPerformanceMode; // 0x161
		::System::Boolean _Inited; // 0x162
		::System::Int32 _ManagerDeactiveReason; // 0x164
		::System::UInt32 _TimeRewindOverTimeToastLastTime; // 0x168
		::System::Int32 _GlobalSelectableCount; // 0x16C
		::RPG::Client::TimeRewindControlManager_ExitControlModeStep _ExitControlModeStep; // 0x170
		::System::Single _BtnCD; // 0x174
		::System::Int32 _TimeRewindInControlCount; // 0x178

		::System::Void _ctor(::RPG::Client::AdventurePhase* phase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CTOR_OFFSET))(this, phase);
		}

		::System::Boolean PreloadTimeRewindEntityEff(::RPG::GameCore::GameEntity* entity, ::System::Collections::Generic::List_1<::System::String*>* effPaths)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_PRELOADTIMEREWINDENTITYEFF_OFFSET))(this, entity, effPaths);
		}

		::System::Void _RefreshPreloadEffCnt(::RPG::GameCore::GameEntity* entity, ::System::Collections::Generic::List_1<::System::String*>* effPaths)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPRELOADEFFCNT_OFFSET))(this, entity, effPaths);
		}

		::System::Void _AddPreloadEffCnt(::System::Collections::Generic::List_1<::System::String*>* effPaths)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ADDPRELOADEFFCNT_OFFSET))(this, effPaths);
		}

		::System::Void _RemovePreloadEffCnt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVEPRELOADEFFCNT_OFFSET))(this, entity);
		}

		::System::Void ReleaseTimeRewindEntityPreloadEff(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_RELEASETIMEREWINDENTITYPRELOADEFF_OFFSET))(this, entity);
		}

		::System::Void _CacheBackwardEffSoAssetAsync(::System::String* assetPath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CACHEBACKWARDEFFSOASSETASYNC_OFFSET))(this, assetPath, callback);
		}

		::System::Void _RemoveCachedBackwardEffSo(::System::String* assetPath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVECACHEDBACKWARDEFFSO_OFFSET))(this, assetPath, callback);
		}

		::System::Void FireBackwardEffAsync(::RPG::GameCore::GameEntity* entity, ::RPG::Client::TriggerEffectParams* triggerEffectParams, ::Class_1_09216AC83FE49B91* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TriggerEffectParams*, ::Class_1_09216AC83FE49B91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_FIREBACKWARDEFFASYNC_OFFSET))(this, entity, triggerEffectParams, handler);
		}

		::System::Void SetBackwardEffFinish(::RPG::GameCore::GameEntity* entity, ::Class_1_09216AC83FE49B91* handler, ::System::Boolean needFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_09216AC83FE49B91*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETBACKWARDEFFFINISH_OFFSET))(this, entity, handler, needFadeOut);
		}

		::ParticleRecorder::BackwardParticlesInfoSO* TryGetBackwardParticlesInfoSO(::System::String* soPath)
		{
			return ((::ParticleRecorder::BackwardParticlesInfoSO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYGETBACKWARDPARTICLESINFOSO_OFFSET))(this, soPath);
		}

		::System::Collections::IEnumerator* _TickCachedAsset()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKCACHEDASSET_OFFSET))(this);
		}

		::RPG::Client::EntityTimelineControlTrackInfo* GetEntityTimelineTrackInfo(::System::UInt32 propID)
		{
			return ((::RPG::Client::EntityTimelineControlTrackInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETENTITYTIMELINETRACKINFO_OFFSET))(this, propID);
		}

		::UnityEngine::AnimationClip* LoadOverrideClipAsset(::System::String* clipPath)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADOVERRIDECLIPASSET_OFFSET))(this, clipPath);
		}

		::RPG::Client::EntityTimelineControlNode* LoadSingleClipInfoAsset(::System::UInt32 propID, ::UnityEngine::AnimationClip* clip)
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADSINGLECLIPINFOASSET_OFFSET))(this, propID, clip);
		}

		::Class_1_22DFC3839E157DF2* LoadTimeRewindEntityAnimEventConfigs(::System::String* path)
		{
			return ((::Class_1_22DFC3839E157DF2*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADTIMEREWINDENTITYANIMEVENTCONFIGS_OFFSET))(this, path);
		}

		::UnityEngine::Material* GetTimeRewindViewMat(::RPG::GameCore::TimeRewindView view, ::RPG::GameCore::EraStateType eraStateType)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETTIMEREWINDVIEWMAT_OFFSET))(this, view, eraStateType);
		}

		::System::Void _ReleaseAllAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__RELEASEALLASSETS_OFFSET))(this);
		}

		::System::Void TryControlTimeRewindEntityByTask(::System::Boolean control, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYCONTROLTIMEREWINDENTITYBYTASK_OFFSET))(this, control, entity);
		}

		::System::Void _InitExternalSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITEXTERNALSYSTEM_OFFSET))(this);
		}

		::System::Void _UnInitExternalSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__UNINITEXTERNALSYSTEM_OFFSET))(this);
		}

		::System::Void _OnQteCatchGhostStart(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTSTART_OFFSET))(this, arg);
		}

		::System::Void _OnQteCatchGhostEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTEND_OFFSET))(this, arg);
		}

		::System::Void _OnShowFakeAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWFAKEAVATAR_OFFSET))(this, arg);
		}

		::System::Void _OnShowRealAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWREALAVATAR_OFFSET))(this, arg);
		}

		::System::Void _TickLoopRewindUIAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKLOOPREWINDUIAUDIO_OFFSET))(this);
		}

		::System::Void _OnOpenMobilePhone(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONOPENMOBILEPHONE_OFFSET))(this, arg);
		}

		::System::Void StartTimeRewindRecreateWorldPage(::System::Action* exitCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDRECREATEWORLDPAGE_OFFSET))(this, exitCallback);
		}

		::System::Void CloseTimeRewindRecreateWorldPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CLOSETIMEREWINDRECREATEWORLDPAGE_OFFSET))(this);
		}

		::System::Void StartTimeRewindPerformance(::RPG::GameCore::GameEntity* rewindTarget, ::System::Action* rewindSuccessCallback, ::System::Boolean inverseUIProgress)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDPERFORMANCE_OFFSET))(this, rewindTarget, rewindSuccessCallback, inverseUIProgress);
		}

		::System::Void StartTimeRewindSnapPerformance(::RPG::GameCore::GameEntity* rewindTarget, ::System::Action* rewindSuccessCallback, ::RPG::GameCore::OpenTimeRewindSnapPageParam* param, ::System::Boolean inverseUIProgress)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDSNAPPERFORMANCE_OFFSET))(this, rewindTarget, rewindSuccessCallback, param, inverseUIProgress);
		}

		::System::Void ExitTimeRewindPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITTIMEREWINDPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _StartTimeRewindPerformance(::RPG::GameCore::GameEntity* rewindTarget, ::System::Action* rewindSuccessCallback, ::System::Boolean inverseUIProgress)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTTIMEREWINDPERFORMANCE_OFFSET))(this, rewindTarget, rewindSuccessCallback, inverseUIProgress);
		}

		::System::Void _ShowPerformancePage(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWPERFORMANCEPAGE_OFFSET))(this, timeRewindComponent);
		}

		::System::Void _ShowSnapPerformancePage(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent, ::RPG::GameCore::OpenTimeRewindSnapPageParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWSNAPPERFORMANCEPAGE_OFFSET))(this, timeRewindComponent, param);
		}

		::System::Void _TickPerformanceControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPERFORMANCECONTROL_OFFSET))(this);
		}

		::System::Void _DisposeTimeRewindPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISPOSETIMEREWINDPERFORMANCE_OFFSET))(this);
		}

		::System::Void _OnTimeRewindPerformancePageEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDPERFORMANCEPAGEENTER_OFFSET))(this);
		}

		::System::Void _TimeRewindPerformanceBtnPressDown(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNPRESSDOWN_OFFSET))(this, obj);
		}

		::System::Void _TimeRewindPerformanceBtnRelease(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNRELEASE_OFFSET))(this, obj);
		}

		::System::Void _OnPerformanceRewindComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONPERFORMANCEREWINDCOMPLETE_OFFSET))(this);
		}

		::System::Void _OnTimelineEntityEvent(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET))(this, evt);
		}

		::System::Boolean get_LockPerformanceTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_LOCKPERFORMANCETARGET_OFFSET))(this);
		}

		::System::Boolean get_InPerformanceMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INPERFORMANCEMODE_OFFSET))(this);
		}

		::System::Void TryFinishQuest(::RPG::GameCore::GameEntity* timeRewindEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYFINISHQUEST_OFFSET))(this, timeRewindEntity);
		}

		::System::Void _InitQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITQUEST_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnGroupLoadEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONGROUPLOADEND_OFFSET))(this, arg);
		}

		::System::Void OnEnterTopOfPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONENTERTOPOFPRIORITY_OFFSET))(this);
		}

		::System::Void OnLeaveTopOfPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONLEAVETOPOFPRIORITY_OFFSET))(this);
		}

		::RPG::Client::CompetitiveGamePlaySystemPriority GetCompetitivePriority()
		{
			return ((::RPG::Client::CompetitiveGamePlaySystemPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETCOMPETITIVEPRIORITY_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void RegisterTimeRewindControlSwitcher(::Class_2_7E6F98A8FA0DAC16* timeRewindControlSwitcherComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7E6F98A8FA0DAC16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERTIMEREWINDCONTROLSWITCHER_OFFSET))(this, timeRewindControlSwitcherComponent);
		}

		::System::Void UnRegisterTimeRewindControlSwitcher(::Class_2_7E6F98A8FA0DAC16* timeRewindControlSwitcherComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7E6F98A8FA0DAC16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_UNREGISTERTIMEREWINDCONTROLSWITCHER_OFFSET))(this, timeRewindControlSwitcherComponent);
		}

		::System::Void TryUnselectCurrentTarget(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYUNSELECTCURRENTTARGET_OFFSET))(this, timeRewindComponent);
		}

		::System::Void DectiveTimeRewindManager(::System::Boolean deActive, ::RPG::Client::TimeRewindControlManagerActiveReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TimeRewindControlManagerActiveReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECTIVETIMEREWINDMANAGER_OFFSET))(this, deActive, reason);
		}

		::System::Boolean IsHitPlayerSeqExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ISHITPLAYERSEQEXECUTION_OFFSET))(this);
		}

		::System::Void TimeRewindEntityHitPlayerSeq(::RPG::GameCore::GameEntity* hitSourceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYHITPLAYERSEQ_OFFSET))(this, hitSourceEntity);
		}

		::System::Void TimeRewindEntityOnHitPlayer(::RPG::GameCore::GameEntity* hitSourceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYONHITPLAYER_OFFSET))(this, hitSourceEntity);
		}

		::System::Void RemoveTimelineObject(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REMOVETIMELINEOBJECT_OFFSET))(this, entity);
		}

		::System::Void AddTimelineObject(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDTIMELINEOBJECT_OFFSET))(this, timeRewindComponent);
		}

		::System::Void RegisterBindChildTimeRewindEntity(::RPG::GameCore::EntityTimeRewindComponent* parentObject, ::Il2CppArray<::System::UInt32>* childInstanceID, ::RPG::GameCore::BindTimeRewindMultiControlType controllerType, ::System::Object* bindParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::BindTimeRewindMultiControlType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERBINDCHILDTIMEREWINDENTITY_OFFSET))(this, parentObject, childInstanceID, controllerType, bindParam);
		}

		::System::Void _TryUnregisterBindChildTimeRewindEntity(::RPG::GameCore::EntityTimeRewindComponent* parentObject)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYUNREGISTERBINDCHILDTIMEREWINDENTITY_OFFSET))(this, parentObject);
		}

		::System::Void TryAttachSwitcherOpenEffOnPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYATTACHSWITCHEROPENEFFONPLAYER_OFFSET))(this);
		}

		::System::Void TryRemoveSwitcherOpenEffOnPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYREMOVESWITCHEROPENEFFONPLAYER_OFFSET))(this);
		}

		::System::Boolean CalcTimeRewindTargetSelectable(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CALCTIMEREWINDTARGETSELECTABLE_OFFSET))(this, timeRewindComponent);
		}

		::System::Void SetGlobalOverrideSpecialControlMode(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALOVERRIDESPECIALCONTROLMODE_OFFSET))(this, enable);
		}

		::System::Void _ExecuteHitPlayerSeq(::RPG::GameCore::GameEntity* hitEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXECUTEHITPLAYERSEQ_OFFSET))(this, hitEntity);
		}

		::System::Void _DoInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DOINIT_OFFSET))(this);
		}

		::System::Void _EnableSwitchCameraControlMode(::RPG::GameCore::GameEntity* controlEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLESWITCHCAMERACONTROLMODE_OFFSET))(this, controlEntity);
		}

		::System::Void _DisableControlLookAtMode(::System::Boolean needResetAxis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISABLECONTROLLOOKATMODE_OFFSET))(this, needResetAxis);
		}

		::System::Void _EnableControlLookAtMode(::UnityEngine::Transform* lookTransform, ::RPG::MVector3 lookAtOffsetOverride, ::System::Boolean disableDamp, ::System::Boolean optimizeCameraLookAt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::MVector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLECONTROLLOOKATMODE_OFFSET))(this, lookTransform, lookAtOffsetOverride, disableDamp, optimizeCameraLookAt);
		}

		::System::Void _StartControlTimelineEntity(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTCONTROLTIMELINEENTITY_OFFSET))(this, timeRewindComponent);
		}

		::System::Void _FireStartControlModeEff(::RPG::GameCore::TimeRewindEntityControlType controlType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindEntityControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__FIRESTARTCONTROLMODEEFF_OFFSET))(this, controlType);
		}

		::System::Void _TickPlayerSteer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPLAYERSTEER_OFFSET))(this);
		}

		::System::Void ExitControlMode(::System::Boolean finishImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITCONTROLMODE_OFFSET))(this, finishImmediately);
		}

		::System::Void _TickExitControl(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKEXITCONTROL_OFFSET))(this, deltaTime);
		}

		::System::Void _ExitControlModeStep1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP1_OFFSET))(this);
		}

		::System::Void _ExitControlModeStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP2_OFFSET))(this);
		}

		::System::Void IncreaseInControlCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_INCREASEINCONTROLCOUNT_OFFSET))(this);
		}

		::System::Void DecreaseInControlCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECREASEINCONTROLCOUNT_OFFSET))(this);
		}

		::System::Void AddRewindBtnCD(::System::Single coolTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDREWINDBTNCD_OFFSET))(this, coolTime);
		}

		::System::Void _TickBtnCD(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKBTNCD_OFFSET))(this, deltaTime);
		}

		::System::Boolean _BtnInCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__BTNINCD_OFFSET))(this);
		}

		::System::Void _RefreshSpecialControlModeBallEffState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHSPECIALCONTROLMODEBALLEFFSTATE_OFFSET))(this, state);
		}

		::System::Void _RefreshPlayerLockTarget(::RPG::GameCore::GameEntity* newTarget)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPLAYERLOCKTARGET_OFFSET))(this, newTarget);
		}

		::System::Void SetEnableTimeRewindSelect(::System::Boolean enable, ::RPG::GameCore::ForbidSelectTimeRewindReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ForbidSelectTimeRewindReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETENABLETIMEREWINDSELECT_OFFSET))(this, enable, reason);
		}

		::System::Void SetPlayerIgnoreTimeRewindHit(::System::Boolean ignore, ::RPG::Client::PlayerIgnoreTimeRewindHitReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::PlayerIgnoreTimeRewindHitReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETPLAYERIGNORETIMEREWINDHIT_OFFSET))(this, ignore, reason);
		}

		::System::Void SetGlobalUnselectable(::System::Boolean unselectable, ::RPG::Client::TimeRewindGlobalUnselectableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TimeRewindGlobalUnselectableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALUNSELECTABLE_OFFSET))(this, unselectable, reason);
		}

		::System::Void OnTimeRewindEntityControlOverTime(::RPG::GameCore::EntityTimeRewindComponent* target)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONTIMEREWINDENTITYCONTROLOVERTIME_OFFSET))(this, target);
		}

		::System::Boolean _CheckCanClickRewindButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKCANCLICKREWINDBUTTON_OFFSET))(this);
		}

		::System::Void _OnTimeRewindUIButtonClick(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONCLICK_OFFSET))(this, arg);
		}

		::System::Boolean _CheckSpecialControlTypeCanControl(::RPG::GameCore::EntityTimeRewindComponent* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKSPECIALCONTROLTYPECANCONTROL_OFFSET))(this, target);
		}

		::System::Void _OnTimeRewindUIButtonPress(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONPRESS_OFFSET))(this, arg);
		}

		::System::Void _OnTimeRewindUIButtonRelease(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONRELEASE_OFFSET))(this, arg);
		}

		::System::Void _TryExitControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYEXITCONTROLMODE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>* get_TimeRewindComponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_TIMEREWINDCOMPONENTS_OFFSET))(this);
		}

		::RPG::GameCore::EntityTimeRewindComponent* get_CurrentSelectTargetTimeRewindComponent()
		{
			return ((::RPG::GameCore::EntityTimeRewindComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_CURRENTSELECTTARGETTIMEREWINDCOMPONENT_OFFSET))(this);
		}

		::System::Boolean get_InControlMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INCONTROLMODE_OFFSET))(this);
		}

		::System::Boolean get_ManagerActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_MANAGERACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IgnoreHitPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_IGNOREHITPLAYER_OFFSET))(this);
		}
	};
}
