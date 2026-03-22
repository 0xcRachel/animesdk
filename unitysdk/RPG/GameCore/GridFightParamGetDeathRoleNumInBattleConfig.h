#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_METHOD_5_4B313203FBC8873D_OFFSET UNITYSDK_OFFSET(0x16B37260)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_METHOD_5_70BB1C22CB17E760_OFFSET UNITYSDK_OFFSET(0x16B37030)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B37170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetDeathRoleNumInBattleConfig_TypeDefinitionIndex = 17491;

	class GridFightParamGetDeathRoleNumInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_70BB1C22CB17E760(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_METHOD_5_70BB1C22CB17E760_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4B313203FBC8873D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_METHOD_5_4B313203FBC8873D_OFFSET))(a1, a2);
		}
	};
}
