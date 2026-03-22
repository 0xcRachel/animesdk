#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_5_883FE434E73BF3D7_OFFSET UNITYSDK_OFFSET(0x16DF8E40)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_5_D0AE4D2748F0EB3B_OFFSET UNITYSDK_OFFSET(0x16DF9000)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF8F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeDestroyedRogueMiracleToRogueBuffConfig_TypeDefinitionIndex = 17564;

	class RogueActChangeDestroyedRogueMiracleToRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_883FE434E73BF3D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_5_883FE434E73BF3D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D0AE4D2748F0EB3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_5_D0AE4D2748F0EB3B_OFFSET))(a1, a2);
		}
	};
}
