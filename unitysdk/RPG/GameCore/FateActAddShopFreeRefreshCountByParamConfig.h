#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_5_3E1827558D244B58_OFFSET UNITYSDK_OFFSET(0x16A91700)
#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_5_BBFF682C289F8DAA_OFFSET UNITYSDK_OFFSET(0x16A91830)
#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A917B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddShopFreeRefreshCountByParamConfig_TypeDefinitionIndex = 17245;

	class FateActAddShopFreeRefreshCountByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3E1827558D244B58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_5_3E1827558D244B58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BBFF682C289F8DAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_METHOD_5_BBFF682C289F8DAA_OFFSET))(a1, a2);
		}
	};
}
