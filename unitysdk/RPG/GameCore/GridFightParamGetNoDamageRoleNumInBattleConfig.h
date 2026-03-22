#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_METHOD_5_2776F103063198E3_OFFSET UNITYSDK_OFFSET(0x16B38D60)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_METHOD_5_E9DEAEAB42B619D6_OFFSET UNITYSDK_OFFSET(0x16B38B30)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B38C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetNoDamageRoleNumInBattleConfig_TypeDefinitionIndex = 17492;

	class GridFightParamGetNoDamageRoleNumInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E9DEAEAB42B619D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_METHOD_5_E9DEAEAB42B619D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2776F103063198E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_METHOD_5_2776F103063198E3_OFFSET))(a1, a2);
		}
	};
}
