#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManager_UserCenterType_TypeDefinitionIndex = 7597;

	enum class LoginManager_UserCenterType : ::System::Int32
	{
		OLD = 1,
		NEW = 2,
	};
}
