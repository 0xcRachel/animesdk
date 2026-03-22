#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_5_40F2A3C3B059ADBA_OFFSET UNITYSDK_OFFSET(0x16DFAED0)
#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_5_67AF3E79F2D73B66_OFFSET UNITYSDK_OFFSET(0x16DFAD10)
#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFAE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig_TypeDefinitionIndex = 17653;

	class RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_67AF3E79F2D73B66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_5_67AF3E79F2D73B66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_40F2A3C3B059ADBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_5_40F2A3C3B059ADBA_OFFSET))(a1, a2);
		}
	};
}
