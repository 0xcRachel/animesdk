#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_5_194E058CF5EF5FCC_OFFSET UNITYSDK_OFFSET(0x16EB32D0)
#define RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_5_DC38D7D39DB095DF_OFFSET UNITYSDK_OFFSET(0x16EB3440)
#define RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB33A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamActiveFormulaCategoryCountConfig_TypeDefinitionIndex = 17679;

	class RogueParamActiveFormulaCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_194E058CF5EF5FCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_5_194E058CF5EF5FCC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DC38D7D39DB095DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_5_DC38D7D39DB095DF_OFFSET))(a1, a2);
		}
	};
}
