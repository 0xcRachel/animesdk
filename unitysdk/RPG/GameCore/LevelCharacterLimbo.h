#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERLIMBO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98A2C0)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98A360)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98A310)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO_INIT_OFFSET UNITYSDK_OFFSET(0xA98A240)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO__CTOR_OFFSET UNITYSDK_OFFSET(0xA98A3B0)
#define RPG_GAMECORE_LEVELCHARACTERLIMBO___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98A3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterLimbo_TypeDefinitionIndex = 45662;

	class LevelCharacterLimbo : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18
		::RPG::GameCore::GameEntity* Defender; // 0x20
		::RPG::GameCore::FixPoint Damage; // 0x28
		::RPG::GameCore::FixPoint DefenderBeforeHP; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterLimbo* Init(::RPG::GameCore::GameEntity* attacker, ::RPG::GameCore::GameEntity* defender, ::RPG::GameCore::FixPoint damage, ::RPG::GameCore::FixPoint defenderBeforeHP)
		{
			return ((::RPG::GameCore::LevelCharacterLimbo*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO_INIT_OFFSET))(this, attacker, defender, damage, defenderBeforeHP);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBO___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
