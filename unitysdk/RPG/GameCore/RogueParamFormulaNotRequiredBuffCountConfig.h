#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_METHOD_5_2B361914B0AFCF2F_OFFSET UNITYSDK_OFFSET(0x16EB37F0)
#define RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_METHOD_5_86BD91EA5608742C_OFFSET UNITYSDK_OFFSET(0x16EB3960)
#define RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB38C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamFormulaNotRequiredBuffCountConfig_TypeDefinitionIndex = 17682;

	class RogueParamFormulaNotRequiredBuffCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_2B361914B0AFCF2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_METHOD_5_2B361914B0AFCF2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_86BD91EA5608742C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_METHOD_5_86BD91EA5608742C_OFFSET))(a1, a2);
		}
	};
}
