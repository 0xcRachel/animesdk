#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_METHOD_5_A8B34D31C6DD83D6_OFFSET UNITYSDK_OFFSET(0x16DFA220)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_METHOD_5_C246D8ACAD56702A_OFFSET UNITYSDK_OFFSET(0x16DFA060)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFA160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueMiracleToRogueCoinConfig_TypeDefinitionIndex = 17561;

	class RogueActChangeRogueMiracleToRogueCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C246D8ACAD56702A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_METHOD_5_C246D8ACAD56702A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A8B34D31C6DD83D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_METHOD_5_A8B34D31C6DD83D6_OFFSET))(a1, a2);
		}
	};
}
