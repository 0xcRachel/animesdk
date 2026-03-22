#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_METHOD_5_29907F7DBACB1563_OFFSET UNITYSDK_OFFSET(0x16E02100)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_METHOD_5_98BB2C7386477F3F_OFFSET UNITYSDK_OFFSET(0x16E01F40)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E02040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueConditionEffectListConfig_TypeDefinitionIndex = 17581;

	class RogueActTriggerDialogueConditionEffectListConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_98BB2C7386477F3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_METHOD_5_98BB2C7386477F3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_29907F7DBACB1563(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_METHOD_5_29907F7DBACB1563_OFFSET))(a1, a2);
		}
	};
}
