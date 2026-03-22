#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG_METHOD_5_5F8FD44AAF25E212_OFFSET UNITYSDK_OFFSET(0x16DFFAF0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG_METHOD_5_DD82B29F572C8BFE_OFFSET UNITYSDK_OFFSET(0x16DFF930)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFFA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig_TypeDefinitionIndex = 17616;

	class RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DD82B29F572C8BFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG_METHOD_5_DD82B29F572C8BFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5F8FD44AAF25E212(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG_METHOD_5_5F8FD44AAF25E212_OFFSET))(a1, a2);
		}
	};
}
