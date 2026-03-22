#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_METHOD_5_E59215D4E7A0CD9F_OFFSET UNITYSDK_OFFSET(0x16B18730)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_METHOD_5_F57C9CFA92272855_OFFSET UNITYSDK_OFFSET(0x16B190C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B186B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSubBuyExpCostConfig_TypeDefinitionIndex = 17322;

	class GridFightActionSubBuyExpCostConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F57C9CFA92272855(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_METHOD_5_F57C9CFA92272855_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E59215D4E7A0CD9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_METHOD_5_E59215D4E7A0CD9F_OFFSET))(a1, a2);
		}
	};
}
