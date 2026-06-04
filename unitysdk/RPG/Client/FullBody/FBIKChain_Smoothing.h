#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int FBIKChain_Smoothing_TypeDefinitionIndex = 69310;

	enum class FBIKChain_Smoothing : ::System::Int32
	{
		None = 0,
		Exponential = 1,
		Cubic = 2,
	};
}
