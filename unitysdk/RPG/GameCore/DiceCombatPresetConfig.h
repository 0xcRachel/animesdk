#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatPresetTurnConfig; }

#define RPG_GAMECORE_DICECOMBATPRESETCONFIG_METHOD_2_CA02E638D8303EC6_OFFSET UNITYSDK_OFFSET(0x16A3B670)
#define RPG_GAMECORE_DICECOMBATPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3B740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetConfig_TypeDefinitionIndex = 14561;

	class DiceCombatPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatPresetTurnConfig*>* TurnConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CA02E638D8303EC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETCONFIG_METHOD_2_CA02E638D8303EC6_OFFSET))(a1, a2);
		}
	};
}
