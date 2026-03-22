#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_METHOD_5_204235831669B197_OFFSET UNITYSDK_OFFSET(0x16E63C70)
#define RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_METHOD_5_D7FC92F30024D39E_OFFSET UNITYSDK_OFFSET(0x16E7F0F0)
#define RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E63BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueFormulaConditionConfigBase_TypeDefinitionIndex = 17523;

	class RogueFormulaConditionConfigBase : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D7FC92F30024D39E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueFormulaConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueFormulaConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_METHOD_5_D7FC92F30024D39E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_204235831669B197(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueFormulaConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueFormulaConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_METHOD_5_204235831669B197_OFFSET))(a1, a2);
		}
	};
}
