#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_5_13974FB981196361_OFFSET UNITYSDK_OFFSET(0x16E02670)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_5_7F551E8E37BD7DF5_OFFSET UNITYSDK_OFFSET(0x16E024B0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E025B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectRepeatableGambleConfig_TypeDefinitionIndex = 17583;

	class RogueActTriggerDialogueEffectRepeatableGambleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7F551E8E37BD7DF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_5_7F551E8E37BD7DF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_13974FB981196361(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableGambleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLEGAMBLECONFIG_METHOD_5_13974FB981196361_OFFSET))(a1, a2);
		}
	};
}
