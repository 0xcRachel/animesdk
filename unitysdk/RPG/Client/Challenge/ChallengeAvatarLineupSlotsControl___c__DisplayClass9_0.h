#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge { class ChallengeAvatarLineupSlotControl; }
namespace UnityEngine::Events { class UnityAction; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FBF640)
#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__3_OFFSET UNITYSDK_OFFSET(0x18FBF670)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeAvatarLineupSlotsControl___c__DisplayClass9_0_TypeDefinitionIndex = 74073;

	class ChallengeAvatarLineupSlotsControl___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* clickHandler; // 0x10
		::RPG::Client::Challenge::ChallengeAvatarLineupSlotControl* control; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__3_OFFSET))(this);
		}
	};
}
