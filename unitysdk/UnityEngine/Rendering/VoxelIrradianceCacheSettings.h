#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VoxelIrradianceCacheSettings_TypeDefinitionIndex = 4628;

	struct alignas(1) VoxelIrradianceCacheSettings
	{
		::System::Boolean HalfRes; // 0x10
		::System::Boolean HDRAmbientTex; // 0x11
	};
}
