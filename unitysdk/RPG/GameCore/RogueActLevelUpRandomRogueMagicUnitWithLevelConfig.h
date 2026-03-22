#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_METHOD_5_2045A697AD68967E_OFFSET UNITYSDK_OFFSET(0x16DFE710)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_METHOD_5_A252C8430561EC92_OFFSET UNITYSDK_OFFSET(0x16DFE8D0)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFE810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLevelUpRandomRogueMagicUnitWithLevelConfig_TypeDefinitionIndex = 17631;

	class RogueActLevelUpRandomRogueMagicUnitWithLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_2045A697AD68967E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_METHOD_5_2045A697AD68967E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A252C8430561EC92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_METHOD_5_A252C8430561EC92_OFFSET))(a1, a2);
		}
	};
}
