#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_METHOD_5_7472277E0D5A839F_OFFSET UNITYSDK_OFFSET(0x16DF9570)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_METHOD_5_A8E46647E87A1443_OFFSET UNITYSDK_OFFSET(0x16DF93B0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF94B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeLineupMpConfig_TypeDefinitionIndex = 17575;

	class RogueActChangeLineupMpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A8E46647E87A1443(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupMpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupMpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_METHOD_5_A8E46647E87A1443_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7472277E0D5A839F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeLineupMpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeLineupMpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_METHOD_5_7472277E0D5A839F_OFFSET))(a1, a2);
		}
	};
}
