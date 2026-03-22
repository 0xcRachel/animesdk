#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_METHOD_3_1B2D014C54A8A14B_OFFSET UNITYSDK_OFFSET(0x16A3F450)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_METHOD_3_F2E14189001394FD_OFFSET UNITYSDK_OFFSET(0x16A42730)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3F430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ChallengerRevival_TypeDefinitionIndex = 14514;

	class DiceCombatTaskConfig_ChallengerRevival : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F2E14189001394FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_METHOD_3_F2E14189001394FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B2D014C54A8A14B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_METHOD_3_1B2D014C54A8A14B_OFFSET))(a1, a2);
		}
	};
}
