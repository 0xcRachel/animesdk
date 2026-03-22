#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIMonoJoyStick; }

#define RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xA1DDBD0)
#define RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xA1DDCF0)
#define RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0xA1DDC70)
#define RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA1DDB80)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMonoJoyStick_OutterPressState_TypeDefinitionIndex = 58072;

	class UIMonoJoyStick_OutterPressState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::UIMonoJoyStick* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::UIMonoJoyStick* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
