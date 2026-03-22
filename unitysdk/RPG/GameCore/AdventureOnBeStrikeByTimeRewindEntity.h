#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA31ACE0)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA31ADB0)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA31AD60)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_INIT_OFFSET UNITYSDK_OFFSET(0xA31AC80)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xA31AE00)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA31AE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureOnBeStrikeByTimeRewindEntity_TypeDefinitionIndex = 44488;

	class AdventureOnBeStrikeByTimeRewindEntity : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* SourceTimeRewindEntity; // 0x18
		::RPG::GameCore::GameEntity* BeStrikeEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureOnBeStrikeByTimeRewindEntity* Init(::RPG::GameCore::GameEntity* beStrikeEntity, ::RPG::GameCore::GameEntity* sourceTimeRewindEntity)
		{
			return ((::RPG::GameCore::AdventureOnBeStrikeByTimeRewindEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_INIT_OFFSET))(this, beStrikeEntity, sourceTimeRewindEntity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
