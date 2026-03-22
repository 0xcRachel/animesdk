#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_METHOD_5_6FE9A424FF29CF9E_OFFSET UNITYSDK_OFFSET(0x16B16990)
#define RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_METHOD_5_DDFE705ADA5BC144_OFFSET UNITYSDK_OFFSET(0x16B16AC0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B16A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionChangeRefreshShopCostCoinConfig_TypeDefinitionIndex = 17326;

	class GridFightActionChangeRefreshShopCostCoinConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6FE9A424FF29CF9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_METHOD_5_6FE9A424FF29CF9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DDFE705ADA5BC144(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_METHOD_5_DDFE705ADA5BC144_OFFSET))(a1, a2);
		}
	};
}
