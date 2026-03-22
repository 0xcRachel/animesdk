#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_5_69F2E930CCC4D753_OFFSET UNITYSDK_OFFSET(0x16DFB9C0)
#define RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_5_AE499A89D2EEE9AF_OFFSET UNITYSDK_OFFSET(0x16DFBB80)
#define RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFBAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetDestroyedRogueMiracleConfig_TypeDefinitionIndex = 17560;

	class RogueActGetDestroyedRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_69F2E930CCC4D753(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_5_69F2E930CCC4D753_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AE499A89D2EEE9AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetDestroyedRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETDESTROYEDROGUEMIRACLECONFIG_METHOD_5_AE499A89D2EEE9AF_OFFSET))(a1, a2);
		}
	};
}
