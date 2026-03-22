#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_5_2DD1E7A9AB362FA3_OFFSET UNITYSDK_OFFSET(0x16DF91D0)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_5_C084B6D1E534DE7F_OFFSET UNITYSDK_OFFSET(0x16DF9010)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF9110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig_TypeDefinitionIndex = 17565;

	class RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C084B6D1E534DE7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_5_C084B6D1E534DE7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2DD1E7A9AB362FA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_5_2DD1E7A9AB362FA3_OFFSET))(a1, a2);
		}
	};
}
