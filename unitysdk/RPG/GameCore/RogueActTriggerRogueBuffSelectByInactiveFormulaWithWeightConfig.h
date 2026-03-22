#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_5_AA5488276DC70472_OFFSET UNITYSDK_OFFSET(0x16E03150)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_5_D8FB0F6925671F5E_OFFSET UNITYSDK_OFFSET(0x16E02F90)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E03090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig_TypeDefinitionIndex = 17620;

	class RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D8FB0F6925671F5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_5_D8FB0F6925671F5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AA5488276DC70472(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_5_AA5488276DC70472_OFFSET))(a1, a2);
		}
	};
}
