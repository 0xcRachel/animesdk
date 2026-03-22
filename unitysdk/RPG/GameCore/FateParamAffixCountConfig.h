#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_METHOD_5_72E10F9507F12639_OFFSET UNITYSDK_OFFSET(0x16A991D0)
#define RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_METHOD_5_BF3E32AC3CE08632_OFFSET UNITYSDK_OFFSET(0x16A99060)
#define RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A99130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamAffixCountConfig_TypeDefinitionIndex = 14983;

	class FateParamAffixCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BF3E32AC3CE08632(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamAffixCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamAffixCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_METHOD_5_BF3E32AC3CE08632_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_72E10F9507F12639(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamAffixCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamAffixCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_METHOD_5_72E10F9507F12639_OFFSET))(a1, a2);
		}
	};
}
