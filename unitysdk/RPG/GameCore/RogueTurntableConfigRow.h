#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTurntableRewardLevel.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETURNTABLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17685970)
#define RPG_GAMECORE_ROGUETURNTABLECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17685FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTurntableConfigRow_TypeDefinitionIndex = 13397;

	class RogueTurntableConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTurntableRewardLevel RewardLevel; // 0x10
		::System::UInt32 ParamGroupID; // 0x14
		::System::UInt32 PrepareTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTurntableConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTurntableConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
