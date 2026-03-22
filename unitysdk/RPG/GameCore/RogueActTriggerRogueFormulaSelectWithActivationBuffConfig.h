#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_METHOD_5_4D877BD9D22FF6EC_OFFSET UNITYSDK_OFFSET(0x16E036D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_METHOD_5_F400B29F8C6FF608_OFFSET UNITYSDK_OFFSET(0x16E03890)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E037D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueFormulaSelectWithActivationBuffConfig_TypeDefinitionIndex = 17600;

	class RogueActTriggerRogueFormulaSelectWithActivationBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4D877BD9D22FF6EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_METHOD_5_4D877BD9D22FF6EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F400B29F8C6FF608(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_METHOD_5_F400B29F8C6FF608_OFFSET))(a1, a2);
		}
	};
}
