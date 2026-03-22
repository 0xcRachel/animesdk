#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_347;
class Class_1_303D5A33D1401D59;
class Class_1_5B72BB58011DDDD8;
class Class_1_8A6989C352B0F0F0;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class SetFlipperLightDeviceFollowPlayer; }
namespace RPG::GameCore { class SetFlipperLightDeviceRangeFollowPlayer; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace VLB { class VolumetricLightBeam; }

#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_CHANGEPOINT_OFFSET UNITYSDK_OFFSET(0x9A4AB80)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A4CAC0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ENDTWINKLE_OFFSET UNITYSDK_OFFSET(0x9A4EDD0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_FILLTAPLUGIN_OFFSET UNITYSDK_OFFSET(0x9A4B380)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_FOLLOWPLAYER_OFFSET UNITYSDK_OFFSET(0x9A4DF50)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GETLIGHTCONEINFO_OFFSET UNITYSDK_OFFSET(0x9A4C770)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GETRANGEFOLLOWLIMITRANGE_OFFSET UNITYSDK_OFFSET(0x9A4CEE0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ALLFLIPDEVICEPOINTLIST_OFFSET UNITYSDK_OFFSET(0x9A50010)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_CURRENTPOINTAT_OFFSET UNITYSDK_OFFSET(0x9A50770)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_CURRENTPOINTRADIUS_OFFSET UNITYSDK_OFFSET(0x9A507C0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ISINFOLLOWBLEND_OFFSET UNITYSDK_OFFSET(0x9A507A0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHTBEAM_OFFSET UNITYSDK_OFFSET(0x9A50750)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHTCONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x9A50710)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHT_OFFSET UNITYSDK_OFFSET(0x9A50730)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9A506F0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGUPWARD_OFFSET UNITYSDK_OFFSET(0x9A4CA80)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ROTATERINGANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x9A507B0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_TURNBLEND_OFFSET UNITYSDK_OFFSET(0x9A50780)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET__PROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A50830)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A49390)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9A4AFE0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISFOLLOWPLAYER_OFFSET UNITYSDK_OFFSET(0x9A4CE80)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISFOLLOWTURNON_OFFSET UNITYSDK_OFFSET(0x9A4CDD0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINRANGEFOLLOW_OFFSET UNITYSDK_OFFSET(0x9A4CE30)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINTWINKLE_OFFSET UNITYSDK_OFFSET(0x9A4CD80)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINVERSECOLLIDER_OFFSET UNITYSDK_OFFSET(0x9A4CF40)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISLIGHTMOVECHANGE_OFFSET UNITYSDK_OFFSET(0x9A4CC90)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISRENDERACTIVE_OFFSET UNITYSDK_OFFSET(0x9A4C630)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x9A4CD30)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_MANUALREFRESH_OFFSET UNITYSDK_OFFSET(0x9A4D0D0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_NEEDPRECESSFOLLOWPLAYER_OFFSET UNITYSDK_OFFSET(0x9A4F100)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x9A4A410)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x9A4D690)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONENTITYBEFOREDYING_OFFSET UNITYSDK_OFFSET(0x9A4FEC0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONEXITCONTROL_OFFSET UNITYSDK_OFFSET(0x9A4C9A0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONSTREAMINGINSTANCECHANGE_OFFSET UNITYSDK_OFFSET(0x9A4D3D0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_OVERRIDEFOLLOWCOLLIDERMODE_OFFSET UNITYSDK_OFFSET(0x9A4D010)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_RANGEFOLLOWPLAYER_OFFSET UNITYSDK_OFFSET(0x9A4E7F0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_REINIT_OFFSET UNITYSDK_OFFSET(0x9A4AB00)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A4B080)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHTBEAM_OFFSET UNITYSDK_OFFSET(0x9A50760)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHTCONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x9A50720)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHT_OFFSET UNITYSDK_OFFSET(0x9A50740)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9A50700)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGUPWARD_OFFSET UNITYSDK_OFFSET(0x9A4CAA0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_TURNBLEND_OFFSET UNITYSDK_OFFSET(0x9A50790)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET__PROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A50840)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_STARTTWINKLE_OFFSET UNITYSDK_OFFSET(0x9A4EB20)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_UPDATEFOLLOW_OFFSET UNITYSDK_OFFSET(0x9A4F2B0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_UPDATETWINKLE_OFFSET UNITYSDK_OFFSET(0x9A4EFD0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__COLLECTAFFECTBLOCKANDITEM_OFFSET UNITYSDK_OFFSET(0x9A4A160)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A50850)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONERAFLIPLIGHTROTATEEND_OFFSET UNITYSDK_OFFSET(0x9A504D0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONPROPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9A50110)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x9A4D730)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONREGIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9A501A0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A4A2C0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A4CB40)

namespace RPG::Client
{
	inline static constexpr unsigned int PartialFlipDeviceComponent_TypeDefinitionIndex = 58430;

	class PartialFlipDeviceComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::EraFlipperManager* _FlipperManager; // 0x18
		::RPG::GameCore::GameEntity* _RangeFollowScaleTarget; // 0x20
		::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* _FollowConfig; // 0x28
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* _ActivePointAffectedBlockAndItems; // 0x30
		::RPG::Client::FlipDevicePoint* _CurrentPoint; // 0x38
		::RPG::Client::Promises::Promise* _ChangePointPromise; // 0x40
		::RPG::GameCore::GameEntity* _FollowEntity; // 0x48
		::VLB::VolumetricLightBeam* _RingLightBeam_k__BackingField; // 0x50
		::UnityEngine::Transform* _RingTransform_k__BackingField; // 0x58
		::RPG::GameCore::PropComponent* __PropComponent_k__BackingField; // 0x60
		::UnityEngine::Light* _RingLight_k__BackingField; // 0x68
		::RPG::Client::EraFlipperCommonConfig* _CommonConfig; // 0x70
		::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* _RangeFollowConfig; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::FlipDevicePoint*>* _FlipDevicePointList; // 0x80
		::UnityEngine::Transform* _RingLightConeTransform_k__BackingField; // 0x88
		::System::Single _BeamRangeDistance; // 0x90
		::System::Single _RangFollowVelocity; // 0x94
		::System::Boolean _IsStatic; // 0x98
		::System::Nullable_1<::System::Boolean> _TwinkleOn; // 0x99
		::System::Single _TurnBlendTimeAcc; // 0x9C
		::UnityEngine::Vector3 _FollowVelocity; // 0xA0
		::System::Single _TurnOnTime; // 0xAC
		::System::Single _BeamFadeStartRange; // 0xB0
		::System::Single _TwinkleInterval; // 0xB4
		::System::Single _RangeCalRadius; // 0xB8
		::UnityEngine::Vector3 _RingUpward_k__BackingField; // 0xBC
		::System::Single _CurrentSecondEdgeRadius; // 0xC8
		::System::Single _CurrentSecondEdgeVelocity; // 0xCC
		::System::Nullable_1<::System::Single> _RangeFollowTransition; // 0xD0
		::System::Single _TwinkleTimeAcc; // 0xD8
		::System::Boolean _TurnBlend_k__BackingField; // 0xDC
		::System::Boolean _IsManualOp; // 0xDD
		::System::Boolean _TwinkleChange; // 0xDE
		::System::Nullable_1<::System::Boolean> _OverrideFollowInverseCollider; // 0xDF
		::System::Int32 _TaPluginIndex; // 0xE4
		::System::Single _RotateSpeed; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::PropComponent* propComponent, ::Il2CppArray<::System::String*>* pointList, ::Il2CppArray<::System::String*>* mappingLists, ::System::Boolean isStatic, ::System::Single overrideTurnOnTime, ::System::Single overrideRotateSpeed, ::System::Single beamRangeDistance, ::System::Single beamFadeStartRange)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_INITCOMPONENT_OFFSET))(this, propComponent, pointList, mappingLists, isStatic, overrideTurnOnTime, overrideRotateSpeed, beamRangeDistance, beamFadeStartRange);
		}

		::System::Void ReInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_REINIT_OFFSET))(this);
		}

		::System::Void ChangePoint(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_CHANGEPOINT_OFFSET))(this, i);
		}

		::System::Void SetActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SETACTIVE_OFFSET))(this, active);
		}

		::System::Void FillTaPlugin(::System::Single fDeltaTime, ::Class_1_5B72BB58011DDDD8* projectSimulate, ::System::Int32 index, ::System::Boolean forRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_5B72BB58011DDDD8*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_FILLTAPLUGIN_OFFSET))(this, fDeltaTime, projectSimulate, index, forRemove);
		}

		::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> GetLightConeInfo()
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GETLIGHTCONEINFO_OFFSET))(this);
		}

		::System::Void OnExitControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONEXITCONTROL_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RingUpward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGUPWARD_OFFSET))(this);
		}

		::System::Void set_RingUpward(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGUPWARD_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsRenderActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISRENDERACTIVE_OFFSET))(this);
		}

		::System::Boolean IsLightMoveChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISLIGHTMOVECHANGE_OFFSET))(this);
		}

		::System::Boolean IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISSTATIC_OFFSET))(this);
		}

		::System::Boolean IsInTwinkle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINTWINKLE_OFFSET))(this);
		}

		::System::Boolean IsFollowTurnOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISFOLLOWTURNON_OFFSET))(this);
		}

		::System::Boolean IsInRangeFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINRANGEFOLLOW_OFFSET))(this);
		}

		::System::Boolean IsFollowPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISFOLLOWPLAYER_OFFSET))(this);
		}

		::System::Single GetRangeFollowLimitRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GETRANGEFOLLOWLIMITRANGE_OFFSET))(this);
		}

		::System::Boolean IsInverseCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINVERSECOLLIDER_OFFSET))(this);
		}

		::System::Void OverrideFollowColliderMode(::System::Boolean reset, ::System::Boolean inverse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_OVERRIDEFOLLOWCOLLIDERMODE_OFFSET))(this, reset, inverse);
		}

		::System::Void ManualRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_MANUALREFRESH_OFFSET))(this);
		}

		::System::Void OnStreamingInstanceChange(::Class_1_8A6989C352B0F0F0* instance, ::Class_1_303D5A33D1401D59* block)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONSTREAMINGINSTANCECHANGE_OFFSET))(this, instance, block);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONBEFOREMODELARTUNLOAD_OFFSET))(this, entity);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONAFTERMODELARTLOAD_OFFSET))(this, entity);
		}

		::System::Void StartTwinkle(::System::Single fInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_STARTTWINKLE_OFFSET))(this, fInterval);
		}

		::System::Void EndTwinkle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ENDTWINKLE_OFFSET))(this);
		}

		::System::Void UpdateTwinkle(::System::Single fDeltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_UPDATETWINKLE_OFFSET))(this, fDeltaTime);
		}

		::System::Boolean NeedPrecessFollowPlayer(::RPG::GameCore::GameEntity* sourcePointEntity, ::RPG::Client::Promises::Promise*& promises)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_NEEDPRECESSFOLLOWPLAYER_OFFSET))(this, sourcePointEntity, promises);
		}

		::System::Void RangeFollowPlayer(::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* config, ::RPG::GameCore::GameEntity* scaleTarget)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_RANGEFOLLOWPLAYER_OFFSET))(this, config, scaleTarget);
		}

		::System::Void FollowPlayer(::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* configRef, ::RPG::GameCore::GameEntity* lookAtPointEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_FOLLOWPLAYER_OFFSET))(this, configRef, lookAtPointEntity);
		}

		::System::Void UpdateFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_UPDATEFOLLOW_OFFSET))(this);
		}

		::System::Void OnEntityBeforeDying()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONENTITYBEFOREDYING_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::FlipDevicePoint*>* get_AllFlipDevicePointList()
		{
			return ((::Il2CppArray<::RPG::Client::FlipDevicePoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ALLFLIPDEVICEPOINTLIST_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _CollectAffectBlockAndItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__COLLECTAFFECTBLOCKANDITEM_OFFSET))(this);
		}

		::System::Void _OnPropStateChange(::Class_0_16E4307DCC419505_347* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONPROPSTATECHANGE_OFFSET))(this, e);
		}

		::System::Void _OnRegionStateChange(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONREGIONSTATECHANGE_OFFSET))(this, param);
		}

		::System::Void _OnRefreshState(::System::UInt32 runtimeID, ::RPG::GameCore::PropState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONREFRESHSTATE_OFFSET))(this, runtimeID, state);
		}

		::System::Void _OnEraFlipLightRotateEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONERAFLIPLIGHTROTATEEND_OFFSET))(this, arg);
		}

		::UnityEngine::Transform* get_RingTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGTRANSFORM_OFFSET))(this);
		}

		::System::Void set_RingTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGTRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_RingLightConeTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHTCONETRANSFORM_OFFSET))(this);
		}

		::System::Void set_RingLightConeTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHTCONETRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::Light* get_RingLight()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHT_OFFSET))(this);
		}

		::System::Void set_RingLight(::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHT_OFFSET))(this, value);
		}

		::VLB::VolumetricLightBeam* get_RingLightBeam()
		{
			return ((::VLB::VolumetricLightBeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHTBEAM_OFFSET))(this);
		}

		::System::Void set_RingLightBeam(::VLB::VolumetricLightBeam* value)
		{
			return ((::System::Void(*)(::PVOID, ::VLB::VolumetricLightBeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHTBEAM_OFFSET))(this, value);
		}

		::RPG::Client::FlipDevicePoint* get_CurrentPointAt()
		{
			return ((::RPG::Client::FlipDevicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_CURRENTPOINTAT_OFFSET))(this);
		}

		::System::Boolean get_TurnBlend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_TURNBLEND_OFFSET))(this);
		}

		::System::Void set_TurnBlend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_TURNBLEND_OFFSET))(this, value);
		}

		::System::Boolean get_IsInFollowBlend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ISINFOLLOWBLEND_OFFSET))(this);
		}

		::System::Single get_RotateRingAngularSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ROTATERINGANGULARSPEED_OFFSET))(this);
		}

		::System::Single get_CurrentPointRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_CURRENTPOINTRADIUS_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* get__PropComponent()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET__PROPCOMPONENT_OFFSET))(this);
		}

		::System::Void set__PropComponent(::RPG::GameCore::PropComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET__PROPCOMPONENT_OFFSET))(this, value);
		}
	};
}
