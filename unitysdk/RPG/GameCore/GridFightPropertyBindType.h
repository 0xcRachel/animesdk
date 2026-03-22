#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPropertyBindType_TypeDefinitionIndex = 12422;

	enum class GridFightPropertyBindType : ::System::Int32
	{
		Unknown = 0,
		AllCharacter = 1,
		SpecificScope = 2,
	};
}
