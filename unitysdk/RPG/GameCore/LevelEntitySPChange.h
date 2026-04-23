#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19201CC0)
#define RPG_GAMECORE_LEVELENTITYSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19201C70)
#define RPG_GAMECORE_LEVELENTITYSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x19201BA0)
#define RPG_GAMECORE_LEVELENTITYSPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19201D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySPChange_TypeDefinitionIndex = 52305;

	class LevelEntitySPChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x148
		::RPG::GameCore::FixPoint OldValue; // 0x150
		::RPG::GameCore::FixPoint ChangeValue; // 0x158
		::RPG::GameCore::FixPoint NewValue; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySPChange* Init(::RPG::GameCore::GameEntity* target, ::Struct_2_5909FD7779934CCA chgParams, ::RPG::GameCore::FixPoint chgVal, ::RPG::GameCore::FixPoint oldVal, ::RPG::GameCore::FixPoint newVal)
		{
			return ((::RPG::GameCore::LevelEntitySPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_INIT_OFFSET))(this, target, chgParams, chgVal, oldVal, newVal);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
