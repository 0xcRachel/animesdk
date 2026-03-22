#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_METHOD_5_4B0C8557DD77B863_OFFSET UNITYSDK_OFFSET(0x16E02A10)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_METHOD_5_BA37324DA8F4223F_OFFSET UNITYSDK_OFFSET(0x16E02850)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E02950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueActListConfig_TypeDefinitionIndex = 17591;

	class RogueActTriggerRogueActListConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BA37324DA8F4223F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueActListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueActListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_METHOD_5_BA37324DA8F4223F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4B0C8557DD77B863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueActListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueActListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_METHOD_5_4B0C8557DD77B863_OFFSET))(a1, a2);
		}
	};
}
