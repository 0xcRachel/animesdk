#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_METHOD_5_488E2F1EA8A00EBF_OFFSET UNITYSDK_OFFSET(0x16DFE1A0)
#define RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_METHOD_5_D9638228DD23A4E3_OFFSET UNITYSDK_OFFSET(0x16DFE360)
#define RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFE2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetThenDestroyRogueMiracleConfig_TypeDefinitionIndex = 17619;

	class RogueActGetThenDestroyRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_488E2F1EA8A00EBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_METHOD_5_488E2F1EA8A00EBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D9638228DD23A4E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_METHOD_5_D9638228DD23A4E3_OFFSET))(a1, a2);
		}
	};
}
