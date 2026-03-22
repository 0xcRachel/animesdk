#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_METHOD_5_2D067849A69B2D73_OFFSET UNITYSDK_OFFSET(0x16A92730)
#define RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_METHOD_5_F69E8E763C070751_OFFSET UNITYSDK_OFFSET(0x16A92600)
#define RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A926B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActReplaceMasterAffixByRarityConfig_TypeDefinitionIndex = 17256;

	class FateActReplaceMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F69E8E763C070751(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_METHOD_5_F69E8E763C070751_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2D067849A69B2D73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_METHOD_5_2D067849A69B2D73_OFFSET))(a1, a2);
		}
	};
}
