#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETCURRENTCOLOR_OFFSET UNITYSDK_OFFSET(0x23994B0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETCURRENTSIZE3D_OFFSET UNITYSDK_OFFSET(0x2399450)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETCURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x2399420)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETMESHINDEX_OFFSET UNITYSDK_OFFSET(0x2399520)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x238B1A0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x238B170)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ANIMATEDVELOCITY_OFFSET UNITYSDK_OFFSET(0x225B060)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_AXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x238B0A0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_EMITACCUMULATOR0_OFFSET UNITYSDK_OFFSET(0x238D210)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_EMITACCUMULATOR1_OFFSET UNITYSDK_OFFSET(0x238D230)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1FECEC0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_INITIALVELOCITY_OFFSET UNITYSDK_OFFSET(0x225B090)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_PARENTRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x238D1F0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x657BF0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x238B220)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_REMAININGLIFETIME_OFFSET UNITYSDK_OFFSET(0x225ED40)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x238B110)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x238B0E0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x238B200)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x238B020)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTROT_OFFSET UNITYSDK_OFFSET(0x23994F0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x238B060)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x22C3E60)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_TOTALVELOCITY_OFFSET UNITYSDK_OFFSET(0x238D190)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1FF82F0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SETMESHINDEX_OFFSET UNITYSDK_OFFSET(0x2399510)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x23993F0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x23993D0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANIMATEDVELOCITY_OFFSET UNITYSDK_OFFSET(0x225B080)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_AXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x238D200)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_EMITACCUMULATOR0_OFFSET UNITYSDK_OFFSET(0x238D220)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_EMITACCUMULATOR1_OFFSET UNITYSDK_OFFSET(0x2399340)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1FECED0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_INITIALVELOCITY_OFFSET UNITYSDK_OFFSET(0x225B0B0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x225ED50)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_PARENTRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x23524E0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x6579B0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x238D1E0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_REMAININGLIFETIME_OFFSET UNITYSDK_OFFSET(0x225ED50)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x23993A0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2399380)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x238D1D0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x238D1C0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTROT_OFFSET UNITYSDK_OFFSET(0x2399500)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x2399360)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x2399350)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1FF8310)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_Particle_TypeDefinitionIndex = 5440;

	struct alignas(4) ParticleSystem_Particle
	{
		::UnityEngine::Vector3 m_Position; // 0x10
		::UnityEngine::Vector3 m_Velocity; // 0x1C
		::UnityEngine::Vector3 m_AnimatedVelocity; // 0x28
		::UnityEngine::Vector3 m_InitialVelocity; // 0x34
		::UnityEngine::Vector3 m_AxisOfRotation; // 0x40
		::UnityEngine::Vector3 m_Rotation; // 0x4C
		::UnityEngine::Vector3 m_AngularVelocity; // 0x58
		::UnityEngine::Vector3 m_StartSize; // 0x64
		::UnityEngine::Color32 m_StartColor; // 0x70
		::System::UInt32 m_RandomSeed; // 0x74
		::System::UInt32 m_ParentRandomSeed; // 0x78
		::System::Single m_Lifetime; // 0x7C
		::System::Single m_StartLifetime; // 0x80
		::System::Int32 m_MeshIndex; // 0x84
		::System::Single m_EmitAccumulator0; // 0x88
		::System::Single m_EmitAccumulator1; // 0x8C
		::System::UInt32 m_Flags; // 0x90
		::UnityEngine::Vector4 m_StartRot; // 0x94

		::System::Void set_lifetime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_LIFETIME_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_VELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_animatedVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ANIMATEDVELOCITY_OFFSET))(this);
		}

		::System::Void set_animatedVelocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANIMATEDVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_totalVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_TOTALVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_initialVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_INITIALVELOCITY_OFFSET))(this);
		}

		::System::Void set_initialVelocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_INITIALVELOCITY_OFFSET))(this, value);
		}

		::System::Single get_remainingLifetime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_REMAININGLIFETIME_OFFSET))(this);
		}

		::System::Void set_remainingLifetime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_REMAININGLIFETIME_OFFSET))(this, value);
		}

		::System::Single get_startLifetime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTLIFETIME_OFFSET))(this);
		}

		::System::Void set_startLifetime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTLIFETIME_OFFSET))(this, value);
		}

		::UnityEngine::Color32 get_startColor()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color32 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTCOLOR_OFFSET))(this, value);
		}

		::System::UInt32 get_randomSeed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_RANDOMSEED_OFFSET))(this);
		}

		::System::Void set_randomSeed(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_RANDOMSEED_OFFSET))(this, value);
		}

		::System::UInt32 get_parentRandomSeed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_PARENTRANDOMSEED_OFFSET))(this);
		}

		::System::Void set_parentRandomSeed(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_PARENTRANDOMSEED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_axisOfRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_AXISOFROTATION_OFFSET))(this);
		}

		::System::Void set_axisOfRotation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_AXISOFROTATION_OFFSET))(this, value);
		}

		::System::Single get_emitAccumulator0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_EMITACCUMULATOR0_OFFSET))(this);
		}

		::System::Void set_emitAccumulator0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_EMITACCUMULATOR0_OFFSET))(this, value);
		}

		::System::Single get_emitAccumulator1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_EMITACCUMULATOR1_OFFSET))(this);
		}

		::System::Void set_emitAccumulator1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_EMITACCUMULATOR1_OFFSET))(this, value);
		}

		::System::UInt32 get_flags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_flags(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Single get_startSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTSIZE_OFFSET))(this);
		}

		::System::Void set_startSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_startSize3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTSIZE3D_OFFSET))(this);
		}

		::System::Void set_startSize3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTSIZE3D_OFFSET))(this, value);
		}

		::System::Single get_rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rotation3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ROTATION3D_OFFSET))(this);
		}

		::System::Void set_rotation3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ROTATION3D_OFFSET))(this, value);
		}

		::System::Single get_angularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_angularVelocity3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_ANGULARVELOCITY3D_OFFSET))(this);
		}

		::System::Void set_angularVelocity3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANGULARVELOCITY3D_OFFSET))(this, value);
		}

		::System::Single GetCurrentSize(::UnityEngine::ParticleSystem* system)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETCURRENTSIZE_OFFSET))(this, system);
		}

		::UnityEngine::Vector3 GetCurrentSize3D(::UnityEngine::ParticleSystem* system)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETCURRENTSIZE3D_OFFSET))(this, system);
		}

		::UnityEngine::Color32 GetCurrentColor(::UnityEngine::ParticleSystem* system)
		{
			return ((::UnityEngine::Color32(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETCURRENTCOLOR_OFFSET))(this, system);
		}

		::UnityEngine::Vector4 get_startRot()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_STARTROT_OFFSET))(this);
		}

		::System::Void set_startRot(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTROT_OFFSET))(this, value);
		}

		::System::Void SetMeshIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SETMESHINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetMeshIndex(::UnityEngine::ParticleSystem* system)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETMESHINDEX_OFFSET))(this, system);
		}
	};
}
