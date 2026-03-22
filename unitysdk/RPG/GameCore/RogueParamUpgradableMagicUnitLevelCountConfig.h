#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_5_4BE1AF09DCB0A691_OFFSET UNITYSDK_OFFSET(0x16EB5D60)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_5_AE1536CC6B766F0A_OFFSET UNITYSDK_OFFSET(0x16EB5BF0)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB5CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamUpgradableMagicUnitLevelCountConfig_TypeDefinitionIndex = 17684;

	class RogueParamUpgradableMagicUnitLevelCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AE1536CC6B766F0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_5_AE1536CC6B766F0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4BE1AF09DCB0A691(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicUnitLevelCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICUNITLEVELCOUNTCONFIG_METHOD_5_4BE1AF09DCB0A691_OFFSET))(a1, a2);
		}
	};
}
