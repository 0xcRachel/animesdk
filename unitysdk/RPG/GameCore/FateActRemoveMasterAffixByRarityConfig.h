#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_5_6355D5C40BAD5F3B_OFFSET UNITYSDK_OFFSET(0x16A92370)
#define RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_5_F9D5C9E44A15A9D9_OFFSET UNITYSDK_OFFSET(0x16A92240)
#define RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A922F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActRemoveMasterAffixByRarityConfig_TypeDefinitionIndex = 17254;

	class FateActRemoveMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F9D5C9E44A15A9D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_5_F9D5C9E44A15A9D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6355D5C40BAD5F3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEMASTERAFFIXBYRARITYCONFIG_METHOD_5_6355D5C40BAD5F3B_OFFSET))(a1, a2);
		}
	};
}
