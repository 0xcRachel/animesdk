#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0xE4F66F0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0xE4F1480)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_3867C36D1420E61A_OFFSET UNITYSDK_OFFSET(0xE4F1D60)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0xE4F64F0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xE4F63A0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_AFECFD7779937DC6_OFFSET UNITYSDK_OFFSET(0xE4F2180)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_C75AEDD60282682F_OFFSET UNITYSDK_OFFSET(0xE4F3B70)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xE4F6280)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0xE4F6310)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0xE4F61D0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0xE4F6740)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xE4F2FC0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE4F2290)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0xE4F6960)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xE4F67B0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xE4F68C0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0xE4F6910)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0xE4F6860)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0xE4F69B0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xE4F6800)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_ParticleComponent_TypeDefinitionIndex = 39012;

	class ES_ParticleComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		::System::Int32 m_MaxParticle; // 0x18
		::UnityEngine::Vector2 m_ParticleLifeTimeRange; // 0x1C
		::UnityEngine::Vector2 m_ParticleSizeRange; // 0x24
		::UnityEngine::Vector2 m_ParticlePositionRange; // 0x2C
		::System::Single m_ParticleSpeed; // 0x34
		::UnityEngine::Vector2Int m_MaterialSpriteTile; // 0x38
		::UnityEngine::Vector2Int m_MaterialSpriteTileRange; // 0x40
		::System::Single m_SpriteAspectRatio; // 0x48
		::System::Int32 m_RandomSeed; // 0x4C
		::UnityEngine::Material* m_Material; // 0x50
		::UnityEngine::Material* m_RenderMaterial; // 0x58
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x60
		::UnityEngine::ParticleSystemRenderer* m_ParticleSystemRenderer; // 0x68
		::UnityEngine::MaterialPropertyBlock* m_MatPropBlock; // 0x70
		::System::Int32 _MaterialSpriteTilesCount; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Field_6_15; // 0x80
		::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* Field_6_16; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_6_3E06E2491B129B22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_3E06E2491B129B22_OFFSET))(this);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_APPLY_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_RELEASE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_INIT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_6_3867C36D1420E61A()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_3867C36D1420E61A_OFFSET))(this);
		}

		::System::Void Method_6_C75AEDD60282682F(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_C75AEDD60282682F_OFFSET))(this, a1);
		}

		::System::Void Method_6_AFECFD7779937DC6(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_METHOD_6_AFECFD7779937DC6_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Apply(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_APPLY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET))(this);
		}
	};
}
