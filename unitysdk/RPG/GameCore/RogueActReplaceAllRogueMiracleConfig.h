#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_5_9E1C290F684B4D07_OFFSET UNITYSDK_OFFSET(0x16E005E0)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_5_ACA2619E0214616B_OFFSET UNITYSDK_OFFSET(0x16E007A0)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E006E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllRogueMiracleConfig_TypeDefinitionIndex = 17595;

	class RogueActReplaceAllRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9E1C290F684B4D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_5_9E1C290F684B4D07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_ACA2619E0214616B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEMIRACLECONFIG_METHOD_5_ACA2619E0214616B_OFFSET))(a1, a2);
		}
	};
}
