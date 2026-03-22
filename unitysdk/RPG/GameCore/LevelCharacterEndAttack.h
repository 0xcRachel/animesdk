#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERENDATTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0xA498DE0)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA498E80)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA498E30)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK_INIT_OFFSET UNITYSDK_OFFSET(0xA498D90)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA498ED0)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA498EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterEndAttack_TypeDefinitionIndex = 44621;

	class LevelCharacterEndAttack : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterEndAttack* Init(::RPG::GameCore::GameEntity* pAttacker)
		{
			return ((::RPG::GameCore::LevelCharacterEndAttack*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK_INIT_OFFSET))(this, pAttacker);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
