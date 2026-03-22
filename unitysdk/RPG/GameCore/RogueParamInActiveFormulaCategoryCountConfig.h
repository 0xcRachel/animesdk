#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_5_B90F9A7FBFE9F5F8_OFFSET UNITYSDK_OFFSET(0x16EB3AE0)
#define RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_5_DA0209B068C19E13_OFFSET UNITYSDK_OFFSET(0x16EB3970)
#define RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB3A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamInActiveFormulaCategoryCountConfig_TypeDefinitionIndex = 17680;

	class RogueParamInActiveFormulaCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DA0209B068C19E13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_5_DA0209B068C19E13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B90F9A7FBFE9F5F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_5_B90F9A7FBFE9F5F8_OFFSET))(a1, a2);
		}
	};
}
