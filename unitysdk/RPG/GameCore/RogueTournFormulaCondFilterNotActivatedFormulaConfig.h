#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_6_31533E2CF2090ACE_OFFSET UNITYSDK_OFFSET(0x16EC6440)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_6_92FB5B4B1268E65D_OFFSET UNITYSDK_OFFSET(0x16EC62D0)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC63A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaCondFilterNotActivatedFormulaConfig_TypeDefinitionIndex = 17526;

	class RogueTournFormulaCondFilterNotActivatedFormulaConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_92FB5B4B1268E65D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_6_92FB5B4B1268E65D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_31533E2CF2090ACE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_6_31533E2CF2090ACE_OFFSET))(a1, a2);
		}
	};
}
