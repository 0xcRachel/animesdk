#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_METHOD_5_CFA769A7783505CE_OFFSET UNITYSDK_OFFSET(0x16E02110)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_METHOD_5_E781984817C78BE2_OFFSET UNITYSDK_OFFSET(0x16E022D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E02210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectListConfig_TypeDefinitionIndex = 17579;

	class RogueActTriggerDialogueEffectListConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_CFA769A7783505CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_METHOD_5_CFA769A7783505CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E781984817C78BE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_METHOD_5_E781984817C78BE2_OFFSET))(a1, a2);
		}
	};
}
