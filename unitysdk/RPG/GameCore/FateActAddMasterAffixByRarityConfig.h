#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_5_55594880FFE6DD20_OFFSET UNITYSDK_OFFSET(0x16A90F80)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_5_9B660DE0C5042FF2_OFFSET UNITYSDK_OFFSET(0x16A910B0)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A91030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByRarityConfig_TypeDefinitionIndex = 17253;

	class FateActAddMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_55594880FFE6DD20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_5_55594880FFE6DD20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9B660DE0C5042FF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_METHOD_5_9B660DE0C5042FF2_OFFSET))(a1, a2);
		}
	};
}
