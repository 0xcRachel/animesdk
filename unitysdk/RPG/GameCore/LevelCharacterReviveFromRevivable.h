#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA499B70)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA499C10)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA499BC0)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_INIT_OFFSET UNITYSDK_OFFSET(0xA499B10)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA499C60)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA499C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterReviveFromRevivable_TypeDefinitionIndex = 44629;

	class LevelCharacterReviveFromRevivable : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* TargetEntity; // 0x18
		::RPG::GameCore::GameEntity* CasterEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterReviveFromRevivable* Init(::RPG::GameCore::GameEntity* pTargetEntity, ::RPG::GameCore::GameEntity* pCasterEntity)
		{
			return ((::RPG::GameCore::LevelCharacterReviveFromRevivable*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_INIT_OFFSET))(this, pTargetEntity, pCasterEntity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
