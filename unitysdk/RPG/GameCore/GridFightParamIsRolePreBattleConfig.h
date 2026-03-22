#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG_METHOD_5_A7FC145CD41F2D0C_OFFSET UNITYSDK_OFFSET(0x16B3B170)
#define RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG_METHOD_5_B40AF3B3CAD3AF41_OFFSET UNITYSDK_OFFSET(0x16B3B3A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3B2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamIsRolePreBattleConfig_TypeDefinitionIndex = 17480;

	class GridFightParamIsRolePreBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A7FC145CD41F2D0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsRolePreBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsRolePreBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG_METHOD_5_A7FC145CD41F2D0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B40AF3B3CAD3AF41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsRolePreBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsRolePreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG_METHOD_5_B40AF3B3CAD3AF41_OFFSET))(a1, a2);
		}
	};
}
