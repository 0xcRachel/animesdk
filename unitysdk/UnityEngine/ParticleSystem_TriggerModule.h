#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemOverlapAction.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60EE90)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x239B1E0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60ECF0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x239B110)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60EDB0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_OFFSET UNITYSDK_OFFSET(0x239B170)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60EDF0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_OFFSET UNITYSDK_OFFSET(0x239B190)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60ED30)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_OFFSET UNITYSDK_OFFSET(0x239B130)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60EEB0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_OFFSET UNITYSDK_OFFSET(0x239B1F0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60ED70)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_OFFSET UNITYSDK_OFFSET(0x239B150)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60EE30)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x239B1B0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60EE70)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x239B1D0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60ED10)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x239B120)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60EDD0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_OFFSET UNITYSDK_OFFSET(0x239B180)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60EE10)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_OFFSET UNITYSDK_OFFSET(0x239B1A0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60ED50)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_OFFSET UNITYSDK_OFFSET(0x239B140)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60ED90)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_OFFSET UNITYSDK_OFFSET(0x239B160)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60EE50)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x239B1C0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x6163B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TriggerModule_TypeDefinitionIndex = 5472;

	struct alignas(8) ParticleSystem_TriggerModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemOverlapAction get_inside()
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_OFFSET))(this);
		}

		::System::Void set_inside(::UnityEngine::ParticleSystemOverlapAction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemOverlapAction get_outside()
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_OFFSET))(this);
		}

		::System::Void set_outside(::UnityEngine::ParticleSystemOverlapAction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemOverlapAction get_enter()
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_OFFSET))(this);
		}

		::System::Void set_enter(::UnityEngine::ParticleSystemOverlapAction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemOverlapAction get_exit()
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_OFFSET))(this);
		}

		::System::Void set_exit(::UnityEngine::ParticleSystemOverlapAction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_OFFSET))(this, value);
		}

		::System::Single get_radiusScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_OFFSET))(this);
		}

		::System::Void set_radiusScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_OFFSET))(this, value);
		}

		::System::Void SetCollider(::System::Int32 index, ::UnityEngine::Component* collider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_OFFSET))(this, index, collider);
		}

		::UnityEngine::Component* GetCollider(::System::Int32 index)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_OFFSET))(this, index);
		}

		::System::Int32 get_maxColliderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_OFFSET))(this);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemOverlapAction get_inside_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_inside_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self, ::UnityEngine::ParticleSystemOverlapAction value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemOverlapAction get_outside_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_outside_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self, ::UnityEngine::ParticleSystemOverlapAction value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemOverlapAction get_enter_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enter_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self, ::UnityEngine::ParticleSystemOverlapAction value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemOverlapAction get_exit_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_exit_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self, ::UnityEngine::ParticleSystemOverlapAction value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_radiusScale_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_radiusScale_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void SetCollider_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self, ::System::Int32 index, ::UnityEngine::Component* collider)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::System::Int32, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_INJECTED_OFFSET))(_unity_self, index, collider);
		}

		static ::UnityEngine::Component* GetCollider_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::Component*(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_INJECTED_OFFSET))(_unity_self, index);
		}

		static ::System::Int32 get_maxColliderCount_Injected(::UnityEngine::ParticleSystem_TriggerModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_INJECTED_OFFSET))(_unity_self);
		}
	};
}
