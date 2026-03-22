#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_METHOD_5_6FD8F0EE243EFF2D_OFFSET UNITYSDK_OFFSET(0x16E00D10)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_METHOD_5_ADB4C8E32D663D59_OFFSET UNITYSDK_OFFSET(0x16E00B50)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E00C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueFormulaResetConditionConfig_TypeDefinitionIndex = 17605;

	class RogueActReplaceRogueFormulaResetConditionConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_ADB4C8E32D663D59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_METHOD_5_ADB4C8E32D663D59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6FD8F0EE243EFF2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_METHOD_5_6FD8F0EE243EFF2D_OFFSET))(a1, a2);
		}
	};
}
