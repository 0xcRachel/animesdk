#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2EE310)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA2EE360)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA2EE3B0)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0xA2EE400)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_INIT_OFFSET UNITYSDK_OFFSET(0xA2EE2C0)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_SET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0xA2EE410)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xA2EE420)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2EE430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAfterSwitchFakeAvatar_TypeDefinitionIndex = 44450;

	class AdventureAfterSwitchFakeAvatar : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _LeaderEntity_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAfterSwitchFakeAvatar* Init(::RPG::GameCore::GameEntity* leader)
		{
			return ((::RPG::GameCore::AdventureAfterSwitchFakeAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_INIT_OFFSET))(this, leader);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_LeaderEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GET_LEADERENTITY_OFFSET))(this);
		}

		::System::Void set_LeaderEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_SET_LEADERENTITY_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
