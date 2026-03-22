#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }

#define RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D36C70)
#define RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS10_0__ONRPGANIMATIONEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x9D37320)
#define RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS10_0__ONRPGANIMATIONEVENT_B__1_OFFSET UNITYSDK_OFFSET(0x9D37340)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGAnimationEvent___c__DisplayClass10_0_TypeDefinitionIndex = 58097;

	class RPGAnimationEvent___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRPGAnimationEvent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS10_0__ONRPGANIMATIONEVENT_B__0_OFFSET))(this);
		}

		::System::Void _OnRPGAnimationEvent_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS10_0__ONRPGANIMATIONEVENT_B__1_OFFSET))(this);
		}
	};
}
