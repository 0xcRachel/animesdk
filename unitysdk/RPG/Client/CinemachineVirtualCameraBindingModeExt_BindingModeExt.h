#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CinemachineVirtualCameraBindingModeExt_BindingModeExt_TypeDefinitionIndex = 54214;

	enum class CinemachineVirtualCameraBindingModeExt_BindingModeExt : ::System::Int32
	{
		LockToTargetWithWorldUp = 1,
		FollowToAnchorWithWorldUp = 6,
	};
}
