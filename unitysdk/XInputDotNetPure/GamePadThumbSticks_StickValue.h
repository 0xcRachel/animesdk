#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_VECTOR_OFFSET UNITYSDK_OFFSET(0x5078B0)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_X_OFFSET UNITYSDK_OFFSET(0x608BC0)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_Y_OFFSET UNITYSDK_OFFSET(0x608BD0)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x608BB0)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadThumbSticks_StickValue_TypeDefinitionIndex = 37088;

	struct alignas(4) GamePadThumbSticks_StickValue
	{
		::UnityEngine::Vector2 vector; // 0x10

		::System::Void _ctor(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE__CTOR_OFFSET))(this, x, y);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_X_OFFSET))(this);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_Y_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Vector()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_STICKVALUE_GET_VECTOR_OFFSET))(this);
		}
	};
}
