#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomScreenTransferType_TypeDefinitionIndex = 18068;

	enum class CustomScreenTransferType : ::System::Int32
	{
		None = 0,
		FiveDim = 1,
	};
}
