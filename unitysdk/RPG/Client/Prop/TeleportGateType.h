#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGateType_TypeDefinitionIndex = 73418;

	enum class TeleportGateType : ::System::Int32
	{
		Normal = 0,
		Shrink = 1,
	};
}
