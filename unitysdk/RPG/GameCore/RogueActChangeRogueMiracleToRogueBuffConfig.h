#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_5_83BBE42978481B2E_OFFSET UNITYSDK_OFFSET(0x16DF9E90)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_5_92BFAAC90184EB42_OFFSET UNITYSDK_OFFSET(0x16DFA050)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF9F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueMiracleToRogueBuffConfig_TypeDefinitionIndex = 17562;

	class RogueActChangeRogueMiracleToRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_83BBE42978481B2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_5_83BBE42978481B2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_92BFAAC90184EB42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_5_92BFAAC90184EB42_OFFSET))(a1, a2);
		}
	};
}
