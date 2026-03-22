#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_METHOD_5_20D8DB769FB13DF5_OFFSET UNITYSDK_OFFSET(0x16E01D70)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_METHOD_5_B51B0CA1E90D2361_OFFSET UNITYSDK_OFFSET(0x16E01F30)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E01E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueBattleConfig_TypeDefinitionIndex = 17584;

	class RogueActTriggerDialogueBattleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_20D8DB769FB13DF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_METHOD_5_20D8DB769FB13DF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B51B0CA1E90D2361(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_METHOD_5_B51B0CA1E90D2361_OFFSET))(a1, a2);
		}
	};
}
