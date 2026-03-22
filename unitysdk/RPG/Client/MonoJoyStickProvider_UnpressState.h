#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoJoyStickProvider; }

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x983F480)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x983F520)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x983F4D0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x983EDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_UnpressState_TypeDefinitionIndex = 48631;

	class MonoJoyStickProvider_UnpressState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::MonoJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::MonoJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
