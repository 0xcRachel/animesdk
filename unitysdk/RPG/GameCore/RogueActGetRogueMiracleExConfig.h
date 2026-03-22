#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_5_5B5E583B32C92401_OFFSET UNITYSDK_OFFSET(0x16DFDFC0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_5_6115F61B0A8A0E95_OFFSET UNITYSDK_OFFSET(0x16DFDE00)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFDF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMiracleExConfig_TypeDefinitionIndex = 17555;

	class RogueActGetRogueMiracleExConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6115F61B0A8A0E95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_5_6115F61B0A8A0E95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5B5E583B32C92401(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleExConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_5_5B5E583B32C92401_OFFSET))(a1, a2);
		}
	};
}
