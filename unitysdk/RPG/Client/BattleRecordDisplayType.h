#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleRecordDisplayType_TypeDefinitionIndex = 51038;

	enum class BattleRecordDisplayType : ::System::Int32
	{
		None = 0,
		ChallengeMemory = 1,
		ChallengeStory = 2,
		ChallengeBoss = 3,
		ChallengePeak = 4,
		CosmosRogue = 5,
		TournRogue = 6,
		ChessRogue = 7,
		ChessNousRogue = 8,
		MagicRogue = 9,
		GridFight = 10,
	};
}
