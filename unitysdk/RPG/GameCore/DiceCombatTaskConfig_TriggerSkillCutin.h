#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_METHOD_3_1F300E7449B4CF46_OFFSET UNITYSDK_OFFSET(0x16A43250)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_METHOD_3_4D8147B6ED388CCA_OFFSET UNITYSDK_OFFSET(0x16A41460)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x16A41440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerSkillCutin_TypeDefinitionIndex = 14482;

	class DiceCombatTaskConfig_TriggerSkillCutin : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::UInt32 CutinID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F300E7449B4CF46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_METHOD_3_1F300E7449B4CF46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D8147B6ED388CCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_METHOD_3_4D8147B6ED388CCA_OFFSET))(a1, a2);
		}
	};
}
