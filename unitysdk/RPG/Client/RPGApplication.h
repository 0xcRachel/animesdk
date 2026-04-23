#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RPGApplication_UpdateStep.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_RPGAPPLICATION_DISPATCHANIMATORMOVEMENTJOBSCHEDULE_OFFSET UNITYSDK_OFFSET(0x14EBD5D0)
#define RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONID_OFFSET UNITYSDK_OFFSET(0x14EC12C0)
#define RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x14EC12B0)
#define RPG_CLIENT_RPGAPPLICATION_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x14EBDF20)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISAPPLICATIONQUITING_OFFSET UNITYSDK_OFFSET(0x14EC1490)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x14EC1270)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISQUIT_OFFSET UNITYSDK_OFFSET(0x14EC12A0)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISRECOVERFOCUS_OFFSET UNITYSDK_OFFSET(0x14EC1280)
#define RPG_CLIENT_RPGAPPLICATION_GET_UPDATEFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x14EBDEC0)
#define RPG_CLIENT_RPGAPPLICATION_GET_UPDATE_STEP_OFFSET UNITYSDK_OFFSET(0x14EBDE90)
#define RPG_CLIENT_RPGAPPLICATION_LIMITFRAMEMAXTIMESTEP_OFFSET UNITYSDK_OFFSET(0x14EC11D0)
#define RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x14EBE8B0)
#define RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x14EBEA00)
#define RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x14EBECB0)
#define RPG_CLIENT_RPGAPPLICATION_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14EC0050)
#define RPG_CLIENT_RPGAPPLICATION_ONSTARTLATER_OFFSET UNITYSDK_OFFSET(0x14EBE310)
#define RPG_CLIENT_RPGAPPLICATION_ONSTARTNEXTFRAME_OFFSET UNITYSDK_OFFSET(0x14EC0C10)
#define RPG_CLIENT_RPGAPPLICATION_ONSTART_OFFSET UNITYSDK_OFFSET(0x14EBE020)
#define RPG_CLIENT_RPGAPPLICATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14EBF1F0)
#define RPG_CLIENT_RPGAPPLICATION_QUITAPP_OFFSET UNITYSDK_OFFSET(0x14EBEFA0)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTAPPNEXTFRAME_OFFSET UNITYSDK_OFFSET(0x14EC0E20)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTAPP_OFFSET UNITYSDK_OFFSET(0x14EC0A60)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTGAMEDEV_OFFSET UNITYSDK_OFFSET(0x14EC0920)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTMAZEDEV_OFFSET UNITYSDK_OFFSET(0x14EC09B0)
#define RPG_CLIENT_RPGAPPLICATION_SET_ISAPPLICATIONQUITING_OFFSET UNITYSDK_OFFSET(0x14EC14A0)
#define RPG_CLIENT_RPGAPPLICATION_SET_ISRECOVERFOCUS_OFFSET UNITYSDK_OFFSET(0x14EC1290)
#define RPG_CLIENT_RPGAPPLICATION_SET_UPDATEFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x14EBDEF0)
#define RPG_CLIENT_RPGAPPLICATION_SET_UPDATE_STEP_OFFSET UNITYSDK_OFFSET(0x14EBD850)
#define RPG_CLIENT_RPGAPPLICATION_STARTNEXTFRAME_OFFSET UNITYSDK_OFFSET(0x14EC0D90)
#define RPG_CLIENT_RPGAPPLICATION__AFTERLATEUPDATESCHEDULE_OFFSET UNITYSDK_OFFSET(0x14EBDC90)
#define RPG_CLIENT_RPGAPPLICATION__AFTERTICKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x14EBD8D0)
#define RPG_CLIENT_RPGAPPLICATION__BEFORELATEUPDATESCHEDULE_OFFSET UNITYSDK_OFFSET(0x14EBDA90)
#define RPG_CLIENT_RPGAPPLICATION__BEFORETICKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x14EBD660)
#define RPG_CLIENT_RPGAPPLICATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EC14B0)
#define RPG_CLIENT_RPGAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x14EBE010)
#define RPG_CLIENT_RPGAPPLICATION__REGGLOBALNOTIFY_OFFSET UNITYSDK_OFFSET(0x14EBE5A0)
#define RPG_CLIENT_RPGAPPLICATION__TRYRECOVERCLOUDSAVEDATA_OFFSET UNITYSDK_OFFSET(0x14EBE1C0)
#define RPG_CLIENT_RPGAPPLICATION__UPDATEINPUTLISTENER_OFFSET UNITYSDK_OFFSET(0x14EC12D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGApplication_TypeDefinitionIndex = 64037;

	class RPGApplication : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateDynamicOptimizeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14CC0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateMonoEffectManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14CC8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateLuaSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14CD0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateLoadingManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14CD8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEmotionLateUpdateManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14CE0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateShaderWarmupManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14CE8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAsyncProcessorMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14CF0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTAMonoTickManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14CF8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateMaterialBlockEffectManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D00);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAttachPointManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D08);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTimelineMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D10);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAndroidGameStateSeriviceManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D18);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateRendererMaterialCacheMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D20);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateNetworkMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D28);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateQAManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D30);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTimerManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D38);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAssetMgrMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D40);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePrefsAutoSaveMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D48);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateCharacterEffectManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D50);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateBeforeLateUpdateScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D58);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateShaderPropertyTransitionManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D60);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEffectPluginManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D68);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAfterTickScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D70);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEffectPluginManagerRenderTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D78);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateTAMonoTickManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D80);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateGamePhaseManagerEndOfLateTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D88);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateUIMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D90);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePlayGoManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14D98);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateBeforeTickScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DA0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAfterLateUpdateScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DA8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateBattlePreloadPoolMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DB0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEffectPluginManagerEndOfLateTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DB8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateFollowPointMappingMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DC0);
		}
		static ::RPG::Client::RPGApplication** StaticGet__Instance()
		{
			return (::RPG::Client::RPGApplication**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DC8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateVideoManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DD0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateCustomLateUpdateManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DD8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateEffectPluginManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DE0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateProfilerManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DE8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateGamePhaseManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DF0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStackCameraManagerTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14DF8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateMonoEffectManagerEndOfLateTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E00);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePipelineCameraMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E08);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateGamePhaseManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E10);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAudioManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E18);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateRenderingCommonMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E20);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStackCameraManagerCollectMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E28);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateEntityTickLodManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E30);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateGameObjectPoolMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E38);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateShaderPropertyTransitionManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E40);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateLoadingManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E48);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePrefsTickSaveMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E50);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateThreadProfileManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E58);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTimerWorkerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x14E60);
		}
		static ::System::Int32* StaticGet__UpdateFrameCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x5E90);
		}
		static ::RPG::Client::RPGApplication_UpdateStep* StaticGet__UpdateStep()
		{
			return (::RPG::Client::RPGApplication_UpdateStep*)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x5E94);
		}
		// static const ::System::Single DefaultFrameMaxTimeStep; // 0x0
		::UnityEngine::GameObject* _GameObject; // 0x10
		::System::Int32 _LimitMaxTimeStep_LeftFrames; // 0x18
		::System::Boolean _isFocus; // 0x1C
		::System::Boolean _ApplicationStarted; // 0x1D
		::System::Boolean _IsApplicationQuiting_k__BackingField; // 0x1E
		::System::Boolean _isRecoverFocus; // 0x1F
		::System::Boolean _IsQuit; // 0x20
		::System::Single _TimeElapsedAccumulate; // 0x24
		::System::Single _LimitMaxTimeStep_LeftTime; // 0x28
		::System::Single _LimitMaxTimeStep; // 0x2C
		::System::UInt64 _PauseApplicationTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__CCTOR_OFFSET))();
		}

		::System::Void DispatchAnimatorMovementJobSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_DISPATCHANIMATORMOVEMENTJOBSCHEDULE_OFFSET))(this);
		}

		::System::Void _BeforeTickSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__BEFORETICKSCHEDULE_OFFSET))(this);
		}

		::System::Void _AfterTickSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__AFTERTICKSCHEDULE_OFFSET))(this);
		}

		::System::Void _BeforeLateUpdateSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__BEFORELATEUPDATESCHEDULE_OFFSET))(this);
		}

		::System::Void _AfterLateUpdateSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__AFTERLATEUPDATESCHEDULE_OFFSET))(this);
		}

		static ::RPG::Client::RPGApplication_UpdateStep get_UPDATE_STEP()
		{
			return ((::RPG::Client::RPGApplication_UpdateStep(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_UPDATE_STEP_OFFSET))();
		}

		static ::System::Void set_UPDATE_STEP(::RPG::Client::RPGApplication_UpdateStep value)
		{
			return ((::System::Void(*)(::RPG::Client::RPGApplication_UpdateStep))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_UPDATE_STEP_OFFSET))(value);
		}

		static ::System::Int32 get_UpdateFrameCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_UPDATEFRAMECOUNT_OFFSET))();
		}

		static ::System::Void set_UpdateFrameCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_UPDATEFRAMECOUNT_OFFSET))(value);
		}

		static ::RPG::Client::RPGApplication* get_Instance()
		{
			return ((::RPG::Client::RPGApplication*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_INSTANCE_OFFSET))();
		}

		::System::Void OnStart(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONSTART_OFFSET))(this, gameObject);
		}

		::System::Void OnStartLater()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONSTARTLATER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryRecoverCloudSaveData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__TRYRECOVERCLOUDSAVEDATA_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void OnApplicationPause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONPAUSE_OFFSET))(this, isPause);
		}

		::System::Void OnApplicationQuit(::System::Boolean quitTeminal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONQUIT_OFFSET))(this, quitTeminal);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void RestartGameDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTGAMEDEV_OFFSET))(this);
		}

		::System::Void RestartMazeDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTMAZEDEV_OFFSET))(this);
		}

		::System::Void RestartApp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTAPP_OFFSET))(this);
		}

		::System::Void OnStartNextFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONSTARTNEXTFRAME_OFFSET))(this);
		}

		::System::Collections::IEnumerator* StartNextFrame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_STARTNEXTFRAME_OFFSET))(this);
		}

		::System::Void RestartAppNextFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTAPPNEXTFRAME_OFFSET))(this);
		}

		::System::Void QuitApp(::System::Boolean nextFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_QUITAPP_OFFSET))(this, nextFrame);
		}

		::System::Void LimitFrameMaxTimeStep(::System::Single maxTimeStep, ::System::Int32 limitFrames, ::System::Single limitTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_LIMITFRAMEMAXTIMESTEP_OFFSET))(this, maxTimeStep, limitFrames, limitTime);
		}

		::System::Boolean get_IsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISFOCUS_OFFSET))(this);
		}

		::System::Boolean get_IsRecoverFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISRECOVERFOCUS_OFFSET))(this);
		}

		::System::Void set_IsRecoverFocus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_ISRECOVERFOCUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISQUIT_OFFSET))(this);
		}

		::System::String* get_ApplicationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ApplicationID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONID_OFFSET))(this);
		}

		::System::Void _UpdateInputListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__UPDATEINPUTLISTENER_OFFSET))(this);
		}

		::System::Void _RegGlobalNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__REGGLOBALNOTIFY_OFFSET))(this);
		}

		::System::Boolean get_IsApplicationQuiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISAPPLICATIONQUITING_OFFSET))(this);
		}

		::System::Void set_IsApplicationQuiting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_ISAPPLICATIONQUITING_OFFSET))(this, value);
		}
	};
}
