#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define RPG_CLIENT_TOGGLEBUTTON_TOGGLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15167D50)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButton_ToggleEvent_TypeDefinitionIndex = 66972;

	class ToggleButton_ToggleEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_TOGGLEEVENT__CTOR_OFFSET))(this);
		}
	};
}
