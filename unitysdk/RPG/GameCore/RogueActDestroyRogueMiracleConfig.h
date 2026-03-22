#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG_METHOD_5_3CEFC5244E116A92_OFFSET UNITYSDK_OFFSET(0x16DFAB30)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG_METHOD_5_BAE2A378F618147E_OFFSET UNITYSDK_OFFSET(0x16DFA970)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFAA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyRogueMiracleConfig_TypeDefinitionIndex = 17557;

	class RogueActDestroyRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BAE2A378F618147E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG_METHOD_5_BAE2A378F618147E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3CEFC5244E116A92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG_METHOD_5_3CEFC5244E116A92_OFFSET))(a1, a2);
		}
	};
}
