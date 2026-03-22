#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_5_99AE062F9D4320EF_OFFSET UNITYSDK_OFFSET(0x16B18220)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_5_FC369C36EF086CA5_OFFSET UNITYSDK_OFFSET(0x16B18A90)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B181A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCostCoinConfig_TypeDefinitionIndex = 17338;

	class GridFightActionCostCoinConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FC369C36EF086CA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_5_FC369C36EF086CA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_99AE062F9D4320EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_METHOD_5_99AE062F9D4320EF_OFFSET))(a1, a2);
		}
	};
}
