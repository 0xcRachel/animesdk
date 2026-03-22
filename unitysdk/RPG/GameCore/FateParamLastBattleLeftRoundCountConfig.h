#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_METHOD_5_52BF40E9E29411B0_OFFSET UNITYSDK_OFFSET(0x16A9A370)
#define RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_METHOD_5_E51EB31E95A365EB_OFFSET UNITYSDK_OFFSET(0x16A9A200)
#define RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamLastBattleLeftRoundCountConfig_TypeDefinitionIndex = 14980;

	class FateParamLastBattleLeftRoundCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E51EB31E95A365EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_METHOD_5_E51EB31E95A365EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_52BF40E9E29411B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_METHOD_5_52BF40E9E29411B0_OFFSET))(a1, a2);
		}
	};
}
