#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int NounArchiveType_TypeDefinitionIndex = 49590;

	enum class NounArchiveType : ::System::Int32
	{
		None = 0,
		Proper = 1,
		Aeons = 2,
		Factions = 3,
	};
}
