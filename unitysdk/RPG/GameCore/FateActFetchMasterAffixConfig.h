#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_5_4A4C84D761218867_OFFSET UNITYSDK_OFFSET(0x16A91D40)
#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_5_D54CB1668E2EAB7D_OFFSET UNITYSDK_OFFSET(0x16A91E70)
#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A91DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActFetchMasterAffixConfig_TypeDefinitionIndex = 17262;

	class FateActFetchMasterAffixConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4A4C84D761218867(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActFetchMasterAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActFetchMasterAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_5_4A4C84D761218867_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D54CB1668E2EAB7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActFetchMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActFetchMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_METHOD_5_D54CB1668E2EAB7D_OFFSET))(a1, a2);
		}
	};
}
