#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1726D870)
#define RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1726DC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEnemyDifficultyLvConfigRow_TypeDefinitionIndex = 12475;

	class GridFightEnemyDifficultyLvConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint HPRatio; // 0x10
		::System::UInt32 EnemyDifficultyLevel; // 0x18
		::System::UInt32 ChapterID; // 0x1C
		::RPG::GameCore::FixPoint AttackRatio; // 0x20
		::RPG::GameCore::FixPoint SpeedRatio; // 0x28
		::RPG::GameCore::FixPoint StanceRatio; // 0x30
		::RPG::GameCore::FixPoint DefenceRatio; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
