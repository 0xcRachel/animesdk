#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemCollisionMode.h"
#include "unitysdk/UnityEngine/ParticleSystemCollisionQuality.h"
#include "unitysdk/UnityEngine/ParticleSystemCollisionType.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GETPLANE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4DF0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GETPLANE_OFFSET UNITYSDK_OFFSET(0x238A580)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4980)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238A2F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4940)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCE_OFFSET UNITYSDK_OFFSET(0x238A280)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDERFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4CD0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDERFORCE_OFFSET UNITYSDK_OFFSET(0x238A4F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDESWITH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4B00)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDESWITH_OFFSET UNITYSDK_OFFSET(0x238A3E0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPENMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D48D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPENMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238A260)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4890)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x238A1F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLEDYNAMICCOLLIDERS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4B50)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLEDYNAMICCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x238A430)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D47A0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x238A190)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSSMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4A30)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSSMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238A380)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D49F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSS_OFFSET UNITYSDK_OFFSET(0x238A310)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXCOLLISIONSHAPES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4B90)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXCOLLISIONSHAPES_OFFSET UNITYSDK_OFFSET(0x238A450)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXKILLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4AB0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXKILLSPEED_OFFSET UNITYSDK_OFFSET(0x238A3C0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXPLANECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4E10)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXPLANECOUNT_OFFSET UNITYSDK_OFFSET(0x238A590)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MINKILLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4A70)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MINKILLSPEED_OFFSET UNITYSDK_OFFSET(0x238A3A0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4820)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x238A1D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4D10)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_OFFSET UNITYSDK_OFFSET(0x238A510)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4D90)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x238A550)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4D50)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_OFFSET UNITYSDK_OFFSET(0x238A530)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4BD0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x238A470)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4C50)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x238A4B0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_SENDCOLLISIONMESSAGES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4C90)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_SENDCOLLISIONMESSAGES_OFFSET UNITYSDK_OFFSET(0x238A4D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_TYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D47E0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x238A1B0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_VOXELSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4C10)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_VOXELSIZE_OFFSET UNITYSDK_OFFSET(0x238A490)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SETPLANE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4DD0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SETPLANE_OFFSET UNITYSDK_OFFSET(0x238A570)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D49A0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238A300)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4960)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCE_OFFSET UNITYSDK_OFFSET(0x238A2C0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDERFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4CF0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDERFORCE_OFFSET UNITYSDK_OFFSET(0x238A500)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDESWITH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4B30)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDESWITH_OFFSET UNITYSDK_OFFSET(0x238A410)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPENMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D48F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPENMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238A270)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D48B0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x238A230)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLEDYNAMICCOLLIDERS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4B70)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLEDYNAMICCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x238A440)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D47C0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x238A1A0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSSMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4A50)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSSMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238A390)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4A10)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSS_OFFSET UNITYSDK_OFFSET(0x238A350)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXCOLLISIONSHAPES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4BB0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXCOLLISIONSHAPES_OFFSET UNITYSDK_OFFSET(0x238A460)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXKILLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4AD0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXKILLSPEED_OFFSET UNITYSDK_OFFSET(0x238A3D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MINKILLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4A90)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MINKILLSPEED_OFFSET UNITYSDK_OFFSET(0x238A3B0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4840)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x238A1E0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4D30)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_OFFSET UNITYSDK_OFFSET(0x238A520)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4DB0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x238A560)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4D70)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_OFFSET UNITYSDK_OFFSET(0x238A540)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4BF0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x238A480)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4C70)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x238A4C0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_SENDCOLLISIONMESSAGES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4CB0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_SENDCOLLISIONMESSAGES_OFFSET UNITYSDK_OFFSET(0x238A4E0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_TYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4800)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x238A1C0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_VOXELSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4C30)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_VOXELSIZE_OFFSET UNITYSDK_OFFSET(0x238A4A0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x6163B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_CollisionModule_TypeDefinitionIndex = 5471;

	struct alignas(8) ParticleSystem_CollisionModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemCollisionType get_type()
		{
			return ((::UnityEngine::ParticleSystemCollisionType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::ParticleSystemCollisionType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCollisionType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_TYPE_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemCollisionMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemCollisionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemCollisionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCollisionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MODE_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_dampen()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPEN_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_dampen(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPEN_OFFSET))(this, value);
		}
		*/

		::System::Single get_dampenMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPENMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_dampenMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPENMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_bounce()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_bounce(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCE_OFFSET))(this, value);
		}
		*/

		::System::Single get_bounceMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_bounceMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_lifetimeLoss()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSS_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_lifetimeLoss(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSS_OFFSET))(this, value);
		}
		*/

		::System::Single get_lifetimeLossMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSSMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_lifetimeLossMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSSMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_minKillSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MINKILLSPEED_OFFSET))(this);
		}

		::System::Void set_minKillSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MINKILLSPEED_OFFSET))(this, value);
		}

		::System::Single get_maxKillSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXKILLSPEED_OFFSET))(this);
		}

		::System::Void set_maxKillSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXKILLSPEED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::LayerMask get_collidesWith()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDESWITH_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_collidesWith(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDESWITH_OFFSET))(this, value);
		}
		*/

		::System::Boolean get_enableDynamicColliders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLEDYNAMICCOLLIDERS_OFFSET))(this);
		}

		::System::Void set_enableDynamicColliders(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLEDYNAMICCOLLIDERS_OFFSET))(this, value);
		}

		::System::Int32 get_maxCollisionShapes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXCOLLISIONSHAPES_OFFSET))(this);
		}

		::System::Void set_maxCollisionShapes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXCOLLISIONSHAPES_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemCollisionQuality get_quality()
		{
			return ((::UnityEngine::ParticleSystemCollisionQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_QUALITY_OFFSET))(this);
		}

		::System::Void set_quality(::UnityEngine::ParticleSystemCollisionQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCollisionQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_QUALITY_OFFSET))(this, value);
		}

		::System::Single get_voxelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_VOXELSIZE_OFFSET))(this);
		}

		::System::Void set_voxelSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_VOXELSIZE_OFFSET))(this, value);
		}

		::System::Single get_radiusScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_RADIUSSCALE_OFFSET))(this);
		}

		::System::Void set_radiusScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_RADIUSSCALE_OFFSET))(this, value);
		}

		::System::Boolean get_sendCollisionMessages()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_SENDCOLLISIONMESSAGES_OFFSET))(this);
		}

		::System::Void set_sendCollisionMessages(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_SENDCOLLISIONMESSAGES_OFFSET))(this, value);
		}

		::System::Single get_colliderForce()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDERFORCE_OFFSET))(this);
		}

		::System::Void set_colliderForce(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDERFORCE_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyColliderForceByCollisionAngle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_OFFSET))(this);
		}

		::System::Void set_multiplyColliderForceByCollisionAngle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyColliderForceByParticleSpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_OFFSET))(this);
		}

		::System::Void set_multiplyColliderForceByParticleSpeed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyColliderForceByParticleSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_multiplyColliderForceByParticleSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_OFFSET))(this, value);
		}

		::System::Void SetPlane(::System::Int32 index, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SETPLANE_OFFSET))(this, index, transform);
		}

		::UnityEngine::Transform* GetPlane(::System::Int32 index)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GETPLANE_OFFSET))(this, index);
		}

		::System::Int32 get_maxPlaneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXPLANECOUNT_OFFSET))(this);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemCollisionType get_type_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemCollisionType(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_TYPE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_type_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::ParticleSystemCollisionType value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::ParticleSystemCollisionType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_TYPE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemCollisionMode get_mode_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemCollisionMode(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_mode_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::ParticleSystemCollisionMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::ParticleSystemCollisionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MODE_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_dampen_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPEN_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_dampen_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPEN_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_dampenMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPENMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_dampenMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPENMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_bounce_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_bounce_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_bounceMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_bounceMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_lifetimeLoss_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSS_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_lifetimeLoss_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSS_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_lifetimeLossMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSSMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_lifetimeLossMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSSMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_minKillSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MINKILLSPEED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_minKillSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MINKILLSPEED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_maxKillSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXKILLSPEED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_maxKillSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXKILLSPEED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_collidesWith_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::LayerMask& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::LayerMask&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDESWITH_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_collidesWith_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::LayerMask& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::LayerMask&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDESWITH_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Boolean get_enableDynamicColliders_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLEDYNAMICCOLLIDERS_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enableDynamicColliders_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLEDYNAMICCOLLIDERS_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_maxCollisionShapes_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXCOLLISIONSHAPES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_maxCollisionShapes_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXCOLLISIONSHAPES_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemCollisionQuality get_quality_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemCollisionQuality(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_QUALITY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_quality_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::UnityEngine::ParticleSystemCollisionQuality value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::UnityEngine::ParticleSystemCollisionQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_QUALITY_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_voxelSize_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_VOXELSIZE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_voxelSize_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_VOXELSIZE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_radiusScale_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_RADIUSSCALE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_radiusScale_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_RADIUSSCALE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_sendCollisionMessages_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_SENDCOLLISIONMESSAGES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_sendCollisionMessages_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_SENDCOLLISIONMESSAGES_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_colliderForce_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDERFORCE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_colliderForce_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDERFORCE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_multiplyColliderForceByCollisionAngle_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_multiplyColliderForceByCollisionAngle_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_multiplyColliderForceByParticleSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_multiplyColliderForceByParticleSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_multiplyColliderForceByParticleSize_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_multiplyColliderForceByParticleSize_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void SetPlane_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Int32 index, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SETPLANE_INJECTED_OFFSET))(_unity_self, index, transform);
		}

		static ::UnityEngine::Transform* GetPlane_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::ParticleSystem_CollisionModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GETPLANE_INJECTED_OFFSET))(_unity_self, index);
		}

		static ::System::Int32 get_maxPlaneCount_Injected(::UnityEngine::ParticleSystem_CollisionModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_CollisionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXPLANECOUNT_INJECTED_OFFSET))(_unity_self);
		}
	};
}
