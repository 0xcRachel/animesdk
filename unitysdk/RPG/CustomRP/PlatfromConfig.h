#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/PlatformFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"

namespace System { class String; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PlatfromConfig_TypeDefinitionIndex = 28399;

	struct alignas(8) PlatfromConfig
	{
		::System::Boolean multiDeviceName; // 0x10
		::System::Boolean useReg; // 0x11
		::System::String* graphicsDeviceName; // 0x18
		::UnityEngine::Rendering::GraphicsDeviceType deviceType; // 0x20
		::RPG::CustomRP::PlatformFlag flag; // 0x24
	};
}
