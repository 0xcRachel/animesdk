#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ToastPauseSource_TypeDefinitionIndex = 54076;

	enum class ToastPauseSource : ::System::Int32
	{
		Default = 1,
		Performance = 2,
		ScreenTransfer = 3,
		TutorialGuide = 4,
		Task = 5,
		StoryViewUI = 6,
		CakeRace = 7,
	};
}
