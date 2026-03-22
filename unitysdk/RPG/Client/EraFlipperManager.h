#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_347;
class Class_1_1AFB3F1F454D0FAD;
class Class_1_ECBCF86CDE61CBCA;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManagerDebug; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class EraRegion; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ERAFLIPPERMANAGER_ADDIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x9185CD0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ADDPARTIALFLIPDEVICE_OFFSET UNITYSDK_OFFSET(0x9184C80)
#define RPG_CLIENT_ERAFLIPPERMANAGER_COLLIDERSTATETYPE_OFFSET UNITYSDK_OFFSET(0x9188570)
#define RPG_CLIENT_ERAFLIPPERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9184FC0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_EXITLIGHTDEVICECONTROL_OFFSET UNITYSDK_OFFSET(0x9185A10)
#define RPG_CLIENT_ERAFLIPPERMANAGER_FILLFOLLOWINGPLAYERLIGHTCONEINFO_OFFSET UNITYSDK_OFFSET(0x9186380)
#define RPG_CLIENT_ERAFLIPPERMANAGER_FLIP_OFFSET UNITYSDK_OFFSET(0x9183D10)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GETERASTATETAG_OFFSET UNITYSDK_OFFSET(0x9185C20)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x9188680)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERAREGIONID_OFFSET UNITYSDK_OFFSET(0x9188360)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERASTATETAG_OFFSET UNITYSDK_OFFSET(0x91883C0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTSTATETYPE_OFFSET UNITYSDK_OFFSET(0x9188410)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_FLIPSTATETYPE_OFFSET UNITYSDK_OFFSET(0x9183C80)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISINVERSEALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x9188500)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISLIGHTDEVICETRANSITION_OFFSET UNITYSDK_OFFSET(0x9185BD0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x9184DC0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDYNAMICDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x9184E40)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASANYFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0x9188420)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0x9188490)
#define RPG_CLIENT_ERAFLIPPERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9182600)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISINANYLIGHTPROJECTVOLUME_OFFSET UNITYSDK_OFFSET(0x9185B60)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISINCONTROLLIGHTPROJECTVOLUME_OFFSET UNITYSDK_OFFSET(0x9185A70)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISINLIGHTPROJECTVOLUME_OFFSET UNITYSDK_OFFSET(0x9185AD0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISPARTIALFLIPDEVICEON_OFFSET UNITYSDK_OFFSET(0x9184C20)
#define RPG_CLIENT_ERAFLIPPERMANAGER_MANUALREFRESHDEVICESTATE_OFFSET UNITYSDK_OFFSET(0x9185920)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ONFLIPDEVICETARGETSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9184D40)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ONREGIONVISUALSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x91874C0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ONSWITCHDEVICE_OFFSET UNITYSDK_OFFSET(0x91849F0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_PREDISPOSE_OFFSET UNITYSDK_OFFSET(0x9185000)
#define RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x9186120)
#define RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEPARTIALFLIPDEVICE_OFFSET UNITYSDK_OFFSET(0x9184CE0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_SETPROPERAFLIPVISIBLE_OFFSET UNITYSDK_OFFSET(0x9184590)
#define RPG_CLIENT_ERAFLIPPERMANAGER_SET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x9188690)
#define RPG_CLIENT_ERAFLIPPERMANAGER_SHOULDDELAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9186330)
#define RPG_CLIENT_ERAFLIPPERMANAGER_STARTLIGHTDEVICECONTROL_OFFSET UNITYSDK_OFFSET(0x9185970)
#define RPG_CLIENT_ERAFLIPPERMANAGER_TRYFLIP_OFFSET UNITYSDK_OFFSET(0x9183900)
#define RPG_CLIENT_ERAFLIPPERMANAGER_TRYPRESETCOLLIDERBEFOREFLIP_OFFSET UNITYSDK_OFFSET(0x91837F0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9184F20)
#define RPG_CLIENT_ERAFLIPPERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x91823F0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ENTERERAREGION_OFFSET UNITYSDK_OFFSET(0x9182D10)
#define RPG_CLIENT_ERAFLIPPERMANAGER__GRAPHICQUALITYCHANGE_OFFSET UNITYSDK_OFFSET(0x91882E0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__INITGROUP_OFFSET UNITYSDK_OFFSET(0x9186410)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONENTER_OFFSET UNITYSDK_OFFSET(0x91835E0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONLEAVE_OFFSET UNITYSDK_OFFSET(0x9186D60)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONERAFLIPREGIONSTATESYNC_OFFSET UNITYSDK_OFFSET(0x9187980)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONGROUPLOADED_OFFSET UNITYSDK_OFFSET(0x91877C0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONPLAYERMAPTELEPORT_OFFSET UNITYSDK_OFFSET(0x9187B60)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONTEAMLEADERCHANGE_OFFSET UNITYSDK_OFFSET(0x91881F0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONTELEPORTFINISH_OFFSET UNITYSDK_OFFSET(0x9187BB0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__PROCESSLEAVEREGION_OFFSET UNITYSDK_OFFSET(0x9186DB0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__REFRESHGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x91841D0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__SETPROPVISIBLE_OFFSET UNITYSDK_OFFSET(0x9184600)
#define RPG_CLIENT_ERAFLIPPERMANAGER___ONERAFLIPREGIONSTATESYNC_B__35_0_OFFSET UNITYSDK_OFFSET(0x91886A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager_TypeDefinitionIndex = 47915;

	class EraFlipperManager : public ::System::Object
	{
	public:
		// static const ::System::String* EraState1Tag; // 0x0
		// static const ::System::String* EraState2Tag; // 0x0
		// static const ::System::String* EraFlipperCommonConfigPath; // 0x0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _IgnoreEntityList; // 0x10
		::Class_1_ECBCF86CDE61CBCA* CurrentStageRegion; // 0x18
		::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* _AllActiveStageRegionsWithEra; // 0x20
		::RPG::Client::AdventurePhase* _AdventurePhase; // 0x28
		::Class_1_1AFB3F1F454D0FAD* _PartialFlipDevicePlugin; // 0x30
		::RPG::Client::EraFlipperManagerDebug* _DebugMono; // 0x38
		::RPG::Client::EraFlipperCommonConfig* _CommonConfig_k__BackingField; // 0x40
		::RPG::GameCore::EraRegion* _CurrentEraRegion; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _LockStreamingGroups; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* AlwaysVisibleGroupsDic; // 0x58
		::RPG::GameCore::EraFlipperConfig* _FlipperConfig; // 0x60
		::System::Boolean _ManualFlip; // 0x68
		::System::Boolean FollowDamping; // 0x69
		::RPG::GameCore::EraStateType _CurrentEraState; // 0x6C
		::System::Boolean _PreviewSetColliderState; // 0x70
		::System::Boolean _Initialized; // 0x71
		::System::Boolean _InTeleport; // 0x72
		::System::Boolean _PendingRefreshTaPlugin; // 0x73
		::System::Single _FlipPerformDelayTime; // 0x74

		::System::Void _ctor(::RPG::Client::AdventurePhase* adventurePhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__CTOR_OFFSET))(this, adventurePhase);
		}

		::System::Void Init(::RPG::GameCore::EraFlipperConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraFlipperConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_INIT_OFFSET))(this, config);
		}

		::System::Void TryPresetColliderBeforeFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_TRYPRESETCOLLIDERBEFOREFLIP_OFFSET))(this);
		}

		::System::Void TryFlip(::System::Boolean manual, ::System::Boolean blockWait)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_TRYFLIP_OFFSET))(this, manual, blockWait);
		}

		::System::Void Flip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_FLIP_OFFSET))(this);
		}

		::System::Void SetPropEraFlipVisible(::RPG::GameCore::GameEntity* groupEntity, ::RPG::GameCore::GameEntity* entity, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_SETPROPERAFLIPVISIBLE_OFFSET))(this, groupEntity, entity, visible);
		}

		::System::Void OnSwitchDevice(::RPG::Client::PartialFlipDeviceComponent* device)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ONSWITCHDEVICE_OFFSET))(this, device);
		}

		::System::Boolean IsPartialFlipDeviceOn(::System::UInt32 propEntityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISPARTIALFLIPDEVICEON_OFFSET))(this, propEntityID);
		}

		::System::Void AddPartialFlipDevice(::RPG::Client::PartialFlipDeviceComponent* partialFlipDeviceComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ADDPARTIALFLIPDEVICE_OFFSET))(this, partialFlipDeviceComponent);
		}

		::System::Void RemovePartialFlipDevice(::RPG::Client::PartialFlipDeviceComponent* partialFlipDeviceComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEPARTIALFLIPDEVICE_OFFSET))(this, partialFlipDeviceComponent);
		}

		::System::Void OnFlipDeviceTargetStateChange(::RPG::Client::PartialFlipDeviceComponent* device, ::RPG::Client::FlipDevicePoint* from, ::RPG::Client::FlipDevicePoint* to)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ONFLIPDEVICETARGETSTATECHANGE_OFFSET))(this, device, from, to);
		}

		::System::Boolean HasAnyDeviceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDEVICEACTIVE_OFFSET))(this);
		}

		::System::Boolean HasAnyDynamicDeviceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDYNAMICDEVICEACTIVE_OFFSET))(this);
		}

		::System::Void Update(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_UPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void PreDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_PREDISPOSE_OFFSET))(this);
		}

		::System::Void ManualRefreshDeviceState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_MANUALREFRESHDEVICESTATE_OFFSET))(this);
		}

		::System::Void StartLightDeviceControl(::RPG::GameCore::GameEntity* propEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_STARTLIGHTDEVICECONTROL_OFFSET))(this, propEntity);
		}

		::System::Void ExitLightDeviceControl(::RPG::GameCore::GameEntity* propEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_EXITLIGHTDEVICECONTROL_OFFSET))(this, propEntity);
		}

		::System::Boolean IsInControlLightProjectVolume(::RPG::GameCore::GameEntity* ownerRef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISINCONTROLLIGHTPROJECTVOLUME_OFFSET))(this, ownerRef);
		}

		::System::Boolean IsInLightProjectVolume(::RPG::Client::PartialFlipDeviceComponent* device, ::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISINLIGHTPROJECTVOLUME_OFFSET))(this, device, position);
		}

		::System::Boolean IsInAnyLightProjectVolume(::RPG::GameCore::GameEntity* ownerRef, ::RPG::Client::PartialFlipDeviceComponent*& device)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::PartialFlipDeviceComponent*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISINANYLIGHTPROJECTVOLUME_OFFSET))(this, ownerRef, device);
		}

		::System::Boolean get_IsLightDeviceTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISLIGHTDEVICETRANSITION_OFFSET))(this);
		}

		static ::System::String* GetEraStateTag(::RPG::GameCore::EraStateType eraStateType)
		{
			return ((::System::String*(*)(::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GETERASTATETAG_OFFSET))(eraStateType);
		}

		::System::Void AddIgnoreEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ADDIGNOREENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveIgnoreEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEIGNOREENTITY_OFFSET))(this, entity);
		}

		::System::Boolean ShouldDelayPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_SHOULDDELAYPERFORMANCE_OFFSET))(this);
		}

		::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> FillFollowingPlayerLightConeInfo()
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_FILLFOLLOWINGPLAYERLIGHTCONEINFO_OFFSET))(this);
		}

		::System::Void _EnterEraRegion(::Class_1_ECBCF86CDE61CBCA* stageRegion)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ENTERERAREGION_OFFSET))(this, stageRegion);
		}

		::System::Void _OnCurrentRegionEnter(::Class_1_ECBCF86CDE61CBCA* region)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONENTER_OFFSET))(this, region);
		}

		::System::Void _OnCurrentRegionLeave(::Class_1_ECBCF86CDE61CBCA* region)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONLEAVE_OFFSET))(this, region);
		}

		::System::Void _ProcessLeaveRegion(::Class_1_ECBCF86CDE61CBCA* region)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__PROCESSLEAVEREGION_OFFSET))(this, region);
		}

		::System::Void OnRegionVisualStateChange(::Class_1_ECBCF86CDE61CBCA* arg1, ::RPG::GameCore::StageRegionActiveState arg2, ::RPG::GameCore::StageRegionActiveState arg3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ONREGIONVISUALSTATECHANGE_OFFSET))(this, arg1, arg2, arg3);
		}

		::System::Void _OnGroupLoaded(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONGROUPLOADED_OFFSET))(this, arg);
		}

		::System::Void _OnEraFlipRegionStateSync(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONERAFLIPREGIONSTATESYNC_OFFSET))(this, arg);
		}

		::System::Void _OnPlayerMapTeleport(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONPLAYERMAPTELEPORT_OFFSET))(this, arg);
		}

		::System::Void _OnTeleportFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONTELEPORTFINISH_OFFSET))(this, arg);
		}

		::System::Void _InitGroup(::RPG::GameCore::GameEntity* groupEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__INITGROUP_OFFSET))(this, groupEntity);
		}

		::System::Void _RefreshGroupState(::RPG::GameCore::GameEntity* groupEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__REFRESHGROUPSTATE_OFFSET))(this, groupEntity);
		}

		::System::Void _SetPropVisible(::RPG::GameCore::GameEntity* groupEntity, ::RPG::GameCore::GameEntity* entity, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__SETPROPVISIBLE_OFFSET))(this, groupEntity, entity, visible);
		}

		::System::Void _OnTeamLeaderChange(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONTEAMLEADERCHANGE_OFFSET))(this, evt);
		}

		::System::Void _GraphicQualityChange(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__GRAPHICQUALITYCHANGE_OFFSET))(this, evt);
		}

		::System::Int32 get_CurrentEraRegionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERAREGIONID_OFFSET))(this);
		}

		::System::String* get_CurrentEraStateTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERASTATETAG_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType get_CurrentStateType()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTSTATETYPE_OFFSET))(this);
		}

		::System::Boolean HasAnyFollowPlayerDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASANYFOLLOWPLAYERDEVICE_OFFSET))(this);
		}

		::System::Boolean HasFollowPlayerDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASFOLLOWPLAYERDEVICE_OFFSET))(this);
		}

		::System::Boolean get_IsInverseAllCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISINVERSEALLCOLLIDER_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType ColliderStateType()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_COLLIDERSTATETYPE_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType get_FlipStateType()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_FLIPSTATETYPE_OFFSET))(this);
		}

		::RPG::Client::EraFlipperCommonConfig* get_CommonConfig()
		{
			return ((::RPG::Client::EraFlipperCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_COMMONCONFIG_OFFSET))(this);
		}

		::System::Void set_CommonConfig(::RPG::Client::EraFlipperCommonConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_SET_COMMONCONFIG_OFFSET))(this, value);
		}

		::System::Boolean __OnEraFlipRegionStateSync_b__35_0(::RPG::GameCore::EraRegion* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___ONERAFLIPREGIONSTATESYNC_B__35_0_OFFSET))(this, x);
		}
	};
}
