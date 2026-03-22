#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_METHOD_6_728AA2751AA95756_OFFSET UNITYSDK_OFFSET(0x16EC65C0)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_METHOD_6_939B029B10266DC5_OFFSET UNITYSDK_OFFSET(0x16EC6450)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC6520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaCondFilterOwnFormulaConfig_TypeDefinitionIndex = 17525;

	class RogueTournFormulaCondFilterOwnFormulaConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_939B029B10266DC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_METHOD_6_939B029B10266DC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_728AA2751AA95756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_METHOD_6_728AA2751AA95756_OFFSET))(a1, a2);
		}
	};
}
