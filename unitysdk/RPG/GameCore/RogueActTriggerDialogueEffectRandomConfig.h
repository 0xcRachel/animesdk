#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_5_153F926716D219B5_OFFSET UNITYSDK_OFFSET(0x16E022E0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_5_1E640FC5D61D6021_OFFSET UNITYSDK_OFFSET(0x16E024A0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E023E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectRandomConfig_TypeDefinitionIndex = 17582;

	class RogueActTriggerDialogueEffectRandomConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_153F926716D219B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_5_153F926716D219B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1E640FC5D61D6021(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTRANDOMCONFIG_METHOD_5_1E640FC5D61D6021_OFFSET))(a1, a2);
		}
	};
}
