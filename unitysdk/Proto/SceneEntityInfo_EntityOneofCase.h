#pragma once
#include "unitysdk/unitysdk.h"

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo_EntityOneofCase_TypeDefinitionIndex = 26284;

	enum class SceneEntityInfo_EntityOneofCase : ::System::Int32
	{
		None = 0,
		Actor = 1,
		NpcMonster = 15,
		Npc = 8,
		Prop = 6,
		SummonUnit = 14,
	};
}
