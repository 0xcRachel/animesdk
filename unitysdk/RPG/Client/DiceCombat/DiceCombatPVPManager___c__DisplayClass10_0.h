#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x902C9C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS10_0__JOININVITATIONLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x902E6D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS10_0__JOININVITATIONLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x902E700)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager___c__DisplayClass10_0_TypeDefinitionIndex = 60195;

	class DiceCombatPVPManager___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatPVPManager* __4__this; // 0x10
		::System::UInt64 roomID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _JoinInvitationLobby_b__0(::System::Boolean hasReconnected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS10_0__JOININVITATIONLOBBY_B__0_OFFSET))(this, hasReconnected);
		}

		::System::Void _JoinInvitationLobby_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS10_0__JOININVITATIONLOBBY_B__1_OFFSET))(this);
		}
	};
}
