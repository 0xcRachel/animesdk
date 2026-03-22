#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_METHOD_5_2705D15709CEE700_OFFSET UNITYSDK_OFFSET(0x16E019D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_METHOD_5_BBA1EBA0BC4DA164_OFFSET UNITYSDK_OFFSET(0x16E01B90)
#define RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E01AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig_TypeDefinitionIndex = 17597;

	class RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_2705D15709CEE700(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_METHOD_5_2705D15709CEE700_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BBA1EBA0BC4DA164(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_METHOD_5_BBA1EBA0BC4DA164_OFFSET))(a1, a2);
		}
	};
}
