#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG_METHOD_5_59E367FEB87FDDB4_OFFSET UNITYSDK_OFFSET(0x16DFDC20)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG_METHOD_5_A4545B8C56DF33D0_OFFSET UNITYSDK_OFFSET(0x16DFDA60)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFDB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMiracleConfig_TypeDefinitionIndex = 17553;

	class RogueActGetRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A4545B8C56DF33D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG_METHOD_5_A4545B8C56DF33D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_59E367FEB87FDDB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG_METHOD_5_59E367FEB87FDDB4_OFFSET))(a1, a2);
		}
	};
}
