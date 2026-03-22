#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELGAMEMODEEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA4A5BA0)
#define RPG_GAMECORE_LEVELGAMEMODEEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA4A5B50)
#define RPG_GAMECORE_LEVELGAMEMODEEND_INIT_OFFSET UNITYSDK_OFFSET(0xA4A5B10)
#define RPG_GAMECORE_LEVELGAMEMODEEND__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A5BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGameModeEnd_TypeDefinitionIndex = 44536;

	class LevelGameModeEnd : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelGameModeEnd* Init()
		{
			return ((::RPG::GameCore::LevelGameModeEnd*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
