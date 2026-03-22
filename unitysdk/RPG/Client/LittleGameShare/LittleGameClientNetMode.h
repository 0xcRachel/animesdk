#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameClientNetMode_TypeDefinitionIndex = 27875;

	enum class LittleGameClientNetMode : ::System::Byte
	{
		Unknown = 0x0,
		PVE = 0x1,
		PVP = 0x2,
	};
}
