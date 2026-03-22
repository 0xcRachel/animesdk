#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueLogTag_TypeDefinitionIndex = 53648;

	enum class RogueLogTag : ::System::Int32
	{
		None = 0,
		Simulated = 1,
		Endless = 2,
		Chess = 3,
		Nous = 4,
		Tourn = 5,
		Arcade = 6,
		Magic = 7,
		RelicCocoon = 8,
		RogueCoin = 9,
		Buff = 10,
		Miracle = 11,
		Formula = 12,
		Scepter = 13,
		Dialogue = 14,
		Workbench = 15,
		Handbook = 16,
		Monster = 17,
		GM = 18,
		AdvRoom = 19,
		TitanBless = 20,
		TournBuildRef = 21,
		Exhibition = 22,
		Collection = 23,
	};
}
