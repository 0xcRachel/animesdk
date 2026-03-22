#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG_METHOD_5_83E38442769EC8D8_OFFSET UNITYSDK_OFFSET(0x16DFA400)
#define RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG_METHOD_5_905FBE621AF6EA7C_OFFSET UNITYSDK_OFFSET(0x16DFA5C0)
#define RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFA500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActComposeRogueMiracleConfig_TypeDefinitionIndex = 17614;

	class RogueActComposeRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_83E38442769EC8D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActComposeRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActComposeRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG_METHOD_5_83E38442769EC8D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_905FBE621AF6EA7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActComposeRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActComposeRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCOMPOSEROGUEMIRACLECONFIG_METHOD_5_905FBE621AF6EA7C_OFFSET))(a1, a2);
		}
	};
}
