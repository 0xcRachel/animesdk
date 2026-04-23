#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TransformComponent_ScaleSource.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_3C1413457115002E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_4B1D94091324F74F;
class Class_1_70443244DF08F2E0;
class TransformVersionTracker;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_1_OFFSET UNITYSDK_OFFSET(0xC193AB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_OFFSET UNITYSDK_OFFSET(0xC193380)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_CANCELSMOOTHFOLLOW_OFFSET UNITYSDK_OFFSET(0xC193F30)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F9B210)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_DISTANCE_OFFSET UNITYSDK_OFFSET(0xC192230)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0xC195BB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC1959C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESYNCTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F9C450)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GETLOOKATPOS_OFFSET UNITYSDK_OFFSET(0x9F9B670)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDENTITY_OFFSET UNITYSDK_OFFSET(0xC193140)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC193130)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENABLEATTACH_OFFSET UNITYSDK_OFFSET(0xC193160)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENTITYLODCURRENTREGIONID_OFFSET UNITYSDK_OFFSET(0xC194F10)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xC192740)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0xC194D00)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC196C20)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xC194EF0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_LOCKEDFACETARGET_OFFSET UNITYSDK_OFFSET(0xC194E40)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOSFORCENEWEST_OFFSET UNITYSDK_OFFSET(0x9F9CAA0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOS_OFFSET UNITYSDK_OFFSET(0x9F9CA00)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_PITCHANGLE_OFFSET UNITYSDK_OFFSET(0xC191F90)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xC192A90)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROLLANGLE_OFFSET UNITYSDK_OFFSET(0xC1920E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC1923B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_SELFSCALE_OFFSET UNITYSDK_OFFSET(0x9F9CDB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_TARGETYAWANGLE_OFFSET UNITYSDK_OFFSET(0xC196D70)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_UP_OFFSET UNITYSDK_OFFSET(0xC192DE0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_USEATTACHEDSCALE_OFFSET UNITYSDK_OFFSET(0xC193170)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDPOS_OFFSET UNITYSDK_OFFSET(0x9F9C9E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALESOURCETRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F9CCF0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALE_OFFSET UNITYSDK_OFFSET(0x9F92DB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLEWITHMODELCENTRED_OFFSET UNITYSDK_OFFSET(0x9F9CDD0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0xC191D70)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ATTACHEDSCALE_OFFSET UNITYSDK_OFFSET(0xC196C80)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ISYAWANGLESMOOTHCHANGESTART_OFFSET UNITYSDK_OFFSET(0xC196D80)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__SMOOTHENABLED_OFFSET UNITYSDK_OFFSET(0xC193180)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__WORLDSCALESOURCE_OFFSET UNITYSDK_OFFSET(0xC196DA0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9F9B3C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9F9C600)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKSMOOTHFOLLOWSTATE_OFFSET UNITYSDK_OFFSET(0xC193EB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F9C5A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEWBEGIN_OFFSET UNITYSDK_OFFSET(0xC194DA0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEW_OFFSET UNITYSDK_OFFSET(0xC194600)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x9F9C7C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x9F9C990)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_PAUSEATTACH_OFFSET UNITYSDK_OFFSET(0xC193840)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_POSTINITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9F9B4A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_REFRESHSCALETOMODEL_OFFSET UNITYSDK_OFFSET(0x9F9BC60)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_RELEASEATTACH_OFFSET UNITYSDK_OFFSET(0xC193430)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xC196E00)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_RESUMEATTACH_OFFSET UNITYSDK_OFFSET(0xC1939C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_1_OFFSET UNITYSDK_OFFSET(0xC194510)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_OFFSET UNITYSDK_OFFSET(0xC1942D0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHINFO_OFFSET UNITYSDK_OFFSET(0xC193680)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHMENTINDEPENDENTTRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0xC195DF0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETROOTLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0x9F82950)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETSCALEBYWORLDSCALE_OFFSET UNITYSDK_OFFSET(0x9F9BF60)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETUPSMOOTHFOLLOW_OFFSET UNITYSDK_OFFSET(0xC193CF0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETWORLDPOS_OFFSET UNITYSDK_OFFSET(0xC194210)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ATTACHEDENTITY_OFFSET UNITYSDK_OFFSET(0xC193150)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ENTITYLODCURRENTREGIONID_OFFSET UNITYSDK_OFFSET(0xC194F20)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xC194F00)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_LOCKEDFACETARGET_OFFSET UNITYSDK_OFFSET(0xC194EE0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_MODELWORLDPOS_OFFSET UNITYSDK_OFFSET(0x9F9BEE0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_PITCHANGLE_OFFSET UNITYSDK_OFFSET(0xC191FA0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROLLANGLE_OFFSET UNITYSDK_OFFSET(0xC1920F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC192460)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_SELFSCALE_OFFSET UNITYSDK_OFFSET(0x9F9C140)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_WORLDPOS_OFFSET UNITYSDK_OFFSET(0x9F849A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLEWITHMODELCENTRED_OFFSET UNITYSDK_OFFSET(0x9F92CE0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0xC191D80)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLEEND_OFFSET UNITYSDK_OFFSET(0x9F9B620)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLESTART_OFFSET UNITYSDK_OFFSET(0x9F9B4F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TICKPOS_OFFSET UNITYSDK_OFFSET(0x9F9C330)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TICKUNITYGOSYNC_OFFSET UNITYSDK_OFFSET(0xC194F30)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x9F9C1C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0x9F9BB40)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xC196FE0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9B180)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONATTACHENTITYVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0xC196910)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONPITCHANGLECHANGED_OFFSET UNITYSDK_OFFSET(0xC192000)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHENABLEATTACH_OFFSET UNITYSDK_OFFSET(0xC196960)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHFORMATION_OFFSET UNITYSDK_OFFSET(0xC196460)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0xC1964F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONROLLANGLECHANGED_OFFSET UNITYSDK_OFFSET(0xC192150)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONYAWANGLECHANGED_OFFSET UNITYSDK_OFFSET(0xC191E60)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETATTACHTRANSBYTARGETPOS_OFFSET UNITYSDK_OFFSET(0xC1943E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATIONSMOOTHLY_OFFSET UNITYSDK_OFFSET(0xC195630)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATION_OFFSET UNITYSDK_OFFSET(0xC194070)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOS_OFFSET UNITYSDK_OFFSET(0xC1966A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATIONWITHMODELCENTRED_OFFSET UNITYSDK_OFFSET(0xC196270)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATION_OFFSET UNITYSDK_OFFSET(0xC1925D0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETTRANSFORMTRACKER_OFFSET UNITYSDK_OFFSET(0xC1931E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__TICKPOS_OFFSET UNITYSDK_OFFSET(0xC195EA0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__TICKUNITYGOSYNC_OFFSET UNITYSDK_OFFSET(0xC194F90)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__TICKYAWANGLETOTARGET_OFFSET UNITYSDK_OFFSET(0xC195FC0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__UPDATESMOOTHPOSTOTARGET_OFFSET UNITYSDK_OFFSET(0xC196590)
#define RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC197010)
#define RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC197000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransformComponent_TypeDefinitionIndex = 53217;

	class TransformComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickUnityGOSyncMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(TransformComponent_TypeDefinitionIndex)->GetStaticField(0x69BB0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickYawAngleToTargetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(TransformComponent_TypeDefinitionIndex)->GetStaticField(0x69BB8);
		}
		::System::Action* OnPositionChange; // 0x18
		::UnityEngine::Transform* _AttachedTransform; // 0x20
		::Struct_2_3C1413457115002E _PausedAttachPointEntry; // 0x28
		::UnityEngine::Transform* _SelfAttachPoint; // 0x58
		::RPG::GameCore::GameEntity* _AttachedEntity_k__BackingField; // 0x60
		::Struct_2_3C1413457115002E _LastAttachPointEntry; // 0x68
		::Class_1_70443244DF08F2E0* _dataViewSnapshot; // 0x98
		::System::Action_1<::RPG::MVector3>* OnScaleChanged; // 0xA0
		::UnityEngine::Transform* _RootTransform; // 0xA8
		::RPG::GameCore::TransformComponent* _LockedFaceTarget; // 0xB0
		::TransformVersionTracker* _TransformTracker; // 0xB8
		::Class_1_4B1D94091324F74F* _SmoothFollowAgent; // 0xC0
		::System::Single _TargetYawAngle; // 0xC8
		::System::Single _PitchAngle; // 0xCC
		::System::UInt32 _EntityLodCurrentRegionID_k__BackingField; // 0xD0
		::System::Boolean _IsStatic; // 0xD4
		::System::Boolean _PauseAttachRelative; // 0xD5
		::System::Boolean _LockPosition; // 0xD6
		::RPG::MVector3 _WorldPosCacheOnAttach; // 0xD8
		::UnityEngine::Vector3 _RootLocalOffset; // 0xE4
		::RPG::MVector3 _SelfScale; // 0xF0
		::System::Single _RollAngle; // 0xFC
		::System::UInt32 _RegisterVisibleChangeEntityID; // 0x100
		::RPG::MVector3 _WorldPos; // 0x104
		::System::UInt32 _TransformVersion; // 0x110
		::System::Boolean _CachePauseStateUtilResume; // 0x114
		::System::Boolean _EnableAttach; // 0x115
		::System::Single _YawAngleCacheOnAttach; // 0x118
		::System::Single _YawAngle; // 0x11C
		::System::Int32 _LastLateUpdateFrame; // 0x120
		::System::Boolean _IsSelfTracker; // 0x124
		::System::Boolean _LockRotation; // 0x125
		::System::Boolean _IndenpendentTransformMode; // 0x126
		::System::Boolean _IsAttachPaused; // 0x127
		::System::Single _YawAngleSmoothDuration; // 0x128
		::System::Boolean _DisableAttachWhenTargetInvisible; // 0x12C
		::System::Boolean _YawAngleSmoothWithModelCentred; // 0x12D
		::System::Boolean _UseSelfAttachPointFollow; // 0x12E
		::System::Boolean _UseAttachedScale; // 0x12F
		::RPG::MVector3 _AttachedWorldOffset; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void SetRootLocalOffset(::RPG::MVector3 offset, ::System::Boolean refreshRoot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETROOTLOCALOFFSET_OFFSET))(this, offset, refreshRoot);
		}

		::System::Void PostInitComponent(::RPG::GameCore::EntityType eEntityType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_POSTINITCOMPONENT_OFFSET))(this, eEntityType);
		}

		::System::Void SmoothChangeYawAngleStart(::System::Single targetYawAngle, ::System::Single duration, ::System::Boolean useModelCentredYaw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLESTART_OFFSET))(this, targetYawAngle, duration, useModelCentredYaw);
		}

		::System::Void SmoothChangeYawAngleEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLEEND_OFFSET))(this);
		}

		::RPG::MVector3 GetLookAtPos(::RPG::GameCore::GameEntity* pTargetEntity, ::System::Boolean bUseTargetTeamFormationPos)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GETLOOKATPOS_OFFSET))(this, pTargetEntity, bUseTargetTeamFormationPos);
		}

		::RPG::MVector3 TransformVector(::RPG::MVector3 vDir)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TRANSFORMVECTOR_OFFSET))(this, vDir);
		}

		::System::Void RefreshScaleToModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_REFRESHSCALETOMODEL_OFFSET))(this);
		}

		::System::Void SetScaleByWorldScale(::RPG::MVector3 vNewWorldScale)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETSCALEBYWORLDSCALE_OFFSET))(this, vNewWorldScale);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void TickPos(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TICKPOS_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ForceSyncTransform(::System::Boolean ignoreVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESYNCTRANSFORM_OFFSET))(this, ignoreVersion);
		}

		::System::Void LockTransform(::System::Boolean lockPosition, ::System::Boolean lockRotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKTRANSFORM_OFFSET))(this, lockPosition, lockRotation);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::RPG::MVector3 get_WorldPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDPOS_OFFSET))(this);
		}

		::System::Void set_WorldPos(::RPG::MVector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_WORLDPOS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ModelWorldPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOS_OFFSET))(this);
		}

		::System::Void set_ModelWorldPos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_MODELWORLDPOS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ModelWorldPosForceNewest()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOSFORCENEWEST_OFFSET))(this);
		}

		::UnityEngine::Transform* get_WorldScaleSourceTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALESOURCETRANSFORM_OFFSET))(this);
		}

		::RPG::MVector3 get_WorldScale()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALE_OFFSET))(this);
		}

		::RPG::MVector3 get_SelfScale()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_SELFSCALE_OFFSET))(this);
		}

		::System::Void set_SelfScale(::RPG::MVector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_SELFSCALE_OFFSET))(this, value);
		}

		::System::Single get_YawAngleWithModelCentred()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLEWITHMODELCENTRED_OFFSET))(this);
		}

		::System::Void set_YawAngleWithModelCentred(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLEWITHMODELCENTRED_OFFSET))(this, value);
		}

		::System::Single get_YawAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLE_OFFSET))(this);
		}

		::System::Void set_YawAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLE_OFFSET))(this, value);
		}

		::System::Single get_PitchAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_PITCHANGLE_OFFSET))(this);
		}

		::System::Void set_PitchAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_PITCHANGLE_OFFSET))(this, value);
		}

		::System::Single get_RollAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROLLANGLE_OFFSET))(this);
		}

		::System::Void set_RollAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROLLANGLE_OFFSET))(this, value);
		}

		::System::Single Distance(::UnityEngine::GameObject* other)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_DISTANCE_OFFSET))(this, other);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_FORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Right()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_RIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_UP_OFFSET))(this);
		}

		::UnityEngine::Transform* get_AttachedTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDTRANSFORM_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_AttachedEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDENTITY_OFFSET))(this);
		}

		::System::Void set_AttachedEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ATTACHEDENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_EnableAttach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENABLEATTACH_OFFSET))(this);
		}

		::System::Boolean get_UseAttachedScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_USEATTACHEDSCALE_OFFSET))(this);
		}

		::System::Boolean get__SmoothEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__SMOOTHENABLED_OFFSET))(this);
		}

		::System::Void _SetTransformTracker(::TransformVersionTracker* tracker)
		{
			return ((::System::Void(*)(::PVOID, ::TransformVersionTracker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETTRANSFORMTRACKER_OFFSET))(this, tracker);
		}

		::System::Void AttachTo(::UnityEngine::Transform* TargetTransform, ::System::String* selfAttachPoint, ::RPG::MVector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_OFFSET))(this, TargetTransform, selfAttachPoint, offset);
		}

		::System::Void PauseAttach(::System::Boolean bResetPosAndRot, ::System::Boolean bResetVisibleFollow, ::System::Boolean bCachePauseStateUtilResume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_PAUSEATTACH_OFFSET))(this, bResetPosAndRot, bResetVisibleFollow, bCachePauseStateUtilResume);
		}

		::System::Void ResumeAttach(::System::Boolean bTickPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_RESUMEATTACH_OFFSET))(this, bTickPos);
		}

		::System::Void AttachTo_1(::Struct_2_3C1413457115002E pEntry)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3C1413457115002E))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_1_OFFSET))(this, pEntry);
		}

		::System::Void SetupSmoothFollow(::System::Single positionDampTime, ::System::Single rotateDampTime, ::System::Single smoothFollowMaxRange, ::System::Boolean refreshImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETUPSMOOTHFOLLOW_OFFSET))(this, positionDampTime, rotateDampTime, smoothFollowMaxRange, refreshImmediately);
		}

		::System::Void LockSmoothFollowState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKSMOOTHFOLLOWSTATE_OFFSET))(this, value);
		}

		::System::Void CancelSmoothFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_CANCELSMOOTHFOLLOW_OFFSET))(this);
		}

		::System::Void ReleaseAttach(::System::Boolean bResetPosAndRot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_RELEASEATTACH_OFFSET))(this, bResetPosAndRot);
		}

		::System::Void SetAttachInfo(::UnityEngine::Transform* attachTransform, ::RPG::GameCore::GameEntity* attachedEntity, ::System::String* selfAttachPoint, ::RPG::MVector3 attachOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHINFO_OFFSET))(this, attachTransform, attachedEntity, selfAttachPoint, attachOffset);
		}

		::System::Void SetWorldPos(::RPG::MVector3 pos, ::System::Boolean syncFormation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETWORLDPOS_OFFSET))(this, pos, syncFormation);
		}

		::System::Void SetAttachEntityPosBySelfTargetPos(::RPG::MVector3 targetPos, ::System::Boolean syncFormation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_OFFSET))(this, targetPos, syncFormation);
		}

		::System::Void SetAttachEntityPosBySelfTargetPos_1(::RPG::MVector3 targetPos, ::RPG::GameCore::GameEntity* attachEntity, ::System::Boolean ignoreY, ::System::Boolean syncFormation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_1_OFFSET))(this, targetPos, attachEntity, ignoreY, syncFormation);
		}

		::System::Void _SetAttachTransByTargetPos(::RPG::MVector3 targetPos, ::RPG::GameCore::TransformComponent* attachTransform, ::System::Boolean ignoreY, ::System::Boolean syncFormation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::GameCore::TransformComponent*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETATTACHTRANSBYTARGETPOS_OFFSET))(this, targetPos, attachTransform, ignoreY, syncFormation);
		}

		::System::Void OnBattleDataView(::System::Boolean bIsEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEW_OFFSET))(this, bIsEnter);
		}

		::System::Void OnBattleDataViewBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEWBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::TransformComponent* get_LockedFaceTarget()
		{
			return ((::RPG::GameCore::TransformComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_LOCKEDFACETARGET_OFFSET))(this);
		}

		::System::Void set_LockedFaceTarget(::RPG::GameCore::TransformComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_LOCKEDFACETARGET_OFFSET))(this, value);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_IsStatic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ISSTATIC_OFFSET))(this, value);
		}

		::System::UInt32 get_EntityLodCurrentRegionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENTITYLODCURRENTREGIONID_OFFSET))(this);
		}

		::System::Void set_EntityLodCurrentRegionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ENTITYLODCURRENTREGIONID_OFFSET))(this, value);
		}

		::System::Void TickUnityGoSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TICKUNITYGOSYNC_OFFSET))(this);
		}

		::System::Void _TickUnityGOSync(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__TICKUNITYGOSYNC_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ForceSetTransform(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 scale, ::System::Single pitch, ::System::Single yaw, ::System::Single roll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_OFFSET))(this, pos, scale, pitch, yaw, roll);
		}

		::System::Void ForceSetTransform_1(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_1_OFFSET))(this, pos, rot);
		}

		::System::Void SetAttachmentIndependentTransformMode(::System::Boolean bIsOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHMENTINDEPENDENTTRANSFORMMODE_OFFSET))(this, bIsOpen);
		}

		::System::Void _TickPos(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__TICKPOS_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TickYawAngleToTarget(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__TICKYAWANGLETOTARGET_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnYawAngleChanged(::System::Single newAngle, ::System::Boolean isModelCentred)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONYAWANGLECHANGED_OFFSET))(this, newAngle, isModelCentred);
		}

		::System::Void _OnPitchAngleChanged(::System::Single newAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONPITCHANGLECHANGED_OFFSET))(this, newAngle);
		}

		::System::Void _OnRollAngleChanged(::System::Single newAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONROLLANGLECHANGED_OFFSET))(this, newAngle);
		}

		::System::Void _OnRefreshFormation(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHFORMATION_OFFSET))(this, arg);
		}

		::System::Void _OnRefreshTeamFormation(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHTEAMFORMATION_OFFSET))(this, arg);
		}

		::System::Void _UpdateSmoothPosToTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__UPDATESMOOTHPOSTOTARGET_OFFSET))(this);
		}

		::System::Void _SetRootTransPos(::UnityEngine::Vector3 newRootPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOS_OFFSET))(this, newRootPos);
		}

		::System::Void _SetRootTransPosAndRotation(::UnityEngine::Vector3 newRootPos, ::UnityEngine::Quaternion newRootRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATION_OFFSET))(this, newRootPos, newRootRot);
		}

		::System::Void _SetRootTransPosAndRotationSmoothly(::UnityEngine::Vector3 newRootPos, ::UnityEngine::Quaternion newRootRot, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATIONSMOOTHLY_OFFSET))(this, newRootPos, newRootRot, fElapsedTimeInSec);
		}

		::System::Void _SetRootTransRotation(::UnityEngine::Quaternion newRootRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATION_OFFSET))(this, newRootRot);
		}

		::System::Void _SetRootTransRotationWithModelCentred(::UnityEngine::Quaternion newRootRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATIONWITHMODELCENTRED_OFFSET))(this, newRootRot);
		}

		::System::Void _OnAttachEntityVisibleChanged(::Class_0_16E4307DCC419505_382* pevent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONATTACHENTITYVISIBLECHANGED_OFFSET))(this, pevent);
		}

		::System::Void _OnRefreshEnableAttach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHENABLEATTACH_OFFSET))(this);
		}

		::System::Boolean get_HasRootTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_HasRootLocalOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTLOCALOFFSET_OFFSET))(this);
		}

		::RPG::MVector3 get__AttachedScale()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ATTACHEDSCALE_OFFSET))(this);
		}

		::System::Single get_TargetYawAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_TARGETYAWANGLE_OFFSET))(this);
		}

		::System::Boolean get__IsYawAngleSmoothChangeStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ISYAWANGLESMOOTHCHANGESTART_OFFSET))(this);
		}

		::RPG::GameCore::TransformComponent_ScaleSource get__WorldScaleSource()
		{
			return ((::RPG::GameCore::TransformComponent_ScaleSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__WORLDSCALESOURCE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}
