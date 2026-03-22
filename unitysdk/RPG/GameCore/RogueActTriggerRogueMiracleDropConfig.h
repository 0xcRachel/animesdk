#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_METHOD_5_949BD95ED70C53DD_OFFSET UNITYSDK_OFFSET(0x16E04E50)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_METHOD_5_C0DEAB6AFBA98B49_OFFSET UNITYSDK_OFFSET(0x16E04C90)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E04D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleDropConfig_TypeDefinitionIndex = 17551;

	class RogueActTriggerRogueMiracleDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C0DEAB6AFBA98B49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_METHOD_5_C0DEAB6AFBA98B49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_949BD95ED70C53DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_METHOD_5_949BD95ED70C53DD_OFFSET))(a1, a2);
		}
	};
}
