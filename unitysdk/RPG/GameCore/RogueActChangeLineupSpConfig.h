#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_METHOD_5_E222BD7ECCCFF685_OFFSET UNITYSDK_OFFSET(0x16DF9740)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_METHOD_5_FB4497980DA3CE71_OFFSET UNITYSDK_OFFSET(0x16DF9580)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF9680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeLineupSpConfig_TypeDefinitionIndex = 17574;

	class RogueActChangeLineupSpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FB4497980DA3CE71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupSpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupSpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_METHOD_5_FB4497980DA3CE71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E222BD7ECCCFF685(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupSpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupSpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_METHOD_5_E222BD7ECCCFF685_OFFSET))(a1, a2);
		}
	};
}
