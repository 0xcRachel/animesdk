#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_CLEAR_OFFSET UNITYSDK_OFFSET(0xA499720)
#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA4997C0)
#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA499770)
#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_INIT_OFFSET UNITYSDK_OFFSET(0xA4996C0)
#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0xA499810)
#define RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA499820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRedStanceBreak_TypeDefinitionIndex = 44637;

	class LevelCharacterRedStanceBreak : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x18
		::RPG::GameCore::GameEntity* Entity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterRedStanceBreak* Init(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::GameEntity* pAttackerEntity)
		{
			return ((::RPG::GameCore::LevelCharacterRedStanceBreak*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_INIT_OFFSET))(this, pEntity, pAttackerEntity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREDSTANCEBREAK___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
