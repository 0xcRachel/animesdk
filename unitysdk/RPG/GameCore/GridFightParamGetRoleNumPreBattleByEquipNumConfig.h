#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_METHOD_5_0637A0A970500D3D_OFFSET UNITYSDK_OFFSET(0x16B3A1B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_METHOD_5_146F1B7E808C6CB0_OFFSET UNITYSDK_OFFSET(0x16B3A3E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3A2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleNumPreBattleByEquipNumConfig_TypeDefinitionIndex = 17486;

	class GridFightParamGetRoleNumPreBattleByEquipNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0637A0A970500D3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_METHOD_5_0637A0A970500D3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_146F1B7E808C6CB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_METHOD_5_146F1B7E808C6CB0_OFFSET))(a1, a2);
		}
	};
}
