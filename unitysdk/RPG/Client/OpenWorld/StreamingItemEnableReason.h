#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingItemEnableReason_TypeDefinitionIndex = 69007;

	enum class StreamingItemEnableReason : ::System::Int32
	{
		SceneItemHLOD = 0,
		Environment = 1,
		LevelEditor = 2,
	};
}
