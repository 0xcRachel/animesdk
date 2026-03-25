#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatInviteFriendParam; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }

#define CLASS_1_645481513AEE85B3___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105D26E0)
#define CLASS_1_645481513AEE85B3___C__DISPLAYCLASS43_0__INVITEFRIENDPVP_B__0_OFFSET UNITYSDK_OFFSET(0x105D34F0)

inline static constexpr unsigned int Class_1_645481513AEE85B3___c__DisplayClass43_0_TypeDefinitionIndex = 61952;

class Class_1_645481513AEE85B3___c__DisplayClass43_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatInviteFriendParam* param; // 0x10
	::RPG::Client::DiceCombat::DiceCombatPVPManager* pvpMgr; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
	}

	::System::Void _InviteFriendPVP_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3___C__DISPLAYCLASS43_0__INVITEFRIENDPVP_B__0_OFFSET))(this);
	}
};
