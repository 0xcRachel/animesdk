#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19203270)
#define RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19203220)
#define RPG_GAMECORE_LEVELEVOLVEBUILDSKIP__CTOR_OFFSET UNITYSDK_OFFSET(0x192032C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildSkip_TypeDefinitionIndex = 52373;

	class LevelEvolveBuildSkip : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDSKIP__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
