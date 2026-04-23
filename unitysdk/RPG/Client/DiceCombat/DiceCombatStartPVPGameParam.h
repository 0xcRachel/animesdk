#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATSTARTPVPGAMEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x17A283E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSTARTPVPGAMEPARAM_GET_ISRECONNECTEDGAME_OFFSET UNITYSDK_OFFSET(0x17A31E10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSTARTPVPGAMEPARAM_SET_ISRECONNECTEDGAME_OFFSET UNITYSDK_OFFSET(0x17A31E20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSTARTPVPGAMEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A31E00)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatStartPVPGameParam_TypeDefinitionIndex = 69892;

	class DiceCombatStartPVPGameParam : public ::System::Object
	{
	public:
		::System::Boolean _IsReConnectedGame_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSTARTPVPGAMEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* Create(::System::Boolean isReConnectedGame)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSTARTPVPGAMEPARAM_CREATE_OFFSET))(isReConnectedGame);
		}

		::System::Boolean get_IsReConnectedGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSTARTPVPGAMEPARAM_GET_ISRECONNECTEDGAME_OFFSET))(this);
		}

		::System::Void set_IsReConnectedGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSTARTPVPGAMEPARAM_SET_ISRECONNECTEDGAME_OFFSET))(this, value);
		}
	};
}
