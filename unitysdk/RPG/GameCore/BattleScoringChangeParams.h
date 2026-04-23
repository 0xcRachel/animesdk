#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x11D361D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringChangeParams_TypeDefinitionIndex = 53950;

	class BattleScoringChangeParams : public ::System::Object
	{
	public:
		::System::Single DisplayNewScore; // 0x10
		::System::Single NewScore; // 0x14
		::System::Boolean IsChallenge; // 0x18
		::System::Single OldScore; // 0x1C
		::System::UInt32 ScoringId; // 0x20
		::System::Single DisplayModifyValue; // 0x24
		::System::Single DisplayOldScore; // 0x28
		::RPG::GameCore::ScoringShowType ShowType; // 0x2C
		::System::Single ModifyValue; // 0x30
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
