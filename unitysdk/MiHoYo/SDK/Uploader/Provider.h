#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int Provider_TypeDefinitionIndex = 36410;

	enum class Provider : ::System::Int32
	{
		Aliyun = 0,
		Amazon = 1,
	};
}
