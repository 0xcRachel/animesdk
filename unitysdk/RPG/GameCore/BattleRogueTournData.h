#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLEROGUETOURNDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xA35E0A0)
#define RPG_GAMECORE_BATTLEROGUETOURNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA35E610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueTournData_TypeDefinitionIndex = 44090;

	class BattleRogueTournData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournTitanFloorType FloorType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleRogueTournData* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueTournData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA_DEEPCLONE_OFFSET))(this);
		}
	};
}
