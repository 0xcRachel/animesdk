#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_METHOD_5_28135CCAA476D2D9_OFFSET UNITYSDK_OFFSET(0x16B3A620)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_METHOD_5_C7E3FB37D9BC2DE4_OFFSET UNITYSDK_OFFSET(0x16B3A3F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3A530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleNumPreBattleConfig_TypeDefinitionIndex = 17482;

	class GridFightParamGetRoleNumPreBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C7E3FB37D9BC2DE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_METHOD_5_C7E3FB37D9BC2DE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_28135CCAA476D2D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_METHOD_5_28135CCAA476D2D9_OFFSET))(a1, a2);
		}
	};
}
