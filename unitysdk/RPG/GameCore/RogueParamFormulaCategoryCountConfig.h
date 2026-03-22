#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG_METHOD_5_5C2211641256DD21_OFFSET UNITYSDK_OFFSET(0x16EB37E0)
#define RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG_METHOD_5_CAF641E9DF0534DA_OFFSET UNITYSDK_OFFSET(0x16EB3670)
#define RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB3740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamFormulaCategoryCountConfig_TypeDefinitionIndex = 17681;

	class RogueParamFormulaCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_CAF641E9DF0534DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamFormulaCategoryCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamFormulaCategoryCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG_METHOD_5_CAF641E9DF0534DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5C2211641256DD21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG_METHOD_5_5C2211641256DD21_OFFSET))(a1, a2);
		}
	};
}
