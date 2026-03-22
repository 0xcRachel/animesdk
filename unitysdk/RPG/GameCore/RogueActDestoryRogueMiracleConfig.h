#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG_METHOD_5_1CBBBA46F8D77554_OFFSET UNITYSDK_OFFSET(0x16DFA5D0)
#define RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG_METHOD_5_A0F4C373F94B14D0_OFFSET UNITYSDK_OFFSET(0x16DFA790)
#define RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFA6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestoryRogueMiracleConfig_TypeDefinitionIndex = 17594;

	class RogueActDestoryRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1CBBBA46F8D77554(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestoryRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestoryRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG_METHOD_5_1CBBBA46F8D77554_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A0F4C373F94B14D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestoryRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestoryRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG_METHOD_5_A0F4C373F94B14D0_OFFSET))(a1, a2);
		}
	};
}
