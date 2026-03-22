#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client::SkinnedGPUParticles { class SkinnedGPUParticlesBehavior; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0x9F89700)

namespace RPG::Client::SkinnedGPUParticles
{
	inline static constexpr unsigned int SkinnedGPUParticles_TypeDefinitionIndex = 58608;

	class SkinnedGPUParticles : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticlesBehavior*>
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* SkinnedMesh; // 0x30
		::UnityEngine::GPUParticlesRenderer* ParticlesRenderer; // 0x38
		::UnityEngine::GPUParticlesAsset* ParticlesAsset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLES__CTOR_OFFSET))(this);
		}
	};
}
