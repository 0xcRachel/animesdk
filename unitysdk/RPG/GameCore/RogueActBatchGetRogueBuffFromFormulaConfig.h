#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG_METHOD_5_4BAB05C441DAA21E_OFFSET UNITYSDK_OFFSET(0x16DF8530)
#define RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG_METHOD_5_858FD2FB7C4C5632_OFFSET UNITYSDK_OFFSET(0x16DF86F0)
#define RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF8630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActBatchGetRogueBuffFromFormulaConfig_TypeDefinitionIndex = 17610;

	class RogueActBatchGetRogueBuffFromFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4BAB05C441DAA21E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActBatchGetRogueBuffFromFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActBatchGetRogueBuffFromFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG_METHOD_5_4BAB05C441DAA21E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_858FD2FB7C4C5632(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActBatchGetRogueBuffFromFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActBatchGetRogueBuffFromFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG_METHOD_5_858FD2FB7C4C5632_OFFSET))(a1, a2);
		}
	};
}
