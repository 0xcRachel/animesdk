#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_5_B1C04F68F227A5C1_OFFSET UNITYSDK_OFFSET(0x16A916F0)
#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_5_C627ED91313BD543_OFFSET UNITYSDK_OFFSET(0x16A915C0)
#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A91670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddShopBonusGoodsConfig_TypeDefinitionIndex = 17261;

	class FateActAddShopBonusGoodsConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C627ED91313BD543(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_5_C627ED91313BD543_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B1C04F68F227A5C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddShopBonusGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_METHOD_5_B1C04F68F227A5C1_OFFSET))(a1, a2);
		}
	};
}
