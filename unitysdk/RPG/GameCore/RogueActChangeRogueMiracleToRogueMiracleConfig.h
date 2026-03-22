#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_5_56C5858C9D61ED44_OFFSET UNITYSDK_OFFSET(0x16DFA230)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_5_D385238CADD62240_OFFSET UNITYSDK_OFFSET(0x16DFA3F0)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFA330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueMiracleToRogueMiracleConfig_TypeDefinitionIndex = 17563;

	class RogueActChangeRogueMiracleToRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_56C5858C9D61ED44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_5_56C5858C9D61ED44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D385238CADD62240(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_5_D385238CADD62240_OFFSET))(a1, a2);
		}
	};
}
