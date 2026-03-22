#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_METHOD_5_22A20F1978EB151D_OFFSET UNITYSDK_OFFSET(0x16E03500)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_METHOD_5_B47C9C66E1717849_OFFSET UNITYSDK_OFFSET(0x16E036C0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E03600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueFormulaSelectConfig_TypeDefinitionIndex = 17599;

	class RogueActTriggerRogueFormulaSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_22A20F1978EB151D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_METHOD_5_22A20F1978EB151D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B47C9C66E1717849(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_METHOD_5_B47C9C66E1717849_OFFSET))(a1, a2);
		}
	};
}
