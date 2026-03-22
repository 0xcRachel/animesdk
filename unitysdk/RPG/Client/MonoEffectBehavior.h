#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/MonoEffectHideReason.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_418;
class Class_0_16E4307DCC419505_421;
class Class_0_16E4307DCC419505_738;
class Class_0_16E4307DCC419505_739;
class Class_1_9CBC71DC5240DC00;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginBase; }
namespace RPG::Client { class MonoEffectPluginSpeed; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OnEventCallBack; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAGS_OFFSET UNITYSDK_OFFSET(0x979D830)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x979D7E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ATTACHTOTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x979CFB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_AWAKEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x979A360)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_COPYTARGETANIMATORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x97A6A10)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DESPAWNMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x979A1D0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTORYMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x979C3A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTROYEFFECT_OFFSET UNITYSDK_OFFSET(0x97A3D10)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DISABLEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x9799770)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSEPLUGINS_OFFSET UNITYSDK_OFFSET(0x97A3C70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x979C780)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ENABLEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x9799670)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETADAPTSCALE_OFFSET UNITYSDK_OFFSET(0x97A73B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETANIMATORS_OFFSET UNITYSDK_OFFSET(0x97A62F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETATTACHNAME_OFFSET UNITYSDK_OFFSET(0x979B2B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTENTITY_OFFSET UNITYSDK_OFFSET(0x979A910)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTGO_OFFSET UNITYSDK_OFFSET(0x979B090)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETFLAGMASK_OFFSET UNITYSDK_OFFSET(0x979D9B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x979AF60)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0x97A6F50)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINROTATION_OFFSET UNITYSDK_OFFSET(0x97A6EF0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETPREFABATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x979B340)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x979A850)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETGO_OFFSET UNITYSDK_OFFSET(0x979B190)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETOVERRIDEGO_OFFSET UNITYSDK_OFFSET(0x979B150)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ATTACHTOTIMELINE_OFFSET UNITYSDK_OFFSET(0x97A5240)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_CURRENTLIFE_OFFSET UNITYSDK_OFFSET(0x97A7A80)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_FROMUIMODEL_OFFSET UNITYSDK_OFFSET(0x97A77D0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_GORENDERCACHE_OFFSET UNITYSDK_OFFSET(0x97A7A70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISINVISIBLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x97A7A90)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISRESET_OFFSET UNITYSDK_OFFSET(0x97A7A10)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISSELFDESTROYED_OFFSET UNITYSDK_OFFSET(0x97A7A00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x97A79F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_OWNERMONO_OFFSET UNITYSDK_OFFSET(0x97A7AB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0x979D960)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_OFFSET UNITYSDK_OFFSET(0x979D910)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_1_OFFSET UNITYSDK_OFFSET(0x979DAE0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_OFFSET UNITYSDK_OFFSET(0x979D9F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HIDEEFFECT_OFFSET UNITYSDK_OFFSET(0x97A2870)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ISATTACHED_OFFSET UNITYSDK_OFFSET(0x979B2F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ISINDELAY_OFFSET UNITYSDK_OFFSET(0x979DBE0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ISPLUGINSSET_OFFSET UNITYSDK_OFFSET(0x979CF60)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_MANUALTICKVISIBLE_OFFSET UNITYSDK_OFFSET(0x979EC30)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEIN_OFFSET UNITYSDK_OFFSET(0x979D400)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEOUT_OFFSET UNITYSDK_OFFSET(0x979D5A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONMONOEFFECTDESTROY_OFFSET UNITYSDK_OFFSET(0x979A050)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONPREREATTACH_OFFSET UNITYSDK_OFFSET(0x979D100)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONREATTACHED_OFFSET UNITYSDK_OFFSET(0x979D220)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_POSTAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x97A6040)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERFADEINCOMPONENT_OFFSET UNITYSDK_OFFSET(0x979D740)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERREATTACHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x979D340)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REPLAY_OFFSET UNITYSDK_OFFSET(0x97A1B90)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPARTICLEEMISSION_OFFSET UNITYSDK_OFFSET(0x979E840)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPLUGINS_OFFSET UNITYSDK_OFFSET(0x97A09F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_RESET_OFFSET UNITYSDK_OFFSET(0x979F6C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REVIVE_OFFSET UNITYSDK_OFFSET(0x979DFE0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SELFDESTROY_OFFSET UNITYSDK_OFFSET(0x97A5940)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_1_OFFSET UNITYSDK_OFFSET(0x97A67F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x97A6370)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETATTACH_OFFSET UNITYSDK_OFFSET(0x979B200)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTENTITY_OFFSET UNITYSDK_OFFSET(0x979B030)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTOVERRIDEGO_OFFSET UNITYSDK_OFFSET(0x979AFE0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETDONTSYNCENTITYVISIBILITY_OFFSET UNITYSDK_OFFSET(0x97A6E60)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETEFFECTPLUGINS_OFFSET UNITYSDK_OFFSET(0x979CDD0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x979DC40)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISH_OFFSET UNITYSDK_OFFSET(0x979C490)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETHIGHQUALITYEFFECTON_OFFSET UNITYSDK_OFFSET(0x97A6280)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETPARTICLEEMISSIONON_OFFSET UNITYSDK_OFFSET(0x979E9B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x979A710)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETOVERRIDEGO_OFFSET UNITYSDK_OFFSET(0x979B100)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x97A15D0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_GORENDERCACHE_OFFSET UNITYSDK_OFFSET(0x97A7A20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_ISINVISIBLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x97A7AA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SIMULATE_OFFSET UNITYSDK_OFFSET(0x97A2910)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SPAWNMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x979A120)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_STARTALLPS_OFFSET UNITYSDK_OFFSET(0x97A5AD0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPALLPS_OFFSET UNITYSDK_OFFSET(0x97A5C00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPPARTICLEEMISSION_OFFSET UNITYSDK_OFFSET(0x979E1C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x97A4AF0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_TRYSIMULATEAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x97A2F10)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_UNLOADLODMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x979DE20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CANFOLLOWTARGETVISIBLE_OFFSET UNITYSDK_OFFSET(0x97A7620)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x97A7B00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CHECKRENDERTEXTUREREQUEST_OFFSET UNITYSDK_OFFSET(0x97A0CA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CLEARTRAILRENDERS_OFFSET UNITYSDK_OFFSET(0x97A4580)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__COPYANIMATOR_OFFSET UNITYSDK_OFFSET(0x97A6B40)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x979A330)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__INITBYEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x979FE00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECTANIMSTATE_OFFSET UNITYSDK_OFFSET(0x97A2640)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECT_OFFSET UNITYSDK_OFFSET(0x979B400)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__ISENTITYINVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0x97A7590)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__MOVETRAILRENDERS_OFFSET UNITYSDK_OFFSET(0x979E500)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__ONTARGETENTITYDISPOSE_OFFSET UNITYSDK_OFFSET(0x97A7840)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RECOVEREFFECTLAYERSFROMUI3D_OFFSET UNITYSDK_OFFSET(0x97A4960)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RELEASERENDERTEXTUREREQUEST_OFFSET UNITYSDK_OFFSET(0x97A46F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYANIMATORS_OFFSET UNITYSDK_OFFSET(0x97A23F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x97A21C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETMAZESKILLEFFECTSETTING_OFFSET UNITYSDK_OFFSET(0x97A1080)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x979FF70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SETACTIVE_OFFSET UNITYSDK_OFFSET(0x97A5D30)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SETEFFECTUI3DLAYERS_OFFSET UNITYSDK_OFFSET(0x97A1370)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SETUPPLUGINS_OFFSET UNITYSDK_OFFSET(0x979CE30)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCPROPSTATE_OFFSET UNITYSDK_OFFSET(0x97A7010)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCRECORDANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x97A7210)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKTIMESCALE_OFFSET UNITYSDK_OFFSET(0x97A3380)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKVISIBLITY_OFFSET UNITYSDK_OFFSET(0x979EC80)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYDISPOSEEFFECTPLUGINCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x97A4740)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYRESETEFFECTPLUGINCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x97A0A90)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATEEFFECTPERFORMSPEED_OFFSET UNITYSDK_OFFSET(0x97A5340)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATESHADERSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x97A5820)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectBehavior_TypeDefinitionIndex = 55574;

	class MonoEffectBehavior : public ::RPG::Client::BehaviorBase
	{
	public:
		static ::System::String** StaticGet_EFFECT_HIGHT_ROOT_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectBehavior_TypeDefinitionIndex)->GetStaticField(0x365F0);
		}
		static ::System::UInt32* StaticGet_MazeEffectAddDepth2RefCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectBehavior_TypeDefinitionIndex)->GetStaticField(0xD2F0);
		}
		::System::Boolean _IsReset; // 0x18
		::System::Boolean _IsRegisteredEvent; // 0x19
		::System::Boolean _UseCasterFollowTimeScale; // 0x1A
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x20
		::RPG::GameCore::GameEntity* _CastEntityRef; // 0x28
		::UnityEngine::GameObject* _CastOverrideGORef; // 0x30
		::RPG::GameCore::GameEntity* _TargetEntityRef; // 0x38
		::UnityEngine::GameObject* _TargetOverrideGORef; // 0x40
		::System::String* _AttachPointName; // 0x48
		::System::Boolean _IsInvisibleByGamePlay_k__BackingField; // 0x50
		::System::Single _CurrentLife; // 0x54
		::System::Int32 _EnableFrameCount; // 0x58
		::System::Boolean _NeedOpaqueColorRT; // 0x5C
		::System::Boolean _NeedOpaqueDepthRT; // 0x5D
		::System::Single _TimeScale; // 0x60
		::System::Single _Speed; // 0x64
		::System::Int32 _Flag; // 0x68
		::System::Int32 _HideReason; // 0x6C
		::System::Single _AccumulatedEffectTime; // 0x70
		::System::Boolean _IsSelfDestroyed; // 0x74
		::System::Boolean _IsVisible; // 0x75
		::System::Boolean _VisibleNeedRefresh; // 0x76
		::System::Boolean _FollowTargetEntityVisible; // 0x77
		::System::Boolean _FollowAttachPointVisible; // 0x78
		::System::Single _OwnerTaskTimeScale; // 0x7C
		::System::Boolean _EffectInited; // 0x80
		::System::Single _OriginMaxLifeTime; // 0x84
		::UnityEngine::Vector3 _OriginLocalOffset; // 0x88
		::UnityEngine::Vector3 _OriginRotationOffset; // 0x94
		::UnityEngine::Vector3 _OriginPosition; // 0xA0
		::UnityEngine::Vector3 _OriginScale; // 0xAC
		::UnityEngine::Quaternion _OriginRotation; // 0xB8
		::System::Single _OriginSelfTimeSlow; // 0xC8
		::RPG::PoolList_1<::System::Int32>* _OriginRenderFlagList; // 0xD0
		::RPG::PoolList_1<::UnityEngine::ParticleSystemSimulationSpace>* _OriginParticleSystemSimulationSpaceList; // 0xD8
		::RPG::PoolList_1<::System::Single>* _OriginParticleSystemSimulationSpeedList; // 0xE0
		::RPG::PoolList_1<::System::Single>* _OriginParticleSystemVolocitySpeedModifierList; // 0xE8
		::RPG::PoolList_1<::UnityEngine::ParticleSystem_MinMaxCurve>* _OriginParticleSystemEmmisionDistanceList; // 0xF0
		::RPG::PoolList_1<::System::Int32>* _OriginGameObjectsLayerList; // 0xF8
		::UnityEngine::Transform* _EffHighRoot; // 0x100
		::RPG::GameCore::CharacterVisibleComponent* _targetEntityVisibleCompt; // 0x108
		::Il2CppArray<::Class_0_16E4307DCC419505_418*>* _EffectVisibleComponents; // 0x110
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_738*>* _EffectReattachComponents; // 0x118
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_739*>* _EffectFadeComponents; // 0x120
		::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>* _EffectPluginList; // 0x128
		::RPG::Client::MonoEffectPluginSpeed* _EffectPluginSpeed; // 0x130
		::Class_1_9CBC71DC5240DC00* _GoRendererCache; // 0x138
		::RPG::PoolList_1<::UnityEngine::Renderer*>* _posmRenderList; // 0x140
		::Il2CppArray<::Class_0_16E4307DCC419505_421*>* _ResetEffectPlugins; // 0x148
		::System::Single _DelayTimer; // 0x150
		::System::Single _LastestTickDelaTime; // 0x154
		::System::Int32 _StopParticleEmissionFrame; // 0x158
		::System::Action* _FinishCallback; // 0x160
		::RPG::GameCore::OnEventCallBack* _onTargetEntityDisposeDelegate; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* GetGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETGAMEOBJECT_OFFSET))(this);
		}

		::System::Void SetCastOverrideGO(::UnityEngine::GameObject* pGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTOVERRIDEGO_OFFSET))(this, pGameObject);
		}

		::System::Void SetCastEntity(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean followCasterTimeSlow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTENTITY_OFFSET))(this, pEntity, followCasterTimeSlow);
		}

		::RPG::GameCore::GameEntity* GetCastEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTENTITY_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCastGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTGO_OFFSET))(this);
		}

		::System::Void SetTargetOverrideGO(::UnityEngine::GameObject* pGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETOVERRIDEGO_OFFSET))(this, pGameObject);
		}

		::UnityEngine::GameObject* GetTargetOverrideGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETOVERRIDEGO_OFFSET))(this);
		}

		::System::Void SetTargetEntity(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETENTITY_OFFSET))(this, pEntity);
		}

		::RPG::GameCore::GameEntity* GetTargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETENTITY_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTargetGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETGO_OFFSET))(this);
		}

		::System::Void SetAttach(::UnityEngine::Transform* tAttachTransform, ::System::String* pAttachPointName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETATTACH_OFFSET))(this, tAttachTransform, pAttachPointName);
		}

		::System::String* GetAttachName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETATTACHNAME_OFFSET))(this);
		}

		::System::Boolean IsAttached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ISATTACHED_OFFSET))(this);
		}

		::System::String* GetPrefabAttachPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETPREFABATTACHPOINT_OFFSET))(this);
		}

		::System::Void AwakeMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_AWAKEMONOEFFECT_OFFSET))(this);
		}

		::System::Void EnableMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ENABLEMONOEFFECT_OFFSET))(this);
		}

		::System::Void DisableMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DISABLEMONOEFFECT_OFFSET))(this);
		}

		::System::Void DestoryMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTORYMONOEFFECT_OFFSET))(this);
		}

		::System::Void SpawnMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SPAWNMONOEFFECT_OFFSET))(this);
		}

		::System::Void DespawnMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DESPAWNMONOEFFECT_OFFSET))(this);
		}

		::System::Void SetEffectPlugins(::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>* pEffectPlugins)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETEFFECTPLUGINS_OFFSET))(this, pEffectPlugins);
		}

		::System::Boolean IsPluginsSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ISPLUGINSSET_OFFSET))(this);
		}

		::System::Void AttachToTargetEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ATTACHTOTARGETENTITY_OFFSET))(this);
		}

		::System::Void OnPreReattach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONPREREATTACH_OFFSET))(this);
		}

		::System::Void OnReattached()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONREATTACHED_OFFSET))(this);
		}

		::System::Void RegisterReattachComponent(::Class_0_16E4307DCC419505_738* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_738*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERREATTACHCOMPONENT_OFFSET))(this, component);
		}

		::System::Void OnFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEIN_OFFSET))(this);
		}

		::System::Void OnFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEOUT_OFFSET))(this);
		}

		::System::Void RegisterFadeInComponent(::Class_0_16E4307DCC419505_739* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_739*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERFADEINCOMPONENT_OFFSET))(this, component);
		}

		::System::Void AddFlag(::RPG::GameCore::MonoEffectFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAG_OFFSET))(this, flag);
		}

		::System::Void AddFlags(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAGS_OFFSET))(this, flags);
		}

		::System::Boolean HasFlag(::RPG::GameCore::MonoEffectFlag flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_OFFSET))(this, flag);
		}

		static ::System::Boolean HasFlag_1(::System::Int32 flagMask, ::RPG::GameCore::MonoEffectFlag flag)
		{
			return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_1_OFFSET))(flagMask, flag);
		}

		::System::Int32 GetFlagMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETFLAGMASK_OFFSET))(this);
		}

		::System::Boolean HasOneOfFlags(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_OFFSET))(this, flags);
		}

		static ::System::Boolean HasOneOfFlags_1(::System::Int32 flagMask, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flags)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_1_OFFSET))(flagMask, flags);
		}

		::System::Boolean IsInDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ISINDELAY_OFFSET))(this);
		}

		::System::Void SetFinish(::System::Boolean bIsFadeOut, ::System::Action* finishCallback, ::System::Boolean forceImmediateFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISH_OFFSET))(this, bIsFadeOut, finishCallback, forceImmediateFadeOut);
		}

		::System::Void SetFinishImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISHIMMEDIATELY_OFFSET))(this);
		}

		::System::Void UnloadLODMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_UNLOADLODMONOEFFECT_OFFSET))(this);
		}

		::System::Void Revive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REVIVE_OFFSET))(this);
		}

		::System::Void StopParticleEmission(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPPARTICLEEMISSION_OFFSET))(this, offset);
		}

		::System::Void ResetParticleEmission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPARTICLEEMISSION_OFFSET))(this);
		}

		::System::Void SetParticleEmissionOn(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETPARTICLEEMISSIONON_OFFSET))(this, isOn);
		}

		::System::Void ManualTickVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_MANUALTICKVISIBLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_RESET_OFFSET))(this);
		}

		::System::Void Replay(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REPLAY_OFFSET))(this, isInit);
		}

		::System::Void TrySimulateAfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_TRYSIMULATEAFTERUPDATE_OFFSET))(this);
		}

		::System::Void Simulate(::System::Single deltaTime, ::System::Boolean includeParticle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SIMULATE_OFFSET))(this, deltaTime, includeParticle);
		}

		::System::Void ResetPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPLUGINS_OFFSET))(this);
		}

		::System::Void DisposePlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSEPLUGINS_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean isSpawn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSE_OFFSET))(this, isSpawn);
		}

		::System::Void DestroyEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTROYEFFECT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void SelfDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SELFDESTROY_OFFSET))(this);
		}

		::System::Void OnMonoEffectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONMONOEFFECTDESTROY_OFFSET))(this);
		}

		::System::Void StartAllPs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_STARTALLPS_OFFSET))(this);
		}

		::System::Void StopAllPs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPALLPS_OFFSET))(this);
		}

		::System::Void HideEffect(::System::Boolean bIsHide, ::RPG::Client::MonoEffectHideReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HIDEEFFECT_OFFSET))(this, bIsHide, reason);
		}

		::System::Void _SetActive(::System::Boolean bIsActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SETACTIVE_OFFSET))(this, bIsActive);
		}

		::System::Void SetVisible(::System::Boolean bIsVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETVISIBLE_OFFSET))(this, bIsVisible);
		}

		::System::Void PostAudioEvent(::System::String* eventName, ::UnityEngine::GameObject* emmiter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_POSTAUDIOEVENT_OFFSET))(this, eventName, emmiter);
		}

		::System::Void SetHighQualityEffectOn(::System::Boolean bIsOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETHIGHQUALITYEFFECTON_OFFSET))(this, bIsOn);
		}

		::RPG::PoolList_1<::UnityEngine::Animator*>* GetAnimators()
		{
			return ((::RPG::PoolList_1<::UnityEngine::Animator*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETANIMATORS_OFFSET))(this);
		}

		::System::Void SetAnimatorState(::System::Int32 stateNameHash, ::System::Single normalizedTime, ::System::Boolean forceAlwaysAnimate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_OFFSET))(this, stateNameHash, normalizedTime, forceAlwaysAnimate);
		}

		::System::Void SetAnimatorState_1(::System::String* stateName, ::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_1_OFFSET))(this, stateName, normalizedTime);
		}

		::System::Void CopyTargetAnimatorParameters(::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_COPYTARGETANIMATORPARAMETERS_OFFSET))(this, animator);
		}

		::System::Void _CopyAnimator(::UnityEngine::Animator* target, ::UnityEngine::Animator* source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__COPYANIMATOR_OFFSET))(this, target, source);
		}

		::System::Void SetDontSyncEntityVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETDONTSYNCENTITYVISIBILITY_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetOriginRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetOriginPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINPOSITION_OFFSET))(this);
		}

		::System::Void _InitEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECT_OFFSET))(this);
		}

		::System::Void _SetupPlugins(::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>* pEffectPlugins)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SETUPPLUGINS_OFFSET))(this, pEffectPlugins);
		}

		::System::Void _TryResetEffectPluginComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYRESETEFFECTPLUGINCOMPONENTS_OFFSET))(this);
		}

		::System::Void _TryDisposeEffectPluginComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYDISPOSEEFFECTPLUGINCOMPONENTS_OFFSET))(this);
		}

		::System::Void _InitEffectAnimState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECTANIMSTATE_OFFSET))(this);
		}

		::System::Void _InitByEffectParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__INITBYEFFECTPARAMS_OFFSET))(this);
		}

		::System::Void _ResetTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETTRANSFORM_OFFSET))(this);
		}

		::System::Void _SyncPropState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCPROPSTATE_OFFSET))(this);
		}

		::System::Void _SyncRecordAnimatorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCRECORDANIMATORSTATE_OFFSET))(this);
		}

		::System::Void _SetEffectUI3DLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SETEFFECTUI3DLAYERS_OFFSET))(this);
		}

		::System::Void _RecoverEffectLayersFromUI3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RECOVEREFFECTLAYERSFROMUI3D_OFFSET))(this);
		}

		::System::Boolean _IsEntityInVisibleState(::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__ISENTITYINVISIBLESTATE_OFFSET))(this, target);
		}

		::System::Boolean _CanFollowTargetVisible(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CANFOLLOWTARGETVISIBLE_OFFSET))(this, entity);
		}

		::System::Void _TickVisiblity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKVISIBLITY_OFFSET))(this);
		}

		::System::Void _TickTimeScale(::System::Single& fTimeScale, ::System::Single& fSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKTIMESCALE_OFFSET))(this, fTimeScale, fSpeed);
		}

		::System::Void _UpdateEffectPerformSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATEEFFECTPERFORMSPEED_OFFSET))(this);
		}

		::System::Void _UpdateShaderSimulationSpeed(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATESHADERSIMULATIONSPEED_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void _OnTargetEntityDispose(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__ONTARGETENTITYDISPOSE_OFFSET))(this, param);
		}

		::System::Void _CheckRenderTextureRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CHECKRENDERTEXTUREREQUEST_OFFSET))(this);
		}

		::System::Void _ReleaseRenderTextureRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RELEASERENDERTEXTUREREQUEST_OFFSET))(this);
		}

		::System::Void _ReplayParticleSystems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYPARTICLESYSTEMS_OFFSET))(this);
		}

		::System::Void _ReplayAnimators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYANIMATORS_OFFSET))(this);
		}

		::System::Void _ResetMazeSkillEffectSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETMAZESKILLEFFECTSETTING_OFFSET))(this);
		}

		::System::Void _ClearTrailRenders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CLEARTRAILRENDERS_OFFSET))(this);
		}

		::System::Void _MoveTrailRenders(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__MOVETRAILRENDERS_OFFSET))(this, offset);
		}

		::System::Single GetAdaptScale(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::EffectScaleAdaptType type)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EffectScaleAdaptType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETADAPTSCALE_OFFSET))(this, entity, type);
		}

		::System::Boolean get_FromUIModel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_FROMUIMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsSelfDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISSELFDESTROYED_OFFSET))(this);
		}

		::System::Boolean get_IsReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISRESET_OFFSET))(this);
		}

		::System::Void set_GoRenderCache(::Class_1_9CBC71DC5240DC00* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_GORENDERCACHE_OFFSET))(this, value);
		}

		::Class_1_9CBC71DC5240DC00* get_GoRenderCache()
		{
			return ((::Class_1_9CBC71DC5240DC00*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_GORENDERCACHE_OFFSET))(this);
		}

		::System::Single get_CurrentLife()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_CURRENTLIFE_OFFSET))(this);
		}

		::System::Boolean get_IsInvisibleByGamePlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISINVISIBLEBYGAMEPLAY_OFFSET))(this);
		}

		::System::Void set_IsInvisibleByGamePlay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_ISINVISIBLEBYGAMEPLAY_OFFSET))(this, value);
		}

		::RPG::Client::MonoEffect* get_OwnerMono()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_OWNERMONO_OFFSET))(this);
		}

		::System::Boolean get_AttachToTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ATTACHTOTIMELINE_OFFSET))(this);
		}
	};
}
