#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PropMoveState_TypeDefinitionIndex = 32613;

	enum class PropMoveState : ::System::Int32
	{
		None = 0,
		Arrow = 1,
		ArrowSwitchSurface = 2,
		CleanerBotGround = 3,
		CleanerBotFall = 4,
		GeckoGround = 5,
		GeckoFall = 6,
		GeckoLand = 7,
		FloatingSpiritMove = 8,
		FloatingSpiritStun = 9,
		FloatingSpiritMoveOnBeat = 10,
		GarbageBinIdle = 11,
		GarbageBinStun = 12,
		GarbageBinGroundMove = 13,
		GarbageBinFall = 14,
		MissileMove = 15,
		DragonDogIdle = 16,
		DragonDogGroundMove = 17,
		DragonDogBeatBack = 18,
		DragonDogTrampolineJump = 19,
		DragonDogFall = 20,
		DragonDogStun = 21,
		GrenadierPatrol = 22,
		GrenadierTrace = 23,
		SimpleProjectileMove = 24,
		Dying = 25,
	};
}
