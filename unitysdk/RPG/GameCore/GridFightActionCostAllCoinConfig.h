#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG_METHOD_5_4C76003A6A9222A6_OFFSET UNITYSDK_OFFSET(0x16B18100)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG_METHOD_5_947B11522CEEDE4C_OFFSET UNITYSDK_OFFSET(0x16B18930)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B18080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCostAllCoinConfig_TypeDefinitionIndex = 17337;

	class GridFightActionCostAllCoinConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_947B11522CEEDE4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostAllCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostAllCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG_METHOD_5_947B11522CEEDE4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4C76003A6A9222A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostAllCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostAllCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLCOINCONFIG_METHOD_5_4C76003A6A9222A6_OFFSET))(a1, a2);
		}
	};
}
