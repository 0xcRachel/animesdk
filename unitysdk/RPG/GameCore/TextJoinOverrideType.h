#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextJoinOverrideType_TypeDefinitionIndex = 13890;

	enum class TextJoinOverrideType : ::System::Int32
	{
		TextJoinItem = 0,
		CustomText = 1,
		AvatarID = 2,
		TextJoinConditionalItem = 3,
	};
}
