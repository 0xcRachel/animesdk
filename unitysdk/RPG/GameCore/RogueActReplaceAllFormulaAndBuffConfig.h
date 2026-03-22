#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_METHOD_5_80A7AE01B293E440_OFFSET UNITYSDK_OFFSET(0x16E00070)
#define RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_METHOD_5_CDB6949362A69AA4_OFFSET UNITYSDK_OFFSET(0x16E00230)
#define RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E00170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllFormulaAndBuffConfig_TypeDefinitionIndex = 17652;

	class RogueActReplaceAllFormulaAndBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_80A7AE01B293E440(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_METHOD_5_80A7AE01B293E440_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CDB6949362A69AA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_METHOD_5_CDB6949362A69AA4_OFFSET))(a1, a2);
		}
	};
}
